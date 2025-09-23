/* ---------------------------------------------------------------------
 *
 *  -- AOCL ScaLAPACK Wrappers --
 *     Copyright (c) 2025 Advanced Micro Devices, Inc.  All rights reserved.
 *
 *  ---------------------------------------------------------------------
 */
#ifdef ENABLE_AOCL_WRAPPERS
 
#include "aocl_f2c_tools_wrappers.h"

void SL_INIT_(int *ictxt, int *nprow, int *npcol) {
  F77_SL_INIT(ictxt, nprow, npcol);
}
void SL_INIT(int *ictxt, int *nprow, int *npcol) {
  F77_SL_INIT(ictxt, nprow, npcol);
}
void mangle_sl_init(int *ictxt, int *nprow, int *npcol) {
  F77_SL_INIT(ictxt, nprow, npcol);
}

void CCDOTC_(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
             int *incy) {
  F77_CCDOTC(n, dotc, x, incx, y, incy);
}
void CCDOTC(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  F77_CCDOTC(n, dotc, x, incx, y, incy);
}
void mangle_ccdotc(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  F77_CCDOTC(n, dotc, x, incx, y, incy);
}

void CCDOTU_(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
             int *incy) {
  F77_CCDOTU(n, dotu, x, incx, y, incy);
}
void CCDOTU(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  F77_CCDOTU(n, dotu, x, incx, y, incy);
}
void mangle_ccdotu(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  F77_CCDOTU(n, dotu, x, incx, y, incy);
}

void CHK1MAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *info) {
  F77_CHK1MAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info);
}
void CHK1MAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
             int *desca, int *descapos0, int *info) {
  F77_CHK1MAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info);
}
void mangle_chk1mat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
             int *desca, int *descapos0, int *info) {
  F77_CHK1MAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info);
}

// mangle_numroc: INTEGER FUNCTION NUMROC( N, NB, IPROC, ISRCPROC, NPROCS )
int NUMROC_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_NUMROC(n, nb, iproc, isrcproc, nprocs);
}
int NUMROC(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_NUMROC(n, nb, iproc, isrcproc, nprocs);
}
int mangle_numroc(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_NUMROC(n, nb, iproc, isrcproc, nprocs);
}

// mangle_ssdot: SUBROUTINE SSDOT( N, DOT, X, INCX, Y, INCY )
void SSDOT_(int *n, float *dot, float *x, int *incx, float *y, int *incy) {
  F77_SSDOT(n, dot, x, incx, y, incy);
}
void SSDOT(int *n, float *dot, float *x, int *incx, float *y, int *incy) {
  F77_SSDOT(n, dot, x, incx, y, incy);
}
void mangle_ssdot(int *n, float *dot, float *x, int *incx, float *y, int *incy) {
  F77_SSDOT(n, dot, x, incx, y, incy);
}

// mangle_smatadd: SUBROUTINE SMATADD( M, N, ALPHA, A, LDA, BETA, C, LDC )
void SMATADD_(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
              float *c, int *ldc) {
  F77_SMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void SMATADD(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
             float *c, int *ldc) {
  F77_SMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void mangle_smatadd(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
             float *c, int *ldc) {
  F77_SMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_zmatadd: SUBROUTINE ZMATADD( M, N, ALPHA, A, LDA, BETA, C, LDC )
void ZMATADD_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc) {
  F77_ZMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void ZMATADD(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
             dcomplex *beta, dcomplex *c, int *ldc) {
  F77_ZMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void mangle_zmatadd(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
             dcomplex *beta, dcomplex *c, int *ldc) {
  F77_ZMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_zlatcpy: SUBROUTINE ZLATCPY( UPLO, M, N, A, LDA, B, LDB )
void ZLATCPY_(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
              int *ldb) {
  F77_ZLATCPY(uplo, m, n, a, lda, b, ldb);
}
void ZLATCPY(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
             int *ldb) {
  F77_ZLATCPY(uplo, m, n, a, lda, b, ldb);
}
void mangle_zlatcpy(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
             int *ldb) {
  F77_ZLATCPY(uplo, m, n, a, lda, b, ldb);
}

// mangle_slatcpy: SUBROUTINE SLATCPY( UPLO, M, N, A, LDA, B, LDB )
void SLATCPY_(char *uplo, int *m, int *n, float *a, int *lda, float *b,
              int *ldb) {
  F77_SLATCPY(uplo, m, n, a, lda, b, ldb);
}
void SLATCPY(char *uplo, int *m, int *n, float *a, int *lda, float *b,
             int *ldb) {
  F77_SLATCPY(uplo, m, n, a, lda, b, ldb);
}
void mangle_slatcpy(char *uplo, int *m, int *n, float *a, int *lda, float *b,
             int *ldb) {
  F77_SLATCPY(uplo, m, n, a, lda, b, ldb);
}

// DLATCPY: SUBROUTINE DLATCPY( UPLO, M, N, A, LDA, BETA, C, LDC )
void DLATCPY_(char *uplo, int *m, int *n, double *a, int *lda, double *b,
              int *ldb) {
  F77_DLATCPY(uplo, m, n, a, lda, b, ldb);
}
void DLATCPY(char *uplo, int *m, int *n, double *a, int *lda, double *b,
             int *ldb) {
  F77_DLATCPY(uplo, m, n, a, lda, b, ldb);
}
void mangle_dlatcpy(char *uplo, int *m, int *n, double *a, int *lda, double *b,
             int *ldb) {
  F77_DLATCPY(uplo, m, n, a, lda, b, ldb);
}

// mangle_zzdotu: SUBROUTINE ZZDOTU( N, DOTU, X, INCX, Y, INCY )
void ZZDOTU_(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
             int *incy) {
  F77_ZZDOTU(n, dotu, x, incx, y, incy);
}
void ZZDOTU(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  F77_ZZDOTU(n, dotu, x, incx, y, incy);
}
void mangle_zzdotu(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  F77_ZZDOTU(n, dotu, x, incx, y, incy);
}

// mangle_zzdotc: SUBROUTINE ZZDOTC( N, DOTC, X, INCX, Y, INCY )
void ZZDOTC_(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
             int *incy) {
  F77_ZZDOTC(n, dotc, x, incx, y, incy);
}
void ZZDOTC(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  F77_ZZDOTC(n, dotc, x, incx, y, incy);
}
void mangle_zzdotc(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  F77_ZZDOTC(n, dotc, x, incx, y, incy);
}

// PSCHEKPAD: SUBROUTINE PSCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PSCHEKPAD_(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
                int *ipre, int *ipost, float *chkval) {
  F77_PSCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PSCHEKPAD(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
               int *ipre, int *ipost, float *chkval) {
  F77_PSCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pschekpad(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
               int *ipre, int *ipost, float *chkval) {
  F77_PSCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// PSLAPRNT: SUBROUTINE PSLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PSLAPRNT_(int *m, int *n, float *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work) {
  F77_PSLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PSLAPRNT(int *m, int *n, float *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work) {
  F77_PSLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void mangle_pslaprnt(int *m, int *n, float *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work) {
  F77_PSLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PSFILLPAD: SUBROUTINE PSFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PSFILLPAD_(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
                int *ipost, float *chkval) {
  F77_PSFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PSFILLPAD(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
               int *ipost, float *chkval) {
  F77_PSFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_psfillpad(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
               int *ipost, float *chkval) {
  F77_PSFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PSCOL2ROW: SUBROUTINE PSCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PSCOL2ROW_(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
                float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, float *work) {
  F77_PSCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PSCOL2ROW(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
               float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, float *work) {
  F77_PSCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void mangle_pscol2row(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
               float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, float *work) {
  F77_PSCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// PDCHEKPAD: SUBROUTINE PDCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PDCHEKPAD_(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
                int *ipre, int *ipost, double *chkval) {
  F77_PDCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PDCHEKPAD(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
               int *ipre, int *ipost, double *chkval) {
  F77_PDCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pdchekpad(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
               int *ipre, int *ipost, double *chkval) {
  F77_PDCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// PDLAPRNT: SUBROUTINE PDLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PDLAPRNT_(int *m, int *n, double *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               double *work) {
  F77_PDLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PDLAPRNT(int *m, int *n, double *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work) {
  F77_PDLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void mangle_pdlaprnt(int *m, int *n, double *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work) {
  F77_PDLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PDFILLPAD: SUBROUTINE PDFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PDFILLPAD_(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
                int *ipost, double *chkval) {
  F77_PDFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PDFILLPAD(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
               int *ipost, double *chkval) {
  F77_PDFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pdfillpad(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
               int *ipost, double *chkval) {
  F77_PDFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PDCOL2ROW: SUBROUTINE PDCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PDCOL2ROW_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
                double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, double *work) {
  F77_PDCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PDCOL2ROW(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  F77_PDCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void mangle_pdcol2row(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  F77_PDCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// SLBOOT, SLTIMER, SLENABLE, SLDISABLE, SLINQUIRE, SLCOMBINE wrappers
void SLBOOT_() { F77_SLBOOT(); }
void SLBOOT() { F77_SLBOOT(); }
void mangle_slboot() { F77_SLBOOT(); }

void SLTIMER_(int *i) { F77_SLTIMER(i); }
void SLTIMER(int *i) { F77_SLTIMER(i); }
void mangle_sltimer(int *i) { F77_SLTIMER(i); }

void SLENABLE_() { F77_SLENABLE(); }
void SLENABLE() { F77_SLENABLE(); }
void mangle_slenable() { F77_SLENABLE(); }

void SLDISABLE_() { F77_SLDISABLE(); }
void SLDISABLE() { F77_SLDISABLE(); }
void mangle_sldisable() { F77_SLDISABLE(); }

double SLINQUIRE_(char *timetype, int *i) { return F77_SLINQUIRE(timetype, i); }
double SLINQUIRE(char *timetype, int *i) { return F77_SLINQUIRE(timetype, i); }
double mangle_slinquire(char *timetype, int *i) { return F77_SLINQUIRE(timetype, i); }

void SLCOMBINE_(int *ictxt, char *scope, char *op, char *timetype, int *n,
                int *ibeg, double *times) {
  F77_SL_COMBINE(ictxt, scope, op, timetype, n, ibeg, times);
}
void SLCOMBINE(int *ictxt, char *scope, char *op, char *timetype, int *n,
               int *ibeg, double *times) {
  F77_SL_COMBINE(ictxt, scope, op, timetype, n, ibeg, times);
}
void mangle_sl_combine(int *ictxt, char *scope, char *op, char *timetype, int *n,
               int *ibeg, double *times) {
  F77_SL_COMBINE(ictxt, scope, op, timetype, n, ibeg, times);
}

// DESCINIT: SUBROUTINE DESCINIT( DESC, M, N, MB, NB, IRSRC, ICSRC, ICTXT, LLD,
// INFO )
void DESCINIT_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
               int *icsrc, int *ictxt, int *lld, int *info) {
  F77_DESCINIT(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld, info);
}
void DESCINIT(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld, int *info) {
  F77_DESCINIT(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld, info);
}
void mangle_descinit(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld, int *info) {
  F77_DESCINIT(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld, info);
}

// DESCSET: SUBROUTINE DESCSET( DESC, M, N, MB, NB, IRSRC, ICSRC, ICTXT, LLD )
void DESCSET_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld) {
  F77_DESCSET(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld);
}
void DESCSET(int *desc, int *m, int *n, int *mb, int *nb, int *isrc, int *icsrc,
             int *ictxt, int *lld) {
  F77_DESCSET(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld);
}
void mangle_descset(int *desc, int *m, int *n, int *mb, int *nb, int *isrc, int *icsrc,
             int *ictxt, int *lld) {
  F77_DESCSET(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld);
}

// DESC_CONVERT: SUBROUTINE DESC_CONVERT( DESC_IN, DESC_OUT, INFO )
void DESC_CONVERT_(int *desc_in, int *desc_out, int *info) {
  F77_DESC_CONVERT(desc_in, desc_out, info);
}
void DESC_CONVERT(int *desc_in, int *desc_out, int *info) {
  F77_DESC_CONVERT(desc_in, desc_out, info);
}
void mangle_desc_convert(int *desc_in, int *desc_out, int *info) {
  F77_DESC_CONVERT(desc_in, desc_out, info);
}

// ILCM: INTEGER FUNCTION ILCM( M, N )
int ILCM_(int *m, int *n) { return F77_ILCM(m, n); }
int ILCM(int *m, int *n) { return F77_ILCM(m, n); }
int mangle_ilcm(int *m, int *n) { return F77_ILCM(m, n); }

// INFOG2L: SUBROUTINE INFOG2L( GRINDX, GCINDX, DESC, NPROW, NPCOL, MYROW,
// MYCOL, LRINDX, LCINDX, RSRC, CSRC )
void INFOG2L_(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
              int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
              int *csrc) {
  F77_INFOG2L(grindx, gcindx, desc, nprow, npcol, myrow, mycol, lrindx, lcindx,
           rsrc, csrc);
}
void INFOG2L(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
             int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
             int *csrc) {
  F77_INFOG2L(grindx, gcindx, desc, nprow, npcol, myrow, mycol, lrindx, lcindx,
           rsrc, csrc);
}
void mangle_infog2l(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
             int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
             int *csrc) {
  F77_INFOG2L(grindx, gcindx, desc, nprow, npcol, myrow, mycol, lrindx, lcindx,
           rsrc, csrc);
}

// INDXL2G: INTEGER FUNCTION INDXL2G( INDXLOC, NB, IPROC, ISRCPROC, NPROCS )
int INDXL2G_(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXL2G(indxloc, nb, iproc, isrcproc, nprocs);
}
int INDXL2G(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXL2G(indxloc, nb, iproc, isrcproc, nprocs);
}
int mangle_indxl2g(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXL2G(indxloc, nb, iproc, isrcproc, nprocs);
}

// INDXG2P: INTEGER FUNCTION INDXG2P( INDXGLOB, NB, IPROC, ISRCPROC, NPROCS )
int INDXG2P_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXG2P(indxglob, nb, iproc, isrcproc, nprocs);
}
int INDXG2P(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXG2P(indxglob, nb, iproc, isrcproc, nprocs);
}
int mangle_indxg2p(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXG2P(indxglob, nb, iproc, isrcproc, nprocs);
}

// INFOG1L: SUBROUTINE INFOG1L( GINDX, NB, NPROCS, MYROC, ISRCPROC, LINDX,
// ROCSRC )
void INFOG1L_(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
              int *lindx, int *rocsrc) {
  F77_INFOG1L(gindx, nb, nprocs, myroc, isrcproc, lindx, rocsrc);
}
void INFOG1L(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
             int *lindx, int *rocsrc) {
  F77_INFOG1L(gindx, nb, nprocs, myroc, isrcproc, lindx, rocsrc);
}
void mangle_infog1l(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
             int *lindx, int *rocsrc) {
  F77_INFOG1L(gindx, nb, nprocs, myroc, isrcproc, lindx, rocsrc);
}

// NPREROC: INTEGER FUNCTION NPREROC( N, NB, IPROC, ISRCPROC, NPROCS )
int NPREROC_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_NPREROC(n, nb, iproc, isrcproc, nprocs);
}
int NPREROC(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_NPREROC(n, nb, iproc, isrcproc, nprocs);
}
int mangle_npreroc(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_NPREROC(n, nb, iproc, isrcproc, nprocs);
}

// ILACPY: SUBROUTINE ILACPY( UPLO, M, N, A, LDA, BETA, C, LDC )
void ILACPY_(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb) {
  F77_ILACPY(uplo, m, n, a, lda, b, ldb);
}
void ILACPY(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb) {
  F77_ILACPY(uplo, m, n, a, lda, b, ldb);
}
void mangle_ilacpy(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb) {
  F77_ILACPY(uplo, m, n, a, lda, b, ldb);
}

// ICEIL: INTEGER FUNCTION ICEIL( INUM, IDENOM )
int ICEIL_(int *inum, int *idenom) { return F77_ICEIL(inum, idenom); }
int ICEIL(int *inum, int *idenom) { return F77_ICEIL(inum, idenom); }
int mangle_iceil(int *inum, int *idenom) { return F77_ICEIL(inum, idenom); }

// PCHK1MAT: SUBROUTINE PCHK1MAT( MA, MAPOS0, NA, NAPOS0, IA, JA, DESCA,
// DESCAPOS0, NEXTRA, EX, EXPOS, INFO )
void PCHK1MAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
               int *desca, int *descapos0, int *nextra, int *ex, int *expos,
               int *info) {
  F77_PCHK1MAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, nextra, ex, expos,
            info);
}
void PCHK1MAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *nextra, int *ex, int *expos,
              int *info) {
  F77_PCHK1MAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, nextra, ex, expos,
            info);
}
void mangle_pchk1mat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *nextra, int *ex, int *expos,
              int *info) {
  F77_PCHK1MAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, nextra, ex, expos,
            info);
}

// PCFILLPAD: SUBROUTINE PCFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PCFILLPAD_(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
                int *ipost, scomplex *chkval) {
  F77_PCFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PCFILLPAD(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
               int *ipost, scomplex *chkval) {
  F77_PCFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pcfillpad(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
               int *ipost, scomplex *chkval) {
  F77_PCFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PCCHEKPAD: SUBROUTINE PCCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PCCHEKPAD_(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
                int *ipre, int *ipost, scomplex *chkval) {
  F77_PCCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PCCHEKPAD(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
               int *ipre, int *ipost, scomplex *chkval) {
  F77_PCCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pcchekpad(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
               int *ipre, int *ipost, scomplex *chkval) {
  F77_PCCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// PCLAPRNT: SUBROUTINE PCLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PCLAPRNT_(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               scomplex *work) {
  F77_PCLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PCLAPRNT(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              scomplex *work) {
  F77_PCLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void mangle_pclaprnt(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              scomplex *work) {
  F77_PCLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PZLAPRNT: SUBROUTINE PZLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PZLAPRNT_(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               dcomplex *work) {
  F77_PZLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PZLAPRNT(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              dcomplex *work) {
  F77_PZLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void mangle_pzlaprnt(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              dcomplex *work) {
  F77_PZLAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PZFILLPAD: SUBROUTINE PZFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PZFILLPAD_(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
                int *ipost, dcomplex *chkval) {
  F77_PZFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PZFILLPAD(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
               int *ipost, dcomplex *chkval) {
  F77_PZFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pzfillpad(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
               int *ipost, dcomplex *chkval) {
  F77_PZFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PCCOL2ROW: SUBROUTINE PCCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PCCOL2ROW_(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
                scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, scomplex *work) {
  F77_PCCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PCCOL2ROW(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  F77_PCCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void mangle_pccol2row(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  F77_PCCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// PZCOL2ROW: SUBROUTINE PZCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PZCOL2ROW_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
                dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, dcomplex *work) {
  F77_PZCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PZCOL2ROW(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  F77_PZCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void mangle_pzcol2row(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  F77_PZCOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// PZCHEKPAD: SUBROUTINE PZCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PZCHEKPAD_(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
                int *ipre, int *ipost, dcomplex *chkval) {
  F77_PZCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PZCHEKPAD(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
               int *ipre, int *ipost, dcomplex *chkval) {
  F77_PZCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void mangle_pzchekpad(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
               int *ipre, int *ipost, dcomplex *chkval) {
  F77_PZCHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// mangle_clatcpy
void mangle_clatcpy(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
             int *ldb) {
  F77_CLATCPY(uplo, m, n, a, lda, b, ldb);
}
void CLATCPY(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
             int *ldb) {
  F77_CLATCPY(uplo, m, n, a, lda, b, ldb);
}
void CLATCPY_(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
              int *ldb) {
  F77_CLATCPY(uplo, m, n, a, lda, b, ldb);
}

// mangle_cmatadd
void mangle_cmatadd(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
             scomplex *beta, scomplex *c, int *ldc) {
  F77_CMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void CMATADD(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
             scomplex *beta, scomplex *c, int *ldc) {
  F77_CMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void CMATADD_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc) {
  F77_CMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_dddot
void mangle_dddot(int *n, double *x, int *incx, double *y, int *incy, double *z,
           int *incz, double *dot) {
  F77_DDDOT(n, x, incx, y, incy, z, incz, dot);
}
void DDDOT(int *n, double *x, int *incx, double *y, int *incy, double *z,
           int *incz, double *dot) {
  F77_DDDOT(n, x, incx, y, incy, z, incz, dot);
}
void DDDOT_(int *n, double *x, int *incx, double *y, int *incy, double *z,
            int *incz, double *dot) {
  F77_DDDOT(n, x, incx, y, incy, z, incz, dot);
}

// mangle_dmatadd
void mangle_dmatadd(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
             double *c, int *ldc) {
  F77_DMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void DMATADD(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
             double *c, int *ldc) {
  F77_DMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void DMATADD_(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc) {
  F77_DMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_dsasum
double mangle_dsasum(int *n, double *x, int *incx) { return F77_DSASUM(n, x, incx); }
double DSASUM(int *n, double *x, int *incx) { return F77_DSASUM(n, x, incx); }
double DSASUM_(int *n, double *x, int *incx) { return F77_DSASUM(n, x, incx); }

// mangle_dscasum
double mangle_dscasum(int *n, double *x, int *incx) { return F77_DSCASUM(n, x, incx); }
double DSCASUM(int *n, double *x, int *incx) { return F77_DSCASUM(n, x, incx); }
double DSCASUM_(int *n, double *x, int *incx) { return F77_DSCASUM(n, x, incx); }

// mangle_dscnrm2
double mangle_dscnrm2(int *n, double *x, int *incx) { return F77_DSCNRM2(n, x, incx); }
double DSCNRM2(int *n, double *x, int *incx) { return F77_DSCNRM2(n, x, incx); }
double DSCNRM2_(int *n, double *x, int *incx) { return F77_DSCNRM2(n, x, incx); }

// mangle_dsnrm2
double mangle_dsnrm2(int *n, double *x, int *incx) { return F77_DSNRM2(n, x, incx); }
double DSNRM2(int *n, double *x, int *incx) { return F77_DSNRM2(n, x, incx); }
double DSNRM2_(int *n, double *x, int *incx) { return F77_DSNRM2(n, x, incx); }

// mangle_indxg2l
int mangle_indxg2l(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXG2L(indxglob, nb, iproc, isrcproc, nprocs);
}
int INDXG2L(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXG2L(indxglob, nb, iproc, isrcproc, nprocs);
}
int INDXG2L_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return F77_INDXG2L(indxglob, nb, iproc, isrcproc, nprocs);
}

// mangle_pcelset2
void mangle_pcelset2(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELSET2(desc, i, j, val);
}
void PCELSET2(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELSET2(desc, i, j, val);
}
void PCELSET2_(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELSET2(desc, i, j, val);
}

// mangle_pcelget
void mangle_pcelget(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELGET(desc, i, j, val);
}
void PCELGET(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELGET(desc, i, j, val);
}
void PCELGET_(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELGET(desc, i, j, val);
}

// mangle_pcelset
void mangle_pcelset(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELSET(desc, i, j, val);
}
void PCELSET(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELSET(desc, i, j, val);
}
void PCELSET_(int *desc, int *i, int *j, scomplex *val) {
  F77_PCELSET(desc, i, j, val);
}

// mangle_pctreecomb
void mangle_pctreecomb(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                int *lda, scomplex *work) {
  F77_PCTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PCTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                int *lda, scomplex *work) {
  F77_PCTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PCTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                 int *lda, scomplex *work) {
  F77_PCTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}

// mangle_pchkxmat
/*void mangle_pchkxmat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
int *desca, int *descapos0, int *info) { F77_PCHKXMAT(ma, mapos0, na, napos0, ia,
ja, desca, descapos0, info); } void PCHKXMAT(int *ma, int *mapos0, int *na, int
*napos0, int *ia, int *ja, int *desca, int *descapos0, int *info) {
F77_PCHKXMAT(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info); } void
PCHKXMAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja, int
*desca, int *descapos0, int *info) { F77_PCHKXMAT(ma, mapos0, na, napos0, ia, ja,
desca, descapos0, info); }*/

// pclareadl
void mangle_pclaread(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
              int *info) {
  F77_PCLAREAD(filename, m, n, a, lda, desc, info);
}
void PCLAREAD(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
              int *info) {
  F77_PCLAREAD(filename, m, n, a, lda, desc, info);
}
void PCLAREAD_(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info) {
  F77_PCLAREAD(filename, m, n, a, lda, desc, info);
}

// mangle_pclawrite
void mangle_pclawrite(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info) {
  F77_PCLAWRITE(filename, m, n, a, lda, desc, info);
}
void PCLAWRITE(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info) {
  F77_PCLAWRITE(filename, m, n, a, lda, desc, info);
}
void PCLAWRITE_(char *filename, int *m, int *n, scomplex *a, int *lda,
                int *desc, int *info) {
  F77_PCLAWRITE(filename, m, n, a, lda, desc, info);
}

// mangle_pcmatadd
void mangle_pcmatadd(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc) {
  F77_PCMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void PCMATADD(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc) {
  F77_PCMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void PCMATADD_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
               scomplex *beta, scomplex *c, int *ldc) {
  F77_PCMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_pcrow2col
void mangle_pcrow2col(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  F77_PCROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PCROW2COL(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  F77_PCROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PCROW2COL_(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
                scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, scomplex *work) {
  F77_PCROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// mangle_pdmatadd
void mangle_pdmatadd(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc) {
  F77_PDMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void PDMATADD(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc) {
  F77_PDMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void PDMATADD_(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
               double *c, int *ldc) {
  F77_PDMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_pdelget
void mangle_pdelget(int *desc, int *i, int *j, double *val) {
  F77_PDELGET(desc, i, j, val);
}
void PDELGET(int *desc, int *i, int *j, double *val) {
  F77_PDELGET(desc, i, j, val);
}
void PDELGET_(int *desc, int *i, int *j, double *val) {
  F77_PDELGET(desc, i, j, val);
}

// mangle_pdelset
void mangle_pdelset(int *desc, int *i, int *j, double *val) {
  F77_PDELSET(desc, i, j, val);
}
void PDELSET(int *desc, int *i, int *j, double *val) {
  F77_PDELSET(desc, i, j, val);
}
void PDELSET_(int *desc, int *i, int *j, double *val) {
  F77_PDELSET(desc, i, j, val);
}

// mangle_pdelset2
void mangle_pdelset2(int *desc, int *i, int *j, double *val) {
  F77_PDELSET2(desc, i, j, val);
}
void PDELSET2(int *desc, int *i, int *j, double *val) {
  F77_PDELSET2(desc, i, j, val);
}
void PDELSET2_(int *desc, int *i, int *j, double *val) {
  F77_PDELSET2(desc, i, j, val);
}

// mangle_pdlaread
void mangle_pdlaread(char *filename, int *m, int *n, void *a, int *lda, int *desc,
              int *info) {
  F77_PDLAREAD(filename, m, n, a, lda, desc, info);
}
void PDLAREAD(char *filename, int *m, int *n, void *a, int *lda, int *desc,
              int *info) {
  F77_PDLAREAD(filename, m, n, a, lda, desc, info);
}
void PDLAREAD_(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info) {
  F77_PDLAREAD(filename, m, n, a, lda, desc, info);
}

// mangle_pdlawrite
void mangle_pdlawrite(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info) {
  F77_PDLAWRITE(filename, m, n, a, lda, desc, info);
}
void PDLAWRITE(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info) {
  F77_PDLAWRITE(filename, m, n, a, lda, desc, info);
}
void PDLAWRITE_(char *filename, int *m, int *n, void *a, int *lda, int *desc,
                int *info) {
  F77_PDLAWRITE(filename, m, n, a, lda, desc, info);
}

// mangle_pirow2col
void mangle_pirow2col(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  F77_PIROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PIROW2COL(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  F77_PIROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PIROW2COL_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, int *work) {
  F77_PIROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// mangle_pdrow2col
void mangle_pdrow2col(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  F77_PDROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PDROW2COL(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  F77_PDROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PDROW2COL_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
                double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, double *work) {
  F77_PDROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// mangle_pdtreecomb
void mangle_pdtreecomb(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                int *lda, double *work) {
  F77_PDTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PDTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                int *lda, double *work) {
  F77_PDTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PDTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                 int *lda, double *work) {
  F77_PDTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}

// mangle_pichekpad
void mangle_pichekpad(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
               int *ipre, int *ipost, int *chkval) {
  F77_PICHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PICHEKPAD(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
               int *ipre, int *ipost, int *chkval) {
  F77_PICHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PICHEKPAD_(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
                int *ipre, int *ipost, int *chkval) {
  F77_PICHEKPAD(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// mangle_picol2row
void mangle_picol2row(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  F77_PICOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PICOL2ROW(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  F77_PICOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PICOL2ROW_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, int *work) {
  F77_PICOL2ROW(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// mangle_pielget
void mangle_pielget(int *desc, int *i, int *j, int *val) { F77_PIELGET(desc, i, j, val); }
void PIELGET(int *desc, int *i, int *j, int *val) { F77_PIELGET(desc, i, j, val); }
void PIELGET_(int *desc, int *i, int *j, int *val) {
  F77_PIELGET(desc, i, j, val);
}

// mangle_pielset
void mangle_pielset(int *desc, int *i, int *j, int *val) { F77_PIELSET(desc, i, j, val); }
void PIELSET(int *desc, int *i, int *j, int *val) { F77_PIELSET(desc, i, j, val); }
void PIELSET_(int *desc, int *i, int *j, int *val) {
  F77_PIELSET(desc, i, j, val);
}

// mangle_pielset2
void mangle_pielset2(int *desc, int *i, int *j, int *val) {
  F77_PIELSET2(desc, i, j, val);
}
void PIELSET2(int *desc, int *i, int *j, int *val) {
  F77_PIELSET2(desc, i, j, val);
}
void PIELSET2_(int *desc, int *i, int *j, int *val) {
  F77_PIELSET2(desc, i, j, val);
}

// mangle_pifillpad
void mangle_pifillpad(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
               int *ipost, int *chkval) {
  F77_PIFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PIFILLPAD(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
               int *ipost, int *chkval) {
  F77_PIFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PIFILLPAD_(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
                int *ipost, int *chkval) {
  F77_PIFILLPAD(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// mangle_pilaprnt
void mangle_pilaprnt(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt,
              int *icprnt, char *cmatnm, int *nout, int *work) {
  F77_PILAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PILAPRNT(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt,
              int *icprnt, char *cmatnm, int *nout, int *work) {
  F77_PILAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PILAPRNT_(int *m, int *n, int *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, int *work) {
  F77_PILAPRNT(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// mangle_pslawrite
void mangle_pslawrite(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info) {
  F77_PSLAWRITE(filename, m, n, a, lda, desc, info);
}
void PSLAWRITE(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info) {
  F77_PSLAWRITE(filename, m, n, a, lda, desc, info);
}
void PSLAWRITE_(char *filename, int *m, int *n, float *a, int *lda, int *desc,
                int *info) {
  F77_PSLAWRITE(filename, m, n, a, lda, desc, info);
}

// mangle_pitreecomb
void mangle_pitreecomb(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                int *lda, int *work) {
  F77_PITREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PITREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                int *lda, int *work) {
  F77_PITREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PITREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                 int *lda, int *work) {
  F77_PITREECOMB(ictxt, scope, op, m, n, a, lda, work);
}

// mangle_pselget
void mangle_pselget(int *desc, int *i, int *j, float *val) {
  F77_PSELGET(desc, i, j, val);
}
void PSELGET(int *desc, int *i, int *j, float *val) {
  F77_PSELGET(desc, i, j, val);
}
void PSELGET_(int *desc, int *i, int *j, float *val) {
  F77_PSELGET(desc, i, j, val);
}

// mangle_pselset
void mangle_pselset(int *desc, int *i, int *j, float *val) {
  F77_PSELSET(desc, i, j, val);
}
void PSELSET(int *desc, int *i, int *j, float *val) {
  F77_PSELSET(desc, i, j, val);
}
void PSELSET_(int *desc, int *i, int *j, float *val) {
  F77_PSELSET(desc, i, j, val);
}

// mangle_pselset2
void mangle_pselset2(int *desc, int *i, int *j, float *val) {
  F77_PSELSET2(desc, i, j, val);
}
void PSELSET2(int *desc, int *i, int *j, float *val) {
  F77_PSELSET2(desc, i, j, val);
}
void PSELSET2_(int *desc, int *i, int *j, float *val) {
  F77_PSELSET2(desc, i, j, val);
}

// mangle_pslaread
void mangle_pslaread(char *filename, int *m, int *n, float *a, int *lda, int *desc,
              int *info) {
  F77_PSLAREAD(filename, m, n, a, lda, desc, info);
}
void PSLAREAD(char *filename, int *m, int *n, float *a, int *lda, int *desc,
              int *info) {
  F77_PSLAREAD(filename, m, n, a, lda, desc, info);
}
void PSLAREAD_(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info) {
  F77_PSLAREAD(filename, m, n, a, lda, desc, info);
}

// mangle_pzmatadd
void mangle_pzmatadd(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc) {
  F77_PZMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void PZMATADD(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc) {
  F77_PZMATADD(m, n, alpha, a, lda, beta, c, ldc);
}
void PZMATADD_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
               dcomplex *beta, dcomplex *c, int *ldc) {
  F77_PZMATADD(m, n, alpha, a, lda, beta, c, ldc);
}

// mangle_pzrow2col
void mangle_pzrow2col(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  F77_PZROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PZROW2COL(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  F77_PZROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PZROW2COL_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
                dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, dcomplex *work) {
  F77_PZROW2COL(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// mangle_pztreecomb
void mangle_pztreecomb(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                int *lda, dcomplex *work) {
  F77_PZTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PZTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                int *lda, dcomplex *work) {
  F77_PZTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}
void PZTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                 int *lda, dcomplex *work) {
  F77_PZTREECOMB(ictxt, scope, op, m, n, a, lda, work);
}

#endif