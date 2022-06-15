#include "Bdef.h"

#if (INTFACE == C_CALL)
void Cblacs_pinfo(Int *mypnum, Int *nprocs)
#else
F_VOID_FUNC blacs_pinfo_(Int *mypnum, Int *nprocs)
#endif
{
   Int ierr;
   extern Int BI_Iam, BI_Np;
   MpiInt flag, Iam = BI_Iam, Np = BI_Np;
   MpiInt argc=0;
   char **argv=NULL;
   if (BI_COMM_WORLD == NULL)
   {
      MPI_Initialized(&flag);

      if (!flag) 
         ierr = MPI_Init(&argc,&argv);  // call Init and ignore argc and argv

      BI_COMM_WORLD = (Int *) malloc(sizeof(Int));
      *BI_COMM_WORLD = MPI_Comm_c2f(MPI_COMM_WORLD);
   }
   MPI_Comm_size(MPI_COMM_WORLD, &Np);
   MPI_Comm_rank(MPI_COMM_WORLD, &Iam);
   *mypnum = BI_Iam = Iam;
   *nprocs = BI_Np  = Np;
}
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_VOID_FUNC blacs_pinfo(Int *mypnum, Int *nprocs)
{
   blacs_pinfo_( mypnum, nprocs);
}

F_VOID_FUNC BLACS_PINFO(Int *mypnum, Int *nprocs)
{
   blacs_pinfo_( mypnum, nprocs);
}

F_VOID_FUNC BLACS_PINFO_(Int *mypnum, Int *nprocs)
{
   blacs_pinfo_( mypnum, nprocs);
}
#endif
