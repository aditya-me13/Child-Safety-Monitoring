#include <stdio.h>
#include <stdlib.h>
#include "receiving_app2.h"
#include "receiving_app2_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "androidinitialize.h"
#define UNUSED(x)                      x = x
#define NAMELEN                        16

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
void *threadJoinStatus;
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(receiving_app2_M) == (NULL));
  while (runModel) {
    MW_sem_wait(&baserateTaskSem);
    receiving_app2_step();

    /* Get model outputs here */
    stopRequested = !((rtmGetErrorStatus(receiving_app2_M) == (NULL)));
  }

  runModel = 0;
  terminateTask(arg);
  MW_pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(receiving_app2_M, "stopping the model");
  runModel = 0;
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  my_android_terminate();

  /* Terminate model */
  receiving_app2_terminate();
  MW_sem_post(&stopSem);
  return NULL;
}

jint JNICALL naMain(JNIEnv *pEnv, jobject pObj, jobjectArray pArgv, jobject
                    pMainActivity)
{
  int argc = 4;
  char *argv[4] = { "receiving_app2", "-w", "-port", "17725" };

  my_android_init(pEnv, pObj, pArgv, pMainActivity);
  rtmSetErrorStatus(receiving_app2_M, 0);

  /* Initialize model */
  receiving_app2_initialize();

  /* Call RTOS Initialization function */
  myRTOSInit(0.0125, 0);

  /* Wait for stop semaphore */
  MW_sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(MW_sem_destroy(&timerTaskSem[i]), 0, "MW_sem_destroy");
    }
  }

#endif

  return 0;
}
