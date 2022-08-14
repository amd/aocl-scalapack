Checking AOCL-ScaLAPACK Operation Progress

AOCL libraries may be used to perform lengthy computations (for example, matrix multiplications, solver involving large matrices). These operations/computations may go on for hours. 

AOCL progress feature provides mechanism for the application to check how far the computations have progressed. Selected set of APIs of AOCL libraries periodically updates the application with progress made so far via a callback function.

Usage:

The Application needs to define a callback function in specific format and register this callback function with the AOCL-ScaLAPACK library.

The callback function prototype must be as defined below.
int aocl_scalapack_progress(
char* api,
integer lenapi,
integer *progress,
integer *mpi_rank,
integer *total_mpi_processes
)


The table below explains various parameters
Parameters           |        Purpose
---------------------------------------------------------------------
api                  |   Name of the API which is currently running
lenapi	             |   Length of API name character buffer
progress             |   Linear progress made in current thread so far
mpi_rank             |   Current process rank
total_mpi_processes  |   Total number of processes used to perform the operation

Callback Registration: 

The callback function must be registered with library for it to report the progress. 

aocl_scalapack_set_progress(aocl_scalapack_progress);   

Example:
int aocl_scalapack_progress(char* api, int *lenapi, int *progress, int *mpi_rank, int *total_mpi_processes)
{
    printf( "In AOCL Progress MPI Rank: %i    API: %s   progress: %i   MPI processes: %i\n", *mpi_rank, api, *progress,*total_mpi_processes );
    return 0;
}

Limitations
- AOCL-ScALAPACK Progress feature is currently supported only on Linux


Procedure to build and run the sample application with aocl progress feature:
=============================================================================

1) copy below AOCL libraries to the "<aocl-scalapack>/EXAMPLE/aocl_progress_example/" folder:
   1) libscalapack.a
   2) libflame.a
   3) blis-mt.a

2) Run the below command to build the 'pdgetrf' test application with 'aocl-progress' feature.
   mpicc -O0 -g pdgerf_example_app.c  libscalapack.a libflame.a  -fopenmp libblis-mt.a -lm -lgfortran -o test

3) Run the below commands to run the application:
   Ex: mpirun -np 4 ./test  32  8 2 2
       mpirun -np 8 ./test 1024 32 4 2
