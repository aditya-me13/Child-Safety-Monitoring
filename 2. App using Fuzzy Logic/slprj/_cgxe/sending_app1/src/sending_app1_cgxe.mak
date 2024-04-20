# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = sending_app1
TARGET = cgxe
MODULE_SRCS 	= m_39dYKqcIOj3tuPvS2vxNOH.c m_xdwqvjc2V7LaCE05bRJYlC.c m_1RwBF9z9PNZV0OWrc7avoE.c m_qJo9cy3En3W2FoRCrT1BKC.c m_jqQlM94CMO87LGlwjb1OO.c m_BEVhzztUAu7LIJpT1x8IZC.c m_fRmvTxZe2uD9E1EgoghCq.c
MODEL_SRC	= sending_app1_cgxe.c
MODEL_REG = sending_app1_cgxe_registry.c
MAKEFILE    = sending_app1_cgxe.mak
MATLAB_ROOT	= D:\MATLAB
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------


USER_INCLUDES   =  /I "D:\Courses\es245_controlsystems\FINAL\slprj\_cgxe\sending_app1\src" /I "D:\Courses\es245_controlsystems\FINAL" /I "D:\Courses\ES245_ControlSystems\FINAL\slprj\_cprj"

MLSL_INCLUDES     = \
    /I "D:\MATLAB\extern\include" \
    /I "D:\MATLAB\simulink\include" \
    /I "D:\MATLAB\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "D:\Courses\ES245_ControlSystems\FINAL\slprj\_cgxe\sending_app1\src" /I "D:\Courses\ES245_ControlSystems\FINAL"
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /c /Zp8 /GR /w /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD   
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

USER_OBJS =

AUX_SRCS = D:\MATLAB\extern\version\c_mexapi_version.c  

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = sending_app1_cgxe.mol
TMWLIB = "D:\MATLAB\extern\lib\win64\microsoft\libmx.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmex.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmat.lib" "D:\MATLAB\extern\lib\win64\microsoft\libfixedpoint.lib" "D:\MATLAB\extern\lib\win64\microsoft\libut.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwmathutil.lib" "D:\MATLAB\extern\lib\win64\microsoft\libemlrt.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwcgxert.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwcgxeooprt.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwslccrt.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwstringutil.lib" "D:\MATLAB\lib\win64\libmwipp.lib" "D:\MATLAB\extern\lib\win64\microsoft\libcovrt.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwsl_sfcn_cov_bridge.lib" "D:\MATLAB\extern\lib\win64\microsoft\libmwdsp_halidesim.lib" "D:\MATLAB\extern\lib\win64\microsoft\dspcgsim.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
all : $(MEX_FILE_NAME) 


$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(TMWLIB) $(THIRD_PARTY_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

