/*
 * receiving_app2.c
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

#include "receiving_app2.h"
#include "receiving_app2_types.h"
#include "rtwtypes.h"
#include "receiving_app2_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include <stddef.h>

/* Block signals (default storage) */
B_receiving_app2_T receiving_app2_B;

/* Block states (default storage) */
DW_receiving_app2_T receiving_app2_DW;

/* Real-time model */
static RT_MODEL_receiving_app2_T receiving_app2_M_;
RT_MODEL_receiving_app2_T *const receiving_app2_M = &receiving_app2_M_;

/* Forward declaration for local functions */
static void receiving_app2_SystemCore_setup(codertarget_internal_androidT_T *obj);
static void receiving_ap_SystemCore_setup_l(codertarget_internal_androidT_T *obj);
static void receiving_a_SystemCore_setup_le(codertarget_internal_androidT_T *obj);
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

static void receiving_app2_SystemCore_setup(codertarget_internal_androidT_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[10];
  char_T ipaddr[10];
  static const char_T tmp_1[10] = "10.7.0.45";
  int32_T str_size_idx_1;
  obj->isInitialized = 1;
  errorNo = obj->errorNo_;
  obj->isServer_ = 0.0;
  for (i = 0; i < 10; i++) {
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
      UPDATE_TCP_LOGI(obj->errorNo_, 1.0, 1, MAX_int16_T);
    } else {
      if (obj->errorNo_ == 5) {
        str_size_idx_1 = 10;
        for (i = 0; i < 10; i++) {
          ipaddr[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &ipaddr[0], (uint32_T)str_size_idx_1 * sizeof
             (char_T));
      UPDATE_TCP_LOGS(obj->errorNo_, 1.0, 1, &b_str_data[0]);
    }
  }
}

static void receiving_ap_SystemCore_setup_l(codertarget_internal_androidT_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[10];
  char_T ipaddr[10];
  static const char_T tmp_1[10] = "10.7.0.45";
  int32_T str_size_idx_1;
  obj->isInitialized = 1;
  errorNo = obj->errorNo_;
  obj->isServer_ = 0.0;
  for (i = 0; i < 10; i++) {
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
      UPDATE_TCP_LOGI(obj->errorNo_, 2.0, 1, MAX_int16_T);
    } else {
      if (obj->errorNo_ == 5) {
        str_size_idx_1 = 10;
        for (i = 0; i < 10; i++) {
          ipaddr[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &ipaddr[0], (uint32_T)str_size_idx_1 * sizeof
             (char_T));
      UPDATE_TCP_LOGS(obj->errorNo_, 2.0, 1, &b_str_data[0]);
    }
  }
}

static void receiving_a_SystemCore_setup_le(codertarget_internal_androidT_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T b_str_data[10];
  char_T ipaddr[10];
  static const char_T tmp_1[10] = "10.7.0.45";
  int32_T str_size_idx_1;
  obj->isInitialized = 1;
  errorNo = obj->errorNo_;
  obj->isServer_ = 0.0;
  for (i = 0; i < 10; i++) {
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
      UPDATE_TCP_LOGI(obj->errorNo_, 3.0, 1, MAX_int16_T);
    } else {
      if (obj->errorNo_ == 5) {
        str_size_idx_1 = 10;
        for (i = 0; i < 10; i++) {
          ipaddr[i] = tmp_1[i];
        }
      }

      memcpy(&b_str_data[0], &ipaddr[0], (uint32_T)str_size_idx_1 * sizeof
             (char_T));
      UPDATE_TCP_LOGS(obj->errorNo_, 3.0, 1, &b_str_data[0]);
    }
  }
}

/* Model step function */
void receiving_app2_step(void)
{
  real_T b_data;
  real_T y;
  int32_T i;
  real32_T outData;
  int16_T errorNo;
  int16_T errorNo_0;
  uint16_T tmp;
  char_T b_FormatStringTerminated[5];
  char_T b_FormatStringTerminated_0[5];
  int8_T b_status;
  uint8_T b_x[8];
  uint8_T b_x_0[8];
  uint8_T xtmp;
  static const char_T tmp_0[10] = "10.7.0.45";
  int32_T str_size_idx_1;

  /* MATLABSystem: '<Root>/TCP//IP Receive' */
  errorNo = receiving_app2_DW.obj_p.errorNo_;
  y = rt_roundd_snf(receiving_app2_DW.obj_p.isServer_);
  if (y < 65536.0) {
    if (y >= 0.0) {
      tmp = (uint16_T)y;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint16_T;
  }

  TCPStreamStepRecv(&receiving_app2_B.b_data[0], &b_status, 2400,
                    receiving_app2_DW.obj_p.connStream_, &errorNo_0, tmp);
  if (receiving_app2_DW.obj_p.isLittleEnd_ == 1) {
    for (i = 0; i < 300; i++) {
      memcpy((void *)&receiving_app2_B.b_x[0], (void *)
             &receiving_app2_B.b_data[i], (size_t)8 * sizeof(uint8_T));
      xtmp = receiving_app2_B.b_x[0];
      receiving_app2_B.b_x[0] = receiving_app2_B.b_x[7];
      receiving_app2_B.b_x[7] = xtmp;
      xtmp = receiving_app2_B.b_x[1];
      receiving_app2_B.b_x[1] = receiving_app2_B.b_x[6];
      receiving_app2_B.b_x[6] = xtmp;
      xtmp = receiving_app2_B.b_x[2];
      receiving_app2_B.b_x[2] = receiving_app2_B.b_x[5];
      receiving_app2_B.b_x[5] = xtmp;
      xtmp = receiving_app2_B.b_x[3];
      receiving_app2_B.b_x[3] = receiving_app2_B.b_x[4];
      receiving_app2_B.b_x[4] = xtmp;
      memcpy((void *)&y, (void *)&receiving_app2_B.b_x[0], (size_t)1 * sizeof
             (real_T));
      receiving_app2_B.b_data[i] = y;
    }
  }

  receiving_app2_DW.obj_p.errorNo_ = errorNo_0;
  if ((errorNo != receiving_app2_DW.obj_p.errorNo_) &&
      (receiving_app2_DW.obj_p.errorNo_ > 0) &&
      (receiving_app2_DW.obj_p.errorNo_ < 10)) {
    str_size_idx_1 = 1;
    receiving_app2_B.str_data[0] = '\x00';
    if (receiving_app2_DW.obj_p.errorNo_ == 4) {
      UPDATE_TCP_LOGI(receiving_app2_DW.obj_p.errorNo_, 1.0, 1, MAX_int16_T);
    } else {
      if (receiving_app2_DW.obj_p.errorNo_ == 5) {
        str_size_idx_1 = 10;
        for (i = 0; i < 10; i++) {
          receiving_app2_B.str_data[i] = tmp_0[i];
        }
      }

      memcpy(&receiving_app2_B.b_str_data[0], &receiving_app2_B.str_data[0],
             (uint32_T)str_size_idx_1 * sizeof(char_T));
      UPDATE_TCP_LOGS(receiving_app2_DW.obj_p.errorNo_, 1.0, 1,
                      &receiving_app2_B.b_str_data[0]);
    }
  }

  /* MATLABSystem: '<S1>/Audio Playback' */
  if (receiving_app2_DW.obj.SampleFreq !=
      receiving_app2_P.AudioPlayback_SampleFreq) {
    receiving_app2_DW.obj.SampleFreq = receiving_app2_P.AudioPlayback_SampleFreq;
  }

  for (i = 0; i < 300; i++) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  MATLABSystem: '<Root>/TCP//IP Receive'
     */
    y = floor(receiving_app2_B.b_data[i]);
    if (rtIsNaN(y) || rtIsInf(y)) {
      y = 0.0;
    } else {
      y = fmod(y, 65536.0);
    }

    errorNo = (int16_T)(y < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-y :
                        (int32_T)(int16_T)(uint16_T)y);

    /* MATLABSystem: '<S1>/Audio Playback' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion'
     */
    str_size_idx_1 = i << 1;
    receiving_app2_B.outData[str_size_idx_1] = errorNo;
    receiving_app2_B.outData[str_size_idx_1 + 1] = errorNo;
  }

  /* MATLABSystem: '<S1>/Audio Playback' */
  AUDIO_PLAYBACK(&receiving_app2_B.outData[0], receiving_app2_DW.obj.FrameSize);

  /* MATLABSystem: '<S5>/DataDisplay' incorporates:
   *  MATLABSystem: '<Root>/TCP//IP Receive'
   *  MATLABSystem: '<S3>/DataDisplay'
   *  MATLABSystem: '<S4>/DataDisplay'
   */
  outData = b_status;
  b_FormatStringTerminated_0[0] = '%';
  b_FormatStringTerminated_0[1] = '.';
  b_FormatStringTerminated_0[2] = '6';
  b_FormatStringTerminated_0[3] = 'f';
  b_FormatStringTerminated_0[4] = '\x00';
  for (i = 0; i < 5; i++) {
    b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
  }

  PUT_DATADISPLAY_DATA(&outData, 3.0, 8, 1, &b_FormatStringTerminated[0]);

  /* End of MATLABSystem: '<S5>/DataDisplay' */

  /* MATLABSystem: '<Root>/TCP//IP Receive1' */
  errorNo = receiving_app2_DW.obj_n.errorNo_;
  y = rt_roundd_snf(receiving_app2_DW.obj_n.isServer_);
  if (y < 65536.0) {
    if (y >= 0.0) {
      tmp = (uint16_T)y;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint16_T;
  }

  TCPStreamStepRecv(&b_data, &b_status, 8, receiving_app2_DW.obj_n.connStream_,
                    &errorNo_0, tmp);
  if (receiving_app2_DW.obj_n.isLittleEnd_ == 1) {
    memcpy((void *)&b_x[0], (void *)&b_data, (size_t)8 * sizeof(uint8_T));
    xtmp = b_x[0];
    b_x[0] = b_x[7];
    b_x[7] = xtmp;
    xtmp = b_x[1];
    b_x[1] = b_x[6];
    b_x[6] = xtmp;
    xtmp = b_x[2];
    b_x[2] = b_x[5];
    b_x[5] = xtmp;
    xtmp = b_x[3];
    b_x[3] = b_x[4];
    b_x[4] = xtmp;
    memcpy((void *)&b_data, (void *)&b_x[0], (size_t)1 * sizeof(real_T));
  }

  receiving_app2_DW.obj_n.errorNo_ = errorNo_0;
  if ((errorNo != receiving_app2_DW.obj_n.errorNo_) &&
      (receiving_app2_DW.obj_n.errorNo_ > 0) &&
      (receiving_app2_DW.obj_n.errorNo_ < 10)) {
    str_size_idx_1 = 1;
    receiving_app2_B.str_data[0] = '\x00';
    if (receiving_app2_DW.obj_n.errorNo_ == 4) {
      UPDATE_TCP_LOGI(receiving_app2_DW.obj_n.errorNo_, 2.0, 1, MAX_int16_T);
    } else {
      if (receiving_app2_DW.obj_n.errorNo_ == 5) {
        str_size_idx_1 = 10;
        for (i = 0; i < 10; i++) {
          receiving_app2_B.str_data[i] = tmp_0[i];
        }
      }

      memcpy(&receiving_app2_B.b_str_data[0], &receiving_app2_B.str_data[0],
             (uint32_T)str_size_idx_1 * sizeof(char_T));
      UPDATE_TCP_LOGS(receiving_app2_DW.obj_n.errorNo_, 2.0, 1,
                      &receiving_app2_B.b_str_data[0]);
    }
  }

  /* MATLABSystem: '<S3>/DataDisplay' incorporates:
   *  MATLABSystem: '<Root>/TCP//IP Receive1'
   */
  for (i = 0; i < 5; i++) {
    b_FormatStringTerminated[i] = b_FormatStringTerminated_0[i];
  }

  PUT_DATADISPLAY_DATA(&b_data, 1.0, 9, 1, &b_FormatStringTerminated[0]);

  /* MATLABSystem: '<Root>/TCP//IP Receive2' */
  errorNo = receiving_app2_DW.obj_j.errorNo_;
  y = rt_roundd_snf(receiving_app2_DW.obj_j.isServer_);
  if (y < 65536.0) {
    if (y >= 0.0) {
      tmp = (uint16_T)y;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint16_T;
  }

  TCPStreamStepRecv(&b_data, &b_status, 8, receiving_app2_DW.obj_j.connStream_,
                    &errorNo_0, tmp);
  if (receiving_app2_DW.obj_j.isLittleEnd_ == 1) {
    memcpy((void *)&b_x_0[0], (void *)&b_data, (size_t)8 * sizeof(uint8_T));
    xtmp = b_x_0[0];
    b_x_0[0] = b_x_0[7];
    b_x_0[7] = xtmp;
    xtmp = b_x_0[1];
    b_x_0[1] = b_x_0[6];
    b_x_0[6] = xtmp;
    xtmp = b_x_0[2];
    b_x_0[2] = b_x_0[5];
    b_x_0[5] = xtmp;
    xtmp = b_x_0[3];
    b_x_0[3] = b_x_0[4];
    b_x_0[4] = xtmp;
    memcpy((void *)&b_data, (void *)&b_x_0[0], (size_t)1 * sizeof(real_T));
  }

  receiving_app2_DW.obj_j.errorNo_ = errorNo_0;
  if ((errorNo != receiving_app2_DW.obj_j.errorNo_) &&
      (receiving_app2_DW.obj_j.errorNo_ > 0) &&
      (receiving_app2_DW.obj_j.errorNo_ < 10)) {
    str_size_idx_1 = 1;
    receiving_app2_B.str_data[0] = '\x00';
    if (receiving_app2_DW.obj_j.errorNo_ == 4) {
      UPDATE_TCP_LOGI(receiving_app2_DW.obj_j.errorNo_, 3.0, 1, MAX_int16_T);
    } else {
      if (receiving_app2_DW.obj_j.errorNo_ == 5) {
        str_size_idx_1 = 10;
        for (i = 0; i < 10; i++) {
          receiving_app2_B.str_data[i] = tmp_0[i];
        }
      }

      memcpy(&receiving_app2_B.b_str_data[0], &receiving_app2_B.str_data[0],
             (uint32_T)str_size_idx_1 * sizeof(char_T));
      UPDATE_TCP_LOGS(receiving_app2_DW.obj_j.errorNo_, 3.0, 1,
                      &receiving_app2_B.b_str_data[0]);
    }
  }

  /* MATLABSystem: '<S4>/DataDisplay' incorporates:
   *  MATLABSystem: '<Root>/TCP//IP Receive2'
   */
  PUT_DATADISPLAY_DATA(&b_data, 2.0, 9, 1, &b_FormatStringTerminated_0[0]);
}

/* Model initialize function */
void receiving_app2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(receiving_app2_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&receiving_app2_DW, 0,
                sizeof(DW_receiving_app2_T));

  /* Start for MATLABSystem: '<Root>/TCP//IP Receive' */
  receiving_app2_DW.obj_p.errorNo_ = 0;
  receiving_app2_DW.obj_p.isInitialized = 0;
  receiving_app2_DW.objisempty_n = true;
  receiving_app2_SystemCore_setup(&receiving_app2_DW.obj_p);

  /* Start for MATLABSystem: '<S1>/Audio Playback' */
  receiving_app2_DW.obj.matlabCodegenIsDeleted = false;
  receiving_app2_DW.objisempty_f = true;
  receiving_app2_DW.obj.SampleFreq = receiving_app2_P.AudioPlayback_SampleFreq;
  receiving_app2_DW.obj.isInitialized = 1;
  receiving_app2_DW.obj.FrameSize = 300.0;
  INIT_AUDIO_PLAYBACK(receiving_app2_DW.obj.SampleFreq,
                      receiving_app2_DW.obj.FrameSize);
  receiving_app2_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S5>/DataDisplay' */
  receiving_app2_DW.objisempty = true;
  receiving_app2_DW.obj_h.isInitialized = 1;
  INITIALIZE_DATADISPLAY();

  /* Start for MATLABSystem: '<Root>/TCP//IP Receive1' */
  receiving_app2_DW.obj_n.errorNo_ = 0;
  receiving_app2_DW.obj_n.isInitialized = 0;
  receiving_app2_DW.objisempty_bd = true;
  receiving_ap_SystemCore_setup_l(&receiving_app2_DW.obj_n);

  /* Start for MATLABSystem: '<S3>/DataDisplay' */
  receiving_app2_DW.objisempty_b = true;
  receiving_app2_DW.obj_f.isInitialized = 1;
  INITIALIZE_DATADISPLAY();

  /* Start for MATLABSystem: '<Root>/TCP//IP Receive2' */
  receiving_app2_DW.obj_j.errorNo_ = 0;
  receiving_app2_DW.obj_j.isInitialized = 0;
  receiving_app2_DW.objisempty_bp = true;
  receiving_a_SystemCore_setup_le(&receiving_app2_DW.obj_j);

  /* Start for MATLABSystem: '<S4>/DataDisplay' */
  receiving_app2_DW.objisempty_i = true;
  receiving_app2_DW.obj_e.isInitialized = 1;
  INITIALIZE_DATADISPLAY();
}

/* Model terminate function */
void receiving_app2_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Audio Playback' */
  if (!receiving_app2_DW.obj.matlabCodegenIsDeleted) {
    receiving_app2_DW.obj.matlabCodegenIsDeleted = true;
    if ((receiving_app2_DW.obj.isInitialized == 1) &&
        receiving_app2_DW.obj.isSetupComplete) {
      TERMINATE_AUDIO_PLAYBACK();
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Audio Playback' */
}
