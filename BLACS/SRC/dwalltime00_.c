#include "Bdef.h"

#if (INTFACE == C_CALL)
double Cdwalltime00(void)
#else
F_DOUBLE_FUNC dwalltime00_(void)
#endif
{
   return(MPI_Wtime());
}
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_DOUBLE_FUNC dwalltime00(void)
{
   return dwalltime00_();
}

F_DOUBLE_FUNC DWALLTIME00(void)
{
   return dwalltime00_();
}

F_DOUBLE_FUNC DWALLTIME00_(void)
{
   return dwalltime00_();
}
#endif
