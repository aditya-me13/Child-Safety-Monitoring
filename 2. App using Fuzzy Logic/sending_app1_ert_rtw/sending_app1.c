/*
 * sending_app1.c
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

#include "sending_app1.h"
#include "rtwtypes.h"
#include "sending_app1_types.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include "sending_app1_private.h"
#include <stddef.h>

/* Block signals (default storage) */
B_sending_app1_T sending_app1_B;

/* Block states (default storage) */
DW_sending_app1_T sending_app1_DW;

/* Real-time model */
static RT_MODEL_sending_app1_T sending_app1_M_;
RT_MODEL_sending_app1_T *const sending_app1_M = &sending_app1_M_;

/* Forward declaration for local functions */
static void sending_app1_SystemCore_setup(codertarget_internal_androidT_T *obj);
static void sending_app1_SystemCore_setup_e(codertarget_internal_androidT_T *obj);
static void sending_app_SystemCore_setup_eu(codertarget_internal_androidT_T *obj);
static real_T sending_app1_trimf(real_T x, const real_T params[3]);
static void sending_app1_trimf_d(const real_T x[101], const real_T params[3],
  real_T y[101]);
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (sending_app1_M->Timing.TaskCounters.TID[1])++;
  if ((sending_app1_M->Timing.TaskCounters.TID[1]) > 7) {/* Sample time: [0.1s, 0.0s] */
    sending_app1_M->Timing.TaskCounters.TID[1] = 0;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void sending_app1_SystemCore_setup(codertarget_internal_androidT_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[7];
  char_T ipaddr[7];
  static const char_T tmp_1[7] = "Server";
  int32_T str_size_idx_1;
  obj->isInitialized = 1;
  errorNo = obj->errorNo_;
  obj->isServer_ = 1.0;
  for (i = 0; i < 7; i++) {
    ipaddr[i] = tmp_1[i];
  }

  tmp = rt_roundd_snf(obj->isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamSetup(25000, 0, &obj->connStream_, tmp_0, 0.0, &obj->errorNo_,
                 &ipaddr[0]);
  littleEndianCheck(&obj->isLittleEnd_);
  if ((errorNo != obj->errorNo_) && (obj->errorNo_ > 0) && (obj->errorNo_ < 10))
  {
    str_size_idx_1 = 1;
    ipaddr[0] = '\x00';
    if (obj->errorNo_ == 4) {
      UPDATE_TCP_LOGI(obj->errorNo_, 1.0, 0, 25000);
    } else {
      if (obj->errorNo_ == 5) {
        str_size_idx_1 = 7;
        for (i = 0; i < 7; i++) {
          ipaddr[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &ipaddr[0], (uint32_T)str_size_idx_1 * sizeof
             (char_T));
      UPDATE_TCP_LOGS(obj->errorNo_, 1.0, 0, &b_str_data[0]);
    }
  }
}

static void sending_app1_SystemCore_setup_e(codertarget_internal_androidT_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[7];
  char_T ipaddr[7];
  static const char_T tmp_1[7] = "Server";
  int32_T str_size_idx_1;
  obj->isInitialized = 1;
  errorNo = obj->errorNo_;
  obj->isServer_ = 1.0;
  for (i = 0; i < 7; i++) {
    ipaddr[i] = tmp_1[i];
  }

  tmp = rt_roundd_snf(obj->isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamSetup(30000, 0, &obj->connStream_, tmp_0, 0.0, &obj->errorNo_,
                 &ipaddr[0]);
  littleEndianCheck(&obj->isLittleEnd_);
  if ((errorNo != obj->errorNo_) && (obj->errorNo_ > 0) && (obj->errorNo_ < 10))
  {
    str_size_idx_1 = 1;
    ipaddr[0] = '\x00';
    if (obj->errorNo_ == 4) {
      UPDATE_TCP_LOGI(obj->errorNo_, 2.0, 0, 25000);
    } else {
      if (obj->errorNo_ == 5) {
        str_size_idx_1 = 7;
        for (i = 0; i < 7; i++) {
          ipaddr[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &ipaddr[0], (uint32_T)str_size_idx_1 * sizeof
             (char_T));
      UPDATE_TCP_LOGS(obj->errorNo_, 2.0, 0, &b_str_data[0]);
    }
  }
}

static void sending_app_SystemCore_setup_eu(codertarget_internal_androidT_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[7];
  char_T ipaddr[7];
  static const char_T tmp_1[7] = "Server";
  int32_T str_size_idx_1;
  obj->isInitialized = 1;
  errorNo = obj->errorNo_;
  obj->isServer_ = 1.0;
  for (i = 0; i < 7; i++) {
    ipaddr[i] = tmp_1[i];
  }

  tmp = rt_roundd_snf(obj->isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamSetup(35000, 0, &obj->connStream_, tmp_0, 0.0, &obj->errorNo_,
                 &ipaddr[0]);
  littleEndianCheck(&obj->isLittleEnd_);
  if ((errorNo != obj->errorNo_) && (obj->errorNo_ > 0) && (obj->errorNo_ < 10))
  {
    str_size_idx_1 = 1;
    ipaddr[0] = '\x00';
    if (obj->errorNo_ == 4) {
      UPDATE_TCP_LOGI(obj->errorNo_, 3.0, 0, 25000);
    } else {
      if (obj->errorNo_ == 5) {
        str_size_idx_1 = 7;
        for (i = 0; i < 7; i++) {
          ipaddr[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &ipaddr[0], (uint32_T)str_size_idx_1 * sizeof
             (char_T));
      UPDATE_TCP_LOGS(obj->errorNo_, 3.0, 0, &b_str_data[0]);
    }
  }
}

/* Function for MATLAB Function: '<S6>/Evaluate Rule Antecedents' */
static real_T sending_app1_trimf(real_T x, const real_T params[3])
{
  real_T y;
  y = 0.0;
  if ((params[0] != params[1]) && (params[0] < x) && (x < params[1])) {
    y = 1.0 / (params[1] - params[0]) * (x - params[0]);
  }

  if ((params[1] != params[2]) && (params[1] < x) && (x < params[2])) {
    y = 1.0 / (params[2] - params[1]) * (params[2] - x);
  }

  if (x == params[1]) {
    y = 1.0;
  }

  return y;
}

/* Function for MATLAB Function: '<S6>/Evaluate Rule Consequents' */
static void sending_app1_trimf_d(const real_T x[101], const real_T params[3],
  real_T y[101])
{
  int32_T i;
  sending_app1_B.a = params[0];
  sending_app1_B.b = params[1];
  sending_app1_B.c = params[2];
  for (i = 0; i < 101; i++) {
    sending_app1_B.x = x[i];
    y[i] = 0.0;
    if ((sending_app1_B.a != sending_app1_B.b) && (sending_app1_B.a <
         sending_app1_B.x) && (sending_app1_B.x < sending_app1_B.b)) {
      y[i] = 1.0 / (sending_app1_B.b - sending_app1_B.a) * (sending_app1_B.x -
        sending_app1_B.a);
    }

    if ((sending_app1_B.b != sending_app1_B.c) && (sending_app1_B.b <
         sending_app1_B.x) && (sending_app1_B.x < sending_app1_B.c)) {
      y[i] = 1.0 / (sending_app1_B.c - sending_app1_B.b) * (sending_app1_B.c -
        sending_app1_B.x);
    }

    if (sending_app1_B.x == sending_app1_B.b) {
      y[i] = 1.0;
    }
  }
}

/* Model step function */
void sending_app1_step(void)
{
  int32_T i;
  int32_T rtb_MATLABSystem_tmp;
  int32_T ui_tmp;
  real32_T b_a;
  real32_T c_a;
  real32_T rtb_Accelerometer_o1;
  real32_T rtb_Accelerometer_o2;
  real32_T rtb_Accelerometer_o3;
  real32_T rtb_a;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[7];
  char_T b_FormatStringTerminated[5];
  char_T b_FormatStringTerminated_0[5];
  uint8_T xtmp;
  boolean_T rtb_NOT;
  boolean_T tmp;
  static const char_T tmp_1[7] = "Server";
  static const int8_T d[12] = { 1, 1, 2, 1, 2, 2, 2, 3, 3, 3, 3, 3 };

  static const real_T d_0[3] = { 0.583333333333333, 1.0, 1.41666666666667 };

  static const real_T c[3] = { 0.0833333333333333, 0.5, 0.916666666666667 };

  static const int8_T f[24] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 4, 4, 1, 1, 1, 2,
    2, 2, 3, 3, 3, 1, 2, 3 };

  static const real_T e[3] = { 0.0, 0.0, 0.001 };

  static const real_T b[3] = { 0.0007, 0.005, 0.4167 };

  /* MATLABSystem: '<S3>/MATLAB System' */
  AUDIO_CAPTURE(&sending_app1_B.refData[0], 300);
  for (i = 0; i < 300; i++) {
    rtb_MATLABSystem_tmp = i << 1;
    sending_app1_B.MATLABSystem[i] = sending_app1_B.refData[rtb_MATLABSystem_tmp];
    sending_app1_B.MATLABSystem[i + 300] =
      sending_app1_B.refData[rtb_MATLABSystem_tmp + 1];
  }

  /* End of MATLABSystem: '<S3>/MATLAB System' */

  /* MATLABSystem: '<Root>/Audio File Read' */
  memset(&sending_app1_B.refData[0], 0, 600U * sizeof(int16_T));
  i = sending_app1_DW.obj_b.Idx;
  if (sending_app1_DW.obj_b.Idx < 0) {
    i = 0;
  }

  READ_AUDIOFILE_DATA(300U, 2U, &sending_app1_B.refData[0], (uint32_T)i);

  /* MATLAB Function: '<Root>/audio_range_edit' incorporates:
   *  MATLABSystem: '<S3>/MATLAB System'
   */
  for (rtb_MATLABSystem_tmp = 0; rtb_MATLABSystem_tmp < 600;
       rtb_MATLABSystem_tmp++) {
    errorNo = sending_app1_B.MATLABSystem[rtb_MATLABSystem_tmp];
    if (errorNo < 0) {
      i = -errorNo;
      if (-errorNo > 32767) {
        i = 32767;
      }

      sending_app1_B.ui[rtb_MATLABSystem_tmp] = (int16_T)i;
    } else {
      sending_app1_B.ui[rtb_MATLABSystem_tmp] = errorNo;
    }
  }

  for (i = 0; i < 300; i++) {
    sending_app1_B.DataTypeConversion2[i] = ((real_T)sending_app1_B.ui[i + 300]
      + (real_T)sending_app1_B.ui[i]) / 2.0;
  }

  sending_app1_B.y_l = sending_app1_B.DataTypeConversion2[0];
  for (i = 0; i < 299; i++) {
    sending_app1_B.y_l += sending_app1_B.DataTypeConversion2[i + 1];
  }

  sending_app1_B.y_l = sending_app1_B.y_l / 300.0 / 20000.0;

  /* End of MATLAB Function: '<Root>/audio_range_edit' */
  if (sending_app1_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLABSystem: '<S2>/Accelerometer' */
    sending_app1_B.out_m[0] = 0.0F;
    sending_app1_B.out_m[1] = 0.0F;
    sending_app1_B.out_m[2] = 0.0F;
    GET_ACCELEROMETER_DATA(&sending_app1_B.out_m[0], &sending_app1_B.out_m[1],
      &sending_app1_B.out_m[2]);
    rtb_Accelerometer_o1 = sending_app1_B.out_m[0];
    rtb_Accelerometer_o2 = sending_app1_B.out_m[1];
    rtb_Accelerometer_o3 = sending_app1_B.out_m[2];

    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  MATLABSystem: '<S2>/Accelerometer'
     */
    rtb_a = sending_app1_B.out_m[0] / 60.0F;
    b_a = sending_app1_B.out_m[1] / 80.0F;
    c_a = sending_app1_B.out_m[2] / 80.0F;
    rtb_a = (real32_T)sqrt((rtb_a * rtb_a + b_a * b_a) + c_a * c_a);

    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    sending_app1_B.DataTypeConversion = rtb_a;
  }

  /* Outputs for Atomic SubSystem: '<Root>/Fuzzy Logic  Controller1' */
  /* MATLAB Function: '<S6>/Evaluate Rule Antecedents' incorporates:
   *  DataTypeConversion: '<S6>/InputConversion'
   */
  sending_app1_B.y = 0.0;
  sending_app1_B.inputMFCache[0] = sending_app1_trimf(sending_app1_B.y_l, b);
  sending_app1_B.inputMFCache[1] = sending_app1_trimf(sending_app1_B.y_l, c);
  sending_app1_B.inputMFCache[2] = sending_app1_trimf(sending_app1_B.y_l, d_0);
  sending_app1_B.inputMFCache[3] = sending_app1_trimf(sending_app1_B.y_l, e);
  sending_app1_B.dv3[0] = -0.416666666666667;
  sending_app1_B.dv3[1] = 0.0;
  sending_app1_B.dv3[2] = 0.416666666666667;
  sending_app1_B.inputMFCache[4] = sending_app1_trimf
    (sending_app1_B.DataTypeConversion, sending_app1_B.dv3);
  sending_app1_B.inputMFCache[5] = sending_app1_trimf
    (sending_app1_B.DataTypeConversion, c);
  sending_app1_B.inputMFCache[6] = sending_app1_trimf
    (sending_app1_B.DataTypeConversion, d_0);
  for (i = 0; i < 12; i++) {
    sending_app1_B.rtb_InputConversion_idx_1 = sending_app1_B.inputMFCache[f[i]
      - 1];
    if (sending_app1_B.rtb_InputConversion_idx_1 < 1.0) {
      sending_app1_B.y_k = sending_app1_B.rtb_InputConversion_idx_1;
    } else {
      sending_app1_B.y_k = 1.0;
    }

    sending_app1_B.rtb_InputConversion_idx_1 = sending_app1_B.inputMFCache[f[i +
      12] + 3];
    if ((sending_app1_B.y_k > sending_app1_B.rtb_InputConversion_idx_1) ||
        (rtIsNaN(sending_app1_B.y_k) && (!rtIsNaN
          (sending_app1_B.rtb_InputConversion_idx_1)))) {
      sending_app1_B.y_k = sending_app1_B.rtb_InputConversion_idx_1;
    }

    sending_app1_B.y += sending_app1_B.y_k;
    sending_app1_B.antecedentOutputs[i] = sending_app1_B.y_k;
  }

  /* MATLAB Function: '<S6>/Evaluate Rule Consequents' incorporates:
   *  Constant: '<S6>/Output Sample Points'
   */
  sending_app1_B.dv3[0] = -0.416666666666667;
  sending_app1_B.dv3[1] = 0.0;
  sending_app1_B.dv3[2] = 0.416666666666667;
  sending_app1_trimf_d(sending_app1_P.OutputSamplePoints_Value,
                       sending_app1_B.dv3, sending_app1_B.dv);
  sending_app1_trimf_d(sending_app1_P.OutputSamplePoints_Value, c,
                       sending_app1_B.dv1);
  sending_app1_trimf_d(sending_app1_P.OutputSamplePoints_Value, d_0,
                       sending_app1_B.dv2);
  for (i = 0; i < 101; i++) {
    sending_app1_B.aggregatedOutputs[i] = 0.0;
    sending_app1_B.outputMFCache[3 * i] = sending_app1_B.dv[i];
    sending_app1_B.outputMFCache[3 * i + 1] = sending_app1_B.dv1[i];
    sending_app1_B.outputMFCache[3 * i + 2] = sending_app1_B.dv2[i];
  }

  for (i = 0; i < 12; i++) {
    sending_app1_B.rtb_InputConversion_idx_1 =
      sending_app1_B.antecedentOutputs[i];
    for (rtb_MATLABSystem_tmp = 0; rtb_MATLABSystem_tmp < 101;
         rtb_MATLABSystem_tmp++) {
      sending_app1_B.y_k = sending_app1_B.aggregatedOutputs[rtb_MATLABSystem_tmp];
      sending_app1_B.rtb_InputConversion_idx_0 = sending_app1_B.outputMFCache[(3
        * rtb_MATLABSystem_tmp + d[i]) - 1];
      if ((sending_app1_B.rtb_InputConversion_idx_0 >
           sending_app1_B.rtb_InputConversion_idx_1) || (rtIsNaN
           (sending_app1_B.rtb_InputConversion_idx_0) && (!rtIsNaN
            (sending_app1_B.rtb_InputConversion_idx_1)))) {
        sending_app1_B.rtb_InputConversion_idx_0 =
          sending_app1_B.rtb_InputConversion_idx_1;
      }

      if ((sending_app1_B.y_k < sending_app1_B.rtb_InputConversion_idx_0) ||
          (rtIsNaN(sending_app1_B.y_k) && (!rtIsNaN
            (sending_app1_B.rtb_InputConversion_idx_0)))) {
        sending_app1_B.y_k = sending_app1_B.rtb_InputConversion_idx_0;
      }

      sending_app1_B.aggregatedOutputs[rtb_MATLABSystem_tmp] =
        sending_app1_B.y_k;
    }
  }

  /* End of MATLAB Function: '<S6>/Evaluate Rule Consequents' */

  /* MATLAB Function: '<S6>/Defuzzify Outputs' incorporates:
   *  Constant: '<S6>/Output Sample Points'
   *  MATLAB Function: '<S6>/Evaluate Rule Antecedents'
   */
  if (sending_app1_B.y == 0.0) {
    sending_app1_B.rtb_InputConversion_idx_1 = 0.5;
  } else {
    sending_app1_B.y = 0.0;
    sending_app1_B.rtb_InputConversion_idx_1 = 0.0;
    for (i = 0; i < 101; i++) {
      sending_app1_B.rtb_InputConversion_idx_1 +=
        sending_app1_B.aggregatedOutputs[i];
    }

    if (sending_app1_B.rtb_InputConversion_idx_1 == 0.0) {
      sending_app1_B.rtb_InputConversion_idx_1 =
        (sending_app1_P.OutputSamplePoints_Value[0] +
         sending_app1_P.OutputSamplePoints_Value[100]) / 2.0;
    } else {
      for (i = 0; i < 101; i++) {
        sending_app1_B.y += sending_app1_P.OutputSamplePoints_Value[i] *
          sending_app1_B.aggregatedOutputs[i];
      }

      sending_app1_B.rtb_InputConversion_idx_1 = 1.0 /
        sending_app1_B.rtb_InputConversion_idx_1 * sending_app1_B.y;
    }
  }

  /* End of MATLAB Function: '<S6>/Defuzzify Outputs' */
  /* End of Outputs for SubSystem: '<Root>/Fuzzy Logic  Controller1' */
  if (sending_app1_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLABSystem: '<S7>/Button' */
    sending_app1_B.Button = BUTTON_GETSTATE(2.0);
  }

  /* MATLAB Function: '<Root>/danger number to level ' */
  if (sending_app1_B.Button) {
    sending_app1_DW.flag = 0.0;
    sending_app1_B.y = 0.0;
  } else if (sending_app1_B.rtb_InputConversion_idx_1 > 0.45) {
    sending_app1_DW.flag = 1.0;
    sending_app1_B.y = 1.0;
  } else {
    sending_app1_B.y = sending_app1_DW.flag;
  }

  /* End of MATLAB Function: '<Root>/danger number to level ' */

  /* MATLAB Function: '<Root>/VolumeMultiplier' */
  if (sending_app1_B.y == 1.0) {
    sending_app1_B.y_k = 1.0;
  } else if (sending_app1_B.rtb_InputConversion_idx_1 < 0.25) {
    sending_app1_B.y_k = 0.0;
  } else if ((sending_app1_B.rtb_InputConversion_idx_1 >= 0.2) &&
             (sending_app1_B.rtb_InputConversion_idx_1 < 0.35)) {
    sending_app1_B.y_k = 0.2;
  } else {
    sending_app1_B.y_k = 1.0;
  }

  /* End of MATLAB Function: '<Root>/VolumeMultiplier' */

  /* MATLABSystem: '<S5>/Button' */
  rtb_NOT = BUTTON_GETSTATE(1.0);

  /* Logic: '<Root>/NOT' incorporates:
   *  MATLABSystem: '<S5>/Button'
   */
  rtb_NOT = !rtb_NOT;

  /* MATLABSystem: '<S4>/Audio Playback' */
  if (sending_app1_DW.obj.SampleFreq != sending_app1_P.AudioPlayback_SampleFreq)
  {
    sending_app1_DW.obj.SampleFreq = sending_app1_P.AudioPlayback_SampleFreq;
  }

  /* Delay: '<Root>/Delay' */
  tmp = sending_app1_DW.Delay_DSTATE[0U];

  /* MATLABSystem: '<S4>/Audio Playback' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  MATLABSystem: '<Root>/Audio File Read'
   */
  for (i = 0; i < 300; i++) {
    /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
     *  MATLABSystem: '<Root>/Audio File Read'
     *  Product: '<Root>/Product'
     */
    rtb_MATLABSystem_tmp = (int32_T)fmod((int32_T)floor(sending_app1_B.y_k *
      (real_T)sending_app1_B.refData[i] * (real_T)tmp * (real_T)rtb_NOT),
      65536.0);
    ui_tmp = i << 1;
    sending_app1_B.ui[ui_tmp] = (int16_T)(rtb_MATLABSystem_tmp < 0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-(real_T)rtb_MATLABSystem_tmp :
      rtb_MATLABSystem_tmp);

    /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
     *  MATLABSystem: '<Root>/Audio File Read'
     *  Product: '<Root>/Product'
     */
    rtb_MATLABSystem_tmp = (int32_T)fmod((int32_T)floor((real_T)
      sending_app1_B.refData[i + 300] * sending_app1_B.y_k * (real_T)tmp *
      (real_T)rtb_NOT), 65536.0);
    sending_app1_B.ui[ui_tmp + 1] = (int16_T)(rtb_MATLABSystem_tmp < 0 ?
      (int32_T)(int16_T)-(int16_T)(uint16_T)-(real_T)rtb_MATLABSystem_tmp :
      rtb_MATLABSystem_tmp);
  }

  AUDIO_PLAYBACK(&sending_app1_B.ui[0], sending_app1_DW.obj.FrameSize);

  /* Switch: '<Root>/Switch' */
  rtb_NOT = (sending_app1_B.y > sending_app1_P.Switch_Threshold);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  for (i = 0; i < 300; i++) {
    /* Switch: '<Root>/Switch' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion2'
     *  MATLAB Function: '<Root>/audio_breaker'
     *  MATLABSystem: '<S3>/MATLAB System'
     */
    if (rtb_NOT) {
      sending_app1_B.DataTypeConversion2[i] = sending_app1_B.MATLABSystem[i];
    } else {
      sending_app1_B.DataTypeConversion2[i] = 0.0;
    }
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

  /* MATLABSystem: '<Root>/TCP//IP Send' */
  errorNo = sending_app1_DW.obj_no.errorNo_;
  if (sending_app1_DW.obj_no.isLittleEnd_ == 1) {
    for (i = 0; i < 300; i++) {
      memcpy((void *)&sending_app1_B.b_x[0], (void *)
             &sending_app1_B.DataTypeConversion2[i], (size_t)8 * sizeof(uint8_T));
      xtmp = sending_app1_B.b_x[0];
      sending_app1_B.b_x[0] = sending_app1_B.b_x[7];
      sending_app1_B.b_x[7] = xtmp;
      xtmp = sending_app1_B.b_x[1];
      sending_app1_B.b_x[1] = sending_app1_B.b_x[6];
      sending_app1_B.b_x[6] = xtmp;
      xtmp = sending_app1_B.b_x[2];
      sending_app1_B.b_x[2] = sending_app1_B.b_x[5];
      sending_app1_B.b_x[5] = xtmp;
      xtmp = sending_app1_B.b_x[3];
      sending_app1_B.b_x[3] = sending_app1_B.b_x[4];
      sending_app1_B.b_x[4] = xtmp;
      memcpy((void *)&sending_app1_B.y_k, (void *)&sending_app1_B.b_x[0],
             (size_t)1 * sizeof(real_T));
      sending_app1_B.DataTypeConversion2[i] = sending_app1_B.y_k;
    }
  }

  sending_app1_B.y_k = rt_roundd_snf(sending_app1_DW.obj_no.isServer_);
  if (sending_app1_B.y_k < 65536.0) {
    if (sending_app1_B.y_k >= 0.0) {
      tmp_0 = (uint16_T)sending_app1_B.y_k;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamStepSend(&sending_app1_B.DataTypeConversion2[0], 2400U,
                    sending_app1_DW.obj_no.connStream_, tmp_0,
                    &sending_app1_DW.obj_no.errorNo_);
  if ((errorNo != sending_app1_DW.obj_no.errorNo_) &&
      (sending_app1_DW.obj_no.errorNo_ > 0) && (sending_app1_DW.obj_no.errorNo_ <
       10)) {
    rtb_MATLABSystem_tmp = 1;
    sending_app1_B.str_data[0] = '\x00';
    if (sending_app1_DW.obj_no.errorNo_ == 4) {
      UPDATE_TCP_LOGI(sending_app1_DW.obj_no.errorNo_, 1.0, 0, 25000);
    } else {
      if (sending_app1_DW.obj_no.errorNo_ == 5) {
        rtb_MATLABSystem_tmp = 7;
        for (i = 0; i < 7; i++) {
          sending_app1_B.str_data[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &sending_app1_B.str_data[0], (uint32_T)
             rtb_MATLABSystem_tmp * sizeof(char_T));
      UPDATE_TCP_LOGS(sending_app1_DW.obj_no.errorNo_, 1.0, 0, &b_str_data[0]);
    }
  }

  /* End of MATLABSystem: '<Root>/TCP//IP Send' */

  /* MATLABSystem: '<S8>/Location Sensor' */
  sending_app1_B.out[0] = 0.0;
  sending_app1_B.out[1] = 0.0;
  sending_app1_B.out[2] = 0.0;
  GET_LOCATION_DATA(&sending_app1_B.out[0], &sending_app1_B.out[1],
                    &sending_app1_B.out[2]);

  /* Switch: '<Root>/Switch1' incorporates:
   *  MATLABSystem: '<S8>/Location Sensor'
   */
  if (sending_app1_B.y > sending_app1_P.Switch1_Threshold) {
    sending_app1_B.rtb_InputConversion_idx_0 = sending_app1_B.out[0];
  } else {
    sending_app1_B.rtb_InputConversion_idx_0 = 0.0;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* MATLABSystem: '<Root>/TCP//IP Send1' */
  errorNo = sending_app1_DW.obj_n.errorNo_;
  if (sending_app1_DW.obj_n.isLittleEnd_ == 1) {
    memcpy((void *)&sending_app1_B.b_x_c[0], (void *)
           &sending_app1_B.rtb_InputConversion_idx_0, (size_t)8 * sizeof(uint8_T));
    xtmp = sending_app1_B.b_x_c[0];
    sending_app1_B.b_x_c[0] = sending_app1_B.b_x_c[7];
    sending_app1_B.b_x_c[7] = xtmp;
    xtmp = sending_app1_B.b_x_c[1];
    sending_app1_B.b_x_c[1] = sending_app1_B.b_x_c[6];
    sending_app1_B.b_x_c[6] = xtmp;
    xtmp = sending_app1_B.b_x_c[2];
    sending_app1_B.b_x_c[2] = sending_app1_B.b_x_c[5];
    sending_app1_B.b_x_c[5] = xtmp;
    xtmp = sending_app1_B.b_x_c[3];
    sending_app1_B.b_x_c[3] = sending_app1_B.b_x_c[4];
    sending_app1_B.b_x_c[4] = xtmp;
    memcpy((void *)&sending_app1_B.rtb_InputConversion_idx_0, (void *)
           &sending_app1_B.b_x_c[0], (size_t)1 * sizeof(real_T));
  }

  sending_app1_B.y_k = rt_roundd_snf(sending_app1_DW.obj_n.isServer_);
  if (sending_app1_B.y_k < 65536.0) {
    if (sending_app1_B.y_k >= 0.0) {
      tmp_0 = (uint16_T)sending_app1_B.y_k;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamStepSend(&sending_app1_B.rtb_InputConversion_idx_0, 8U,
                    sending_app1_DW.obj_n.connStream_, tmp_0,
                    &sending_app1_DW.obj_n.errorNo_);
  if ((errorNo != sending_app1_DW.obj_n.errorNo_) &&
      (sending_app1_DW.obj_n.errorNo_ > 0) && (sending_app1_DW.obj_n.errorNo_ <
       10)) {
    rtb_MATLABSystem_tmp = 1;
    sending_app1_B.str_data[0] = '\x00';
    if (sending_app1_DW.obj_n.errorNo_ == 4) {
      UPDATE_TCP_LOGI(sending_app1_DW.obj_n.errorNo_, 2.0, 0, 25000);
    } else {
      if (sending_app1_DW.obj_n.errorNo_ == 5) {
        rtb_MATLABSystem_tmp = 7;
        for (i = 0; i < 7; i++) {
          sending_app1_B.str_data[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &sending_app1_B.str_data[0], (uint32_T)
             rtb_MATLABSystem_tmp * sizeof(char_T));
      UPDATE_TCP_LOGS(sending_app1_DW.obj_n.errorNo_, 2.0, 0, &b_str_data[0]);
    }
  }

  /* End of MATLABSystem: '<Root>/TCP//IP Send1' */

  /* Switch: '<Root>/Switch2' incorporates:
   *  MATLABSystem: '<S8>/Location Sensor'
   */
  if (sending_app1_B.y > sending_app1_P.Switch2_Threshold) {
    sending_app1_B.rtb_InputConversion_idx_0 = sending_app1_B.out[1];
  } else {
    sending_app1_B.rtb_InputConversion_idx_0 = 0.0;
  }

  /* End of Switch: '<Root>/Switch2' */

  /* MATLABSystem: '<Root>/TCP//IP Send2' */
  errorNo = sending_app1_DW.obj_g.errorNo_;
  if (sending_app1_DW.obj_g.isLittleEnd_ == 1) {
    memcpy((void *)&sending_app1_B.b_x_k[0], (void *)
           &sending_app1_B.rtb_InputConversion_idx_0, (size_t)8 * sizeof(uint8_T));
    xtmp = sending_app1_B.b_x_k[0];
    sending_app1_B.b_x_k[0] = sending_app1_B.b_x_k[7];
    sending_app1_B.b_x_k[7] = xtmp;
    xtmp = sending_app1_B.b_x_k[1];
    sending_app1_B.b_x_k[1] = sending_app1_B.b_x_k[6];
    sending_app1_B.b_x_k[6] = xtmp;
    xtmp = sending_app1_B.b_x_k[2];
    sending_app1_B.b_x_k[2] = sending_app1_B.b_x_k[5];
    sending_app1_B.b_x_k[5] = xtmp;
    xtmp = sending_app1_B.b_x_k[3];
    sending_app1_B.b_x_k[3] = sending_app1_B.b_x_k[4];
    sending_app1_B.b_x_k[4] = xtmp;
    memcpy((void *)&sending_app1_B.rtb_InputConversion_idx_0, (void *)
           &sending_app1_B.b_x_k[0], (size_t)1 * sizeof(real_T));
  }

  sending_app1_B.y_k = rt_roundd_snf(sending_app1_DW.obj_g.isServer_);
  if (sending_app1_B.y_k < 65536.0) {
    if (sending_app1_B.y_k >= 0.0) {
      tmp_0 = (uint16_T)sending_app1_B.y_k;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamStepSend(&sending_app1_B.rtb_InputConversion_idx_0, 8U,
                    sending_app1_DW.obj_g.connStream_, tmp_0,
                    &sending_app1_DW.obj_g.errorNo_);
  if ((errorNo != sending_app1_DW.obj_g.errorNo_) &&
      (sending_app1_DW.obj_g.errorNo_ > 0) && (sending_app1_DW.obj_g.errorNo_ <
       10)) {
    rtb_MATLABSystem_tmp = 1;
    sending_app1_B.str_data[0] = '\x00';
    if (sending_app1_DW.obj_g.errorNo_ == 4) {
      UPDATE_TCP_LOGI(sending_app1_DW.obj_g.errorNo_, 3.0, 0, 25000);
    } else {
      if (sending_app1_DW.obj_g.errorNo_ == 5) {
        rtb_MATLABSystem_tmp = 7;
        for (i = 0; i < 7; i++) {
          sending_app1_B.str_data[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &sending_app1_B.str_data[0], (uint32_T)
             rtb_MATLABSystem_tmp * sizeof(char_T));
      UPDATE_TCP_LOGS(sending_app1_DW.obj_g.errorNo_, 3.0, 0, &b_str_data[0]);
    }
  }

  /* End of MATLABSystem: '<Root>/TCP//IP Send2' */

  /* MATLABSystem: '<S14>/DataDisplay' incorporates:
   *  MATLABSystem: '<S11>/DataDisplay'
   *  MATLABSystem: '<S16>/DataDisplay'
   *  MATLABSystem: '<S17>/DataDisplay'
   *  MATLABSystem: '<S18>/DataDisplay'
   *  MATLABSystem: '<S1>/DataDisplay'
   */
  b_FormatStringTerminated_0[0] = '%';
  b_FormatStringTerminated_0[1] = '.';
  b_FormatStringTerminated_0[2] = '6';
  b_FormatStringTerminated_0[3] = 'f';
  b_FormatStringTerminated_0[4] = '\x00';
  for (i = 0; i < 5; i++) {
    b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
  }

  PUT_DATADISPLAY_DATA(&sending_app1_B.rtb_InputConversion_idx_1, 3.0, 9, 1,
                       &b_FormatStringTerminated[0]);

  /* End of MATLABSystem: '<S14>/DataDisplay' */
  if (sending_app1_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLABSystem: '<S1>/DataDisplay' */
    sending_app1_B.rtb_InputConversion_idx_1 = rtb_a;
    for (i = 0; i < 5; i++) {
      b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
    }

    PUT_DATADISPLAY_DATA(&sending_app1_B.rtb_InputConversion_idx_1, 1.0, 9, 1,
                         &b_FormatStringTerminated[0]);

    /* MATLABSystem: '<S11>/DataDisplay' */
    sending_app1_B.rtb_InputConversion_idx_1 = rtb_Accelerometer_o1;
    for (i = 0; i < 5; i++) {
      b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
    }

    PUT_DATADISPLAY_DATA(&sending_app1_B.rtb_InputConversion_idx_1, 2.0, 9, 1,
                         &b_FormatStringTerminated[0]);

    /* MATLABSystem: '<S17>/DataDisplay' */
    sending_app1_B.rtb_InputConversion_idx_1 = rtb_Accelerometer_o2;
    for (i = 0; i < 5; i++) {
      b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
    }

    PUT_DATADISPLAY_DATA(&sending_app1_B.rtb_InputConversion_idx_1, 5.0, 9, 1,
                         &b_FormatStringTerminated[0]);

    /* MATLABSystem: '<S18>/DataDisplay' */
    sending_app1_B.rtb_InputConversion_idx_1 = rtb_Accelerometer_o3;
    for (i = 0; i < 5; i++) {
      b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
    }

    PUT_DATADISPLAY_DATA(&sending_app1_B.rtb_InputConversion_idx_1, 6.0, 9, 1,
                         &b_FormatStringTerminated[0]);
  }

  /* MATLABSystem: '<S16>/DataDisplay' */
  PUT_DATADISPLAY_DATA(&sending_app1_B.y_l, 4.0, 9, 1,
                       &b_FormatStringTerminated_0[0]);

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  Logic: '<Root>/NOT1'
   */
  for (i = 0; i < 239; i++) {
    sending_app1_DW.Delay_DSTATE[i] = sending_app1_DW.Delay_DSTATE[i + 1];
  }

  sending_app1_DW.Delay_DSTATE[239] = !(sending_app1_B.y != 0.0);

  /* End of Update for Delay: '<Root>/Delay' */
  rate_scheduler();
}

/* Model initialize function */
void sending_app1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)sending_app1_M, 0,
                sizeof(RT_MODEL_sending_app1_T));

  /* block I/O */
  (void) memset(((void *) &sending_app1_B), 0,
                sizeof(B_sending_app1_T));

  /* states (dwork) */
  (void) memset((void *)&sending_app1_DW, 0,
                sizeof(DW_sending_app1_T));

  {
    int32_T i;
    char_T b[9];
    char_T c[4];
    static const char_T tmp[8] = { 'n', 'e', 'w', 'a', 'l', 'a', 'r', 'm' };

    /* Start for MATLABSystem: '<S3>/MATLAB System' */
    sending_app1_DW.obj_a.matlabCodegenIsDeleted = false;
    sending_app1_DW.objisempty_f = true;
    sending_app1_DW.obj_a.isInitialized = 1;
    INIT_AUDIO_CAPTURE(24000.0, 300);
    sending_app1_DW.obj_a.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio File Read' */
    sending_app1_DW.obj_b.matlabCodegenIsDeleted = false;
    sending_app1_DW.objisempty_eq = true;
    sending_app1_DW.obj_b.FExt[0] = 'm';
    sending_app1_DW.obj_b.FExt[1] = 'p';
    sending_app1_DW.obj_b.FExt[2] = '3';
    sending_app1_DW.obj_b.FExt[3] = '\x00';
    sending_app1_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      sending_app1_DW.obj_b.RName[i] = tmp[i];
      b[i] = sending_app1_DW.obj_b.RName[i];
    }

    b[8] = '\x00';
    c[0] = sending_app1_DW.obj_b.FExt[0];
    c[1] = sending_app1_DW.obj_b.FExt[1];
    c[2] = sending_app1_DW.obj_b.FExt[2];
    c[3] = sending_app1_DW.obj_b.FExt[3];
    INITIALIZE_AUDIOFILEREAD(&b[0], &c[0], 300U, &sending_app1_DW.obj_b.Idx);
    sending_app1_DW.obj_b.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Audio File Read' */

    /* Start for MATLABSystem: '<S2>/Accelerometer' */
    sending_app1_DW.obj_o.matlabCodegenIsDeleted = false;
    sending_app1_DW.objisempty_d = true;
    sending_app1_DW.obj_o.isInitialized = 1;
    INITIALIZE_ACCELEROMETER();
    sending_app1_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<S7>/Button' */
    sending_app1_DW.objisempty_i = true;
    sending_app1_DW.obj_nf.isInitialized = 1;
    BUTTON_INIT(2.0);

    /* Start for MATLABSystem: '<S5>/Button' */
    sending_app1_DW.objisempty_p = true;
    sending_app1_DW.obj_h.isInitialized = 1;
    BUTTON_INIT(1.0);

    /* Start for MATLABSystem: '<S4>/Audio Playback' */
    sending_app1_DW.obj.matlabCodegenIsDeleted = false;
    sending_app1_DW.objisempty_jj = true;
    sending_app1_DW.obj.SampleFreq = sending_app1_P.AudioPlayback_SampleFreq;
    sending_app1_DW.obj.isInitialized = 1;
    sending_app1_DW.obj.FrameSize = 300.0;
    INIT_AUDIO_PLAYBACK(sending_app1_DW.obj.SampleFreq,
                        sending_app1_DW.obj.FrameSize);
    sending_app1_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/TCP//IP Send' */
    sending_app1_DW.obj_no.errorNo_ = 0;
    sending_app1_DW.obj_no.isInitialized = 0;
    sending_app1_DW.objisempty_bi = true;
    sending_app1_SystemCore_setup(&sending_app1_DW.obj_no);

    /* Start for MATLABSystem: '<S8>/Location Sensor' */
    sending_app1_DW.obj_g1.matlabCodegenIsDeleted = false;
    sending_app1_DW.objisempty_k = true;
    sending_app1_DW.obj_g1.isInitialized = 1;
    INIT_LOCATION_SENSOR();
    sending_app1_DW.obj_g1.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/TCP//IP Send1' */
    sending_app1_DW.obj_n.errorNo_ = 0;
    sending_app1_DW.obj_n.isInitialized = 0;
    sending_app1_DW.objisempty_e = true;
    sending_app1_SystemCore_setup_e(&sending_app1_DW.obj_n);

    /* Start for MATLABSystem: '<Root>/TCP//IP Send2' */
    sending_app1_DW.obj_g.errorNo_ = 0;
    sending_app1_DW.obj_g.isInitialized = 0;
    sending_app1_DW.objisempty_c = true;
    sending_app_SystemCore_setup_eu(&sending_app1_DW.obj_g);

    /* Start for MATLABSystem: '<S14>/DataDisplay' */
    sending_app1_DW.objisempty_ny = true;
    sending_app1_DW.obj_d.isInitialized = 1;
    INITIALIZE_DATADISPLAY();

    /* Start for MATLABSystem: '<S1>/DataDisplay' */
    sending_app1_DW.objisempty_nd = true;
    sending_app1_DW.obj_f.isInitialized = 1;
    INITIALIZE_DATADISPLAY();

    /* Start for MATLABSystem: '<S11>/DataDisplay' */
    sending_app1_DW.objisempty_b = true;
    sending_app1_DW.obj_e.isInitialized = 1;
    INITIALIZE_DATADISPLAY();

    /* Start for MATLABSystem: '<S17>/DataDisplay' */
    sending_app1_DW.objisempty_j = true;
    sending_app1_DW.obj_l.isInitialized = 1;
    INITIALIZE_DATADISPLAY();

    /* Start for MATLABSystem: '<S18>/DataDisplay' */
    sending_app1_DW.objisempty = true;
    sending_app1_DW.obj_m.isInitialized = 1;
    INITIALIZE_DATADISPLAY();

    /* Start for MATLABSystem: '<S16>/DataDisplay' */
    sending_app1_DW.objisempty_n = true;
    sending_app1_DW.obj_bw.isInitialized = 1;
    INITIALIZE_DATADISPLAY();
  }

  {
    int32_T i;

    /* InitializeConditions for Delay: '<Root>/Delay' */
    for (i = 0; i < 240; i++) {
      sending_app1_DW.Delay_DSTATE[i] = sending_app1_P.Delay_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<Root>/Delay' */

    /* SystemInitialize for MATLAB Function: '<Root>/danger number to level ' */
    sending_app1_DW.flag = 0.0;
  }
}

/* Model terminate function */
void sending_app1_terminate(void)
{
  int32_T tmp;

  /* Terminate for MATLABSystem: '<S3>/MATLAB System' */
  if (!sending_app1_DW.obj_a.matlabCodegenIsDeleted) {
    sending_app1_DW.obj_a.matlabCodegenIsDeleted = true;
    if ((sending_app1_DW.obj_a.isInitialized == 1) &&
        sending_app1_DW.obj_a.isSetupComplete) {
      TERMINATE_AUDIO_CAPTURE();
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/MATLAB System' */

  /* Terminate for MATLABSystem: '<Root>/Audio File Read' */
  if (!sending_app1_DW.obj_b.matlabCodegenIsDeleted) {
    sending_app1_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((sending_app1_DW.obj_b.isInitialized == 1) &&
        sending_app1_DW.obj_b.isSetupComplete) {
      tmp = sending_app1_DW.obj_b.Idx;
      if (sending_app1_DW.obj_b.Idx < 0) {
        tmp = 0;
      }

      TERMINATE_AUDIOFILEREAD((uint32_T)tmp);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Audio File Read' */

  /* Terminate for MATLABSystem: '<S2>/Accelerometer' */
  if (!sending_app1_DW.obj_o.matlabCodegenIsDeleted) {
    sending_app1_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/Accelerometer' */

  /* Terminate for MATLABSystem: '<S4>/Audio Playback' */
  if (!sending_app1_DW.obj.matlabCodegenIsDeleted) {
    sending_app1_DW.obj.matlabCodegenIsDeleted = true;
    if ((sending_app1_DW.obj.isInitialized == 1) &&
        sending_app1_DW.obj.isSetupComplete) {
      TERMINATE_AUDIO_PLAYBACK();
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Audio Playback' */

  /* Terminate for MATLABSystem: '<S8>/Location Sensor' */
  if (!sending_app1_DW.obj_g1.matlabCodegenIsDeleted) {
    sending_app1_DW.obj_g1.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S8>/Location Sensor' */
}
