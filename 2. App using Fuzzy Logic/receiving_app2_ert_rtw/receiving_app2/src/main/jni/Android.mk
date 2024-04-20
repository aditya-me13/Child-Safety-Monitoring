LOCAL_PATH := ..
include $(CLEAR_VARS)
LOCAL_MODULE := receiving_app2
LOCAL_CFLAGS += -DDEBUG_ANDROID -DMODEL=receiving_app2 -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT -DPORTABLE_WORDSIZES -DDRIVER_ANDROID_AUDIOPLAYBACK 
LOCAL_CPPFLAGS := -std=c++11
LOCAL_SRC_FILES := MW_TCPSendReceive.c ert_main.c receiving_app2.c receiving_app2_data.c rtGetInf.c rtGetNaN.c rt_nonfinite.c androidinitialize.c driver_android_audioplayback.c audio_engine.cpp audio_player.cpp driver_android_datadisplay.c driver_android_tcp_log.c 
LOCAL_C_INCLUDES += D:/Courses/ES245_ControlSystems/FINAL/Assignment1 C:/PROGRA~3/MATLAB/SUPPOR~1/R2022b/toolbox/target/SUPPOR~1/android/include C:/PROGRA~3/MATLAB/SUPPOR~1/R2022b/toolbox/target/SUPPOR~1/SHARED~1/include D:/Courses/ES245_ControlSystems/FINAL/Assignment1/receiving_app2_ert_rtw D:/MATLAB/extern/include D:/MATLAB/simulink/include D:/MATLAB/rtw/c/src D:/MATLAB/rtw/c/src/ext_mode/common D:/MATLAB/rtw/c/ert 
LOCAL_LDLIBS  +=  -llog -ldl -lOpenSLES -latomic
include $(BUILD_SHARED_LIBRARY)
