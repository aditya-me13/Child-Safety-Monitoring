/*
 * receiving_app2.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "receiving_app2".
 *
 * Model version              : 1.10
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Sun Apr  7 22:27:10 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_receiving_app2_h_
#define RTW_HEADER_receiving_app2_h_
#ifndef receiving_app2_COMMON_INCLUDES_
#define receiving_app2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_android_audioplayback.h"
#include "MW_TCPSendReceive.h"
#include "driver_android_tcp_log.h"
#include "driver_android_datadisplay.h"
#endif                                 /* receiving_app2_COMMON_INCLUDES_ */

#include "receiving_app2_types.h"
#include "rtGetInf.h"
#include <stddef.h>
#include <string.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T b_data[300];
  int16_T outData[600];
  char_T str_data[10];
  char_T b_str_data[10];
  uint8_T b_x[8];
} B_receiving_app2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_internal_androidA_T obj; /* '<S1>/Audio Playback' */
  codertarget_internal_androidT_T obj_j;/* '<Root>/TCP//IP Receive2' */
  codertarget_internal_androidT_T obj_n;/* '<Root>/TCP//IP Receive1' */
  codertarget_internal_androidT_T obj_p;/* '<Root>/TCP//IP Receive' */
  codertarget_internal_androidD_T obj_h;/* '<S5>/DataDisplay' */
  codertarget_internal_androidD_T obj_e;/* '<S4>/DataDisplay' */
  codertarget_internal_androidD_T obj_f;/* '<S3>/DataDisplay' */
  boolean_T objisempty;                /* '<S5>/DataDisplay' */
  boolean_T objisempty_i;              /* '<S4>/DataDisplay' */
  boolean_T objisempty_b;              /* '<S3>/DataDisplay' */
  boolean_T objisempty_bp;             /* '<Root>/TCP//IP Receive2' */
  boolean_T objisempty_bd;             /* '<Root>/TCP//IP Receive1' */
  boolean_T objisempty_n;              /* '<Root>/TCP//IP Receive' */
  boolean_T objisempty_f;              /* '<S1>/Audio Playback' */
} DW_receiving_app2_T;

/* Parameters (default storage) */
struct P_receiving_app2_T_ {
  real_T AudioPlayback_SampleFreq;     /* Expression: SampleFreq
                                        * Referenced by: '<S1>/Audio Playback'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_receiving_app2_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_receiving_app2_T receiving_app2_P;

/* Block signals (default storage) */
extern B_receiving_app2_T receiving_app2_B;

/* Block states (default storage) */
extern DW_receiving_app2_T receiving_app2_DW;

/* Model entry point functions */
extern void receiving_app2_initialize(void);
extern void receiving_app2_step(void);
extern void receiving_app2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_receiving_app2_T *const receiving_app2_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'receiving_app2'
 * '<S1>'   : 'receiving_app2/Audio Playback'
 * '<S2>'   : 'receiving_app2/MATLAB Function'
 * '<S3>'   : 'receiving_app2/latitude'
 * '<S4>'   : 'receiving_app2/longitude'
 * '<S5>'   : 'receiving_app2/status'
 */
#endif                                 /* RTW_HEADER_receiving_app2_h_ */
