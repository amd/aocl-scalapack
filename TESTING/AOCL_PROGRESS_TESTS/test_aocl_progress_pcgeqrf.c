#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#ifdef _WIN32
#include <time.h>
#else
#include <sys/times.h>
#endif
#include "mpi.h"

#define SL_complex_float    float _Complex

/** Typedefs  **/
typedef Int ( *aocl_scalapack_progress_callback )(
const char * const api,
const Int  *lenapi,
const Int  *progress,
const Int  *current_process,
const Int  *total_processes
);

/** Function prototype declarations  **/
void blacs_get_(Int*, Int*, Int*);
void blacs_pinfo_(Int*, Int*);
void blacs_gridinit_(Int*, char*, Int*, Int*);
void blacs_gridinfo_(Int*, Int*, Int*, Int*, Int*);
void descinit_(Int*, Int*, Int*, Int*, Int*, Int*, Int*, Int*, Int*, Int*);
void blacs_gridexit_(Int*);
void aocl_scalapack_set_progress(aocl_scalapack_progress_callback AOCL_progress_ptr);
Int AOCL_progress(const char* const api, const Int *lenapi, const Int *progress, const Int *mpi_rank, const Int *total_mpi_processes);
Int numroc_(Int*, Int*, Int*, Int*, Int*);
void pcgeqrf_(Int*, Int*, SL_complex_float*, Int*, Int*, Int*, SL_complex_float*, SL_complex_float*, Int*, Int*);
/** Prototype declaration end  **/

Int AOCL_progress(const char* const api, const Int *lenapi, const Int *progress, const Int *mpi_rank, const Int *total_mpi_processes)
{
    char api_name[20];
    memcpy(api_name, api, *lenapi);
    printf( "In AOCL Progress MPI Rank: %i    API: %s   progress: %i   MPI processes: %i\n", *mpi_rank, api_name, *progress,*total_mpi_processes );
    return 0;
}


int main(int argc, char **argv) {
    Int izero=0;
    Int ione=1;
    Int jone=1;
    Int myrank_mpi, nprocs_mpi;
    MPI_Init( &argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank_mpi);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs_mpi);

    Int n = 1000;       // (Global) Matrix size
    Int m = 1000;       // (Global) Matrix size
    Int nprow = 2;   // Number of row procs
    Int npcol = 2;   // Number of column procs
    Int nb = 256;      // (Global) Block size
    Int mb = 256;      // (Global) Block size
    char uplo='L';   // Matrix is lower triangular
    char layout='R'; // Block cyclic, Row major processor mapping

    printf("Usage: ./test matrix_size block_size nprocs_row nprocs_col\n");

    if(argc > 1) {
        m = atoi(argv[1]);
    }
    if(argc > 2) {
        n = atoi(argv[2]);
    }
    if(argc > 3) {
        mb = atoi(argv[3]);
    }
    if(argc > 4) {
        nb = atoi(argv[4]);
    }
    if(argc > 5) {
        nprow = atoi(argv[5]);
    }
    if(argc > 6) {
        npcol = atoi(argv[6]);
    }

    assert((int)nprow * (int)npcol == (int)nprocs_mpi);

    // Initialize BLACS
    Int iam, nprocs;
    Int zero = 0;
    Int ictxt, myrow, mycol;
    blacs_pinfo_(&iam, &nprocs) ; // BLACS rank and world size
    blacs_get_(&zero, &zero, &ictxt ); // -> Create context
    blacs_gridinit_(&ictxt, &layout, &nprow, &npcol ); // Context -> Initialize the grid
    blacs_gridinfo_(&ictxt, &nprow, &npcol, &myrow, &mycol ); // Context -> Context grid info (# procs row/col, current procs row/col)

    // Compute the size of the local matrices
    Int mpA    = numroc_( &m, &mb, &myrow, &izero, &nprow ); // My proc -> row of local A
    Int nqA    = numroc_( &n, &nb, &mycol, &izero, &npcol ); // My proc -> col of local A

    printf(" Proc %d/%d for MPI, proc %d/%d for BLACS in position (%d,%d)/(%d,%d) with local matrix %dx%d, global matrix %d, block size %d\n",myrank_mpi,nprocs_mpi,iam,nprocs,myrow,mycol,nprow,npcol,mpA,nqA,n,nb);

    // Allocate and fill the matrices A and B
    // A[I,J] = (I == J ? 5*n : I+J)
    SL_complex_float *A;
    A = (SL_complex_float *)calloc(mpA*nqA,sizeof(SL_complex_float)) ;
    if (A==NULL){ printf("Error of memory allocation A on proc %dx%d\n",myrow,mycol); exit(0); }
    SL_complex_float work_buffer_size;
    SL_complex_float *work, *tau;
    Int lwork = -1;
    tau = (SL_complex_float *)calloc((mpA+nqA),sizeof(SL_complex_float)) ;

    Int k = 0, i, j;
    for (j = 0; j < nqA; j++) { // local col
        Int l_j = j / nb; // which block
        Int x_j = j % nb; // where within that block
        Int J   = (l_j * npcol + mycol) * nb + x_j; // global col
        for (i = 0; i < mpA; i++) { // local row
            Int l_i = i / nb; // which block
            Int x_i = i % nb; // where within that block
            Int I   = (l_i * nprow + myrow) * nb + x_i; // global row
            assert(I < n);
            assert(J < n);
            if(I == J) {
                A[k] = n*n;
            } else {
                A[k] = I+J;
            }
            //printf("%d %d -> %d %d -> %f\n", i, j, I, J, A[k]);
            k++;
        }
    }

    // Create descriptor
    Int descA[9];
    Int info;
    Int lddA = mpA > 1 ? mpA : 1;
    descinit_( descA,  &n, &n, &nb, &nb, &izero, &izero, &ictxt, &lddA, &info);
    if(info != 0) {
        printf("Error in descinit, info = %i\n", info);
    }

    pcgeqrf_(&m, &n, A, &ione, &jone, descA, tau, &work_buffer_size, &lwork, &info);

    work = (SL_complex_float *)calloc(work_buffer_size, sizeof(SL_complex_float)) ;
    lwork = work_buffer_size;

    // Run pcgeqrf_ and measure time
    float MPIt1 = MPI_Wtime();
    printf("[%dx%d] Starting pcgeqrf\n", myrow, mycol);
    aocl_scalapack_set_progress(&AOCL_progress);
    pcgeqrf_(&m, &n, A, &ione, &jone, descA, tau, work, &lwork, &info);
    if (info != 0) {
        printf("Error in pcgeqrf, info = %i\n", info);
    }

    float MPIt2 = MPI_Wtime();
    printf("[%dx%d] Done, time %e s.\n", myrow, mycol, MPIt2 - MPIt1);
    free(A);

    // Exit and finalize
    blacs_gridexit_(&ictxt);
    MPI_Finalize();
    return 0;
}
