#AOCL-ScaLAPACK:
----------------
AOCL-ScaLAPACK is a library of high-performance linear algebra routines for parallel distributed memory machines.
It can be used to solve linear systems, least squares problems, eigenvalue problems, and singular value problems.

AOCL-ScaLAPACK is forked from upstream Netlib ScaLAPACK GitHub [repository](https://github.com/Reference-ScaLAPACK/scalapack).
This fork has ScaLAPACK optimized for AMD “Zen” core-based processors. It depends on external libraries BLAS and LAPACK.
For AMD CPUs, use of AOCL-BLIS, AOCL-libFLAME and AOCL-Utils is recommended.

#Installation:
--------------
1. Download the latest stable release from the Github repository GitHub URL: https://github.com/amd/aocl-scalapack
2. Install CMake on the machine where the sources are to be compiled.
3. Use the CMake based build system to compile and generate AOCL-ScaLAPACK library and test suite binary as 
   explained below for Linux® and Windows® platforms.

#Building AOCL-ScaLAPACK from Source on Linux
---------------------------------------------
#Prerequisites:
---------------
Following are the prerequisite libraries for building AOCL-ScaLAPACK:
- AOCL-BLAS
- AOCL-LAPACK
- AOCL-Utils
- An MPI library (validated with OpenMPI library)

#Build Instruction:
-------------------
1. Execute the command:
   $ cd aocl-scalapack
2. CMake as follows:
      a. Create a new directory. For example, build:
         $ mkdir build
         $ cd build
      b. Export PATH and LD_LIBRARY_PATH to the lib and bin folders of the MPI installation
         respectively:
         $ export PATH=<MPI installation folder>/bin:$PATH
         $ export LD_LIBRARY_PATH=<MPI installation folder>/lib:$LD_LIBRARY_PATH
      c. Run cmake command based on the compiler and the type of library generation required.
      
         #Note:
         ------ 
         1. AOCL-LAPACK is dependent on the AOCL-Utils library, which in turn depends on
            libstdc++. Hence, you must link with AOCL-Utils and libstdc++(-lstdc++) along with the
            AOCL-LAPACK library while specifying the path for LAPACK_LIBRARIES in the CMake flags.
         2. OpenMPI library must be compiled with respective compiler either with GCC or AOCC 
            before building static or shared library.
         3. For ILP64 - use flag [-DENABLE_ILP64=ON] with below configuration, default is LP64
         
         #Building static library using GCC/AOCC compiler:
         -------------------------------------------------
         i) Single-thread-AOCL-BLAS:
            $ cmake .. -DBUILD_SHARED_LIBS=OFF -DBLAS_LIBRARIES="-fopenmp <path to AOCL-BLAS library>/libblis.a" 
            -DLAPACK_LIBRARIES="-lstdc++ <path to AOCL-LAPACK library>/libflame.a <path to AOCL-Utils library>/libaoclutils.a" 
            -DCMAKE_C_COMPILER=mpicc -DCMAKE_Fortran_COMPILER=mpif90 -DUSE_OPTIMIZED_LAPACK_BLAS=OFF 
      
         ii)Multi-thread-AOCL-BLAS:
            $ cmake .. -DBUILD_SHARED_LIBS=OFF -DBLAS_LIBRARIES="-fopenmp <path to AOCL-BLAS library>/libblis-mt.a" 
            -DLAPACK_LIBRARIES="-lstdc++ <path to AOCL-LAPACK library>/libflame.a <path to AOCL-Utils library>/libaoclutils.a" 
            -DCMAKE_C_COMPILER=mpicc -DCMAKE_Fortran_COMPILER=mpif90 -DUSE_OPTIMIZED_LAPACK_BLAS=OFF
      
         #Building shared library using GCC/AOCC compiler:
         -------------------------------------------------
         i) Single-thread-AOCL-BLAS:
            $ cmake .. -DBUILD_SHARED_LIBS=ON -DBLAS_LIBRARIES="-fopenmp <path to AOCL-BLAS library>/libblis.so" 
            -DLAPACK_LIBRARIES="-lstdc++ <path to AOCL-LAPACK library>/libflame.so <path to AOCL-Utils library>/libaoclutils.so" 
            -DCMAKE_C_COMPILER=mpicc -DCMAKE_Fortran_COMPILER=mpif90 -DUSE_OPTIMIZED_LAPACK_BLAS=OFF
      
         ii)Multi-thread-AOCL-BLAS:
            $ cmake .. -DBUILD_SHARED_LIBS=ON -DBLAS_LIBRARIES="-fopenmp <path to AOCL-BLAS library>/libblis-mt.so" 
            -DLAPACK_LIBRARIES="-lstdc++ <path to AOCL-LAPACK library>/libflame.so <path to AOCL-Utils library>/libaoclutils.so" 
            -DCMAKE_C_COMPILER=mpicc -DCMAKE_Fortran_COMPILER=mpif90 -DUSE_OPTIMIZED_LAPACK_BLAS=OFF
      
         #Static library with external BLACS library:
         --------------------------------------------
         $ cmake .. -DBUILD_SHARED_LIBS=OFF -DBLAS_LIBRARIES="-fopenmp <path to AOCL-BLAS library>/libblis-mt.a" 
           -DLAPACK_LIBRARIES="-lstdc++ <path to AOCL-LAPACK library>/libflame.a <path to AOCL-Utils library>/libaoclutils.a" 
           -DBLACS_LIBRARIES=<path to BLACS library>/libBLACS.a -DCMAKE_C_COMPILER=mpicc -DCMAKE_Fortran_COMPILER=mpif90 
           -DUSE_OPTIMIZED_LAPACK_BLAS=OFF
      
         #Static library with Intel MPI and ICC compiler:
         ------------------------------------------------
         $ cmake .. -DBUILD_SHARED_LIBS=OFF -DBLAS_LIBRARIES="-fopenmp <path to AOCL-BLAS library>/libblis-mt.a" 
           -DLAPACK_LIBRARIES="-lstdc++ -fopenmp <path to AOCL-LAPACK library>/libflame.a <path to AOCL-Utils library>/libaoclutils.a" 
           -DCMAKE_C_COMPILER=mpiicc -DCMAKE_Fortran_COMPILER=mpiifort -DUSE_OPTIMIZED_LAPACK_BLAS=OFF;
      
      d. Ensure CMake locates AOCL-LAPACK and AOCL-BLAS libraries. On completion, a message, “LAPACK routine dgesv is found: 1” 
         similar to the following in CMake output is displayed:
         -- CHECKING BLAS AND LAPACK LIBRARIES
         -- --> LAPACK supplied by user is <path>/libflame.a.
         -- --> LAPACK routine dgesv is found: 1.
         -- --> LAPACK supplied by user is WORKING, will use <path>/libflame.a.
         -- BLAS library: <path>/libblis.a
         -- LAPACK library: <path>/libflame.a
      
      e. Compile the code:
         $ make -j
         
      #Note: On Linux, the inbuilt communications sub-module of AOCL-ScaLAPACK, called Basic Linear Algebra Communication Subprogram (BLACS), 
             exposes the API symbols in lower case with underscore format.

#Building AOCL-ScaLAPACK from Source on Windows
-----------------------------------------------
#Prerequisites:
---------------
Following are the prerequisite libraries for building AOCL-ScaLAPACK:
- AOCL-BLAS, AOCL-LAPACK and AOCL-Utils libraries
- Windows10/11 or Windows Server 2019/2022
- LLVM 15/16
- LLVM plug-in for Microsoft Visual Studio (if latest version of LLVM is installed separately,
  this plug-in enables linking Microsoft Visual Studio with the installed LLVM toolchain)
- CMake versions 3.0 through 3.23.3
- Intel MPI compiler
- Microsoft Visual Studio 2019 (build 16.8.7) through 2022 (build 17.3.2)
- Microsoft Visual Studio tools
  - Python development
  - Desktop development with C++: C++ Clang-Cl for v142 build tool (x64 or x86)

#Build Instruction
------------------
1. Preparing and Building Project with CMake GUI:
   
      a. Set the source (folder containing aocl-scalapack source code) and build (folder in which the
         project files will be generated, for example, out) folder paths. It is not recommended to use the
         folder named build as a folder with that name exists at the top of AOCL-LAPACK source tree.
      b. Click on the Configure button to prepare the project options.
      c. Set the generator to Visual Studio 17 2022 and the compiler to ClangCl or LLVM.
      d. Select the available and recommended options in CMake GUI.
      e. Click the Generate button and then Open Project.
      f. Open the project generated by CMake (build folder) in (Point#a)
      g. To generate the AOCL-ScaLAPACK binaries, build the ScaLAPACK project. The library files would be 
         generated in the folder /out based on the project settings.
   
2. Configuring and Building Project with Command-line Arguments:
    
      a. In the ScaLAPACK project folder, create a folder out.
         $ cd aocl-scalapack
         $ mkdir out
      b. Open the command prompt in out directory and run the following command:
         $ cd out
         $ cmake -S .. -B . -G "Visual Studio 17 2022" -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON 
           -DCDEFS=UpCase -DBUILD_STATIC_LIBS=OFF -DBLAS_LIBRARIES="<path to AOCL-BLAS library>/AOCLLibBlis-Win-MT-dll.lib" 
           -DLAPACK_LIBRARIES="<path to AOCL-LAPACK library>/AOCL-LibFLAME-Win-MT-dll.lib;<path to AOCLUtils library>/libaoclutils.lib
      c. Open command prompt in the aocl-scalapack/out directory.
         $ cd aocl-scalapack/out
      d. Invoke CMake with the build command and release or debug option.
         $ cmake --build . --config Release

      e. The library files would be generated inside /out/Release or /out/Debug folder, based on the project settings.
      
      #Example:
       aocl-scalapack/out/lib/Release/scalapack.lib
       aocl-scalapack/out/Testing/Release/scalapack.dll
         
      #Note: On Windows, the inbuilt communications submodule of ScaLAPACK, called Basic Linear Algebra Communication Subprograms(BLACS), 
             exposes the API symbols in upper case without underscore format.

#Additional Library Build Options
---------------------------------
Use the following additional options to configure your build:

Option                              |  Description
------------------------------------|--------------------------------------------------------------------------------------------------------------
ENABLE_ILP64                        |  Enable ILP64 build (Disabled by default)
ENABLE_DTL                          |  Enable Trace and Log feature (Disabled by default)
ENABLE_AOCL_PROGRESS                |  Enable AOCL Progress feature which check how far a computation has progressed through a callback 
                                       function for 3 major factorization APIs (LU, QR, Cholesky ) for all data type variants (Disabled by default)
ENABLE_DRIVER_CHECK                 |  This flag specifies whether to enable checking for negative inputs and early return test cases from the driver                                           file or ScaLAPACK API. (Disabled by default)
ENABLE_ASAN_TESTS                   |  Enable Address sanitizer tests feature (Disabled by default)
ENABLE_COVERAGE                     |  Enable code coverage feature (Disabled by default)
ENABLE_SET_LIB_VERSION              |  Include build number in the version string (Disabled by default)
ENABLE_LARGE_MATRIX_TESTING         |  Dynamic allocation of work buffer memory in test code, which is helpful to test larger matrix 
                                       sizes more than 2K (Disabled by default)
CDEFS                               |  Enable Fortran to C Name Mangling build option types i.e., Naming strategy needed for a fortran routine 
                                       to call a C routine.
                                       Supported values: -DCDEFS=UpCase/NoChange/Add_
                                       Windows default: -DCDEFS=UpCase
                                       Linux default: -DCDEFS=Add_
SCALAPACK_BUILD_SOURCE              |  This flag specifies whether to compile the ScaLAPACK source files and build the ScaLAPACK library (Enabled by                                            default)
SCALAPACK_BUILD_TESTS               |  This flag specifies whether to compile and build the ScaLAPACK test framework (Enabled by default)
SCALAPACK_LIBRARY_PATH              |  This flag specifies the path to the ScaLAPACK library when -DSCALAPACK_BUILD_SOURCE=OFF 
                                       -DSCALAPACK_LIBRARY_PATH="/home/amd/shared" (this is an example, path can be anything)

#Enabling DTL at run-time
# To enables the log file, trace file and progress feature at run time in Linux use below command:
- export AOCL_SL_LOG=1 
- export AOCL_SL_TRACE=1
- export AOCL_SL_PROGRESS=1

# To enables the log file, trace file and progress feature at run time in Windows use below command:
- set AOCL_SL_LOG=1
- set AOCL_SL_TRACE=1
- set AOCL_SL_PROGRESS=1

#Running Test Application On Linux:
-----------------------------------
The test application binaries are generated in the <aocl-scalapack>/build/TESTING folder.
You can find the applications demonstrating the usage of ScaLAPACK APIs in the TESTING
directory of ScaLAPACK source package

#Example:
$ cd aocl-scalapack/TESTING
$ mpirun -np 4 ./xdlu

#Running Test Application On Windows:
-------------------------------------
The test application binaries are generated in the folder <aocl-scalapack>/out/Testing/Release or
<aocl-scalapack>/out/Testing/Debug based on the project settings. Run the tests from the command
prompt as follows:

#Example:
$ cd aocl-scalapack/out/Testing/Release
$ mpiexec -np 4 xdlu.exe

#CONTACTS
---------
AOCL-ScaLAPACK is developed and maintained by AMD.
For support, send an email to toolchainsupport@amd.com.