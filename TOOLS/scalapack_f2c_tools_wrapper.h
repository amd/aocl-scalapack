/* ---------------------------------------------------------------------
 *
 *  -- AOCL ScaLAPACK Wrappers --
 *     Copyright (c) 2025 Advanced Micro Devices, Inc.  All rights reserved.
 *
 *  ---------------------------------------------------------------------
 */

typedef struct scomplex {
  float real, imag;
} scomplex;
typedef struct dcomplex {
  double real, imag;
} dcomplex;

// sl_init: SUBROUTINE SL_INIT( ICTXT, NPROW, NPCOL )
void SL_INIT_(int *ictxt, int *nprow, int *npcol);
void SL_INIT(int *ictxt, int *nprow, int *npcol);
void sl_init(int *ictxt, int *nprow, int *npcol);

// ccdotc: SUBROUTINE CCDOTC( N, DOTC, X, INCX, Y, INCY )
void CCDOTC_(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
             int *incy);
void CCDOTC(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
            int *incy);
void ccdotc(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
            int *incy);

// ccdotu: SUBROUTINE CCDOTU( N, DOTU, X, INCX, Y, INCY )
void CCDOTU_(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
             int *incy);
void CCDOTU(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
            int *incy);
void ccdotu(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
            int *incy);

// CHK1MAT: SUBROUTINE CHK1MAT( MA, MAPOS0, NA, NAPOS0, IA, JA, DESCA,
// DESCAPOS0, INFO )
void CHK1MAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *info);
void CHK1MAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
             int *desca, int *descapos0, int *info);
void chk1mat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
             int *desca, int *descapos0, int *info);

// numroc: INTEGER FUNCTION NUMROC( N, NB, IPROC, ISRCPROC, NPROCS )
int NUMROC_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
int NUMROC(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
int numroc(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);

// ssdot: SUBROUTINE SSDOT( N, DOT, X, INCX, Y, INCY )
void SSDOT_(int *n, float *dot, float *x, int *incx, float *y, int *incy);
void SSDOT(int *n, float *dot, float *x, int *incx, float *y, int *incy);
void ssdot(int *n, float *dot, float *x, int *incx, float *y, int *incy);

// smatadd: SUBROUTINE SMATADD( M, N, ALPHA, A, LDA, BETA, C, LDC )
void SMATADD_(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
              float *c, int *ldc);
void SMATADD(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
             float *c, int *ldc);
void smatadd(int *m, int *n, float *alpha, float *a, int *lda, float *beta,
             float *c, int *ldc);

// zmatadd: SUBROUTINE ZMATADD( M, N, ALPHA, A, LDA, BETA, C, LDC )
void ZMATADD_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc);
void ZMATADD(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
             dcomplex *beta, dcomplex *c, int *ldc);
void zmatadd(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
             dcomplex *beta, dcomplex *c, int *ldc);

// zlatcpy: SUBROUTINE ZLATCPY( UPLO, M, N, A, LDA, B, LDB )
void ZLATCPY_(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
              int *ldb);
void ZLATCPY(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
             int *ldb);
void zlatcpy(char *uplo, int *m, int *n, dcomplex *a, int *lda, dcomplex *b,
             int *ldb);

// slatcpy: SUBROUTINE SLATCPY( UPLO, M, N, A, LDA, B, LDB )
void SLATCPY_(char *uplo, int *m, int *n, float *a, int *lda, float *b,
              int *ldb);
void SLATCPY(char *uplo, int *m, int *n, float *a, int *lda, float *b,
             int *ldb);
void slatcpy(char *uplo, int *m, int *n, float *a, int *lda, float *b,
             int *ldb);

// DLATCPY: SUBROUTINE DLATCPY( UPLO, M, N, A, LDA, BETA, C, LDC )
void DLATCPY_(char *uplo, int *m, int *n, double *a, int *lda, double *b,
              int *ldb);
void DLATCPY(char *uplo, int *m, int *n, double *a, int *lda, double *b,
             int *ldb);
void dlatcpy(char *uplo, int *m, int *n, double *a, int *lda, double *b,
             int *ldb);

// zzdotu: SUBROUTINE ZZDOTU( N, DOTU, X, INCX, Y, INCY )
void ZZDOTU_(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
             int *incy);
void ZZDOTU(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
            int *incy);
void zzdotu(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
            int *incy);

// zzdotc: SUBROUTINE ZZDOTC( N, DOTC, X, INCX, Y, INCY )
void ZZDOTC_(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
             int *incy);
void ZZDOTC(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
            int *incy);
void zzdotc(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
            int *incy);

// PSCHEKPAD: SUBROUTINE PSCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PSCHEKPAD_(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
                int *ipre, int *ipost, float *chkval);
void PSCHEKPAD(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
               int *ipre, int *ipost, float *chkval);
void pschekpad(int *ictxt, char *mess, int *m, int *n, float *a, int *lda,
               int *ipre, int *ipost, float *chkval);

// PSLAPRNT: SUBROUTINE PSLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PSLAPRNT_(int *m, int *n, float *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work);
void PSLAPRNT(int *m, int *n, float *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work);
void pslaprnt(int *m, int *n, float *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, float *work);

// PSFILLPAD: SUBROUTINE PSFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PSFILLPAD_(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
                int *ipost, float *chkval);
void PSFILLPAD(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
               int *ipost, float *chkval);
void psfillpad(int *ictxt, int *m, int *n, float *a, int *lda, int *ipre,
               int *ipost, float *chkval);

// PSCOL2ROW: SUBROUTINE PSCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PSCOL2ROW_(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
                float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, float *work);
void PSCOL2ROW(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
               float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, float *work);
void pscol2row(int *ictxt, int *m, int *n, int *nb, float *vs, int *ldvs,
               float *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, float *work);

// PDCHEKPAD: SUBROUTINE PDCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PDCHEKPAD_(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
                int *ipre, int *ipost, double *chkval);
void PDCHEKPAD(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
               int *ipre, int *ipost, double *chkval);
void pdchekpad(int *ictxt, char *mess, int *m, int *n, double *a, int *lda,
               int *ipre, int *ipost, double *chkval);

// PDLAPRNT: SUBROUTINE PDLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PDLAPRNT_(int *m, int *n, double *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work);
void PDLAPRNT(int *m, int *n, double *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work);
void pdlaprnt(int *m, int *n, double *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work);

// PDFILLPAD: SUBROUTINE PDFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PDFILLPAD_(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
                int *ipost, double *chkval);
void PDFILLPAD(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
               int *ipost, double *chkval);
void pdfillpad(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre,
               int *ipost, double *chkval);

// PDCOL2ROW: SUBROUTINE PDCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PDCOL2ROW_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
                double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, double *work);
void PDCOL2ROW(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work);
void pdcol2row(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work);

// SLBOOT, SLTIMER, SLENABLE, SLDISABLE, SLINQUIRE, SLCOMBINE wrappers
void SLBOOT_();
void SLBOOT();
void slboot();

void SLTIMER_(int *i);
void SLTIMER(int *i);
void sltimer(int *i);

void SLENABLE_();
void SLENABLE();
void slenable();

void SLDISABLE_();
void SLDISABLE();
void sldisable();

double SLINQUIRE_(char *timetype, int *i);
double SLINQUIRE(char *timetype, int *i);
double slinquire(char *timetype, int *i);

void SLCOMBINE_(int *ictxt, char *scope, char *op, char *timetype, int *n,
                int *ibeg, double *times);
void SLCOMBINE(int *ictxt, char *scope, char *op, char *timetype, int *n,
               int *ibeg, double *times);
void slcombine(int *ictxt, char *scope, char *op, char *timetype, int *n,
               int *ibeg, double *times);

// DESCINIT: SUBROUTINE DESCINIT( DESC, M, N, MB, NB, IRSRC, ICSRC, ICTXT, LLD,
// INFO )
void DESCINIT_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
               int *icsrc, int *ictxt, int *lld, int *info);
void DESCINIT(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld, int *info);
void descinit(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld, int *info);

// DESCSET: SUBROUTINE DESCSET( DESC, M, N, MB, NB, IRSRC, ICSRC, ICTXT, LLD )
void DESCSET_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
              int *icsrc, int *ictxt, int *lld);
void DESCSET(int *desc, int *m, int *n, int *mb, int *nb, int *isrc, int *icsrc,
             int *ictxt, int *lld);
void descset(int *desc, int *m, int *n, int *mb, int *nb, int *isrc, int *icsrc,
             int *ictxt, int *lld);

// DESC_CONVERT: SUBROUTINE DESC_CONVERT( DESC_IN, DESC_OUT, INFO )
void DESC_CONVERT_(int *desc_in, int *desc_out, int *info);
void DESC_CONVERT(int *desc_in, int *desc_out, int *info);
void desc_convert(int *desc_in, int *desc_out, int *info);

// ILCM: INTEGER FUNCTION ILCM( M, N )
int ILCM_(int *m, int *n);
int ILCM(int *m, int *n);
int ilcm(int *m, int *n);

// INFOG2L: SUBROUTINE INFOG2L( GRINDX, GCINDX, DESC, NPROW, NPCOL, MYROW,
// MYCOL, LRINDX, LCINDX, RSRC, CSRC )
void INFOG2L_(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
              int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
              int *csrc);
void INFOG2L(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
             int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
             int *csrc);
void infog2l(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol,
             int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc,
             int *csrc);

// INDXL2G: INTEGER FUNCTION INDXL2G( INDXLOC, NB, IPROC, ISRCPROC, NPROCS )
int INDXL2G_(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs);
int INDXL2G(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs);
int indxl2g(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs);

// INDXG2P: INTEGER FUNCTION INDXG2P( INDXGLOB, NB, IPROC, ISRCPROC, NPROCS )
int INDXG2P_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);
int INDXG2P(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);
int indxg2p(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);

// INFOG1L: SUBROUTINE INFOG1L( GINDX, NB, NPROCS, MYROC, ISRCPROC, LINDX,
// ROCSRC )
void INFOG1L_(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
              int *lindx, int *rocsrc);
void INFOG1L(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
             int *lindx, int *rocsrc);
void infog1l(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc,
             int *lindx, int *rocsrc);

// NPREROC: INTEGER FUNCTION NPREROC( N, NB, IPROC, ISRCPROC, NPROCS )
int NPREROC_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
int NPREROC(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
int npreroc(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);

// ICEIL: INTEGER FUNCTION ICEIL( INUM, IDENOM )
int ICEIL_(int *inum, int *idenom);
int ICEIL(int *inum, int *idenom);
int iceil(int *inum, int *idenom);

// PCHK1MAT: SUBROUTINE PCHK1MAT( MA, MAPOS0, NA, NAPOS0, IA, JA, DESCA,
// DESCAPOS0, NEXTRA, EX, EXPOS, INFO )
void PCHK1MAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
               int *desca, int *descapos0, int *nextra, int *ex, int *expos,
               int *info);
void PCHK1MAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *nextra, int *ex, int *expos,
              int *info);
void pchk1mat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *nextra, int *ex, int *expos,
              int *info);

// PCFILLPAD: SUBROUTINE PCFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PCFILLPAD_(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
                int *ipost, scomplex *chkval);
void PCFILLPAD(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
               int *ipost, scomplex *chkval);
void pcfillpad(int *ictxt, int *m, int *n, scomplex *a, int *lda, int *ipre,
               int *ipost, scomplex *chkval);

// PCCHEKPAD: SUBROUTINE PCCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PCCHEKPAD_(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
                int *ipre, int *ipost, scomplex *chkval);
void PCCHEKPAD(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
               int *ipre, int *ipost, scomplex *chkval);
void pcchekpad(int *ictxt, char *mess, int *m, int *n, scomplex *a, int *lda,
               int *ipre, int *ipost, scomplex *chkval);

// PCLAPRNT: SUBROUTINE PCLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PCLAPRNT_(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               scomplex *work);
void PCLAPRNT(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              scomplex *work);
void pclaprnt(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              scomplex *work);

// PZLAPRNT: SUBROUTINE PZLAPRNT( M, N, A, IA, JA, DESCA, IRPRNT, ICPRNT,
// CMATNM, NOUT, WORK )
void PZLAPRNT_(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout,
               dcomplex *work);
void PZLAPRNT(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              dcomplex *work);
void pzlaprnt(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
              int *irprnt, int *icprnt, char *cmatnm, int *nout,
              dcomplex *work);

// PZFILLPAD: SUBROUTINE PZFILLPAD( ICTXT, M, N, A, LDA, IPRE, IPOST, CHKVAL )
void PZFILLPAD_(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
                int *ipost, dcomplex *chkval);
void PZFILLPAD(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
               int *ipost, dcomplex *chkval);
void pzfillpad(int *ictxt, int *m, int *n, dcomplex *a, int *lda, int *ipre,
               int *ipost, dcomplex *chkval);

// PCCOL2ROW: SUBROUTINE PCCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PCCOL2ROW_(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
                scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, scomplex *work);
void PCCOL2ROW(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work);
void pccol2row(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work);

// PZCOL2ROW: SUBROUTINE PZCOL2ROW( ICTXT, M, N, NB, VS, LDVS, VD, LDVD, RSRC,
// CSRC, RDEST, CDEST, WORK )
void PZCOL2ROW_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
                dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, dcomplex *work);
void PZCOL2ROW(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work);
void pzcol2row(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work);

// PZCHEKPAD: SUBROUTINE PZCHEKPAD( ICTXT, MESS, M, N, A, LDA, IPRE, IPOST,
// CHKVAL )
void PZCHEKPAD_(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
                int *ipre, int *ipost, dcomplex *chkval);
void PZCHEKPAD(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
               int *ipre, int *ipost, dcomplex *chkval);
void pzchekpad(int *ictxt, char *mess, int *m, int *n, dcomplex *a, int *lda,
               int *ipre, int *ipost, dcomplex *chkval);

// clatcpy
void clatcpy(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
             int *ldb);
void CLATCPY(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
             int *ldb);
void CLATCPY_(char *uplo, int *m, int *n, scomplex *a, int *lda, scomplex *b,
              int *ldb);

// cmatadd
void cmatadd(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
             scomplex *beta, scomplex *c, int *ldc);
void CMATADD(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
             scomplex *beta, scomplex *c, int *ldc);
void CMATADD_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc);

// dddot
void dddot(int *n, double *x, int *incx, double *y, int *incy, double *z,
           int *incz, double *dot);
void DDDOT(int *n, double *x, int *incx, double *y, int *incy, double *z,
           int *incz, double *dot);
void DDDOT_(int *n, double *x, int *incx, double *y, int *incy, double *z,
            int *incz, double *dot);

// dmatadd
void dmatadd(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
             double *c, int *ldc);
void DMATADD(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
             double *c, int *ldc);
void DMATADD_(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc);

// dsasum
double dsasum(int *n, double *x, int *incx);
double DSASUM(int *n, double *x, int *incx);
double DSASUM_(int *n, double *x, int *incx);

// dscasum
double dscasum(int *n, double *x, int *incx);
double DSCASUM(int *n, double *x, int *incx);
double DSCASUM_(int *n, double *x, int *incx);

// dscnrm2
double dscnrm2(int *n, double *x, int *incx);
double DSCNRM2(int *n, double *x, int *incx);
double DSCNRM2_(int *n, double *x, int *incx);

// dsnrm2
double dsnrm2(int *n, double *x, int *incx);
double DSNRM2(int *n, double *x, int *incx);
double DSNRM2_(int *n, double *x, int *incx);

// ilacpy
void ilacpy(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb);
void ILACPY(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb);
void ILACPY_(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb);

// indxg2l
int indxg2l(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);
int INDXG2L(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);
int INDXG2L_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);

// pcelset2
void pcelset2(int *desc, int *i, int *j, scomplex *val);
void PCELSET2(int *desc, int *i, int *j, scomplex *val);
void PCELSET2_(int *desc, int *i, int *j, scomplex *val);

// pcelget
void pcelget(int *desc, int *i, int *j, scomplex *val);
void PCELGET(int *desc, int *i, int *j, scomplex *val);
void PCELGET_(int *desc, int *i, int *j, scomplex *val);

// pcelset
void pcelset(int *desc, int *i, int *j, scomplex *val);
void PCELSET(int *desc, int *i, int *j, scomplex *val);
void PCELSET_(int *desc, int *i, int *j, scomplex *val);

// pctreecomb
void pctreecomb(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                int *lda, scomplex *work);
void PCTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                int *lda, scomplex *work);
void PCTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, scomplex *a,
                 int *lda, scomplex *work);

// pchkxmat
void pchkxmat(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *info);
void PCHKXMAT(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
              int *desca, int *descapos0, int *info);
void PCHKXMAT_(int *ma, int *mapos0, int *na, int *napos0, int *ia, int *ja,
               int *desca, int *descapos0, int *info);

// pclaread
void pclaread(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
              int *info);
void PCLAREAD(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
              int *info);
void PCLAREAD_(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info);

// pclawrite
void pclawrite(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info);
void PCLAWRITE(char *filename, int *m, int *n, scomplex *a, int *lda, int *desc,
               int *info);
void PCLAWRITE_(char *filename, int *m, int *n, scomplex *a, int *lda,
                int *desc, int *info);

// pcmatadd
void pcmatadd(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc);
void PCMATADD(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
              scomplex *beta, scomplex *c, int *ldc);
void PCMATADD_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
               scomplex *beta, scomplex *c, int *ldc);

// pcrow2col
void pcrow2col(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work);
void PCROW2COL(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
               scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, scomplex *work);
void PCROW2COL_(int *ictxt, int *m, int *n, int *nb, scomplex *vs, int *ldvs,
                scomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, scomplex *work);

// pdmatadd
void pdmatadd(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc);
void PDMATADD(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
              double *c, int *ldc);
void PDMATADD_(int *m, int *n, double *alpha, double *a, int *lda, double *beta,
               double *c, int *ldc);

// pdelget
void pdelget(int *desc, int *i, int *j, double *val);
void PDELGET(int *desc, int *i, int *j, double *val);
void PDELGET_(int *desc, int *i, int *j, double *val);

// pdelset
void pdelset(int *desc, int *i, int *j, double *val);
void PDELSET(int *desc, int *i, int *j, double *val);
void PDELSET_(int *desc, int *i, int *j, double *val);

// pdelset2
void pdelset2(int *desc, int *i, int *j, double *val);
void PDELSET2(int *desc, int *i, int *j, double *val);
void PDELSET2_(int *desc, int *i, int *j, double *val);

// pdlaread
void pdlaread(char *filename, int *m, int *n, void *a, int *lda, int *desc,
              int *info);
void PDLAREAD(char *filename, int *m, int *n, void *a, int *lda, int *desc,
              int *info);
void PDLAREAD_(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info);

// pdlawrite
void pdlawrite(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info);
void PDLAWRITE(char *filename, int *m, int *n, void *a, int *lda, int *desc,
               int *info);
void PDLAWRITE_(char *filename, int *m, int *n, void *a, int *lda, int *desc,
                int *info);

// pirow2col
void pirow2col(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work);
void PIROW2COL(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work);
void PIROW2COL_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, int *work);

// pdrow2col
void pdrow2col(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work);
void PDROW2COL(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
               double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, double *work);
void PDROW2COL_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs,
                double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, double *work);

// pdtreecomb
void pdtreecomb(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                int *lda, double *work);
void PDTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                int *lda, double *work);
void PDTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, double *a,
                 int *lda, double *work);

// pichekpad
void pichekpad(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
               int *ipre, int *ipost, int *chkval);
void PICHEKPAD(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
               int *ipre, int *ipost, int *chkval);
void PICHEKPAD_(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
                int *ipre, int *ipost, int *chkval);

// picol2row
void picol2row(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work);
void PICOL2ROW(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd,
               int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest,
               int *work);
void PICOL2ROW_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, int *work);

// pielget
void pielget(int *desc, int *i, int *j, int *val);
void PIELGET(int *desc, int *i, int *j, int *val);
void PIELGET_(int *desc, int *i, int *j, int *val);

// pielset
void pielset(int *desc, int *i, int *j, int *val);
void PIELSET(int *desc, int *i, int *j, int *val);
void PIELSET_(int *desc, int *i, int *j, int *val);

// pielset2
void pielset2(int *desc, int *i, int *j, int *val);
void PIELSET2(int *desc, int *i, int *j, int *val);
void PIELSET2_(int *desc, int *i, int *j, int *val);

// pifillpad
void pifillpad(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
               int *ipost, int *chkval);
void PIFILLPAD(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
               int *ipost, int *chkval);
void PIFILLPAD_(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
                int *ipost, int *chkval);

// pilaprnt
void pilaprnt(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt,
              int *icprnt, char *cmatnm, int *nout, int *work);
void PILAPRNT(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt,
              int *icprnt, char *cmatnm, int *nout, int *work);
void PILAPRNT_(int *m, int *n, int *a, int *ia, int *ja, int *desca,
               int *irprnt, int *icprnt, char *cmatnm, int *nout, int *work);

// pslawrite
void pslawrite(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info);
void PSLAWRITE(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info);
void PSLAWRITE_(char *filename, int *m, int *n, float *a, int *lda, int *desc,
                int *info);

// pselget
void pselget(int *desc, int *i, int *j, float *val);
void PSELGET(int *desc, int *i, int *j, float *val);
void PSELGET_(int *desc, int *i, int *j, float *val);

// pselset
void pselset(int *desc, int *i, int *j, float *val);
void PSELSET(int *desc, int *i, int *j, float *val);
void PSELSET_(int *desc, int *i, int *j, float *val);

// pselset2
void pselset2(int *desc, int *i, int *j, float *val);
void PSELSET2(int *desc, int *i, int *j, float *val);
void PSELSET2_(int *desc, int *i, int *j, float *val);

// pitreecomb
void pitreecomb(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                int *lda, int *work);
void PITREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                int *lda, int *work);
void PITREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, int *a,
                 int *lda, int *work);

// pslaread
void pslaread(char *filename, int *m, int *n, float *a, int *lda, int *desc,
              int *info);
void PSLAREAD(char *filename, int *m, int *n, float *a, int *lda, int *desc,
              int *info);
void PSLAREAD_(char *filename, int *m, int *n, float *a, int *lda, int *desc,
               int *info);

// pzmatadd
void pzmatadd(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc);
void PZMATADD(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
              dcomplex *beta, dcomplex *c, int *ldc);
void PZMATADD_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
               dcomplex *beta, dcomplex *c, int *ldc);

// pzrow2col
void pzrow2col(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work);
void PZROW2COL(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
               dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
               int *cdest, dcomplex *work);
void PZROW2COL_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs, int *ldvs,
                dcomplex *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                int *cdest, dcomplex *work);

// pztreecomb
void pztreecomb(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                int *lda, dcomplex *work);
void PZTREECOMB(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                int *lda, dcomplex *work);
void PZTREECOMB_(int *ictxt, char *scope, char *op, int *m, int *n, dcomplex *a,
                 int *lda, dcomplex *work);

// Fortran function declarations for all routines called by the wrappers
extern void sl_init_(int *ictxt, int *nprow, int *npcol);
extern void ccdotc_(int *n, scomplex *dotc, scomplex *x, int *incx, scomplex *y,
                    int *incy);
extern void ccdotu_(int *n, scomplex *dotu, scomplex *x, int *incx, scomplex *y,
                    int *incy);
extern void chk1mat_(int *ma, int *mapos0, int *na, int *napos0, int *ia,
                     int *ja, int *desca, int *descapos0, int *info);
extern int numroc_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
extern void ssdot_(int *n, float *dot, float *x, int *incx, float *y,
                   int *incy);
extern void smatadd_(int *m, int *n, float *alpha, float *a, int *lda,
                     float *beta, float *c, int *ldc);
extern void zmatadd_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
                     dcomplex *beta, dcomplex *c, int *ldc);
extern void zlatcpy_(char *uplo, int *m, int *n, dcomplex *a, int *lda,
                     dcomplex *b, int *ldb);
extern void slatcpy_(char *uplo, int *m, int *n, float *a, int *lda, float *b,
                     int *ldb);
extern void dlatcpy_(char *uplo, int *m, int *n, double *a, int *lda, double *b,
                     int *ldb);
extern void zzdotu_(int *n, dcomplex *dotu, dcomplex *x, int *incx, dcomplex *y,
                    int *incy);
extern void zzdotc_(int *n, dcomplex *dotc, dcomplex *x, int *incx, dcomplex *y,
                    int *incy);
extern void pschekpad_(int *ictxt, char *mess, int *m, int *n, float *a,
                       int *lda, int *ipre, int *ipost, float *chkval);
extern void pslaprnt_(int *m, int *n, float *a, int *ia, int *ja, int *desca,
                      int *irprnt, int *icprnt, char *cmatnm, int *nout,
                      float *work);
extern void psfillpad_(int *ictxt, int *m, int *n, float *a, int *lda,
                       int *ipre, int *ipost, float *chkval);
extern void pscol2row_(int *ictxt, int *m, int *n, int *nb, float *vs,
                       int *ldvs, float *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, float *work);
extern void pztreecomb_(int *ictxt, char *scope, char *op, int *m, int *n,
                        dcomplex *a, int *lda, dcomplex *work);
extern void pzrow2col_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs,
                       int *ldvs, dcomplex *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, dcomplex *work);
extern void pdchekpad_(int *ictxt, char *mess, int *m, int *n, double *a,
                       int *lda, int *ipre, int *ipost, double *chkval);
extern void pdlaprnt_(int *m, int *n, double *a, int *ia, int *ja, int *desca,
                      int *irprnt, int *icprnt, char *cmatnm, int *nout,
                      double *work);
extern void pdfillpad_(int *ictxt, int *m, int *n, double *a, int *lda,
                       int *ipre, int *ipost, double *chkval);
extern void pdcol2row_(int *ictxt, int *m, int *n, int *nb, double *vs,
                       int *ldvs, double *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, double *work);
extern void slboot_();
extern void sltimer_(int *i);
extern void slenable_();
extern void sldisable_();
extern double slinquire_(char *timetype, int *i);
extern void slcombine_(int *ictxt, char *scope, char *op, char *timetype,
                       int *n, int *ibeg, double *times);
extern void descinit_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
                      int *icsrc, int *ictxt, int *lld, int *info);
extern void descset_(int *desc, int *m, int *n, int *mb, int *nb, int *isrc,
                     int *icsrc, int *ictxt, int *lld);
extern void desc_convert_(int *desc_in, int *desc_out, int *info);
extern int ilcm_(int *m, int *n);
extern void infog2l_(int *grindx, int *gcindx, int *desc, int *nprow,
                     int *npcol, int *myrow, int *mycol, int *lrindx,
                     int *lcindx, int *rsrc, int *csrc);
extern int indxl2g_(int *indxloc, int *nb, int *iproc, int *isrcproc,
                    int *nprocs);
extern int indxg2p_(int *indxglob, int *nb, int *iproc, int *isrcproc,
                    int *nprocs);
extern void infog1l_(int *gindx, int *nb, int *nprocs, int *myroc,
                     int *isrcproc, int *lindx, int *rocsrc);
extern int npreroc_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
extern int iceil_(int *inum, int *idenom);
extern void pchk1mat_(int *ma, int *mapos0, int *na, int *napos0, int *ia,
                      int *ja, int *desca, int *descapos0, int *nextra, int *ex,
                      int *expos, int *info);
extern void pcfillpad_(int *ictxt, int *m, int *n, scomplex *a, int *lda,
                       int *ipre, int *ipost, scomplex *chkval);
extern void pcchekpad_(int *ictxt, char *mess, int *m, int *n, scomplex *a,
                       int *lda, int *ipre, int *ipost, scomplex *chkval);
extern void pclaprnt_(int *m, int *n, scomplex *a, int *ia, int *ja, int *desca,
                      int *irprnt, int *icprnt, char *cmatnm, int *nout,
                      scomplex *work);
extern void pzlaprnt_(int *m, int *n, dcomplex *a, int *ia, int *ja, int *desca,
                      int *irprnt, int *icprnt, char *cmatnm, int *nout,
                      dcomplex *work);
extern void pzfillpad_(int *ictxt, int *m, int *n, dcomplex *a, int *lda,
                       int *ipre, int *ipost, dcomplex *chkval);
extern void pccol2row_(int *ictxt, int *m, int *n, int *nb, scomplex *vs,
                       int *ldvs, scomplex *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, void *work);
extern void pzcol2row_(int *ictxt, int *m, int *n, int *nb, dcomplex *vs,
                       int *ldvs, dcomplex *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, void *work);
extern void pzchekpad_(int *ictxt, char *mess, int *m, int *n, dcomplex *a,
                       int *lda, int *ipre, int *ipost, dcomplex *chkval);
extern void clatcpy_(char *uplo, int *m, int *n, scomplex *a, int *lda,
                     scomplex *b, int *ldb);
extern void cmatadd_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
                     scomplex *beta, scomplex *c, int *ldc);
extern void dddot_(int *n, double *x, int *incx, double *y, int *incy,
                   double *z, int *incz, double *dot);
extern void dmatadd_(int *m, int *n, double *alpha, double *a, int *lda,
                     double *beta, double *c, int *ldc);
extern double dsasum_(int *n, double *x, int *incx);
extern double dscasum_(int *n, double *x, int *incx);
extern double dscnrm2_(int *n, double *x, int *incx);
extern double dsnrm2_(int *n, double *x, int *incx);
extern void ilacpy_(char *uplo, int *m, int *n, int *a, int *lda, int *b,
                    int *ldb);
extern int indxg2l_(int *indxglob, int *nb, int *iproc, int *isrcproc,
                    int *nprocs);
extern void pcelset2_(int *desc, int *i, int *j, scomplex *val);
extern void pcelget_(int *desc, int *i, int *j, scomplex *val);
extern void pcelset_(int *desc, int *i, int *j, scomplex *val);
extern void pctreecomb_(int *ictxt, char *scope, char *op, int *m, int *n,
                        scomplex *a, int *lda, scomplex *work);
extern void pchkxmat_(int *ma, int *mapos0, int *na, int *napos0, int *ia,
                      int *ja, int *desca, int *descapos0, int *info);
extern void pclaread_(char *filename, int *m, int *n, scomplex *a, int *lda,
                      int *desc, int *info);
extern void pclawrite_(char *filename, int *m, int *n, scomplex *a, int *lda,
                       int *desc, int *info);
extern void pcmatadd_(int *m, int *n, scomplex *alpha, scomplex *a, int *lda,
                      scomplex *beta, scomplex *c, int *ldc);
extern void pcrow2col_(int *ictxt, int *m, int *n, int *nb, scomplex *vs,
                       int *ldvs, scomplex *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, void *work);
extern void pdmatadd_(int *m, int *n, double *alpha, double *a, int *lda,
                      double *beta, double *c, int *ldc);
extern void pdelget_(int *desc, int *i, int *j, double *val);
extern void pdelset_(int *desc, int *i, int *j, double *val);
extern void pdelset2_(int *desc, int *i, int *j, double *val);
extern void pdlaread_(char *filename, int *m, int *n, double *a, int *lda,
                      int *desc, int *info);
extern void pdlawrite_(char *filename, int *m, int *n, double *a, int *lda,
                       int *desc, int *info);
extern void pirow2col_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                       int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                       int *cdest, int *work);
extern void pdrow2col_(int *ictxt, int *m, int *n, int *nb, double *vs,
                       int *ldvs, double *vd, int *ldvd, int *rsrc, int *csrc,
                       int *rdest, int *cdest, double *work);
extern void pdtreecomb_(int *ictxt, char *scope, char *op, int *m, int *n,
                        double *a, int *lda, double *work);
extern void pichekpad_(int *ictxt, char *mess, int *m, int *n, int *a, int *lda,
                       int *ipre, int *ipost, int *chkval);
extern void picol2row_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs,
                       int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest,
                       int *cdest, int *work);
extern void pielget_(int *desc, int *i, int *j, int *val);
extern void pielset_(int *desc, int *i, int *j, int *val);
extern void pielset2_(int *desc, int *i, int *j, int *val);
extern void pifillpad_(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre,
                       int *ipost, int *chkval);
extern void pilaprnt_(int *m, int *n, int *a, int *ia, int *ja, int *desca,
                      int *irprnt, int *icprnt, char *cmatnm, int *nout,
                      int *work);
extern void pslawrite_(char *filename, int *m, int *n, float *a, int *lda,
                       int *desc, int *info);
extern void pselget_(int *desc, int *i, int *j, float *val);
extern void pselset_(int *desc, int *i, int *j, float *val);
extern void pselset2_(int *desc, int *i, int *j, float *val);
extern void pitreecomb_(int *ictxt, char *scope, char *op, int *m, int *n,
                        int *a, int *lda, int *work);
extern void pslaread_(char *filename, int *m, int *n, float *a, int *lda,
                      int *desc, int *info);
extern void pzmatadd_(int *m, int *n, dcomplex *alpha, dcomplex *a, int *lda,
                      dcomplex *beta, dcomplex *c, int *ldc);
