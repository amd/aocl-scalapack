#include "Bdef.h"

#if (INTFACE == C_CALL)
void Cblacs_gridinfo(Int ConTxt, Int *nprow, Int *npcol, Int *myrow, Int *mycol)
#else
F_VOID_FUNC blacs_gridinfo_(Int *ConTxt, Int *nprow, Int *npcol,
                            Int *myrow, Int *mycol)
#endif
{
   extern BLACSCONTEXT **BI_MyContxts;
   extern Int BI_MaxNCtxt;
   BLACSCONTEXT *ctxt;
/*
 * Make sure context handle is in range
 */
   if ( (Mpval(ConTxt) >= 0) && (Mpval(ConTxt) < BI_MaxNCtxt) )
   {
/*
 *    Make sure context is still defined
 */
      ctxt = BI_MyContxts[Mpval(ConTxt)];
      if (ctxt != NULL)
      {
         *nprow = ctxt->cscp.Np;
         *npcol = ctxt->rscp.Np;
         *myrow = ctxt->cscp.Iam;
         *mycol = ctxt->rscp.Iam;
      }
      else *nprow = *npcol = *myrow = *mycol = -1;
   }
   else *nprow = *npcol = *myrow = *mycol = -1;
}
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_VOID_FUNC blacs_gridinfo(Int *ConTxt, Int *nprow, Int *npcol,
                            Int *myrow, Int *mycol)
{
   blacs_gridinfo_( ConTxt, nprow, npcol, myrow, mycol);
}

F_VOID_FUNC BLACS_GRIDINFO(Int *ConTxt, Int *nprow, Int *npcol,
                            Int *myrow, Int *mycol)
{
   blacs_gridinfo_( ConTxt, nprow, npcol, myrow, mycol);
}

F_VOID_FUNC BLACS_GRIDINFO_(Int *ConTxt, Int *nprow, Int *npcol,
                            Int *myrow, Int *mycol)
{
   blacs_gridinfo_( ConTxt, nprow, npcol, myrow, mycol);
}
#endif
