/*
 * sending_app1.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "sending_app1".
 *
 * Model version              : 1.29
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Sun Apr  7 22:21:16 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_sending_app1_h_
#define RTW_HEADER_sending_app1_h_
#ifndef sending_app1_COMMON_INCLUDES_
#define sending_app1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_android_datadisplay.h"
#include "driver_android_accelerometer.h"
#include "driver_android_audiocapture.h"
#include "driver_android_audiofileread.h"
#include "driver_android_audioplayback.h"
#include "driver_android_button.h"
#include "driver_android_location.h"
#include "MW_TCPSendReceive.h"
#include "driver_android_tcp_log.h"
#endif                                 /* sending_app1_COMMON_INCLUDES_ */

#include "sending_app1_types.h"
#include "rtGetInf.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T outputMFCache[303];
  real_T DataTypeConversion2[300];     /* '<Root>/Data Type Conversion2' */
  int16_T ui[600];
  int16_T refData[600];
  int16_T MATLABSystem[600];           /* '<S3>/MATLAB System' */
  real_T aggregatedOutputs[101];       /* '<S6>/Evaluate Rule Consequents' */
  real_T dv[101];
  real_T dv1[101];
  real_T dv2[101];
  real_T antecedentOutputs[12];        /* '<S6>/Evaluate Rule Antecedents' */
  real_T inputMFCache[7];
  real_T out[3];
  real_T dv3[3];
  real32_T out_m[3];
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T y_l;                          /* '<Root>/audio_range_edit' */
  real_T y;                            /* '<Root>/danger number to level ' */
  real_T y_k;                          /* '<Root>/VolumeMultiplier' */
  real_T rtb_InputConversion_idx_0;
  real_T rtb_InputConversion_idx_1;
  real_T a;
  real_T b;
  real_T c;
  real_T x;
  uint8_T b_x[8];
  uint8_T b_x_c[8];
  uint8_T b_x_k[8];
  char_T str_data[7];
  boolean_T Button;                    /* '<S7>/Button' */
} B_sending_app1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_internal_andro_eu_T obj; /* '<S4>/Audio Playback' */
  codertarget_internal_andr_euh_T obj_b;/* '<Root>/Audio File Read' */
  codertarget_internal_androidT_T obj_g;/* '<Root>/TCP//IP Send2' */
  codertarget_internal_androidT_T obj_n;/* '<Root>/TCP//IP Send1' */
  codertarget_internal_androidT_T obj_no;/* '<Root>/TCP//IP Send' */
  codertarget_internal_androidA_T obj_o;/* '<S2>/Accelerometer' */
  codertarget_internal_androi_e_T obj_a;/* '<S3>/MATLAB System' */
  codertarget_internal_androidL_T obj_g1;/* '<S8>/Location Sensor' */
  real_T flag;                         /* '<Root>/danger number to level ' */
  codertarget_internal_androidD_T obj_m;/* '<S18>/DataDisplay' */
  codertarget_internal_androidD_T obj_l;/* '<S17>/DataDisplay' */
  codertarget_internal_androidD_T obj_bw;/* '<S16>/DataDisplay' */
  codertarget_internal_androidD_T obj_d;/* '<S14>/DataDisplay' */
  codertarget_internal_androidD_T obj_e;/* '<S11>/DataDisplay' */
  codertarget_internal_androidD_T obj_f;/* '<S1>/DataDisplay' */
  codertarget_internal_androidB_T obj_nf;/* '<S7>/Button' */
  codertarget_internal_androidB_T obj_h;/* '<S5>/Button' */
  boolean_T Delay_DSTATE[240];         /* '<Root>/Delay' */
  boolean_T objisempty;                /* '<S18>/DataDisplay' */
  boolean_T objisempty_j;              /* '<S17>/DataDisplay' */
  boolean_T objisempty_n;              /* '<S16>/DataDisplay' */
  boolean_T objisempty_ny;             /* '<S14>/DataDisplay' */
  boolean_T objisempty_b;              /* '<S11>/DataDisplay' */
  boolean_T objisempty_c;              /* '<Root>/TCP//IP Send2' */
  boolean_T objisempty_e;              /* '<Root>/TCP//IP Send1' */
  boolean_T objisempty_bi;             /* '<Root>/TCP//IP Send' */
  boolean_T objisempty_k;              /* '<S8>/Location Sensor' */
  boolean_T objisempty_i;              /* '<S7>/Button' */
  boolean_T objisempty_p;              /* '<S5>/Button' */
  boolean_T objisempty_jj;             /* '<S4>/Audio Playback' */
  boolean_T objisempty_eq;             /* '<Root>/Audio File Read' */
  boolean_T objisempty_f;              /* '<S3>/MATLAB System' */
  boolean_T objisempty_d;              /* '<S2>/Accelerometer' */
  boolean_T objisempty_nd;             /* '<S1>/DataDisplay' */
} DW_sending_app1_T;

/* Parameters (default storage) */
struct P_sending_app1_T_ {
  real_T AudioPlayback_SampleFreq;     /* Expression: SampleFreq
                                        * Referenced by: '<S4>/Audio Playback'
                                        */
  real_T OutputSamplePoints_Value[101];/* Expression: fis.outputSamplePoints
                                        * Referenced by: '<S6>/Output Sample Points'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<Root>/Switch2'
                                        */
  boolean_T Delay_InitialCondition;/* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<Root>/Delay'
                                    */
};

/* Real-time Model Data Structure */
struct tag_RTM_sending_app1_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_sending_app1_T sending_app1_P;

/* Block signals (default storage) */
extern B_sending_app1_T sending_app1_B;

/* Block states (default storage) */
extern DW_sending_app1_T sending_app1_DW;

/* Model entry point functions */
extern void sending_app1_initialize(void);
extern void sending_app1_step(void);
extern void sending_app1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_sending_app1_T *const sending_app1_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion5' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'sending_app1'
 * '<S1>'   : 'sending_app1/Acceleration'
 * '<S2>'   : 'sending_app1/Accelerometer'
 * '<S3>'   : 'sending_app1/Audio Capture'
 * '<S4>'   : 'sending_app1/Audio Playback'
 * '<S5>'   : 'sending_app1/Dont ring'
 * '<S6>'   : 'sending_app1/Fuzzy Logic  Controller1'
 * '<S7>'   : 'sending_app1/I am Fine! (for now)'
 * '<S8>'   : 'sending_app1/Location Sensor'
 * '<S9>'   : 'sending_app1/MATLAB Function'
 * '<S10>'  : 'sending_app1/VolumeMultiplier'
 * '<S11>'  : 'sending_app1/X'
 * '<S12>'  : 'sending_app1/audio_breaker'
 * '<S13>'  : 'sending_app1/audio_range_edit'
 * '<S14>'  : 'sending_app1/danger'
 * '<S15>'  : 'sending_app1/danger number to level '
 * '<S16>'  : 'sending_app1/sound'
 * '<S17>'  : 'sending_app1/y'
 * '<S18>'  : 'sending_app1/z'
 * '<S19>'  : 'sending_app1/Fuzzy Logic  Controller1/Defuzzify Outputs'
 * '<S20>'  : 'sending_app1/Fuzzy Logic  Controller1/Evaluate Rule Antecedents'
 * '<S21>'  : 'sending_app1/Fuzzy Logic  Controller1/Evaluate Rule Consequents'
 */
#endif                                 /* RTW_HEADER_sending_app1_h_ */
