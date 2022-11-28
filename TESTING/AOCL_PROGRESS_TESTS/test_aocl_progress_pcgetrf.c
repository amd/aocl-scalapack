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

void blacs_get_(Int*, Int*, Int*);
void blacs_pinfo_(Int*, Int*);
void blacs_gridinit_(Int*, char*, Int*, Int*);
void blacs_gridinfo_(Int*, Int*, Int*, Int*, Int*);
void descinit_(Int*, Int*, Int*, Int*, Int*, Int*, Int*, Int*, Int*, Int*);
void pcgetrf_(Int*, Int*, SL_complex_float*, Int*, Int*, Int*, Int*, Int*);
void blacs_gridexit_(Int*);
Int numroc_(Int*, Int*, Int*, Int*, Int*);

Int AOCL_progress(char* api, Int *lenapi, Int *progress, Int *mpi_rank, Int *total_mpi_processes);

Int AOCL_progress(char* api, Int *lenapi, Int *progress, Int *mpi_rank, Int *total_mpi_processes)
{
    char api_name[20];
    memcpy(api_name, api, *lenapi);
    printf( "In AOCL Progress MPI Rank: %i    API: %s   progress: %i   MPI processes: %i\n", *mpi_rank, api_name, *progress,*total_mpi_processes );
    return 0;
}


int main(int argc, char **argv) {
    Int izero=0;
    Int ione=1;
    Int myrank_mpi, nprocs_mpi;
    MPI_Init( &argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank_mpi);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs_mpi);

    Int n = 1000;       // (Global) Matrix size
    Int nprow = 2;   // Number of row procs
    Int npcol = 2;   // Number of column procs
    Int nb = 256;      // (Global) Block size
    char uplo='L';   // Matrix is lower triangular
    char layout='R'; // Block cyclic, Row major processor mapping

    printf("Usage: ./test matrix_size block_size nprocs_row nprocs_col\n");

    if(argc > 1) {
        n = atoi(argv[1]);
    }
    if(argc > 2) {
        nb = atoi(argv[2]);
    }
    if(argc > 3) {
        nprow = atoi(argv[3]);
    }
    if(argc > 4) {
        npcol = atoi(argv[4]);
    }

    assert((int)nprow * (int)npcol == (int)nprocs_mpi);
    // assert(nprow * npcol == nprocs_mpi);

    // Initialize BLACS
    Int iam, nprocs;
    Int zero = 0;
    Int ictxt, myrow, mycol;
    blacs_pinfo_(&iam, &nprocs) ; // BLACS rank and world size
    blacs_get_(&zero, &zero, &ictxt ); // -> Create context
    blacs_gridinit_(&ictxt, &layout, &nprow, &npcol ); // Context -> Initialize the grid
    blacs_gridinfo_(&ictxt, &nprow, &npcol, &myrow, &mycol ); // Context -> Context grid info (# procs row/col, current procs row/col)

    // Compute the size of the local matrices
    Int mpA    = numroc_( &n, &nb, &myrow, &izero, &nprow ); // My proc -> row of local A
    Int nqA    = numroc_( &n, &nb, &mycol, &izero, &npcol ); // My proc -> col of local A

    printf(" Proc %d/%d for MPI, proc %d/%d for BLACS in position (%d,%d)/(%d,%d) with local matrix %dx%d, global matrix %d, block size %d\n",myrank_mpi,nprocs_mpi,iam,nprocs,myrow,mycol,nprow,npcol,mpA,nqA,n,nb);

    // Allocate and fill the matrices A and B
    // A[I,J] = (I == J ? 5*n : I+J)
    SL_complex_float *A;
	Int *IPPIV;
    A = (SL_complex_float *)calloc(mpA*nqA,sizeof(SL_complex_float)) ;
    if (A==NULL){ printf("Error of memory allocation A on proc %dx%d\n",myrow,mycol); exit(0); }
	
    IPPIV = (Int *)calloc(2*n,sizeof(Int)) ;
    if (IPPIV==NULL){ printf("Error of memory allocation IPPIV %d\n",2*n); exit(0); }
	
    Int k = 0;
    for (Int j = 0; j < nqA; j++) { // local col
        Int l_j = j / nb; // which block
        Int x_j = j % nb; // where within that block
        Int J   = (l_j * npcol + mycol) * nb + x_j; // global col
        for (Int i = 0; i < mpA; i++) { // local row
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

    // Run pcgetrf and time
    float MPIt1 = MPI_Wtime();
    printf("[%dx%d] Starting pcgetrf\n", myrow, mycol);
    aocl_scalapack_set_progress(&AOCL_progress);
    pcgetrf_( &n, &n, A,  &ione, &ione, descA, IPPIV, &info );

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
