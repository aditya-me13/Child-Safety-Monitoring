#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                sending_app1_cgxe
#include "simstruc.h"
#include "sending_app1_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_sending_app1_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(7, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 440995751;
  checksumData[1] = 2488759570;
  checksumData[2] = 2932061745;
  checksumData[3] = 3636523466;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1997034900;
  checksumData[1] = 821610272;
  checksumData[2] = 1822307796;
  checksumData[3] = 3607696420;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2437186796;
  checksumData[1] = 707103942;
  checksumData[2] = 2509350854;
  checksumData[3] = 4027154143;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2665859946;
  checksumData[1] = 2591674463;
  checksumData[2] = 2491365990;
  checksumData[3] = 4141790941;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3520242848;
  checksumData[1] = 3095280894;
  checksumData[2] = 3153224288;
  checksumData[3] = 1936219861;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3667844067;
  checksumData[1] = 1338069608;
  checksumData[2] = 2746548706;
  checksumData[3] = 2989072507;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 4219020053;
  checksumData[1] = 79991297;
  checksumData[2] = 2573369578;
  checksumData[3] = 717666244;
  mxSetCell(mxModules, 6, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 1488028460;
    checksumData[1] = 417940300;
    checksumData[2] = 2714319010;
    checksumData[3] = 3901139391;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3238271179;
    checksumData[1] = 1928876636;
    checksumData[2] = 2549067246;
    checksumData[3] = 650112713;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 2911221907;
    checksumData[1] = 2308967934;
    checksumData[2] = 2419390157;
    checksumData[3] = 1906300239;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 2428620319;
    checksumData[1] = 567900458;
    checksumData[2] = 1144400991;
    checksumData[3] = 3129478428;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_sending_app1_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE,
    (void *) (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_sending_app1_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE,
    (void *) prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "39dYKqcIOj3tuPvS2vxNOH") == 0) {
    extern mxArray *cgxe_39dYKqcIOj3tuPvS2vxNOH_BuildInfoUpdate(void);
    plhs[0] = cgxe_39dYKqcIOj3tuPvS2vxNOH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "xdwqvjc2V7LaCE05bRJYlC") == 0) {
    extern mxArray *cgxe_xdwqvjc2V7LaCE05bRJYlC_BuildInfoUpdate(void);
    plhs[0] = cgxe_xdwqvjc2V7LaCE05bRJYlC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "1RwBF9z9PNZV0OWrc7avoE") == 0) {
    extern mxArray *cgxe_1RwBF9z9PNZV0OWrc7avoE_BuildInfoUpdate(void);
    plhs[0] = cgxe_1RwBF9z9PNZV0OWrc7avoE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "qJo9cy3En3W2FoRCrT1BKC") == 0) {
    extern mxArray *cgxe_qJo9cy3En3W2FoRCrT1BKC_BuildInfoUpdate(void);
    plhs[0] = cgxe_qJo9cy3En3W2FoRCrT1BKC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "jqQlM94CMO87LGlwjb1OO") == 0) {
    extern mxArray *cgxe_jqQlM94CMO87LGlwjb1OO_BuildInfoUpdate(void);
    plhs[0] = cgxe_jqQlM94CMO87LGlwjb1OO_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "BEVhzztUAu7LIJpT1x8IZC") == 0) {
    extern mxArray *cgxe_BEVhzztUAu7LIJpT1x8IZC_BuildInfoUpdate(void);
    plhs[0] = cgxe_BEVhzztUAu7LIJpT1x8IZC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "fRmvTxZe2uD9E1EgoghCq") == 0) {
    extern mxArray *cgxe_fRmvTxZe2uD9E1EgoghCq_BuildInfoUpdate(void);
    plhs[0] = cgxe_fRmvTxZe2uD9E1EgoghCq_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "39dYKqcIOj3tuPvS2vxNOH") == 0) {
    extern mxArray *cgxe_39dYKqcIOj3tuPvS2vxNOH_fallback_info(void);
    plhs[0] = cgxe_39dYKqcIOj3tuPvS2vxNOH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "xdwqvjc2V7LaCE05bRJYlC") == 0) {
    extern mxArray *cgxe_xdwqvjc2V7LaCE05bRJYlC_fallback_info(void);
    plhs[0] = cgxe_xdwqvjc2V7LaCE05bRJYlC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "1RwBF9z9PNZV0OWrc7avoE") == 0) {
    extern mxArray *cgxe_1RwBF9z9PNZV0OWrc7avoE_fallback_info(void);
    plhs[0] = cgxe_1RwBF9z9PNZV0OWrc7avoE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "qJo9cy3En3W2FoRCrT1BKC") == 0) {
    extern mxArray *cgxe_qJo9cy3En3W2FoRCrT1BKC_fallback_info(void);
    plhs[0] = cgxe_qJo9cy3En3W2FoRCrT1BKC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "jqQlM94CMO87LGlwjb1OO") == 0) {
    extern mxArray *cgxe_jqQlM94CMO87LGlwjb1OO_fallback_info(void);
    plhs[0] = cgxe_jqQlM94CMO87LGlwjb1OO_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "BEVhzztUAu7LIJpT1x8IZC") == 0) {
    extern mxArray *cgxe_BEVhzztUAu7LIJpT1x8IZC_fallback_info(void);
    plhs[0] = cgxe_BEVhzztUAu7LIJpT1x8IZC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "fRmvTxZe2uD9E1EgoghCq") == 0) {
    extern mxArray *cgxe_fRmvTxZe2uD9E1EgoghCq_fallback_info(void);
    plhs[0] = cgxe_fRmvTxZe2uD9E1EgoghCq_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"
