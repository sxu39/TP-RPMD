DEEPMD_ROOT=/root/software/deepmd-kit/source/build/c_interfere
TENSORFLOW_INCLUDE_DIRS="/root/software/deepmd-kit/dp/lib/python3.10/site-packages/tensorflow/include;/root/software/deepmd-kit/dp/lib/python3.10/site-packages/tensorflow/include"
TENSORFLOW_LIBRARY_PATH="/root/software/deepmd-kit/dp/lib/python3.10/site-packages/tensorflow"

TF_INCLUDE_DIRS=`echo $TENSORFLOW_INCLUDE_DIRS | sed "s/;/ -I/g"`
TF_LIBRARY_PATH=`echo $TENSORFLOW_LIBRARY_PATH | sed "s/;/ -L/g"`
TF_RPATH=`echo $TENSORFLOW_LIBRARY_PATH | sed "s/;/ -Wl,-rpath=/g"`

NNP_INC=" -DLAMMPS_VERSION_NUMBER=$(./lmp_version.sh) -I$DEEPMD_ROOT/include/ "
NNP_PATH=" -L$TF_LIBRARY_PATH -L$DEEPMD_ROOT/lib"
NNP_LIB=" -Wl,--no-as-needed -ldeepmd_c -Wl,-rpath=$TF_RPATH -Wl,-rpath=$DEEPMD_ROOT/lib"
