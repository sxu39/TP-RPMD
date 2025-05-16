#define GIT_SUMM 
#define GIT_HASH 
#define GIT_BRANCH master
#define GIT_DATE 
#define DEEPMD_ROOT /root/software/deepmd-kit/source/build/c_interfere
#define TensorFlow_INCLUDE_DIRS /root/software/deepmd-kit/dp/lib/python3.10/site-packages/tensorflow/include;/root/software/deepmd-kit/dp/lib/python3.10/site-packages/tensorflow/include
#define TensorFlow_LIBRARY /root/software/deepmd-kit/dp/lib/python3.10/site-packages/tensorflow/libtensorflow_cc.so.2
#define DPMD_CVT_STR(x) #x
#define DPMD_CVT_ASSTR(X) DPMD_CVT_STR(X)
#define STR_GIT_SUMM DPMD_CVT_ASSTR(GIT_SUMM)
#define STR_GIT_HASH DPMD_CVT_ASSTR(GIT_HASH)
#define STR_GIT_BRANCH DPMD_CVT_ASSTR(GIT_BRANCH)
#define STR_GIT_DATE DPMD_CVT_ASSTR(GIT_DATE)
#define STR_FLOAT_PREC DPMD_CVT_ASSTR(FLOAT_PREC)
#define STR_DEEPMD_ROOT DPMD_CVT_ASSTR(DEEPMD_ROOT)
#define STR_TensorFlow_INCLUDE_DIRS DPMD_CVT_ASSTR(TensorFlow_INCLUDE_DIRS)
#define STR_TensorFlow_LIBRARY DPMD_CVT_ASSTR(TensorFlow_LIBRARY)
