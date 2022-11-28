###############################################################################
Guidelines to enable logging and tracing in ScaLAPACK library
###############################################################################

Following are the steps to enable Trace and Log.

1.  Open header file "aocl-scalapack/AOCL_DTL/aocldtlcf.h"
      i.  Enable Trace by making the following macro as 1 :
            #define AOCL_DTL_TRACE_ENABLE       1
      ii.  Enable Log by making the following macro as 1 :
            #define AOCL_DTL_LOG_ENABLE         1

2.  After Step 1, configure the cmake with -DENABLE_DTL=ON config option to enable AOCL DTL feature.
    For Example: cmake .. -DBUILD_SHARED_LIBS=OFF -DBLAS_LIBRARIES="-fopenmp <blis_lib_path>libblis-mt.a" -DLAPACK_LIBRARIES=<libflame_lib_path>/libflame.a  -DCMAKE_CXX_COMPILER=mpicxx -DCMAKE_C_COMPILER=mpicc -DCMAKE_Fortran_COMPILER=mpif90  -DUSE_OPTIMIZED_LAPACK_BLAS=OFF -DENABLE_DTL=ON

3.  Currently the DTL is supported only for the LU factorization API 'pdgetrf'.

4.  After the ScaLAPACK test suite is built (Refer the latest AOCL-userGuide for the build steps), execute the LU test application (with command: "mpirun ./xdlu" ) to get the DTL trace, log files.
    For Example: "P31243_T31243_aocldtl_trace.txt" and "P31243_T31243_aocldtl_log.txt".
