Executing the AOCL-ScaLAPACK test suite
=======================================

To execute AOCL-ScaLAPACK test suite against different
MPI configurations (ranks, binding, etc) you can use the script called
'<aocl-scalapack>/scalapack_test.sh'

Upon running scalapack_test.sh the results will be saved in the
directory $HOME/aocl_scalapack_testing_results. The script provides
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

Eg: To test all the programs with maximum avialable ranks
    with MPI mapping "map-by l3cache"
    $ scalapack_test.sh -t all -c map_l3cache

To view all the supported options execute the script with argument -h

Address Sanitizer(ASAN) testing:
================================

Address saitizer(ASAN) tests are supported through the AOCL-ScaLAPACK
test suite. To enable the same, include the build configure option
'-DENABLE_ASAN_TESTS=ON'.
