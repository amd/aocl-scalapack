#include "Bdef.h"

#if (INTFACE == C_CALL)
void Ccgesd2d(Int ConTxt, Int m, Int n, float *A, Int lda,
              Int rdest, Int cdest)
#else
F_VOID_FUNC cgesd2d_(Int *ConTxt, Int *m, Int *n, float *A, Int *lda,
                     Int *rdest, Int *cdest)
#endif
/*
 *  -- V1.1 BLACS routine --
 *  University of Tennessee, May 1, 1996
 *  Written by Clint Whaley.
 *
 *  Purpose
 *  =======
 *  Locally-blocking point-to-point general complex send.
 *
 *  Arguments
 *  =========
 *
 *  ConTxt  (input) Ptr to Int
 *          Index into MyConTxts00 (my contexts array).
 *
 *  M       (input) Ptr to Int
 *          The number of rows of the matrix A.  M >= 0.
 *
 *  N       (input) Ptr to Int
 *          The number of columns of the matrix A.  N >= 0.
 *
 *  A       (input) Ptr to complex two dimensional array
 *          The m by n matrix A.  Fortran77 (column-major) storage
 *          assumed.
 *
 *  LDA     (input) Ptr to Int
 *          The leading dimension of the array A.  LDA >= M.
 *
 *  RDEST   (input) Ptr to Int
 *          The process row of the destination process.
 *
 *  CDEST   (input) Ptr to Int
 *          The process column of the destination process.
 *
 * ------------------------------------------------------------------------
 */
{
   void BI_ArgCheck(Int, Int, char *, char, char, char, Int, Int, Int, Int,
                    Int *, Int *);
   MPI_Datatype BI_GetMpiGeType(BLACSCONTEXT *, Int, Int, Int,
                                   MPI_Datatype, Int *);
   BLACBUFF *BI_Pack(BLACSCONTEXT *, BVOID *, BLACBUFF *, MPI_Datatype);
   void BI_Ssend(BLACSCONTEXT *, Int, Int, BLACBUFF *);
   void BI_Asend(BLACSCONTEXT *, Int, Int, BLACBUFF *);
   void BI_UpdateBuffs(BLACBUFF *);
   BLACBUFF *BI_GetBuff(Int);
   Int BI_BuffIsFree(BLACBUFF *, Int);

   Int dest, tlda, ierr;
   BLACBUFF *bp;
   BLACSCONTEXT *ctxt;
   MPI_Datatype MatTyp;
   extern BLACBUFF BI_AuxBuff, *BI_ActiveQ;

   MGetConTxt(Mpval(ConTxt), ctxt);
#if (BlacsDebugLvl > 0)
   BI_ArgCheck(Mpval(ConTxt), RT_SD, "CGESD2D", 'a', 'u', 'u', Mpval(m),
               Mpval(n), Mpval(lda), 1, Mpaddress(rdest), Mpaddress(cdest));
#endif
   if (Mpval(lda) < Mpval(m)) tlda = Mpval(m);
   else tlda = Mpval(lda);
   dest = Mvkpnum(ctxt, Mpval(rdest), Mpval(cdest));
   ctxt->scp = &ctxt->pscp;

   MatTyp = BI_GetMpiGeType(ctxt, Mpval(m), Mpval(n), tlda,
                            MPI_COMPLEX, &BI_AuxBuff.N);
#ifdef SndIsLocBlk
   BI_AuxBuff.Buff = (char *) A;
   BI_AuxBuff.dtype = MatTyp;
   BI_Ssend(ctxt, dest, PT2PTID, &BI_AuxBuff);
#else
   bp = BI_Pack(ctxt, (BVOID *) A, NULL, MatTyp);
   BI_Asend(ctxt, Mkpnum(ctxt, Mpval(rdest), Mpval(cdest)), PT2PTID, bp);
#endif
   ierr=BI_MPI_TYPE_FREE(&MatTyp);

/*
 * Having started the async send, update the buffers (reform links, check if
 * active buffers have become inactive, etc.)
 */
#ifdef SndIsLocBlk
   if (BI_ActiveQ) BI_UpdateBuffs(NULL);
#else
   BI_UpdateBuffs(bp);
#endif
}  /* end of cgesd2d */
#if (INTFACE != C_CALL)
/** Wrapper functions to support Fortran to C calls **/

F_VOID_FUNC cgesd2d(Int *ConTxt, Int *m, Int *n, float *A, Int *lda,
                     Int *rdest, Int *cdest)
{
   cgesd2d_( ConTxt, m, n, A, lda, rdest, cdest);
}

F_VOID_FUNC CGESD2D(Int *ConTxt, Int *m, Int *n, float *A, Int *lda,
                     Int *rdest, Int *cdest)
{
   cgesd2d_( ConTxt, m, n, A, lda, rdest, cdest);
}

F_VOID_FUNC CGESD2D_(Int *ConTxt, Int *m, Int *n, float *A, Int *lda,
                     Int *rdest, Int *cdest)
{
   cgesd2d_( ConTxt, m, n, A, lda, rdest, cdest);
}
#endif
