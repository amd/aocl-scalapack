#include "Bdef.h"

#if (INTFACE == C_CALL)
void Cblacs_pcoord(Int ConTxt, Int nodenum, Int *prow, Int *pcol)
#else
F_VOID_FUNC blacs_pcoord_(Int *ConTxt, Int *nodenum, Int *prow, Int *pcol)
#endif
{
   BLACSCONTEXT *ctxt;

   MGetConTxt(Mpval(ConTxt), ctxt);
   if ( (Mpval(nodenum) >= 0) && (Mpval(nodenum) < ctxt->ascp.Np) )
   {
      Mpcoord(ctxt, Mpval(nodenum), *prow, *pcol);
   }
   else *prow = *pcol = -1;
}
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_VOID_FUNC blacs_pcoord(Int *ConTxt, Int *nodenum, Int *prow, Int *pcol)
{
   blacs_pcoord_( ConTxt, nodenum, prow, pcol);
}

F_VOID_FUNC BLACS_PCOORD(Int *ConTxt, Int *nodenum, Int *prow, Int *pcol)
{
   blacs_pcoord_( ConTxt, nodenum, prow, pcol);
}

F_VOID_FUNC BLACS_PCOORD_(Int *ConTxt, Int *nodenum, Int *prow, Int *pcol)
{
   blacs_pcoord_( ConTxt, nodenum, prow, pcol);
}
#endif
