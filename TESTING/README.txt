Executing the AOCL-ScaLAPACK test suite
=======================================

To execute AOCL-ScaLAPACK test suite against different
MPI configurations (ranks, binding, etc) you can use the script called
'<aocl-scalapack>/scalapack_test.sh'

Ensure that the run time environment is configured for the maximum stack size:

Eg: For Linux, execute the below command before running the tests:
"ulimit -s unlimited"

Upon running 'scalapack_test.sh' the results will be saved in the
directory '$HOME/aocl_scalapack_testing_results'. The script provides
several command line options, and if no arguments are given, the
following default options will be used:

   a) MPI ranks => Maximum number of available cpu cores in the system
   b) Test programs => All the programs in AOCL-ScaLAPACK test suite
      will be executed
   c) MPI flavour => The script will search for the mpirun executable in the
      PATH variable and corresponding MPI installation will be used.
   d) MPI binding, mapping => The test will be performed only with
      'map-by core' and 'bind-to core'


Below are some helpful examples demonstrating different options:

Eg: To test only single precision cholesky transformation for all
    the MPI mapping for ranks between 4 to 16 use
    $ scalapack_test.sh -t xsllt -s 4 -i 1 -e 16 -c all

Eg: To test all the programs on a machine with 'n' cores
    $ scalapack_test.sh -t all -s <n>

Eg: To test all the programs with maximum avialable ranks
    with MPI mapping "map-by l3cache"
    $ scalapack_test.sh -t all -c map_l3cache

To view all the supported options execute the script with argument -h

Address Sanitizer(ASAN) testing:
================================

Address saitizer(ASAN) tests are supported through the AOCL-ScaLAPACK
test suite. To enable the same, include the build configure option
'-DENABLE_ASAN_TESTS=ON'.

Extended test suite for AOCL-ScaLAPACK:
=======================================

Extended test suite that includes additional cases such as

    a) Negative inputs.
    b) Early reuturn inputs.
    c) Extreme value inputs.
    
NOTE: Not all testing executable support the extended test suite.

Running extended test suite:
----------------------------

Eg: To test negative inputs and early return inputs.
    Upon building the AOCL-ScaLAPACK library, by default '.dat' files
    are copied from source TESTING folder to built TESTING folder.
    In order to test extended test cases, copy the '.dat' files present
    in the folder aocl-scalapack/TESTING/EXT_TESTS to TESTING folder
    of the built workspace replacing the existing '.dat' files.
    
    For instance:
    Running a test program:
    
    $ mpirun -np 4 ./xdinv

Eg: To test extreme value inputs.
    Upon building the AOCL-ScaLAPACK library, to test the infinity or NaN
    input values, refer below illustration.
    
    For instance:
    Infinity and NaN input values can be clubbed together or can be
    used individually. Percentage of infinity and NaNs can be altered.
      
    1)mpirun -np <mpi_ranks> ./<test_program> -inf <%_of_inf> 
      
     $ mpirun -np 4 ./xdinv -inf 10
        
    2)mpirun -np <mpi_ranks> ./<test_program> -nan <%_of_nan> 
      
     $ mpirun -np 4 ./xdinv -nan 10
        
    3)mpirun -np <mpi_ranks> ./<test_program> -inf <%_of_inf> -nan <%_of_nan>
      
     $ mpirun -np 4 ./xdinv -inf 10 -nan 30
      
      
    
    
