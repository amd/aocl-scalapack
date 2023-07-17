#include "Bdef.h"

#if (INTFACE == C_CALL)
Int Cblacs_pnum(Int ConTxt, Int prow, Int pcol)
#else
F_INT_FUNC blacs_pnum_(Int *ConTxt, Int *prow, Int *pcol)
#endif
{
   BLACSCONTEXT *ctxt;

   MGetConTxt(Mpval(ConTxt), ctxt);
   if ( (Mpval(prow) >= 0) && (Mpval(prow) < ctxt->cscp.Np) &&
        (Mpval(pcol) >= 0) && (Mpval(pcol) < ctxt->rscp.Np) )
      return( Mkpnum(ctxt, Mpval(prow), Mpval(pcol)) );
   else return(-1);
}
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_INT_FUNC blacs_pnum(Int *ConTxt, Int *prow, Int *pcol)
{
   return blacs_pnum_( ConTxt, prow, pcol);
}

F_INT_FUNC BLACS_PNUM(Int *ConTxt, Int *prow, Int *pcol)
{
   return blacs_pnum_( ConTxt, prow, pcol);
}

F_INT_FUNC BLACS_PNUM_(Int *ConTxt, Int *prow, Int *pcol)
{
   return blacs_pnum_( ConTxt, prow, pcol);
}
#endif
