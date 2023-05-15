Checking the progress of AOCL-ScaLAPACK Operations
==================================================

AOCL libraries may be used to perform lengthy computations (Eg: matrix multiplications,
solver involving large matrices, etc). These operations/computations may go on for hours.

AOCL progress feature provides mechanism for the application to check how far
the computations have progressed. Selected set of APIs of AOCL libraries
periodically updates the application with progress made so far via a callback function.

AOCL progress is supported for the below APIs:
 1) Cholesky (pcpotrf, pdpotrf, pspotrf, pzpotrf)
 2) LU factorization (pcgetrf, pdgetrf, psgetrf, pzgetrf)
 3) QR factorization (pcgeqrf, pdgeqrf, psgeqrf, pzgeqrf)

Usage
=====
The Application needs to define a callback function in specific
format and register this callback function with the AOCL-ScaLAPACK library.

The callback function prototype must be as defined below.
int aocl_scalapack_progress(const char *const api,
                            const integer *lenapi,
                            const integer *progress,
                            const integer *mpi_rank,
                            const integer *total_mpi_processes)

The table below explains various parameters:
-----------------------------------------------------------------------------
Parameters           |        Purpose
-----------------------------------------------------------------------------
api                  |   Name of the API which is currently running
lenapi	             |   Length of API name character buffer
progress             |   Linear progress made in current thread so far
mpi_rank             |   Current process rank
total_mpi_processes  |   Total number of processes used to perform the operation

Callback Registration:
----------------------
The callback function must be registered with library for it to report the progress.

aocl_scalapack_set_progress(aocl_scalapack_progress);

Example:
--------
int aocl_scalapack_progress(const char* const api, const int *lenapi,
                            const int *progress, const int *mpi_rank,
                            const int *total_mpi_processes)
{
    printf("In AOCL Progress MPI Rank:%i, API:%s, progress:%i, MPI processes:%i\n",
           *mpi_rank, api, *progress,*total_mpi_processes);
    return 0;
}

Procedure to build and run the sample application with aocl progress feature
============================================================================

1) The scalapack build system generates aocl-progress related test binaries
   along with test suite application as part of the build process.
   Refer AOCL User guide for the scalapack build process.

2) The aocl-progress related tests generated in 'TESTING/AOCL_PROGRESS_TESTS' folder in the build folder.

3) The aocl-progress related tests can be run with the below command:
   Eg: mpirun -np 4 ./xap_pdgetrf  32  8 2 2
       mpirun -np 8 ./xap_pdgetrf 1024 32 4 2
