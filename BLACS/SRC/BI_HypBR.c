#include "Bdef.h"

Int BI_HypBR(BLACSCONTEXT *ctxt, BLACBUFF *bp, SDRVPTR send, Int src)
{
   void BI_Srecv(BLACSCONTEXT *, Int, Int, BLACBUFF *);
   Int relnode, bit, Np, Iam, msgid;

   Np = ctxt->scp->Np;
   Iam = ctxt->scp->Iam;
   msgid = Mscopeid(ctxt);

   for (bit=2; bit < Np; bit <<= 1);
   if (bit^Np) return(NPOW2);  /* not a power of 2 */
   relnode = Iam ^ src;

   BI_Srecv(ctxt, BANYNODE, msgid, bp);
   for(bit=1; (bit^Np); bit <<= 1)
      if (bit > relnode) send(ctxt, Iam^bit, msgid, bp);

   return(0);
}
