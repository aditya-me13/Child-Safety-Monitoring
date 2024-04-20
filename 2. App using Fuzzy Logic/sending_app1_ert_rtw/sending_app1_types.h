/*
 * sending_app1_types.h
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

#ifndef RTW_HEADER_sending_app1_types_h_
#define RTW_HEADER_sending_app1_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_xIsDtR2ecANYuW1ApZY0BH_
#define DEFINED_TYPEDEF_FOR_struct_xIsDtR2ecANYuW1ApZY0BH_

typedef struct {
  uint8_T SimulinkDiagnostic;
  uint8_T Model[12];
  uint8_T Block[37];
  uint8_T OutOfRangeInputValue;
  uint8_T NoRuleFired;
  uint8_T EmptyOutputFuzzySet;
} struct_xIsDtR2ecANYuW1ApZY0BH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_RCP1oovUDF2zF6C9vcJmtG_
#define DEFINED_TYPEDEF_FOR_struct_RCP1oovUDF2zF6C9vcJmtG_

typedef struct {
  uint8_T type[5];
  int32_T origTypeLength;
  real_T params[3];
  int32_T origParamLength;
} struct_RCP1oovUDF2zF6C9vcJmtG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_1xYna3vAnT7y3XBWgyB8GD_
#define DEFINED_TYPEDEF_FOR_struct_1xYna3vAnT7y3XBWgyB8GD_

typedef struct {
  struct_RCP1oovUDF2zF6C9vcJmtG mf[4];
  int32_T origNumMF;
} struct_1xYna3vAnT7y3XBWgyB8GD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OTlcYhhT3UxB0PEhAC2ANE_
#define DEFINED_TYPEDEF_FOR_struct_OTlcYhhT3UxB0PEhAC2ANE_

typedef struct {
  struct_RCP1oovUDF2zF6C9vcJmtG mf[3];
  int32_T origNumMF;
} struct_OTlcYhhT3UxB0PEhAC2ANE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_4vd4emA8NxtHUw44ZM2GcC_
#define DEFINED_TYPEDEF_FOR_struct_4vd4emA8NxtHUw44ZM2GcC_

typedef struct {
  uint8_T type[7];
  uint8_T andMethod[3];
  uint8_T orMethod[3];
  uint8_T defuzzMethod[8];
  uint8_T impMethod[3];
  uint8_T aggMethod[3];
  real_T inputRange[4];
  real_T outputRange[2];
  struct_1xYna3vAnT7y3XBWgyB8GD inputMF[2];
  struct_OTlcYhhT3UxB0PEhAC2ANE outputMF;
  real_T antecedent[24];
  real_T consequent[12];
  real_T connection[12];
  real_T weight[12];
  int32_T numSamples;
  int32_T numInputs;
  int32_T numOutputs;
  int32_T numRules;
  int32_T numInputMFs[2];
  int32_T numCumInputMFs[2];
  int32_T numOutputMFs;
  int32_T numCumOutputMFs;
  real_T outputSamplePoints[101];
  int32_T orrSize[2];
  int32_T aggSize[2];
  int32_T irrSize[2];
  int32_T rfsSize[2];
  int32_T sumSize[2];
  int32_T inputFuzzySetType;
} struct_4vd4emA8NxtHUw44ZM2GcC;

#endif

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

#ifndef struct_tag_SYZPi1slpveeienwB5Zsk
#define struct_tag_SYZPi1slpveeienwB5Zsk

struct tag_SYZPi1slpveeienwB5Zsk
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_SYZPi1slpveeienwB5Zsk */

#ifndef typedef_codertarget_internal_androidA_T
#define typedef_codertarget_internal_androidA_T

typedef struct tag_SYZPi1slpveeienwB5Zsk codertarget_internal_androidA_T;

#endif                             /* typedef_codertarget_internal_androidA_T */

#ifndef struct_tag_gqk06dR469AcJbzzWY0lrD
#define struct_tag_gqk06dR469AcJbzzWY0lrD

struct tag_gqk06dR469AcJbzzWY0lrD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_gqk06dR469AcJbzzWY0lrD */

#ifndef typedef_codertarget_internal_androi_e_T
#define typedef_codertarget_internal_androi_e_T

typedef struct tag_gqk06dR469AcJbzzWY0lrD codertarget_internal_androi_e_T;

#endif                             /* typedef_codertarget_internal_androi_e_T */

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

#ifndef typedef_codertarget_internal_andro_eu_T
#define typedef_codertarget_internal_andro_eu_T

typedef struct tag_3yL2hMoDggxHFywTTV7IXF codertarget_internal_andro_eu_T;

#endif                             /* typedef_codertarget_internal_andro_eu_T */

#ifndef struct_tag_63MJw1kHqrm9eBn07rI0a
#define struct_tag_63MJw1kHqrm9eBn07rI0a

struct tag_63MJw1kHqrm9eBn07rI0a
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_63MJw1kHqrm9eBn07rI0a */

#ifndef typedef_codertarget_internal_androidB_T
#define typedef_codertarget_internal_androidB_T

typedef struct tag_63MJw1kHqrm9eBn07rI0a codertarget_internal_androidB_T;

#endif                             /* typedef_codertarget_internal_androidB_T */

#ifndef struct_tag_V4eNnrrhj9Zhslx6oCfkYG
#define struct_tag_V4eNnrrhj9Zhslx6oCfkYG

struct tag_V4eNnrrhj9Zhslx6oCfkYG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_V4eNnrrhj9Zhslx6oCfkYG */

#ifndef typedef_codertarget_internal_androidL_T
#define typedef_codertarget_internal_androidL_T

typedef struct tag_V4eNnrrhj9Zhslx6oCfkYG codertarget_internal_androidL_T;

#endif                             /* typedef_codertarget_internal_androidL_T */

#ifndef struct_tag_fsdYSW0IiGzpKfGBI5XIiG
#define struct_tag_fsdYSW0IiGzpKfGBI5XIiG

struct tag_fsdYSW0IiGzpKfGBI5XIiG
{
  int32_T isInitialized;
  uint16_T connStream_;
  real_T isServer_;
  uint8_T isLittleEnd_;
  int16_T errorNo_;
};

#endif                                 /* struct_tag_fsdYSW0IiGzpKfGBI5XIiG */

#ifndef typedef_codertarget_internal_androidT_T
#define typedef_codertarget_internal_androidT_T

typedef struct tag_fsdYSW0IiGzpKfGBI5XIiG codertarget_internal_androidT_T;

#endif                             /* typedef_codertarget_internal_androidT_T */

#ifndef struct_tag_UcTfQ4KSfuCim7Tif5l6lB
#define struct_tag_UcTfQ4KSfuCim7Tif5l6lB

struct tag_UcTfQ4KSfuCim7Tif5l6lB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  char_T RName[8];
  char_T FExt[4];
  int32_T Idx;
};

#endif                                 /* struct_tag_UcTfQ4KSfuCim7Tif5l6lB */

#ifndef typedef_codertarget_internal_andr_euh_T
#define typedef_codertarget_internal_andr_euh_T

typedef struct tag_UcTfQ4KSfuCim7Tif5l6lB codertarget_internal_andr_euh_T;

#endif                             /* typedef_codertarget_internal_andr_euh_T */

/* Parameters (default storage) */
typedef struct P_sending_app1_T_ P_sending_app1_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_sending_app1_T RT_MODEL_sending_app1_T;

#endif                                 /* RTW_HEADER_sending_app1_types_h_ */
