/*
 * receiving_app2_types.h
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

#ifndef RTW_HEADER_receiving_app2_types_h_
#define RTW_HEADER_receiving_app2_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_3yL2hMoDggxHFywTTV7IXF
#define struct_tag_3yL2hMoDggxHFywTTV7IXF

struct tag_3yL2hMoDggxHFywTTV7IXF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleFreq;
  real_T FrameSize;
};

#endif                                 /* struct_tag_3yL2hMoDggxHFywTTV7IXF */

#ifndef typedef_codertarget_internal_androidA_T
#define typedef_codertarget_internal_androidA_T

typedef struct tag_3yL2hMoDggxHFywTTV7IXF codertarget_internal_androidA_T;

#endif                             /* typedef_codertarget_internal_androidA_T */

#ifndef struct_tag_oVcbjJ32bd56mOLnH8nMzF
#define struct_tag_oVcbjJ32bd56mOLnH8nMzF

struct tag_oVcbjJ32bd56mOLnH8nMzF
{
  int32_T isInitialized;
  uint16_T connStream_;
  real_T isServer_;
  uint8_T isLittleEnd_;
  int16_T errorNo_;
};

#endif                                 /* struct_tag_oVcbjJ32bd56mOLnH8nMzF */

#ifndef typedef_codertarget_internal_androidT_T
#define typedef_codertarget_internal_androidT_T

typedef struct tag_oVcbjJ32bd56mOLnH8nMzF codertarget_internal_androidT_T;

#endif                             /* typedef_codertarget_internal_androidT_T */

#ifndef struct_tag_ueiJkfFydpjWck8LipfY3G
#define struct_tag_ueiJkfFydpjWck8LipfY3G

struct tag_ueiJkfFydpjWck8LipfY3G
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_ueiJkfFydpjWck8LipfY3G */

#ifndef typedef_codertarget_internal_androidD_T
#define typedef_codertarget_internal_androidD_T

typedef struct tag_ueiJkfFydpjWck8LipfY3G codertarget_internal_androidD_T;

#endif                             /* typedef_codertarget_internal_androidD_T */

/* Parameters (default storage) */
typedef struct P_receiving_app2_T_ P_receiving_app2_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_receiving_app2_T RT_MODEL_receiving_app2_T;

#endif                                 /* RTW_HEADER_receiving_app2_types_h_ */
