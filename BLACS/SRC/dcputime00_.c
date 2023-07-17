#include "Bdef.h"

#if (INTFACE == C_CALL)
double Cdcputime00(void)
#else
F_DOUBLE_FUNC dcputime00_(void)
#endif
{
   return(-1.0);
}
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_DOUBLE_FUNC dcputime00(void)
{
   return dcputime00_();
}

F_DOUBLE_FUNC DCPUTIME00(void)
{
   return dcputime00_();
}

F_DOUBLE_FUNC DCPUTIME00_(void)
{
   return dcputime00_();
}
#endif
