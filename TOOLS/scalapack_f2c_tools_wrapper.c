/* ---------------------------------------------------------------------
 *
 *  -- AOCL ScaLAPACK Wrappers --
 *     Copyright (c) 2025 Advanced Micro Devices, Inc.  All rights reserved.
 *
 *  ---------------------------------------------------------------------
 */
#include "scalapack_f2c_tools_wrapper.h"

void SL_INIT_(int *ictxt, int *nprow, int *npcol) {
  sl_init_(ictxt, nprow, npcol);
}
void SL_INIT(int *ictxt, int *nprow, int *npcol) {
  sl_init_(ictxt, nprow, npcol);
}
void sl_init(int *ictxt, int *nprow, int *npcol) {
  sl_init_(ictxt, nprow, npcol);
}

void CCDOTC_(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
             int *incy) {
  ccdotc_(n, dotc, x, incx, y, incy);
}
void CCDOTC(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  ccdotc_(n, dotc, x, incx, y, incy);
}
void ccdotc(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  ccdotc_(n, dotc, x, incx, y, incy);
}

void CCDOTU_(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
             int *incy) {
  ccdotu_(n, dotu, x, incx, y, incy);
}
void CCDOTU(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  ccdotu_(n, dotu, x, incx, y, incy);
}
void ccdotu(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
            int *incy) {
  ccdotu_(n, dotu, x, incx, y, incy);
}

void CHK1MAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *info) {
  chk1mat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info);
}
void CHK1MAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
             int *desca, int *descapos0, int *info) {
  chk1mat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info);
}
void chk1mat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
             int *desca, int *descapos0, int *info) {
  chk1mat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info);
}

// numroc: INTEGER FUNCTION NUMROC( N, NB, IPROC, ISRCPROC, NPROCS )
int NUMROC_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return numroc_(n, nb, iproc, isrcproc, nprocs);
}
int NUMROC(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return numroc_(n, nb, iproc, isrcproc, nprocs);
}
int numroc(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return numroc_(n, nb, iproc, isrcproc, nprocs);
}

// ssdot: SUBROUTINE SSDOT( N, DOT, X, INCX, Y, INCY )
void SSDOT_(int *n, float *dot, float *x, int *incx, float *y, int *incy) {
  ssdot_(n, dot, x, incx, y, incy);
}
void SSDOT(int *n, float *dot, float *x, int *incx, float *y, int *incy) {
  ssdot_(n, dot, x, incx, y, incy);
}
void ssdot(int *n, float *dot, float *x, int *incx, float *y, int *incy) {
  ssdot_(n, dot, x, incx, y, incy);
}

// smatadd: SUBROUTINE SMATADD( M, N, ALPHA, A, LDA, BETA, C, LDC )
void SMATADD_(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
              float *c, int *ldc) {
  smatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void SMATADD(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
             float *c, int *ldc) {
  smatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void smatadd(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
             float *c, int *ldc) {
  smatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// zmatadd: SUBROUTINE ZMATADD( M, N, ALPHA, A, LDA, BETA, C, LDC )
void ZMATADD_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc) {
  zmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void ZMATADD(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
             dcomplex *beta, dcomplex *c, int *ldc) {
  zmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void zmatadd(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
             dcomplex *beta, dcomplex *c, int *ldc) {
  zmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// zlatcpy: SUBROUTINE ZLATCPY( UPLO, M, N, A, LDA, B, LDB )
void ZLATCPY_(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
              int *ldb) {
  zlatcpy_(uplo, m, n, a, lda, b, ldb);
}
void ZLATCPY(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
             int *ldb) {
  zlatcpy_(uplo, m, n, a, lda, b, ldb);
}
void zlatcpy(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
             int *ldb) {
  zlatcpy_(uplo, m, n, a, lda, b, ldb);
}

// slatcpy: SUBROUTINE SLATCPY( UPLO, M, N, A, LDA, B, LDB )
void SLATCPY_(char *uplo, int *m, int *n, float *a, int *lda, float *b,
              int *ldb) {
  slatcpy_(uplo, m, n, a, lda, b, ldb);
}
void SLATCPY(char *uplo, int *m, int *n, float *a, int *lda, float *b,
             int *ldb) {
  slatcpy_(uplo, m, n, a, lda, b, ldb);
}
void slatcpy(char *uplo, int *m, int *n, float *a, int *lda, float *b,
             int *ldb) {
  slatcpy_(uplo, m, n, a, lda, b, ldb);
}

// DLATCPY: SUBROUTINE DLATCPY( UPLO, M, N, A, LDA, BETA, C, LDC )
void DLATCPY_(char *uplo, int *m, int *n, double *a, int *lda, double *b,
              int *ldb) {
  dlatcpy_(uplo, m, n, a, lda, b, ldb);
}
void DLATCPY(char *uplo, int *m, int *n, double *a, int *lda, double *b,
             int *ldb) {
  dlatcpy_(uplo, m, n, a, lda, b, ldb);
}
void dlatcpy(char *uplo, int *m, int *n, double *a, int *lda, double *b,
             int *ldb) {
  dlatcpy_(uplo, m, n, a, lda, b, ldb);
}

// zzdotu: SUBROUTINE ZZDOTU( N, DOTU, X, INCX, Y, INCY )
void ZZDOTU_(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
             int *incy) {
  zzdotu_(n, dotu, x, incx, y, incy);
}
void ZZDOTU(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  zzdotu_(n, dotu, x, incx, y, incy);
}
void zzdotu(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  zzdotu_(n, dotu, x, incx, y, incy);
}

// zzdotc: SUBROUTINE ZZDOTC( N, DOTC, X, INCX, Y, INCY )
void ZZDOTC_(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
             int *incy) {
  zzdotc_(n, dotc, x, incx, y, incy);
}
void ZZDOTC(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  zzdotc_(n, dotc, x, incx, y, incy);
}
void zzdotc(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
            int *incy) {
  zzdotc_(n, dotc, x, incx, y, incy);
}

// PSCHEKPAD: SUBROUTINE PSCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PSCHEKPAD_(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
                int *ipre, int *ipost, float *chkval) {
  pschekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PSCHEKPAD(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
               int *ipre, int *ipost, float *chkval) {
  pschekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void pschekpad(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
               int *ipre, int *ipost, float *chkval) {
  pschekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// PSLAPRNT: SUBROUTINE PSLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PSLAPRNT_(int *m, int *n, float *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work) {
  pslaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PSLAPRNT(int *m, int *n, float *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work) {
  pslaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void pslaprnt(int *m, int *n, float *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work) {
  pslaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PSFILLPAD: SUBROUTINE PSFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PSFILLPAD_(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
                int *ipost, float *chkval) {
  psfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PSFILLPAD(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
               int *ipost, float *chkval) {
  psfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void psfillpad(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
               int *ipost, float *chkval) {
  psfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PSCOL2ROW: SUBROUTINE PSCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PSCOL2ROW_(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
                float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, float *work) {
  pscol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PSCOL2ROW(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
               float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, float *work) {
  pscol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void pscol2row(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
               float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, float *work) {
  pscol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// PDCHEKPAD: SUBROUTINE PDCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PDCHEKPAD_(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
                int *ipre, int *ipost, double *chkval) {
  pdchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PDCHEKPAD(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
               int *ipre, int *ipost, double *chkval) {
  pdchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void pdchekpad(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
               int *ipre, int *ipost, double *chkval) {
  pdchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// PDLAPRNT: SUBROUTINE PDLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PDLAPRNT_(int *m, int *n, double *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               double *work) {
  pdlaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PDLAPRNT(int *m, int *n, double *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work) {
  pdlaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void pdlaprnt(int *m, int *n, double *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work) {
  pdlaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PDFILLPAD: SUBROUTINE PDFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PDFILLPAD_(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
                int *ipost, double *chkval) {
  pdfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PDFILLPAD(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
               int *ipost, double *chkval) {
  pdfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void pdfillpad(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
               int *ipost, double *chkval) {
  pdfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PDCOL2ROW: SUBROUTINE PDCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PDCOL2ROW_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
                double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, double *work) {
  pdcol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PDCOL2ROW(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  pdcol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void pdcol2row(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  pdcol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// SLBOOT, SLTIMER, SLENABLE, SLDISABLE, SLINQUIRE, SLCOMBINE wrappers
void SLBOOT_() { slboot_(); }
void SLBOOT() { slboot_(); }
void slboot() { slboot_(); }

void SLTIMER_(int *i) { sltimer_(i); }
void SLTIMER(int *i) { sltimer_(i); }
void sltimer(int *i) { sltimer_(i); }

void SLENABLE_() { slenable_(); }
void SLENABLE() { slenable_(); }
void slenable() { slenable_(); }

void SLDISABLE_() { sldisable_(); }
void SLDISABLE() { sldisable_(); }
void sldisable() { sldisable_(); }

double SLINQUIRE_(char *timetype, int *i) { return slinquire_(timetype, i); }
double SLINQUIRE(char *timetype, int *i) { return slinquire_(timetype, i); }
double slinquire(char *timetype, int *i) { return slinquire_(timetype, i); }

void SLCOMBINE_(int *ictxt, char *scope, char *op, char *timetype, int *n,
                int *ibeg, double *times) {
  slcombine_(ictxt, scope, op, timetype, n, ibeg, times);
}
void SLCOMBINE(int *ictxt, char *scope, char *op, char *timetype, int *n,
               int *ibeg, double *times) {
  slcombine_(ictxt, scope, op, timetype, n, ibeg, times);
}
void slcombine(int *ictxt, char *scope, char *op, char *timetype, int *n,
               int *ibeg, double *times) {
  slcombine_(ictxt, scope, op, timetype, n, ibeg, times);
}

// DESCINIT: SUBROUTINE DESCINIT( DESC, M, N, MB, NB, IRSRC, ICSRC, ICTXT, LLD,
// INFO )
void DESCINIT_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
               int *icsrc, int *ictxt, int *lld, int *info) {
  descinit_(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld, info);
}
void DESCINIT(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld, int *info) {
  descinit_(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld, info);
}
void descinit(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld, int *info) {
  descinit_(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld, info);
}

// DESCSET: SUBROUTINE DESCSET( DESC, M, N, MB, NB, IRSRC, ICSRC, ICTXT, LLD )
void DESCSET_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld) {
  descset_(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld);
}
void DESCSET(int *desc, int *m, int *n, int *mb, int *nb, int *isrc, int *icsrc,
             int *ictxt, int *lld) {
  descset_(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld);
}
void descset(int *desc, int *m, int *n, int *mb, int *nb, int *isrc, int *icsrc,
             int *ictxt, int *lld) {
  descset_(desc, m, n, mb, nb, isrc, icsrc, ictxt, lld);
}

// DESC_CONVERT: SUBROUTINE DESC_CONVERT( DESC_IN, DESC_OUT, INFO )
void DESC_CONVERT_(int *desc_in, int *desc_out, int *info) {
  desc_convert_(desc_in, desc_out, info);
}
void DESC_CONVERT(int *desc_in, int *desc_out, int *info) {
  desc_convert_(desc_in, desc_out, info);
}
void desc_convert(int *desc_in, int *desc_out, int *info) {
  desc_convert_(desc_in, desc_out, info);
}

// ILCM: INTEGER FUNCTION ILCM( M, N )
int ILCM_(int *m, int *n) { return ilcm_(m, n); }
int ILCM(int *m, int *n) { return ilcm_(m, n); }
int ilcm(int *m, int *n) { return ilcm_(m, n); }

// INFOG2L: SUBROUTINE INFOG2L( GRINDX, GCINDX, DESC, NPROW, NPCOL, MYROW,
// MYCOL, LRINDX, LCINDX, RSRC, CSRC )
void INFOG2L_(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
              int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
              int *csrc) {
  infog2l_(grindx, gcindx, desc, nprow, npcol, myrow, mycol, lrindx, lcindx,
           rsrc, csrc);
}
void INFOG2L(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
             int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
             int *csrc) {
  infog2l_(grindx, gcindx, desc, nprow, npcol, myrow, mycol, lrindx, lcindx,
           rsrc, csrc);
}
void infog2l(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
             int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
             int *csrc) {
  infog2l_(grindx, gcindx, desc, nprow, npcol, myrow, mycol, lrindx, lcindx,
           rsrc, csrc);
}

// INDXL2G: INTEGER FUNCTION INDXL2G( INDXLOC, NB, IPROC, ISRCPROC, NPROCS )
int INDXL2G_(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxl2g_(indxloc, nb, iproc, isrcproc, nprocs);
}
int INDXL2G(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxl2g_(indxloc, nb, iproc, isrcproc, nprocs);
}
int indxl2g(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxl2g_(indxloc, nb, iproc, isrcproc, nprocs);
}

// INDXG2P: INTEGER FUNCTION INDXG2P( INDXGLOB, NB, IPROC, ISRCPROC, NPROCS )
int INDXG2P_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxg2p_(indxglob, nb, iproc, isrcproc, nprocs);
}
int INDXG2P(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxg2p_(indxglob, nb, iproc, isrcproc, nprocs);
}
int indxg2p(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxg2p_(indxglob, nb, iproc, isrcproc, nprocs);
}

// INFOG1L: SUBROUTINE INFOG1L( GINDX, NB, NPROCS, MYROC, ISRCPROC, LINDX,
// ROCSRC )
void INFOG1L_(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
              int *lindx, int *rocsrc) {
  infog1l_(gindx, nb, nprocs, myroc, isrcproc, lindx, rocsrc);
}
void INFOG1L(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
             int *lindx, int *rocsrc) {
  infog1l_(gindx, nb, nprocs, myroc, isrcproc, lindx, rocsrc);
}
void infog1l(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
             int *lindx, int *rocsrc) {
  infog1l_(gindx, nb, nprocs, myroc, isrcproc, lindx, rocsrc);
}

// NPREROC: INTEGER FUNCTION NPREROC( N, NB, IPROC, ISRCPROC, NPROCS )
int NPREROC_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return npreroc_(n, nb, iproc, isrcproc, nprocs);
}
int NPREROC(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return npreroc_(n, nb, iproc, isrcproc, nprocs);
}
int npreroc(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return npreroc_(n, nb, iproc, isrcproc, nprocs);
}

// ILACPY: SUBROUTINE ILACPY( UPLO, M, N, A, LDA, BETA, C, LDC )
void ILACPY_(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb) {
  ilacpy_(uplo, m, n, a, lda, b, ldb);
}
void ILACPY(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb) {
  ilacpy_(uplo, m, n, a, lda, b, ldb);
}
void ilacpy(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb) {
  ilacpy_(uplo, m, n, a, lda, b, ldb);
}

// ICEIL: INTEGER FUNCTION ICEIL( INUM, IDENOM )
int ICEIL_(int *inum, int *idenom) { return iceil_(inum, idenom); }
int ICEIL(int *inum, int *idenom) { return iceil_(inum, idenom); }
int iceil(int *inum, int *idenom) { return iceil_(inum, idenom); }

// PCHK1MAT: SUBROUTINE PCHK1MAT( MA, MAPOS0, NA, NAPOS0, IA, JA, DESCA,
// DESCAPOS0, NEXTRA, EX, EXPOS, INFO )
void PCHK1MAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
               int *desca, int *descapos0, int *nextra, int *ex, int *expos,
               int *info) {
  pchk1mat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, nextra, ex, expos,
            info);
}
void PCHK1MAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *nextra, int *ex, int *expos,
              int *info) {
  pchk1mat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, nextra, ex, expos,
            info);
}
void pchk1mat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *nextra, int *ex, int *expos,
              int *info) {
  pchk1mat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, nextra, ex, expos,
            info);
}

// PCFILLPAD: SUBROUTINE PCFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PCFILLPAD_(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
                int *ipost, scomplex *chkval) {
  pcfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PCFILLPAD(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
               int *ipost, scomplex *chkval) {
  pcfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void pcfillpad(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
               int *ipost, scomplex *chkval) {
  pcfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PCCHEKPAD: SUBROUTINE PCCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PCCHEKPAD_(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
                int *ipre, int *ipost, scomplex *chkval) {
  pcchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PCCHEKPAD(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
               int *ipre, int *ipost, scomplex *chkval) {
  pcchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void pcchekpad(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
               int *ipre, int *ipost, scomplex *chkval) {
  pcchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// PCLAPRNT: SUBROUTINE PCLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PCLAPRNT_(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               scomplex *work) {
  pclaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PCLAPRNT(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              scomplex *work) {
  pclaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void pclaprnt(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              scomplex *work) {
  pclaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PZLAPRNT: SUBROUTINE PZLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PZLAPRNT_(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               dcomplex *work) {
  pzlaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PZLAPRNT(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              dcomplex *work) {
  pzlaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void pzlaprnt(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              dcomplex *work) {
  pzlaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// PZFILLPAD: SUBROUTINE PZFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PZFILLPAD_(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
                int *ipost, dcomplex *chkval) {
  pzfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PZFILLPAD(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
               int *ipost, dcomplex *chkval) {
  pzfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void pzfillpad(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
               int *ipost, dcomplex *chkval) {
  pzfillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// PCCOL2ROW: SUBROUTINE PCCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PCCOL2ROW_(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
                scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, scomplex *work) {
  pccol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PCCOL2ROW(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  pccol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void pccol2row(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  pccol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// PZCOL2ROW: SUBROUTINE PZCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PZCOL2ROW_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
                dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, dcomplex *work) {
  pzcol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PZCOL2ROW(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  pzcol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void pzcol2row(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  pzcol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// PZCHEKPAD: SUBROUTINE PZCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PZCHEKPAD_(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
                int *ipre, int *ipost, dcomplex *chkval) {
  pzchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PZCHEKPAD(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
               int *ipre, int *ipost, dcomplex *chkval) {
  pzchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void pzchekpad(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
               int *ipre, int *ipost, dcomplex *chkval) {
  pzchekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// clatcpy
void clatcpy(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
             int *ldb) {
  clatcpy_(uplo, m, n, a, lda, b, ldb);
}
void CLATCPY(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
             int *ldb) {
  clatcpy_(uplo, m, n, a, lda, b, ldb);
}
void CLATCPY_(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
              int *ldb) {
  clatcpy_(uplo, m, n, a, lda, b, ldb);
}

// cmatadd
void cmatadd(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
             scomplex *beta, scomplex *c, int *ldc) {
  cmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void CMATADD(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
             scomplex *beta, scomplex *c, int *ldc) {
  cmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void CMATADD_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc) {
  cmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// dddot
void dddot(int *n, double *x, int *incx, double *y, int *incy, double *z,
           int *incz, double *dot) {
  dddot_(n, x, incx, y, incy, z, incz, dot);
}
void DDDOT(int *n, double *x, int *incx, double *y, int *incy, double *z,
           int *incz, double *dot) {
  dddot_(n, x, incx, y, incy, z, incz, dot);
}
void DDDOT_(int *n, double *x, int *incx, double *y, int *incy, double *z,
            int *incz, double *dot) {
  dddot_(n, x, incx, y, incy, z, incz, dot);
}

// dmatadd
void dmatadd(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
             double *c, int *ldc) {
  dmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void DMATADD(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
             double *c, int *ldc) {
  dmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void DMATADD_(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc) {
  dmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// dsasum
double dsasum(int *n, double *x, int *incx) { return dsasum_(n, x, incx); }
double DSASUM(int *n, double *x, int *incx) { return dsasum_(n, x, incx); }
double DSASUM_(int *n, double *x, int *incx) { return dsasum_(n, x, incx); }

// dscasum
double dscasum(int *n, double *x, int *incx) { return dscasum_(n, x, incx); }
double DSCASUM(int *n, double *x, int *incx) { return dscasum_(n, x, incx); }
double DSCASUM_(int *n, double *x, int *incx) { return dscasum_(n, x, incx); }

// dscnrm2
double dscnrm2(int *n, double *x, int *incx) { return dscnrm2_(n, x, incx); }
double DSCNRM2(int *n, double *x, int *incx) { return dscnrm2_(n, x, incx); }
double DSCNRM2_(int *n, double *x, int *incx) { return dscnrm2_(n, x, incx); }

// dsnrm2
double dsnrm2(int *n, double *x, int *incx) { return dsnrm2_(n, x, incx); }
double DSNRM2(int *n, double *x, int *incx) { return dsnrm2_(n, x, incx); }
double DSNRM2_(int *n, double *x, int *incx) { return dsnrm2_(n, x, incx); }

// indxg2l
int indxg2l(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxg2l_(indxglob, nb, iproc, isrcproc, nprocs);
}
int INDXG2L(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxg2l_(indxglob, nb, iproc, isrcproc, nprocs);
}
int INDXG2L_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs) {
  return indxg2l_(indxglob, nb, iproc, isrcproc, nprocs);
}

// pcelset2
void pcelset2(int *desc, int *i, int *j, scomplex *val) {
  pcelset2_(desc, i, j, val);
}
void PCELSET2(int *desc, int *i, int *j, scomplex *val) {
  pcelset2_(desc, i, j, val);
}
void PCELSET2_(int *desc, int *i, int *j, scomplex *val) {
  pcelset2_(desc, i, j, val);
}

// pcelget
void pcelget(int *desc, int *i, int *j, scomplex *val) {
  pcelget_(desc, i, j, val);
}
void PCELGET(int *desc, int *i, int *j, scomplex *val) {
  pcelget_(desc, i, j, val);
}
void PCELGET_(int *desc, int *i, int *j, scomplex *val) {
  pcelget_(desc, i, j, val);
}

// pcelset
void pcelset(int *desc, int *i, int *j, scomplex *val) {
  pcelset_(desc, i, j, val);
}
void PCELSET(int *desc, int *i, int *j, scomplex *val) {
  pcelset_(desc, i, j, val);
}
void PCELSET_(int *desc, int *i, int *j, scomplex *val) {
  pcelset_(desc, i, j, val);
}

// pctreecomb
void pctreecomb(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                int *lda, scomplex *work) {
  pctreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PCTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                int *lda, scomplex *work) {
  pctreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PCTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                 int *lda, scomplex *work) {
  pctreecomb_(ictxt, scope, op, m, n, a, lda, work);
}

// pchkxmat
/*void pchkxmat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
int *desca, int *descapos0, int *info) { pchkxmat_(ma, mapos0, na, napos0, ia,
ja, desca, descapos0, info); } void PCHKXMAT(int *ma, int *mapos0, int *na, int
*napos0, int *ia, int *ja, int *desca, int *descapos0, int *info) {
pchkxmat_(ma, mapos0, na, napos0, ia, ja, desca, descapos0, info); } void
PCHKXMAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja, int
*desca, int *descapos0, int *info) { pchkxmat_(ma, mapos0, na, napos0, ia, ja,
desca, descapos0, info); }*/

// pclareadl
void pclaread(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
              int *info) {
  pclaread_(filename, m, n, a, lda, desc, info);
}
void PCLAREAD(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
              int *info) {
  pclaread_(filename, m, n, a, lda, desc, info);
}
void PCLAREAD_(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info) {
  pclaread_(filename, m, n, a, lda, desc, info);
}

// pclawrite
void pclawrite(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info) {
  pclawrite_(filename, m, n, a, lda, desc, info);
}
void PCLAWRITE(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info) {
  pclawrite_(filename, m, n, a, lda, desc, info);
}
void PCLAWRITE_(char *filename, int *m, int *n, scomplex *a, int *lda,
                int *desc, int *info) {
  pclawrite_(filename, m, n, a, lda, desc, info);
}

// pcmatadd
void pcmatadd(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc) {
  pcmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void PCMATADD(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc) {
  pcmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void PCMATADD_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
               scomplex *beta, scomplex *c, int *ldc) {
  pcmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// pcrow2col
void pcrow2col(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  pcrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PCROW2COL(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work) {
  pcrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PCROW2COL_(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
                scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, scomplex *work) {
  pcrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// pdmatadd
void pdmatadd(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc) {
  pdmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void PDMATADD(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc) {
  pdmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void PDMATADD_(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
               double *c, int *ldc) {
  pdmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// pdelget
void pdelget(int *desc, int *i, int *j, double *val) {
  pdelget_(desc, i, j, val);
}
void PDELGET(int *desc, int *i, int *j, double *val) {
  pdelget_(desc, i, j, val);
}
void PDELGET_(int *desc, int *i, int *j, double *val) {
  pdelget_(desc, i, j, val);
}

// pdelset
void pdelset(int *desc, int *i, int *j, double *val) {
  pdelset_(desc, i, j, val);
}
void PDELSET(int *desc, int *i, int *j, double *val) {
  pdelset_(desc, i, j, val);
}
void PDELSET_(int *desc, int *i, int *j, double *val) {
  pdelset_(desc, i, j, val);
}

// pdelset2
void pdelset2(int *desc, int *i, int *j, double *val) {
  pdelset2_(desc, i, j, val);
}
void PDELSET2(int *desc, int *i, int *j, double *val) {
  pdelset2_(desc, i, j, val);
}
void PDELSET2_(int *desc, int *i, int *j, double *val) {
  pdelset2_(desc, i, j, val);
}

// pdlaread
void pdlaread(char *filename, int *m, int *n, void *a, int *lda, int *desc,
              int *info) {
  pdlaread_(filename, m, n, a, lda, desc, info);
}
void PDLAREAD(char *filename, int *m, int *n, void *a, int *lda, int *desc,
              int *info) {
  pdlaread_(filename, m, n, a, lda, desc, info);
}
void PDLAREAD_(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info) {
  pdlaread_(filename, m, n, a, lda, desc, info);
}

// pdlawrite
void pdlawrite(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info) {
  pdlawrite_(filename, m, n, a, lda, desc, info);
}
void PDLAWRITE(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info) {
  pdlawrite_(filename, m, n, a, lda, desc, info);
}
void PDLAWRITE_(char *filename, int *m, int *n, void *a, int *lda, int *desc,
                int *info) {
  pdlawrite_(filename, m, n, a, lda, desc, info);
}

// pirow2col
void pirow2col(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  pirow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PIROW2COL(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  pirow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PIROW2COL_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, int *work) {
  pirow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// pdrow2col
void pdrow2col(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  pdrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PDROW2COL(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work) {
  pdrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PDROW2COL_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
                double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, double *work) {
  pdrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// pdtreecomb
void pdtreecomb(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                int *lda, double *work) {
  pdtreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PDTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                int *lda, double *work) {
  pdtreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PDTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                 int *lda, double *work) {
  pdtreecomb_(ictxt, scope, op, m, n, a, lda, work);
}

// pichekpad
void pichekpad(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
               int *ipre, int *ipost, int *chkval) {
  pichekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PICHEKPAD(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
               int *ipre, int *ipost, int *chkval) {
  pichekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}
void PICHEKPAD_(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
                int *ipre, int *ipost, int *chkval) {
  pichekpad_(ictxt, mess, m, n, a, lda, ipre, ipost, chkval);
}

// picol2row
void picol2row(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  picol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PICOL2ROW(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work) {
  picol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PICOL2ROW_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, int *work) {
  picol2row_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// pielget
void pielget(int *desc, int *i, int *j, int *val) { pielget_(desc, i, j, val); }
void PIELGET(int *desc, int *i, int *j, int *val) { pielget_(desc, i, j, val); }
void PIELGET_(int *desc, int *i, int *j, int *val) {
  pielget_(desc, i, j, val);
}

// pielset
void pielset(int *desc, int *i, int *j, int *val) { pielset_(desc, i, j, val); }
void PIELSET(int *desc, int *i, int *j, int *val) { pielset_(desc, i, j, val); }
void PIELSET_(int *desc, int *i, int *j, int *val) {
  pielset_(desc, i, j, val);
}

// pielset2
void pielset2(int *desc, int *i, int *j, int *val) {
  pielset2_(desc, i, j, val);
}
void PIELSET2(int *desc, int *i, int *j, int *val) {
  pielset2_(desc, i, j, val);
}
void PIELSET2_(int *desc, int *i, int *j, int *val) {
  pielset2_(desc, i, j, val);
}

// pifillpad
void pifillpad(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
               int *ipost, int *chkval) {
  pifillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PIFILLPAD(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
               int *ipost, int *chkval) {
  pifillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}
void PIFILLPAD_(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
                int *ipost, int *chkval) {
  pifillpad_(ictxt, m, n, a, lda, ipre, ipost, chkval);
}

// pilaprnt
void pilaprnt(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt,
              int *icprnt, char *cmatnm, int *nout, int *work) {
  pilaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PILAPRNT(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt,
              int *icprnt, char *cmatnm, int *nout, int *work) {
  pilaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}
void PILAPRNT_(int *m, int *n, int *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, int *work) {
  pilaprnt_(m, n, a, ia, ja, desca, irprnt, icprnt, cmatnm, nout, work);
}

// pslawrite
void pslawrite(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info) {
  pslawrite_(filename, m, n, a, lda, desc, info);
}
void PSLAWRITE(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info) {
  pslawrite_(filename, m, n, a, lda, desc, info);
}
void PSLAWRITE_(char *filename, int *m, int *n, float *a, int *lda, int *desc,
                int *info) {
  pslawrite_(filename, m, n, a, lda, desc, info);
}

// pitreecomb
void pitreecomb(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                int *lda, int *work) {
  pitreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PITREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                int *lda, int *work) {
  pitreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PITREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                 int *lda, int *work) {
  pitreecomb_(ictxt, scope, op, m, n, a, lda, work);
}

// pselget
void pselget(int *desc, int *i, int *j, float *val) {
  pselget_(desc, i, j, val);
}
void PSELGET(int *desc, int *i, int *j, float *val) {
  pselget_(desc, i, j, val);
}
void PSELGET_(int *desc, int *i, int *j, float *val) {
  pselget_(desc, i, j, val);
}

// pselset
void pselset(int *desc, int *i, int *j, float *val) {
  pselset_(desc, i, j, val);
}
void PSELSET(int *desc, int *i, int *j, float *val) {
  pselset_(desc, i, j, val);
}
void PSELSET_(int *desc, int *i, int *j, float *val) {
  pselset_(desc, i, j, val);
}

// pselset2
void pselset2(int *desc, int *i, int *j, float *val) {
  pselset2_(desc, i, j, val);
}
void PSELSET2(int *desc, int *i, int *j, float *val) {
  pselset2_(desc, i, j, val);
}
void PSELSET2_(int *desc, int *i, int *j, float *val) {
  pselset2_(desc, i, j, val);
}

// pslaread
void pslaread(char *filename, int *m, int *n, float *a, int *lda, int *desc,
              int *info) {
  pslaread_(filename, m, n, a, lda, desc, info);
}
void PSLAREAD(char *filename, int *m, int *n, float *a, int *lda, int *desc,
              int *info) {
  pslaread_(filename, m, n, a, lda, desc, info);
}
void PSLAREAD_(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info) {
  pslaread_(filename, m, n, a, lda, desc, info);
}

// pzmatadd
void pzmatadd(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc) {
  pzmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void PZMATADD(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc) {
  pzmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}
void PZMATADD_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
               dcomplex *beta, dcomplex *c, int *ldc) {
  pzmatadd_(m, n, alpha, a, lda, beta, c, ldc);
}

// pzrow2col
void pzrow2col(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  pzrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PZROW2COL(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work) {
  pzrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}
void PZROW2COL_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
                dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, dcomplex *work) {
  pzrow2col_(ictxt, m, n, nb, vs, ldvs, vd, ldvd, rsrc, csrc, rdest, cdest,
             work);
}

// pztreecomb
void pztreecomb(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                int *lda, dcomplex *work) {
  pztreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PZTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                int *lda, dcomplex *work) {
  pztreecomb_(ictxt, scope, op, m, n, a, lda, work);
}
void PZTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                 int *lda, dcomplex *work) {
  pztreecomb_(ictxt, scope, op, m, n, a, lda, work);
}