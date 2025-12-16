/* ---------------------------------------------------------------------
 *
 *  -- AOCL ScaLAPACK Wrappers --
 *     Copyright (c) 2025 Advanced Micro Devices, Inc.  All rights reserved.
 *
 *  ---------------------------------------------------------------------
 */

#ifdef ENABLE_AOCL_WRAPPERS

#include "aocl_src_mangle_function_prototypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct scomplex {
  float real, imag;
} scomplex;
typedef struct dcomplex {
  double real, imag;
} dcomplex;

void mangle_bdlaapp(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK);
void BDLAAPP(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK);
void BDLAAPP_(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
              int *NITRAF, int *ITRAF, double *DTRAF, double *WORK);
void mangle_bdlaexc(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO);
void BDLAEXC(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO);
void BDLAEXC_(int *N, double *T, int *LDT, int *J1, int *N1, int *N2,
              int *ITRAF, double *DTRAF, double *WORK, int *INFO);
void mangle_bdtrexc(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO);
void BDTREXC(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO);
void BDTREXC_(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO);
void mangle_bslaapp(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK);
void BSLAAPP(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK);
void BSLAAPP_(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
              int *NITRAF, int *ITRAF, float *DTRAF, float *WORK);
void mangle_bslaexc(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO);
void BSLAEXC(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO);
void BSLAEXC_(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
              float *DTRAF, float *WORK, int *INFO);
void mangle_bstrexc(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO);
void BSTREXC(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO);
void BSTREXC_(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO);
void mangle_cdbtf2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO);
void CDBTF2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO);
void CDBTF2_(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
             int *INFO);
void mangle_cdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void CDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void CDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void mangle_cdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void CDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void CDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void mangle_cdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void CDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void CDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void mangle_clahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO);
void CLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO);
void CLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
              int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *LDZ, int *INFO);
void mangle_clamsh(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP);
void CLAMSH(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP);
void CLAMSH_(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
             int *LDH, int *N, float *ULP);
void mangle_clanv2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN);
void CLANV2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN);
void CLANV2_(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
             scomplex *RT2, float *CS, scomplex *SN);
void mangle_claref(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
            scomplex *T2, scomplex *T3);
void CLAREF(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
            scomplex *T2, scomplex *T3);
void CLAREF_(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
             int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
             int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
             scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
             scomplex *T2, scomplex *T3);
void mangle_cpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void CPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void CPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void mangle_csteqr2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void CSTEQR2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void CSTEQR2_(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
              int *NR, float *WORK, int *INFO);
void mangle_ctrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void CTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void CTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ);
void mangle_ddbtf2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB, int *INFO);
void DDBTF2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB, int *INFO);
void DDBTF2_(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
             int *INFO);
void mangle_ddbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void DDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void DDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void mangle_ddttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void DDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void DDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void mangle_ddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void DDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void DDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void mangle_dlamsh(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP);
void DLAMSH(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP);
void DLAMSH_(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
             int *N, double *ULP);
void mangle_dlapst(char *ID, int *N, double *D, int *INDX, int *INFO);
void DLAPST(char *ID, int *N, double *D, int *INDX, int *INFO);
void DLAPST_(char *ID, int *N, double *D, int *INDX, int *INFO);
void mangle_dlaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, double *SR, double *SI, double *H, int *LDH,
            int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V, int *LDV,
            double *U, int *LDU, int *NV, double *WV, int *LDWV, int *NH,
            double *WH, int *LDWH);
void DLAQR6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, double *SR, double *SI, double *H, int *LDH,
            int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V, int *LDV,
            double *U, int *LDU, int *NV, double *WV, int *LDWV, int *NH,
            double *WH, int *LDWH);
void DLAQR6_(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
             int *KBOT, int *NSHFTS, double *SR, double *SI, double *H,
             int *LDH, int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V,
             int *LDV, double *U, int *LDU, int *NV, double *WV, int *LDWV,
             int *NH, double *WH, int *LDWH);
void mangle_dlar1va(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
             double *LD, double *LLD, double *PIVMIN, double *GAPTOL, double *Z,
             int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA, int *R,
             int *ISUPPZ, double *NRMINV, double *RESID, double *RQCORR,
             double *WORK);
void DLAR1VA(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
             double *LD, double *LLD, double *PIVMIN, double *GAPTOL, double *Z,
             int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA, int *R,
             int *ISUPPZ, double *NRMINV, double *RESID, double *RQCORR,
             double *WORK);
void DLAR1VA_(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
              double *LD, double *LLD, double *PIVMIN, double *GAPTOL,
              double *Z, int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA,
              int *R, int *ISUPPZ, double *NRMINV, double *RESID,
              double *RQCORR, double *WORK);
void mangle_dlaref(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
            double *V2, double *V3, double *T1, double *T2, double *T3);
void DLAREF(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
            double *V2, double *V3, double *T1, double *T2, double *T3);
void DLAREF_(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
             int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
             int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
             double *V2, double *V3, double *T1, double *T2, double *T3);
void mangle_dlarrb2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
             double *RTOL1, double *RTOL2, int *OFFSET, double *W, double *WGAP,
             double *WERR, double *WORK, int *IWORK, double *PIVMIN,
             double *LGPVMN, double *LGSPDM, int *TWIST, int *INFO);
void DLARRB2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
             double *RTOL1, double *RTOL2, int *OFFSET, double *W, double *WGAP,
             double *WERR, double *WORK, int *IWORK, double *PIVMIN,
             double *LGPVMN, double *LGSPDM, int *TWIST, int *INFO);
void DLARRB2_(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
              double *RTOL1, double *RTOL2, int *OFFSET, double *W,
              double *WGAP, double *WERR, double *WORK, int *IWORK,
              double *PIVMIN, double *LGPVMN, double *LGSPDM, int *TWIST,
              int *INFO);
void mangle_dlarrd2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
             int *IU, double *GERS, double *RELTOL, double *D, double *E,
             double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
             double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
             int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
             int *INFO);
void DLARRD2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
             int *IU, double *GERS, double *RELTOL, double *D, double *E,
             double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
             double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
             int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
             int *INFO);
void DLARRD2_(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
              int *IU, double *GERS, double *RELTOL, double *D, double *E,
              double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
              double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
              int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
              int *INFO);
void mangle_dlarre2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
             double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
             double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
             int *IWORK, int *INFO);
void DLARRE2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
             double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
             double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
             int *IWORK, int *INFO);
void DLARRE2_(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
              int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
              int *IWORK, int *INFO);
void mangle_dlarre2a(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
              double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
              double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
              double *MINRGP, int *INFO);
void DLARRE2A(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
              double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
              double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
              double *MINRGP, int *INFO);
void DLARRE2A_(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
               double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
               double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
               int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
               double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
               double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
               double *MINRGP, int *INFO);
void mangle_dlarrf2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
             int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
             double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
             double *WORK, int *INFO);
void DLARRF2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
             int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
             double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
             double *WORK, int *INFO);
void DLARRF2_(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
              int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
              int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
              double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
              double *WORK, int *INFO);
void mangle_dlarrv2(int *N, double *VL, double *VU, double *D, double *L,
             double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
             int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
             double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
             int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
             int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void DLARRV2(int *N, double *VL, double *VU, double *D, double *L,
             double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
             int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
             double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
             int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
             int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void DLARRV2_(int *N, double *VL, double *VU, double *D, double *L,
              double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
              double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
              int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
              int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void mangle_dlasorte(double *S, int *LDS, int *J, double *OUT, int *INFO);
void DLASORTE(double *S, int *LDS, int *J, double *OUT, int *INFO);
void DLASORTE_(double *S, int *LDS, int *J, double *OUT, int *INFO);
void mangle_dlasrt2(char *ID, int *N, double *D, int *KEY, int *INFO);
void DLASRT2(char *ID, int *N, double *D, int *KEY, int *INFO);
void DLASRT2_(char *ID, int *N, double *D, int *KEY, int *INFO);
void mangle_dpttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void DPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void DPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void mangle_dstegr2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
             double *VU, int *IL, int *IU, int *M, double *W, double *Z,
             int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
             int *INFO);
void DSTEGR2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
             double *VU, int *IL, int *IU, int *M, double *W, double *Z,
             int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
             int *INFO);
void DSTEGR2_(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
              int *INFO);
void mangle_dstegr2a(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              int *INDERR, int *NSPLIT, double *PIVMIN, double *SCALE,
              double *WL, double *WU, int *INFO);
void DSTEGR2A(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              int *INDERR, int *NSPLIT, double *PIVMIN, double *SCALE,
              double *WL, double *WU, int *INFO);
void DSTEGR2A_(char *JOBZ, char *RANGE, int *N, double *D, double *E,
               double *VL, double *VU, int *IL, int *IU, int *M, double *W,
               double *Z, int *LDZ, int *NZC, double *WORK, int *LWORK,
               int *IWORK, int *LIWORK, int *DOL, int *DOU, int *NEEDIL,
               int *NEEDIU, int *INDERR, int *NSPLIT, double *PIVMIN,
               double *SCALE, double *WL, double *WU, int *INFO);
void mangle_dstegr2b(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
              double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
              double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void DSTEGR2B(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
              double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
              double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void DSTEGR2B_(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
               double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
               int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
               int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
               double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
               int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void mangle_dstein2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void DSTEIN2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void DSTEIN2_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
              int *IWORK, int *IFAIL, int *INFO);
void mangle_dsteqr2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void DSTEQR2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void DSTEQR2_(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
              int *NR, double *WORK, int *INFO);
void mangle_dtrmvt(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ);
void DTRMVT(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ);
void DTRMVT_(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
             double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ);
void mangle_icopypv(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO);
void ICOPYPV(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO);
void ICOPYPV_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *TPIV, int *IPIV, int *INFO);
void mangle_pcdbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO);
void mangle_pcdbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void PCDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void PCDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
               int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
               int *INFO);
void mangle_pcdtsv(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDTSV(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDTSV_(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
              int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pcdttrs(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
             scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
             int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCDTTRS(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
             scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
             int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCDTTRS_(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
              scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pcdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
              int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
              int *LWORK, int *INFO);
void PCDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
              int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
              int *LWORK, int *INFO);
void PCDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
               scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
               int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
               int *LWORK, int *INFO);
void mangle_pcgbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCGBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCGBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pcgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgebd2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBD2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBD2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgebrd(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBRD(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBRD_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgecon(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCGECON(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCGECON_(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void mangle_pcgeequ(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO);
void PCGEEQU(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO);
void PCGEEQU_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              int *INFO);
void mangle_pcgehd2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHD2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHD2_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgehrd(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHRD(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHRD_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgelq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgelqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgels(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGELS(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGELS_(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgeql2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQL2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQL2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgeqlf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQLF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQLF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgeqpf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO);
void PCGEQPF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO);
void PCGEQPF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void mangle_pcgeqr2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQR2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQR2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgeqrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgerfs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
             int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void PCGERFS(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
             int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void PCGERFS_(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
              int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void mangle_pcgerq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgerqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcgesv( int *N,  int *NRHS, scomplex *A,  int *IA,  int *JA,  int *DESCA,
            int *IPIV, scomplex *B,  int *IB,  int *JB,  int *DESCB, int *INFO);
void PCGESV( int *N,  int *NRHS, scomplex *A,  int *IA,  int *JA,  int *DESCA,
            int *IPIV, scomplex *B,  int *IB,  int *JB,  int *DESCB, int *INFO);
void PCGESV_( int *N,  int *NRHS, scomplex *A,  int *IA,  int *JA,  int *DESCA,
            int *IPIV, scomplex *B,  int *IB,  int *JB,  int *DESCB, int *INFO);
void mangle_pcgesvd(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
             int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
             scomplex *WORK, int *LWORK, float *RWORK, int *INFO);
void PCGESVD(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
             int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
             scomplex *WORK, int *LWORK, float *RWORK, int *INFO);
void PCGESVD_(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
              int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
              scomplex *WORK, int *LWORK, float *RWORK, int *INFO);
void mangle_pcgesvx(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCGESVX(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
              int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF,
              int *DESCAF, int *IPIV, char *EQUED, float *R, float *C,
              scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
              int *JX, int *DESCX, float *RCOND, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void mangle_pcgetf2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PCGETF2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PCGETF2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void mangle_pcgetrf( int *M,  int *N, scomplex *A,  int *IA,  int *JA,
              int *DESCA, int *IPIV, int *INFO);
void PCGETRF( int *M,  int *N, scomplex *A,  int *IA,  int *JA,
              int *DESCA, int *IPIV, int *INFO);
void PCGETRF_( int *M,  int *N, scomplex *A,  int *IA,  int *JA,
              int *DESCA, int *IPIV, int *INFO);
void mangle_pcgetri( int *N, scomplex *A,  int *IA,  int *JA,  int *DESCA,  int *IPIV,
             scomplex *WORK,  int *LWORK, int *IWORK,  int *LIWORK, int *INFO);
void PCGETRI( int *N, scomplex *A,  int *IA,  int *JA,  int *DESCA,  int *IPIV,
             scomplex *WORK,  int *LWORK, int *IWORK,  int *LIWORK, int *INFO);
void PCGETRI_( int *N, scomplex *A,  int *IA,  int *JA,  int *DESCA,  int *IPIV,
             scomplex *WORK,  int *LWORK, int *IWORK,  int *LIWORK, int *INFO);
void mangle_pcgetrs( char *TRANS,  int *N,  int *NRHS,  scomplex *A,  int *IA,  int *JA,
              int *DESCA,  int *IPIV, scomplex *B,  int *IB,  int *JB,  int *DESCB,
             int *INFO);
void PCGETRS( char *TRANS,  int *N,  int *NRHS,  scomplex *A,  int *IA,  int *JA,
              int *DESCA,  int *IPIV, scomplex *B,  int *IB,  int *JB,  int *DESCB,
             int *INFO);
void PCGETRS_( char *TRANS,  int *N,  int *NRHS,  scomplex *A,  int *IA,  int *JA,
              int *DESCA,  int *IPIV, scomplex *B,  int *IB,  int *JB,  int *DESCB,
             int *INFO);
void mangle_pcggqrf(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGQRF(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGQRF_(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcggrqf(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGRQF(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGRQF_(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcheev(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
            int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
            scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
            int *INFO);
void PCHEEV(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
            int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
            scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
            int *INFO);
void PCHEEV_(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
             int *INFO);
void mangle_pcheevd(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PCHEEVD(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PCHEEVD_(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_pcheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PCHEEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PCHEEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
              int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pcheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PCHEEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PCHEEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
              scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void mangle_pchegs2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCHEGS2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCHEGS2_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pchegst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO);
void PCHEGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO);
void PCHEGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, int *INFO);
void mangle_pchegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PCHEGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PCHEGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
              scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void mangle_pchengst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO);
void PCHENGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO);
void PCHENGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
               int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
               float *SCALE, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pchentrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO);
void PCHENTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO);
void PCHENTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               scomplex *RWORK, int *LRWORK, int *INFO);
void mangle_pchetd2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETD2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETD2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pchetrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pchettrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void PCHETTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void PCHETTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               int *INFO);
void mangle_pclabrd(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *X,
             int *IX, int *JX, int *DESCX, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK);
void PCLABRD(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *X,
             int *IX, int *JX, int *DESCX, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK);
void PCLABRD_(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *X, int *IX, int *JX, int *DESCX, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK);
void mangle_pclacgv(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PCLACGV(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PCLACGV_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void mangle_pclacon(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE);
void PCLACON(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE);
void PCLACON_(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
              int *IX, int *JX, int *DESCX, float *EST, int *KASE);
void mangle_pclaconsb(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK);
void PCLACONSB(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK);
void PCLACONSB_(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
                scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK);
void mangle_pclacp2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACP2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACP2_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void mangle_pclacp3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PCLACP3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PCLACP3_(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
              int *II, int *JJ, int *REV);
void mangle_pclacpy(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACPY(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACPY_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void mangle_pclaevswp(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK);
void PCLAEVSWP(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK);
void PCLAEVSWP_(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK);
void mangle_pclahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
             int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
             int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO);
void PCLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
             int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
             int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO);
void PCLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
              int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO);
void mangle_pclahrd(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK);
void PCLAHRD(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK);
void PCLAHRD_(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *T, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK);
void mangle_pclamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PCLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PCLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void mangle_pclapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PCLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PCLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK);
void mangle_pclapv2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PCLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PCLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void mangle_pclaqge(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED);
void PCLAQGE(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED);
void PCLAQGE_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              char *EQUED);
void mangle_pclaqsy(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PCLAQSY(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PCLAQSY_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void mangle_pclarf(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARF(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARF_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void mangle_pclarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK);
void PCLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK);
void PCLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
              scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
              scomplex *WORK);
void mangle_pclarfc(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARFC(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARFC_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK);
void mangle_pclarfg(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU);
void PCLARFG(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU);
void PCLARFG_(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, scomplex *TAU);
void mangle_pclarft(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARFT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARFT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void mangle_pclarz(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARZ(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARZ_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void mangle_pclarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK);
void PCLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK);
void PCLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
              scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
              scomplex *WORK);
void mangle_pclarzc(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARZC(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARZC_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK);
void mangle_pclarzt(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARZT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARZT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void mangle_pclascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PCLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PCLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, int *INFO);
void mangle_pclase2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASE2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASE2_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pclaset(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASET(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASET_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pclasmsub(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK);
void PCLASMSUB(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK);
void PCLASMSUB_(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                scomplex *BUF, int *LWORK);
void mangle_pclassq(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PCLASSQ(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PCLASSQ_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ);
void mangle_pclaswp(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PCLASWP(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PCLASWP_(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void mangle_pclatrd(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK);
void PCLATRD(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK);
void PCLATRD_(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
              int *IW, int *JW, int *DESCW, scomplex *WORK);
void mangle_pclatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK);
void PCLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK);
void PCLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK);
void mangle_pclatrz(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK);
void PCLATRZ(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK);
void PCLATRZ_(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK);
void mangle_pclattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO);
void PCLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO);
void PCLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
               int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO);
void mangle_pclauu2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUU2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUU2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pclauum(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUUM(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUUM_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pclawil(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V);
void PCLAWIL(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V);
void PCLAWIL_(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
              scomplex *H33, scomplex *H43H34, scomplex *V);
void mangle_pcmax1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PCMAX1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PCMAX1_(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX);
void mangle_pcpbsv(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPBSV(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPBSV_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO);
void mangle_pcpbtrf(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRF(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRF_(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcpbtrs(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRS(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
               int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
               scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcpocon(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCPOCON(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCPOCON_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void mangle_pcpoequ(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PCPOEQU(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PCPOEQU_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO);
void mangle_pcporfs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
             int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void PCPORFS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
             int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void PCPORFS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
              scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
              int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void mangle_pcposv(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOSV(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOSV_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pcposvx(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, scomplex *SR, scomplex *SC, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, scomplex *SR, scomplex *SC, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
              int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF,
              int *DESCAF, char *EQUED, scomplex *SR, scomplex *SC, scomplex *B,
              int *IB, int *JB, int *DESCB, scomplex *X, int *IX, int *JX,
              int *DESCX, float *RCOND, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO);
void mangle_pcpotf2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTF2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTF2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pcpotrf(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRF(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRF_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pcpotri(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRI(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRI_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pcpotrs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOTRS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOTRS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pcptsv(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPTSV(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPTSV_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO);
void mangle_pcpttrf(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRF(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRF_(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcpttrs(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRS(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRS_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
              scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void PCPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
              scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void PCPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
               scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
               int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
               int *INFO);
void mangle_pcsrscl(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PCSRSCL(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PCSRSCL_(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX);
void mangle_pcstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PCSTEIN(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PCSTEIN_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
              int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void mangle_pctrcon(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCTRCON(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void mangle_pctrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO);
void PCTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO);
void PCTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
              int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
              int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO);
void mangle_pctrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *FERR, float *BERR, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO);
void PCTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *FERR, float *BERR, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO);
void PCTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
              float *FERR, float *BERR, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void mangle_pctrti2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTI2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTI2_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pctrtri(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTRI(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTRI_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pctrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PCTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PCTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO);
void mangle_pctzrzf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCTZRZF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCTZRZF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcung2l(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2L(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2L_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcung2r(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2R(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2R_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcungl2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGL2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGL2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunglq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGLQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGLQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcungql(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQL(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQL_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcungqr(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQR(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQR_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcungr2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGR2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGR2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcungrq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGRQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGRQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pcunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pcunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pcunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pcunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO);
void PCUNMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pcunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void mangle_pddbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO);
void mangle_pddbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pddbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pddbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
               double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pddtsv(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDTSV(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDTSV_(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO);
void mangle_pddttrf(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRF(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRF_(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pddttrs(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRS(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRS_(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL,
               double *D, double *DU, int *JA, int *DESCA, double *B, int *IB,
               int *DESCB, double *AF, int *LAF, double *WORK, int *LWORK,
               int *INFO);
void mangle_pdgbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *WORK, int *LWORK, int *INFO);
void mangle_pdgbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO);
void PDGBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO);
void PDGBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pdgebal(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO);
void PDGEBAL(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO);
void PDGEBAL_(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
              double *SCALE, int *INFO);
void mangle_pdgebd2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBD2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBD2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO);
void mangle_pdgebrd(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBRD(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBRD_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO);
void mangle_pdgecon(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDGECON(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDGECON_(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pdgeequ(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PDGEEQU(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PDGEEQU_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO);
void mangle_pdgehd2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHD2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHD2_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgehrd(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHRD(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHRD_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgelq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgelqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgels(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGELS(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGELS_(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *WORK, int *LWORK, int *INFO);
void mangle_pdgeql2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQL2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQL2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgeqlf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQLF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQLF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgeqpf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQPF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQPF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgeqr2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQR2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQR2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgeqrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgerfs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGERFS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGERFS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, double *B, int *IB, int *JB, int *DESCB, double *X,
              int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdgerq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgerqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdgesv(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDGESV(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDGESV_(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
             int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pdgesvd(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
             int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
             double *WORK, int *LWORK, int *INFO);
void PDGESVD(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
             int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
             double *WORK, int *LWORK, int *INFO);
void PDGESVD_(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
              int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
              double *WORK, int *LWORK, int *INFO);
void mangle_pdgesvx(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
             int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGESVX(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
             int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
              int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
              int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
              double *RCOND, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdgetf2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETF2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETF2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void mangle_pdgetf2k(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO);
void PDGETF2K(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO);
void PDGETF2K_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
               int *IPIV, int *PANEL, int *INFO);
void mangle_pdgetf2_comm(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO);
void PDGETF2_COMM(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO);
void PDGETF2_COMM_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                   int *IPIV, int *INFO);
void mangle_pdgetrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void mangle_pdgetri(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGETRI(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGETRI_(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdgetrs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PDGETRS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PDGETRS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void mangle_pdggqrf(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGQRF(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGQRF_(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO);
void mangle_pdggrqf(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGRQF(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGRQF_(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO);
void mangle_pdhseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
              int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdlabad(int *ICTXT, double *SMALL, double *LARGE);
void PDLABAD(int *ICTXT, double *SMALL, double *LARGE);
void PDLABAD_(int *ICTXT, double *SMALL, double *LARGE);
void mangle_pdlabrd(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAUQ, double *TAUP, double *X,
             int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
             int *DESCY, double *WORK);
void PDLABRD(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAUQ, double *TAUP, double *X,
             int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
             int *DESCY, double *WORK);
void PDLABRD_(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *X,
              int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
              int *DESCY, double *WORK);
void mangle_pdlacon(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE);
void PDLACON(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE);
void PDLACON_(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
              int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE);
void mangle_pdlaconsb(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK);
void PDLACONSB(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK);
void PDLACONSB_(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
                double *H33, double *H43H34, double *BUF, int *LWORK);
void mangle_pdlacp2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACP2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACP2_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void mangle_pdlacp3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV);
void PDLACP3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV);
void PDLACP3_(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
              int *II, int *JJ, int *REV);
void mangle_pdlacpy(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACPY(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACPY_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void mangle_pdlaed0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO);
void PDLAED0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO);
void PDLAED0_(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *IWORK, int *INFO);
void mangle_pdlaed1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO);
void PDLAED1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO);
void PDLAED1_(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO);
void mangle_pdlaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
             int *DCOL, double *Q, int *LDQ, double *RHO, double *Z, double *W,
             double *DLAMDA, double *Q2, int *LDQ2, double *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2);
void PDLAED2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
             int *DCOL, double *Q, int *LDQ, double *RHO, double *Z, double *W,
             double *DLAMDA, double *Q2, int *LDQ2, double *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2);
void PDLAED2_(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D,
              int *DROW, int *DCOL, double *Q, int *LDQ, double *RHO, double *Z,
              double *W, double *DLAMDA, double *Q2, int *LDQ2, double *QBUF,
              int *CTOT, int *PSM, int *NPCOL, int *INDX, int *INDXC,
              int *INDXP, int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2,
              int *IB1, int *IB2);
void mangle_pdlaed3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
             int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
             double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
             int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
             int *INFO);
void PDLAED3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
             int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
             double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
             int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
             int *INFO);
void PDLAED3_(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
              int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
              double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
              int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
              int *INFO);
void mangle_pdlaedz(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK);
void PDLAEDZ(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK);
void PDLAEDZ_(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, double *Z, double *WORK);
void mangle_pdlaevswp(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK);
void PDLAEVSWP(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK);
void PDLAEVSWP_(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK);
void mangle_pdlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
             int *ILWORK, int *INFO);
void PDLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
             int *ILWORK, int *INFO);
void PDLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
              int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
              double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
              int *ILWORK, int *INFO);
void mangle_pdlahrd(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK);
void PDLAHRD(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK);
void PDLAHRD_(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
              double *WORK);
void mangle_pdlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PDLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PDLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void mangle_pdlamve(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK);
void PDLAMVE(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK);
void PDLAMVE_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *DWORK);
void mangle_pdlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PDLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PDLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              double *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK);
void mangle_pdlapv2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PDLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PDLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void mangle_pdlaqge(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PDLAQGE(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PDLAQGE_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED);
void mangle_pdlaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z, int *DESCZ,
             int *NS, int *ND, double *SR, double *SI, double *T, int *LDT,
             double *V, int *LDV, double *WR, double *WI, double *WORK,
             int *LWORK);
void PDLAQR2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z, int *DESCZ,
             int *NS, int *ND, double *SR, double *SI, double *T, int *LDT,
             double *V, int *LDV, double *WR, double *WI, double *WORK,
             int *LWORK);
void PDLAQR2_(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
              double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z,
              int *DESCZ, int *NS, int *ND, double *SR, double *SI, double *T,
              int *LDT, double *V, int *LDV, double *WR, double *WI,
              double *WORK, int *LWORK);
void mangle_pdlaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
             double *WORK, int *LWORK, int *INFO);
void PDLAQR4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
             double *WORK, int *LWORK, int *INFO);
void PDLAQR4_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
              int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
              double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
              double *WORK, int *LWORK, int *INFO);
void mangle_pdlaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
             int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK);
void PDLAQR5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
             int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK);
void PDLAQR5_(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
              int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
              int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK);
void mangle_pdlaqsy(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PDLAQSY(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PDLAQSY_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void mangle_pdlared1d(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED1D(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED1D_(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
                double *BYALL, double *WORK, int *LWORK);
void mangle_pdlared2d(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED2D(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED2D_(int *N, int *IA, int *JA, int *DESC, double *BYROW,
                double *BYALL, double *WORK, int *LWORK);
void mangle_pdlarf(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK);
void PDLARF(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK);
void PDLARF_(char *SIDE, int *M, int *N, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK);
void mangle_pdlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void mangle_pdlarfg(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU);
void PDLARFG(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU);
void PDLARFG_(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
              int *JX, int *DESCX, int *INCX, double *TAU);
void mangle_pdlarft(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARFT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARFT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void mangle_pdlarz(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK);
void PDLARZ(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK);
void PDLARZ_(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK);
void mangle_pdlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void mangle_pdlarzt(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARZT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARZT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void mangle_pdlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PDLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PDLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, int *INFO);
void mangle_pdlase2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASE2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASE2_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA);
void mangle_pdlaset(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASET(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASET_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA);
void mangle_pdlasmsub(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK);
void PDLASMSUB(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK);
void PDLASMSUB_(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                double *BUF, int *LWORK);
void mangle_pdlasrt(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDLASRT(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDLASRT_(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pdlassq(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PDLASSQ(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PDLASSQ_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ);
void mangle_pdlaswp(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PDLASWP(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PDLASWP_(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void mangle_pdlatrd(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK);
void PDLATRD(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK);
void PDLATRD_(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
              int *JW, int *DESCW, double *WORK);
void mangle_pdlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK);
void PDLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK);
void PDLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK);
void mangle_pdlatrz(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK);
void PDLATRZ(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK);
void PDLATRZ_(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK);
void mangle_pdlauu2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUU2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUU2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void mangle_pdlauum(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUUM(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUUM_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void mangle_pdlawil(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V);
void PDLAWIL(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V);
void PDLAWIL_(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
              double *H33, double *H43H34, double *V);
void mangle_pdorg2l(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2L(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2L_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorg2r(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2R(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2R_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorgl2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGL2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGL2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorglq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGLQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGLQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorgql(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQL(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQL_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorgqr(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQR(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQR_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorgr2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGR2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGR2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorgrq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGRQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGRQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormql(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void mangle_pdpbsv(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDPBSV(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDPBSV_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO);
void mangle_pdpbtrf(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRF(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRF_(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pdpbtrs(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO);
void PDPBTRS(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO);
void PDPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void mangle_pdpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
               int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
               int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pdpocon(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDPOCON(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDPOCON_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pdpoequ(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PDPOEQU(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PDPOEQU_(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO);
void mangle_pdporfs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, double *B,
             int *IB, int *JB, int *DESCB, double *X, int *IX, int *JX,
             int *DESCX, double *FERR, double *BERR, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDPORFS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, double *B,
             int *IB, int *JB, int *DESCB, double *X, int *IX, int *JX,
             int *DESCX, double *FERR, double *BERR, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDPORFS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
              int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdposv(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOSV(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOSV_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pdposvx(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *RCOND,
             double *FERR, double *BERR, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *RCOND,
             double *FERR, double *BERR, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
              int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
              int *DESCB, double *X, int *IX, int *JX, int *DESCX,
              double *RCOND, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdpotf2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTF2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTF2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pdpotrf(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRF(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRF_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pdpotri(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRI(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRI_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pdpotrs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOTRS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOTRS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pdptsv(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO);
void PDPTSV(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO);
void PDPTSV_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
             int *INFO);
void mangle_pdpttrf(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPTTRF(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPTTRF_(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void mangle_pdpttrs(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO);
void PDPTTRS(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO);
void PDPTTRS_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
              double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void mangle_pdpttrsv(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void PDPTTRSV(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void PDPTTRSV_(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
               int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
               double *WORK, int *LWORK, int *INFO);
void mangle_pdrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO);
void PDROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO);
void PDROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
            double *SN, double *WORK, int *LWORK, int *INFO);
void mangle_pdrscl(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PDRSCL(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PDRSCL_(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void mangle_pdstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
             double *VU, int *IL, int *IU, double *ABSTOL, double *D, double *E,
             int *M, int *NSPLIT, double *W, int *IBLOCK, int *ISPLIT,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDSTEBZ(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
             double *VU, int *IL, int *IU, double *ABSTOL, double *D, double *E,
             int *M, int *NSPLIT, double *W, int *IBLOCK, int *ISPLIT,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDSTEBZ_(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
              double *VU, int *IL, int *IU, double *ABSTOL, double *D,
              double *E, int *M, int *NSPLIT, double *W, int *IBLOCK,
              int *ISPLIT, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pdstedc(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDSTEDC(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDSTEDC_(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
              int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_pdstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PDSTEIN(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PDSTEIN_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void mangle_pdsyev(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO);
void PDSYEV(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO);
void PDSYEV_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *INFO);
void mangle_pdsyevd(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDSYEVD(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDSYEVD_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pdsyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDSYEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDSYEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pdsyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO);
void PDSYEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO);
void PDSYEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
              int *INFO);
void mangle_pdsygs2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDSYGS2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDSYGS2_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pdsygst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO);
void PDSYGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO);
void PDSYGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO);
void mangle_pdsygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO);
void PDSYGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO);
void PDSYGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
              int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
              int *INFO);
void mangle_pdsyngst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO);
void PDSYNGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO);
void PDSYNGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
               int *DESCA, double *B, int *IB, int *JB, int *DESCB,
               double *SCALE, double *WORK, int *LWORK, int *INFO);
void mangle_pdsyntrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYNTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYNTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO);
void mangle_pdsytd2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTD2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTD2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdsytrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void mangle_pdsyttrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYTTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYTTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO);
void mangle_pdtrcon(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDTRCON(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pdtrord(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
             int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
             double *WR, double *WI, int *M, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDTRORD(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
             int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
             double *WR, double *WI, int *M, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDTRORD_(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
              int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
              double *WR, double *WI, int *M, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pdtrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
             double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
             double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
              double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pdtrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
             int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WR, double *WI, int *M, double *S, double *SEP,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDTRSEN(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
             int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WR, double *WI, int *M, double *S, double *SEP,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDTRSEN_(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
              int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WR, double *WI, int *M, double *S,
              double *SEP, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pdtrti2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTI2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTI2_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pdtrtri(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTRI(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTRI_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pdtrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PDTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PDTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, int *INFO);
void mangle_pdtzrzf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDTZRZF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDTZRZF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void mangle_pdupdate(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO);
void PDUPDATE(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO);
void PDUPDATE_(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
               int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
               int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO);
void mangle_pdzsum1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PDZSUM1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PDZSUM1_(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX);
void mangle_pilaver(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH);
void PILAVER(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH);
void PILAVER_(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH);
void mangle_pmpcol(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL);
void PMPCOL(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL);
void PMPCOL_(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
             int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL);
void mangle_pmpim2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS);
void PMPIM2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS);
void PMPIM2_(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS);
void mangle_pscsum1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PSCSUM1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PSCSUM1_(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX);
void mangle_psdbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO);
void mangle_psdbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psdtsv(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDTSV(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDTSV_(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO);
void mangle_psdttrf(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRF(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRF_(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psdttrs(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRS(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRS_(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
               float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psgbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
             int *LWORK, int *INFO);
void mangle_psgbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO);
void PSGBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO);
void PSGBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
              int *INFO);
void mangle_psgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_psgebal(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO);
void PSGEBAL(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO);
void PSGEBAL_(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
              float *SCALE, int *INFO);
void mangle_psgebd2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBD2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBD2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO);
void mangle_psgebrd(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBRD(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBRD_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO);
void mangle_psgecon(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSGECON(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSGECON_(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_psgeequ(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO);
void PSGEEQU(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO);
void PSGEEQU_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO);
void mangle_psgehd2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHD2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHD2_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgehrd(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHRD(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHRD_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgelq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgelqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgels(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGELS(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGELS_(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
             int *LWORK, int *INFO);
void mangle_psgeql2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQL2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQL2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgeqlf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQLF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQLF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgeqpf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEQPF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEQPF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgeqr2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQR2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQR2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgeqrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgerfs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             float *B, int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSGERFS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             float *B, int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSGERFS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
              float *B, int *IB, int *JB, int *DESCB, float *X, int *IX,
              int *JX, int *DESCX, float *FERR, float *BERR, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_psgerq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgerqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psgesv(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSGESV(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSGESV_(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
             int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_psgesvd(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
             int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
             float *WORK, int *LWORK, int *INFO);
void PSGESVD(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
             int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
             float *WORK, int *LWORK, int *INFO);
void PSGESVD_(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
              int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
              float *WORK, int *LWORK, int *INFO);
void mangle_psgesvx(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
             int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSGESVX(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
             int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
              int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
              int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
              float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_psgetf2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETF2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETF2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO);
void mangle_psgetrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO);
void mangle_psgetri(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSGETRI(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSGETRI_(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_psgetrs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PSGETRS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PSGETRS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void mangle_psggqrf(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGQRF(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGQRF_(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO);
void mangle_psggrqf(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGRQF(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGRQF_(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO);
void mangle_pshseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
              int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pslabad(int *ICTXT, float *SMALL, float *LARGE);
void PSLABAD(int *ICTXT, float *SMALL, float *LARGE);
void PSLABAD_(int *ICTXT, float *SMALL, float *LARGE);
void mangle_pslabrd(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
             int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK);
void PSLABRD(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
             int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK);
void PSLABRD_(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
              int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK);
void mangle_pslacon(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE);
void PSLACON(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE);
void PSLACON_(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
              int *JX, int *DESCX, int *ISGN, float *EST, int *KASE);
void mangle_pslaconsb(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK);
void PSLACONSB(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK);
void PSLACONSB_(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
                float *H33, float *H43H34, float *BUF, int *LWORK);
void mangle_pslacp2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACP2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACP2_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB);
void mangle_pslacp3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV);
void PSLACP3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV);
void PSLACP3_(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
              int *JJ, int *REV);
void mangle_pslacpy(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACPY(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACPY_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB);
void mangle_pslaed0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO);
void PSLAED0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO);
void PSLAED0_(int *N, float *D, float *E, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *IWORK, int *INFO);
void mangle_pslaed1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO);
void PSLAED1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO);
void PSLAED1_(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO);
void mangle_pslaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
             int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
             float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2);
void PSLAED2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
             int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
             float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2);
void PSLAED2_(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
              int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
              float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
              int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
              int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
              int *IB2);
void mangle_pslaed3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
             int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z, float *U,
             int *LDU, float *BUF, int *INDX, int *INDCOL, int *INDROW,
             int *INDXR, int *INDXC, int *CTOT, int *NPCOL, int *INFO);
void PSLAED3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
             int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z, float *U,
             int *LDU, float *BUF, int *INDX, int *INDCOL, int *INDROW,
             int *INDXR, int *INDXC, int *CTOT, int *NPCOL, int *INFO);
void PSLAED3_(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
              int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z,
              float *U, int *LDU, float *BUF, int *INDX, int *INDCOL,
              int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
              int *INFO);
void mangle_pslaedz(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK);
void PSLAEDZ(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK);
void PSLAEDZ_(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, float *Z, float *WORK);
void mangle_pslaevswp(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK);
void PSLAEVSWP(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK);
void PSLAEVSWP_(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK);
void mangle_pslahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO);
void PSLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO);
void PSLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
              int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
              int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO);
void mangle_pslahrd(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK);
void PSLAHRD(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK);
void PSLAHRD_(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK);
void mangle_pslamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PSLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PSLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void mangle_pslamve(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK);
void PSLAMVE(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK);
void PSLAMVE_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *DWORK);
void mangle_pslapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PSLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PSLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
              int *DESCIP, int *IWORK);
void mangle_pslapv2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PSLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PSLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void mangle_pslaqge(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED);
void PSLAQGE(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED);
void PSLAQGE_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED);
void mangle_pslaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
             int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
             float *V, int *LDV, float *WR, float *WI, float *WORK, int *LWORK);
void PSLAQR2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
             int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
             float *V, int *LDV, float *WR, float *WI, float *WORK, int *LWORK);
void PSLAQR2_(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
              float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
              int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
              float *V, int *LDV, float *WR, float *WI, float *WORK,
              int *LWORK);
void mangle_pslaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
             int *LWORK, int *INFO);
void PSLAQR4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
             int *LWORK, int *INFO);
void PSLAQR4_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
              int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
              int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
              int *LWORK, int *INFO);
void mangle_pslaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, float *SR, float *SI, float *H, int *DESCH, int *ILOZ,
             int *IHIZ, float *Z, int *DESCZ, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK);
void PSLAQR5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, float *SR, float *SI, float *H, int *DESCH, int *ILOZ,
             int *IHIZ, float *Z, int *DESCZ, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK);
void PSLAQR5_(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
              int *NSHFTS, float *SR, float *SI, float *H, int *DESCH,
              int *ILOZ, int *IHIZ, float *Z, int *DESCZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK);
void mangle_pslaqsy(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PSLAQSY(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PSLAQSY_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void mangle_pslared1d(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED1D(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED1D_(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
                float *WORK, int *LWORK);
void mangle_pslared2d(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED2D(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED2D_(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
                float *WORK, int *LWORK);
void mangle_pslarf(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK);
void PSLARF(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK);
void PSLARF_(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
             int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
             float *WORK);
void mangle_pslarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
              float *C, int *IC, int *JC, int *DESCC, float *WORK);
void mangle_pslarfg(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU);
void PSLARFG(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU);
void PSLARFG_(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
              int *JX, int *DESCX, int *INCX, float *TAU);
void mangle_pslarft(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARFT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARFT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void mangle_pslarz(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK);
void PSLARZ(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK);
void PSLARZ_(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
             int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK);
void mangle_pslarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
              float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK);
void mangle_pslarzt(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARZT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARZT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void mangle_pslascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PSLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PSLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *INFO);
void mangle_pslase2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASE2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASE2_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA);
void mangle_pslaset(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASET(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASET_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA);
void mangle_pslasmsub(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK);
void PSLASMSUB(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK);
void PSLASMSUB_(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                float *BUF, int *LWORK);
void mangle_pslasrt(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSLASRT(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSLASRT_(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pslassq(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PSLASSQ(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PSLASSQ_(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ);
void mangle_pslaswp(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PSLASWP(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PSLASWP_(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void mangle_pslatrd(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK);
void PSLATRD(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK);
void PSLATRD_(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
              int *JW, int *DESCW, float *WORK);
void mangle_pslatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK);
void PSLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK);
void PSLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, float *WORK);
void mangle_pslatrz(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK);
void PSLATRZ(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK);
void PSLATRZ_(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK);
void mangle_pslauu2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUU2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUU2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void mangle_pslauum(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUUM(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUUM_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void mangle_pslawil(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V);
void PSLAWIL(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V);
void PSLAWIL_(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
              float *H33, float *H43H34, float *V);
void mangle_psorg2l(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2L(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2L_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorg2r(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2R(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2R_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorgl2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGL2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGL2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorglq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGLQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGLQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorgql(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQL(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQL_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorgqr(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQR(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQR_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorgr2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGR2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGR2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorgrq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGRQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGRQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_psorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormql(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_psormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void mangle_pspbsv(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSPBSV(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSPBSV_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO);
void mangle_pspbtrf(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRF(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRF_(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_pspbtrs(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO);
void PSPBTRS(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO);
void PSPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO);
void mangle_pspbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
               int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
               int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_pspocon(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSPOCON(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSPOCON_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_pspoequ(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PSPOEQU(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PSPOEQU_(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO);
void mangle_psporfs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
             int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSPORFS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
             int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSPORFS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
              int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
              int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_psposv(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOSV(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOSV_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_psposvx(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
             float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
             float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
              int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
              char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
              int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
              float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_pspotf2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTF2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTF2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pspotrf(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRF(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRF_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pspotri(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRI(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRI_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pspotrs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOTRS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOTRS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_psptsv(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO);
void PSPTSV(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO);
void PSPTSV_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO);
void mangle_pspttrf(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPTTRF(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPTTRF_(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void mangle_pspttrs(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO);
void PSPTTRS(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO);
void PSPTTRS_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
              float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
              int *LWORK, int *INFO);
void mangle_pspttrsv(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO);
void PSPTTRSV(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO);
void PSPTTRSV_(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
               int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
               float *WORK, int *LWORK, int *INFO);
void mangle_psrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO);
void PSROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO);
void PSROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
            float *SN, float *WORK, int *LWORK, int *INFO);
void mangle_psrscl(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PSRSCL(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PSRSCL_(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void mangle_psstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
             int *IL, int *IU, float *ABSTOL, float *D, float *E, int *M,
             int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT, float *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSTEBZ(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
             int *IL, int *IU, float *ABSTOL, float *D, float *E, int *M,
             int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT, float *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSTEBZ_(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL,
              float *VU, int *IL, int *IU, float *ABSTOL, float *D, float *E,
              int *M, int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_psstedc(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSSTEDC(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSSTEDC_(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
              int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_psstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
             int *ICLUSTR, float *GAP, int *INFO);
void PSSTEIN(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
             int *ICLUSTR, float *GAP, int *INFO);
void PSSTEIN_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
              int *ICLUSTR, float *GAP, int *INFO);
void mangle_pssyev(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO);
void PSSYEV(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO);
void PSSYEV_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *INFO);
void mangle_pssyevd(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSYEVD(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSYEVD_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pssyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSYEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSYEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pssyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
             int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PSSYEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
             int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PSSYEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
              int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void mangle_pssygs2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSSYGS2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSSYGS2_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pssygst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO);
void PSSYGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO);
void PSSYGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              int *INFO);
void mangle_pssygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *VL, float *VU, int *IL, int *IU, float *ABSTOL,
             int *M, int *NZ, float *W, float *ORFAC, float *Z, int *IZ,
             int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PSSYGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *VL, float *VU, int *IL, int *IU, float *ABSTOL,
             int *M, int *NZ, float *W, float *ORFAC, float *Z, int *IZ,
             int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void PSSYGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *B, int *IB,
              int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
              int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO);
void mangle_pssyngst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO);
void PSSYNGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO);
void PSSYNGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
               int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
               float *WORK, int *LWORK, int *INFO);
void mangle_pssyntrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYNTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYNTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO);
void mangle_pssytd2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTD2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTD2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void mangle_pssytrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void mangle_pssyttrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYTTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYTTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO);
void mangle_pstrcon(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSTRCON(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pstrord(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
             int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSTRORD(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
             int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSTRORD_(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
              int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
              float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void mangle_pstrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
             float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PSTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
             float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PSTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
              float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void mangle_pstrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
             int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSTRSEN(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
             int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSTRSEN_(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
              int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pstrti2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTI2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTI2_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pstrtri(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTRI(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTRI_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pstrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PSTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PSTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, int *INFO);
void mangle_pstzrzf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSTZRZF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSTZRZF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void mangle_pzdbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO);
void mangle_pzdbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
               int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
               int *INFO);
void mangle_pzdrscl(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PZDRSCL(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PZDRSCL_(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX);
void mangle_pzdtsv(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDTSV(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDTSV_(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzdttrf(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZDTTRF(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZDTTRF_(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
              int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pzdttrs(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
             dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZDTTRS(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
             dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZDTTRS_(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
              dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pzdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
              dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
              int *LWORK, int *INFO);
void PZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
              dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
              int *LWORK, int *INFO);
void PZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
               dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
               int *LWORK, int *INFO);
void mangle_pzgbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZGBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZGBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pzgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgebd2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBD2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBD2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgebrd(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBRD(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBRD_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgecon(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGECON(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGECON_(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void mangle_pzgeequ(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PZGEEQU(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PZGEEQU_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO);
void mangle_pzgehd2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHD2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHD2_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgehrd(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHRD(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHRD_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgelq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgelqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgels(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGELS(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGELS_(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgeql2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQL2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQL2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgeqlf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQLF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQLF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgeqpf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGEQPF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGEQPF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void mangle_pzgeqr2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQR2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQR2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgeqrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgerfs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZGERFS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZGERFS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO);
void mangle_pzgerq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgerqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzgesv(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZGESV(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZGESV_(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pzgesvd(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
             int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
             dcomplex *WORK, int *LWORK, float *RWORK, int *INFO);
void PZGESVD(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
             int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
             dcomplex *WORK, int *LWORK, float *RWORK, int *INFO);
void PZGESVD_(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
              int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
              dcomplex *WORK, int *LWORK, float *RWORK, int *INFO);
void mangle_pzgesvx(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZGESVX(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
              int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF,
              int *DESCAF, int *IPIV, char *EQUED, double *R, double *C,
              dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *RCOND, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO);
void mangle_pzgetf2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETF2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETF2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void mangle_pzgetrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void mangle_pzgetri(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PZGETRI(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PZGETRI_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pzgetrs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PZGETRS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PZGETRS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void mangle_pzggqrf(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGQRF(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGQRF_(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzggrqf(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGRQF(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGRQF_(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzheev(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
            int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
            dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
            int *INFO);
void PZHEEV(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
            int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
            dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
            int *INFO);
void PZHEEV_(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
             int *INFO);
void mangle_pzheevd(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PZHEEVD(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PZHEEVD_(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *IWORK, int *LIWORK, int *INFO);
void mangle_pzheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PZHEEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PZHEEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
              int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK,
              int *LRWORK, int *IWORK, int *LIWORK, int *INFO);
void mangle_pzheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PZHEEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PZHEEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void mangle_pzhegs2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZHEGS2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZHEGS2_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pzhegst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO);
void PZHEGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO);
void PZHEGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO);
void mangle_pzhegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PZHEGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PZHEGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void mangle_pzhengst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO);
void PZHENGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO);
void PZHENGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
               int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
               double *SCALE, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzhentrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO);
void PZHENTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO);
void PZHENTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               dcomplex *RWORK, int *LRWORK, int *INFO);
void mangle_pzhetd2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETD2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETD2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pzhetrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void mangle_pzhettrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZHETTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZHETTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               int *INFO);
void mangle_pzlabrd(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP, dcomplex *X,
             int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK);
void PZLABRD(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP, dcomplex *X,
             int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK);
void PZLABRD_(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *X, int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK);
void mangle_pzlacgv(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PZLACGV(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PZLACGV_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void mangle_pzlacon(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE);
void PZLACON(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE);
void PZLACON_(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *EST, int *KASE);
void mangle_pzlaconsb(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK);
void PZLACONSB(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK);
void PZLACONSB_(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
                dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK);
void mangle_pzlacp2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACP2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACP2_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void mangle_pzlacp3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PZLACP3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PZLACP3_(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
              int *II, int *JJ, int *REV);
void mangle_pzlacpy(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACPY(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACPY_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void mangle_pzlaevswp(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK);
void PZLAEVSWP(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK);
void PZLAEVSWP_(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK);
void mangle_pzlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
             int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
             int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO);
void PZLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
             int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
             int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO);
void PZLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
              int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO);
void mangle_pzlahrd(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK);
void PZLAHRD(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK);
void PZLAHRD_(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK);
void mangle_pzlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PZLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PZLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void mangle_pzlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PZLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PZLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK);
void mangle_pzlapv2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PZLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PZLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void mangle_pzlaqge(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PZLAQGE(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PZLAQGE_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED);
void mangle_pzlaqsy(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PZLAQSY(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PZLAQSY_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void mangle_pzlarf(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARF(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARF_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void mangle_pzlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK);
void PZLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK);
void PZLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
              dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
              dcomplex *WORK);
void mangle_pzlarfc(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARFC(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARFC_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK);
void mangle_pzlarfg(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU);
void PZLARFG(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU);
void PZLARFG_(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, dcomplex *TAU);
void mangle_pzlarft(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARFT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARFT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void mangle_pzlarz(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARZ(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARZ_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void mangle_pzlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK);
void PZLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK);
void PZLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
              dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
              dcomplex *WORK);
void mangle_pzlarzc(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARZC(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARZC_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK);
void mangle_pzlarzt(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARZT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARZT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void mangle_pzlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO);
void PZLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO);
void PZLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO);
void mangle_pzlase2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASE2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASE2_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pzlaset(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASET(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASET_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pzlasmsub(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK);
void PZLASMSUB(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK);
void PZLASMSUB_(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                dcomplex *BUF, int *LWORK);
void mangle_pzlassq(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PZLASSQ(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PZLASSQ_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ);
void mangle_pzlaswp(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PZLASWP(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PZLASWP_(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void mangle_pzlatrd(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK);
void PZLATRD(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK);
void PZLATRD_(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
              int *IW, int *JW, int *DESCW, dcomplex *WORK);
void mangle_pzlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK);
void PZLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK);
void PZLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK);
void mangle_pzlatrz(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK);
void PZLATRZ(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK);
void PZLATRZ_(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK);
void mangle_pzlattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO);
void PZLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO);
void PZLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
               int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO);
void mangle_pzlauu2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUU2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUU2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pzlauum(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUUM(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUUM_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void mangle_pzlawil(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V);
void PZLAWIL(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V);
void PZLAWIL_(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
              dcomplex *H33, dcomplex *H43H34, dcomplex *V);
void mangle_pzmax1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PZMAX1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PZMAX1_(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX);
void mangle_pzpbsv(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPBSV(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPBSV_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO);
void mangle_pzpbtrf(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRF(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRF_(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzpbtrs(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRS(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
               int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
               dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzpocon(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZPOCON(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZPOCON_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void mangle_pzpoequ(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PZPOEQU(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PZPOEQU_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO);
void mangle_pzporfs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZPORFS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZPORFS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
              dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void mangle_pzposv(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOSV(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOSV_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pzposvx(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO);
void PZPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
              int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF,
              int *DESCAF, char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B,
              int *IB, int *JB, int *DESCB, dcomplex *X, int *IX, int *JX,
              int *DESCX, double *RCOND, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO);
void mangle_pzpotf2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTF2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTF2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pzpotrf(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRF(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRF_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pzpotri(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRI(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRI_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void mangle_pzpotrs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOTRS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOTRS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void mangle_pzptsv(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPTSV(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPTSV_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO);
void mangle_pzpttrf(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRF(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRF_(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzpttrs(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRS(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRS_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
              dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
              dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
               dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
               int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
               int *INFO);
void mangle_pzstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PZSTEIN(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void PZSTEIN_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO);
void mangle_pztrcon(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZTRCON(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void mangle_pztrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO);
void PZTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO);
void PZTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
              int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
              int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO);
void mangle_pztrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
              double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void mangle_pztrti2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTI2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTI2_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pztrtri(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTRI(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTRI_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void mangle_pztrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PZTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PZTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO);
void mangle_pztzrzf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZTZRZF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZTZRZF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzung2l(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2L(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2L_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzung2r(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2R(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2R_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzungl2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGL2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGL2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunglq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGLQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGLQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzungql(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQL(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQL_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzungqr(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQR(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQR_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzungr2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGR2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGR2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzungrq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGRQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGRQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pzunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pzunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pzunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_pzunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO);
void PZUNMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO);
void mangle_pzunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void mangle_sdbtf2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTF2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTF2_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void mangle_sdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void mangle_sdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void SDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void SDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void mangle_sdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void SDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void SDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void mangle_slamsh(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP);
void SLAMSH(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP);
void SLAMSH_(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
             int *N, float *ULP);
void mangle_slapst(char *ID, int *N, float *D, int *INDX, int *INFO);
void SLAPST(char *ID, int *N, float *D, int *INDX, int *INFO);
void SLAPST_(char *ID, int *N, float *D, int *INDX, int *INFO);
void mangle_slaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
            int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
            float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
            float *WH, int *LDWH);
void SLAQR6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
            int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
            float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
            float *WH, int *LDWH);
void SLAQR6_(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
             int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
             int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
             float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
             float *WH, int *LDWH);
void mangle_slar1va(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
             float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
             int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
             int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
             float *WORK);
void SLAR1VA(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
             float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
             int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
             int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
             float *WORK);
void SLAR1VA_(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
              float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
              int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
              int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
              float *WORK);
void mangle_slaref(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
            float *V2, float *V3, float *T1, float *T2, float *T3);
void SLAREF(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
            float *V2, float *V3, float *T1, float *T2, float *T3);
void SLAREF_(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
             int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
             int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
             float *V2, float *V3, float *T1, float *T2, float *T3);
void mangle_slarrb2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
             float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
             float *WERR, float *WORK, int *IWORK, float *PIVMIN, float *LGPVMN,
             float *LGSPDM, int *TWIST, int *INFO);
void SLARRB2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
             float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
             float *WERR, float *WORK, int *IWORK, float *PIVMIN, float *LGPVMN,
             float *LGSPDM, int *TWIST, int *INFO);
void SLARRB2_(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
              float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
              float *WERR, float *WORK, int *IWORK, float *PIVMIN,
              float *LGPVMN, float *LGSPDM, int *TWIST, int *INFO);
void mangle_slarrd2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
             int *IU, float *GERS, float *RELTOL, float *D, float *E, float *E2,
             float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M, float *W,
             float *WERR, float *WL, float *WU, int *IBLOCK, int *INDEXW,
             float *WORK, int *IWORK, int *DOL, int *DOU, int *INFO);
void SLARRD2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
             int *IU, float *GERS, float *RELTOL, float *D, float *E, float *E2,
             float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M, float *W,
             float *WERR, float *WL, float *WU, int *IBLOCK, int *INDEXW,
             float *WORK, int *IWORK, int *DOL, int *DOU, int *INFO);
void SLARRD2_(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
              int *IU, float *GERS, float *RELTOL, float *D, float *E,
              float *E2, float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
              float *W, float *WERR, float *WL, float *WU, int *IBLOCK,
              int *INDEXW, float *WORK, int *IWORK, int *DOL, int *DOU,
              int *INFO);
void mangle_slarre2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
             float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
             float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
             int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
             int *INFO);
void SLARRE2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
             float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
             float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
             int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
             int *INFO);
void SLARRE2_(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
              int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
              int *INFO);
void mangle_slarre2a(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
              int *INFO);
void SLARRE2A(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
              int *INFO);
void SLARRE2A_(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
               float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
               float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
               int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
               float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
               double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
               int *INFO);
void mangle_slarrf2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
             int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
             double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
             float *WORK, int *INFO);
void SLARRF2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
             int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
             double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
             float *WORK, int *INFO);
void SLARRF2_(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
              int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
              int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
              double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
              float *WORK, int *INFO);
void mangle_slarrv2(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
             int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
             float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
             float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
             float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
             int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
             int *ZOFFSET, int *INFO);
void SLARRV2(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
             int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
             float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
             float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
             float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
             int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
             int *ZOFFSET, int *INFO);
void SLARRV2_(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
              int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
              int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
              int *ZOFFSET, int *INFO);
void mangle_slasorte(float *S, int *LDS, int *J, float *OUT, int *INFO);
void SLASORTE(float *S, int *LDS, int *J, float *OUT, int *INFO);
void SLASORTE_(float *S, int *LDS, int *J, float *OUT, int *INFO);
void mangle_slasrt2(char *ID, int *N, float *D, int *KEY, int *INFO);
void SLASRT2(char *ID, int *N, float *D, int *KEY, int *INFO);
void SLASRT2_(char *ID, int *N, float *D, int *KEY, int *INFO);
void mangle_spttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void SPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void SPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void mangle_sstegr2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
             float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
             int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO);
void SSTEGR2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
             float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
             int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO);
void SSTEGR2_(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO);
void mangle_sstegr2a(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *DOL, int *DOU, int *NEEDIL, int *NEEDIU, int *INDERR,
              int *NSPLIT, float *PIVMIN, float *SCALE, float *WL, float *WU,
              int *INFO);
void SSTEGR2A(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *DOL, int *DOU, int *NEEDIL, int *NEEDIU, int *INDERR,
              int *NSPLIT, float *PIVMIN, float *SCALE, float *WL, float *WU,
              int *INFO);
void SSTEGR2A_(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
               float *VU, int *IL, int *IU, int *M, float *W, float *Z,
               int *LDZ, int *NZC, float *WORK, int *LWORK, int *IWORK,
               int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
               int *INDERR, int *NSPLIT, float *PIVMIN, float *SCALE, float *WL,
               float *WU, int *INFO);
void mangle_sstegr2b(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
              float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
              float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void SSTEGR2B(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
              float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
              float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void SSTEGR2B_(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
               float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
               int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
               int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
               float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
               int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO);
void mangle_sstein2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void SSTEIN2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void SSTEIN2_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
              int *IWORK, int *IFAIL, int *INFO);
void mangle_ssteqr2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void SSTEQR2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void SSTEQR2_(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
              int *NR, float *WORK, int *INFO);
void mangle_strmvt(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ);
void STRMVT(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ);
void STRMVT_(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
             float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ);
void mangle_zdbtf2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO);
void ZDBTF2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO);
void ZDBTF2_(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
             int *INFO);
void mangle_zdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void ZDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void ZDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void mangle_zdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void ZDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void ZDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void mangle_zdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void ZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void ZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void mangle_zlahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO);
void ZLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO);
void ZLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
              int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *LDZ, int *INFO);
void mangle_zlamsh(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP);
void ZLAMSH(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP);
void ZLAMSH_(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
             int *LDH, int *N, double *ULP);
void mangle_zlanv2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN);
void ZLANV2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN);
void ZLANV2_(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
             dcomplex *RT2, double *CS, dcomplex *SN);
void mangle_zlaref(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
            dcomplex *T2, dcomplex *T3);
void ZLAREF(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
            dcomplex *T2, dcomplex *T3);
void ZLAREF_(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
             int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
             int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
             dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
             dcomplex *T2, dcomplex *T3);
void mangle_zpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void ZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void ZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void mangle_zsteqr2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void ZSTEQR2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void ZSTEQR2_(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
              int *NR, double *WORK, int *INFO);
void mangle_ztrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void ZTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void ZTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ);

/* mangle_pclange */
float mangle_pclange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* mangle_pclanhe */
float mangle_pclanhe(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK);
/* mangle_pclanhs */
float mangle_pclanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* mangle_pclansy */
float mangle_pclansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK);
/* mangle_pclantr */
float mangle_pclantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PCLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PCLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* mangle_pclatra */
scomplex mangle_pclatra(float *N, float *A, float *IA, float *JA, float *DESCA);
scomplex PCLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
scomplex PCLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);
/* mangle_pdlamch */
double mangle_pdlamch(int *ICTXT, char *CMACH);
double PDLAMCH(int *ICTXT, char *CMACH);
double PDLAMCH_(int *ICTXT, char *CMACH);
/* mangle_pdlange */
void mangle_pdlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* mangle_pdlanhs */
void mangle_pdlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* mangle_pdlansy */
void mangle_pdlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
/* mangle_pdlantr */
void mangle_pdlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PDLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PDLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* mangle_pdlatra */
void mangle_pdlatra(float *N, float *A, float *IA, float *JA, float *DESCA);
void PDLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
void PDLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);
/* mangle_pilaenvx */
int mangle_pilaenvx(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4);
int PILAENVX(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4);
int PILAENVX_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
              float *N2, float *N3, float *N4);
/* mangle_piparmq */
int mangle_piparmq(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB);
int PIPARMQ(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB);
int PIPARMQ_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
             float *ILO, float *IHI, float *LWORKNB);
/* mangle_pjlaenv */
int mangle_pjlaenv(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4);
int PJLAENV(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4);
int PJLAENV_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4);
/* mangle_pslamch */
float mangle_pslamch(float *ICTXT, float *CMACH);
float PSLAMCH(float *ICTXT, float *CMACH);
float PSLAMCH_(float *ICTXT, float *CMACH);
/* mangle_pslange */
float mangle_pslange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* mangle_pslanhs */
float mangle_pslanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* mangle_pslansy */
float mangle_pslansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PSLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PSLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK);
/* mangle_pslantr */
float mangle_pslantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PSLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PSLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* mangle_pslatra */
float mangle_pslatra(float *N, float *A, float *IA, float *JA, float *DESCA);
float PSLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
float PSLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);
/* mangle_pzlange */
void mangle_pzlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* mangle_pzlanhe */
void mangle_pzlanhe(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
/* mangle_pzlanhs */
void mangle_pzlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* mangle_pzlansy */
void mangle_pzlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
/* mangle_pzlantr */
void mangle_pzlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PZLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PZLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* mangle_pzlatra */
void mangle_pzlatra(float *N, float *A, float *IA, float *JA, float *DESCA);
void PZLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
void PZLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);

// Fortran function declarations for all routines called by the wrappers
extern float F77_PCLANGE(float *NORM, float *M, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float F77_PCLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float F77_PCLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
                      float *DESCA, float *WORK);
extern float F77_PCLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float F77_PCLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                      float *A, float *IA, float *JA, float *DESCA,
                      float *WORK);
extern scomplex F77_PCLATRA(float *N, float *A, float *IA, float *JA,
                         float *DESCA);
extern double F77_PDLAMCH(int *ICTXT, char *CMACH);
extern void F77_PDLANGE(float *NORM, float *M, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void F77_PDLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
                     float *DESCA, float *WORK);
extern void F77_PDLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void F77_PDLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                     float *A, float *IA, float *JA, float *DESCA, float *WORK);
extern void F77_PDLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
extern int F77_PILAENVX(float *ICTXT, float *ISPEC, float *NAME, float *OPTS,
                     float *N1, float *N2, float *N3, float *N4);
extern int F77_PIPARMQ(float *ICTXT, float *ISPEC, float *NAME, float *OPTS,
                    float *N, float *ILO, float *IHI, float *LWORKNB);
extern int F77_PJLAENV(float *ICTXT, float *ISPEC, float *NAME, float *OPTS,
                    float *N1, float *N2, float *N3, float *N4);
extern float F77_PSLAMCH(float *ICTXT, float *CMACH);
extern float F77_PSLANGE(float *NORM, float *M, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float F77_PSLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
                      float *DESCA, float *WORK);
extern float F77_PSLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float F77_PSLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                      float *A, float *IA, float *JA, float *DESCA,
                      float *WORK);
extern float F77_PSLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
extern void F77_PZLANGE(float *NORM, float *M, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void F77_PZLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void F77_PZLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
                     float *DESCA, float *WORK);
extern void F77_PZLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void F77_PZLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                     float *A, float *IA, float *JA, float *DESCA, float *WORK);
extern void F77_PZLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);

extern void F77_BDLAAPP(int *, int *, int *, int *, double *, int *, int *, int *,
                     double *, double *);
extern void F77_BDLAEXC(int *, double *, int *, int *, int *, int *, int *,
                     double *, double *, int *);
extern void F77_BDTREXC(int *, double *, int *, int *, int *, int *, int *, int *,
                     double *, double *, int *);
extern void F77_BSLAAPP(int *, int *, int *, int *, float *, int *, int *, int *,
                     float *, float *);
extern void F77_BSLAEXC(int *, float *, int *, int *, int *, int *, int *, float *,
                     float *, int *);
extern void F77_BSTREXC(int *, float *, int *, int *, int *, int *, int *, int *,
                     float *, float *, int *);
extern void F77_CDBTF2(int *, int *, int *, int *, scomplex *, int *, int *);
extern void F77_CDBTRF(int *, int *, int *, int *, float *, int *, int *);
extern void F77_CDTTRF(int *, scomplex *, scomplex *, scomplex *, int *);
extern void F77_CDTTRSV(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_CLAHQR2(int *, int *, int *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *, scomplex *, int *, int *);
extern void F77_CLAMSH(scomplex *, int *, int *, int *, scomplex *, int *, int *,
                    float *);
extern void F77_CLANV2(scomplex *, scomplex *, scomplex *, scomplex *, scomplex *,
                    scomplex *, float *, scomplex *);
extern void F77_CLAREF(char *, scomplex *, int *, int *, scomplex *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, int *,
                    scomplex *, scomplex *, scomplex *, scomplex *, scomplex *,
                    scomplex *);
extern void F77_CPTTRSV(char *, char *, int *, int *, float *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_CSTEQR2(char *, int *, float *, float *, scomplex *, int *, int *,
                     float *, int *);
extern void F77_CTRMVT(char *, int *, scomplex *, int *, scomplex *, int *,
                    scomplex *, int *, scomplex *, int *, scomplex *, int *);
extern void F77_DDBTF2(int *, int *, int *, int *, double *, int *, int *);
extern void F77_DDBTRF(int *, int *, int *, int *, float *, int *, int *);
extern void F77_DDTTRF(int *, scomplex *, scomplex *, scomplex *, int *);
extern void F77_DDTTRSV(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_DLAMSH(double *, int *, int *, int *, double *, int *, int *,
                    double *);
extern void F77_DLAPST(char *, int *, double *, int *, int *);
extern void F77_DLAQR6(char *, int *, int *, int *, int *, int *, int *, int *,
                    double *, double *, double *, int *, int *, int *, double *,
                    int *, double *, int *, double *, int *, int *, double *,
                    int *, int *, double *, int *);
extern void F77_DLAR1VA(int *, int *, int *, double *, double *, double *,
                     double *, double *, double *, double *, double *, int *,
                     int *, double *, double *, int *, int *, double *,
                     double *, double *, double *);
extern void F77_DLAREF(char *, double *, int *, int *, double *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, int *,
                    double *, double *, double *, double *, double *, double *);
extern void F77_DLARRB2(int *, double *, double *, int *, int *, double *,
                     double *, int *, double *, double *, double *, double *,
                     int *, double *, double *, double *, int *, int *);
extern void F77_DLARRD2(char *, char *, int *, double *, double *, int *, int *,
                     double *, double *, double *, double *, double *, double *,
                     int *, int *, int *, double *, double *, double *,
                     double *, int *, int *, double *, int *, int *, int *,
                     int *);
extern void F77_DLARRE2(char *, int *, double *, double *, int *, int *, double *,
                     double *, double *, double *, double *, double *, int *,
                     int *, int *, int *, int *, double *, double *, double *,
                     int *, int *, double *, double *, double *, int *, int *);
extern void F77_DLARRE2A(char *, int *, double *, double *, int *, int *, double *,
                      double *, double *, double *, double *, double *, int *,
                      int *, int *, int *, int *, int *, int *, double *,
                      double *, double *, int *, int *, double *, double *,
                      double *, double *, int *, double *, int *);
extern void F77_DLARRF2(int *, double *, double *, double *, int *, int *, int *,
                     int *, double *, double *, double *, int *, double *,
                     double *, double *, double *, double *, double *, double *,
                     double *, int *);
extern void F77_DLARRV2(int *, double *, double *, double *, double *, double *,
                     int *, int *, int *, int *, int *, int *, double *,
                     double *, double *, double *, double *, double *, int *,
                     int *, double *, double *, double *, int *, int *,
                     double *, int *, int *, int *, int *, int *, int *, int *,
                     int *);
extern void F77_DLASORTE(double *, int *, int *, double *, int *);
extern void F77_DLASRT2(char *, int *, double *, int *, int *);
extern void F77_DPTTRSV(char *, int *, int *, float *, scomplex *, scomplex *,
                     int *, int *);
extern void F77_DSTEGR2(char *, char *, int *, double *, double *, double *,
                     double *, int *, int *, int *, double *, double *, int *,
                     int *, int *, double *, int *, int *, int *, int *, int *,
                     int *, int *);
extern void F77_DSTEGR2A(char *, char *, int *, double *, double *, double *,
                      double *, int *, int *, int *, double *, double *, int *,
                      int *, double *, int *, int *, int *, int *, int *, int *,
                      int *, int *, int *, double *, double *, double *,
                      double *, int *);
extern void F77_DSTEGR2B(char *, int *, double *, double *, int *, double *,
                      double *, int *, int *, int *, double *, int *, int *,
                      int *, int *, int *, int *, int *, double *, double *,
                      double *, double *, double *, int *, int *, int *, int *,
                      int *, int *, int *);
extern void F77_DSTEIN2(int *, double *, double *, int *, double *, int *, int *,
                     double *, double *, int *, double *, int *, int *, int *);
extern void F77_DSTEQR2(char *, int *, double *, double *, double *, int *, int *,
                     double *, int *);
extern void F77_DTRMVT(char *, int *, double *, int *, double *, int *, double *,
                    int *, double *, int *, double *, int *);
extern void F77_ICOPYPV(int *, int *, double *, int *, int *, int *, int *, int *,
                     int *);
extern void F77_PCDBSV(int *, int *, int *, int *, scomplex *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void F77_PCDBTRF(int *, int *, int *, scomplex *, int *, int *, scomplex *,
                     int *, scomplex *, int *, int *);
extern void F77_PCDBTRS(char *, int *, int *, int *, int *, scomplex *, int *,
                     int *, scomplex *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *);
extern void F77_PCDBTRSV(char *, char *, int *, int *, int *, int *, scomplex *,
                      int *, int *, scomplex *, int *, int *, scomplex *, int *,
                      scomplex *, int *, int *);
extern void F77_PCDTSV(int *, int *, scomplex *, scomplex *, scomplex *, int *,
                    int *, scomplex *, int *, int *, scomplex *, int *, int *);
extern void F77_PCDTTRF(int *, scomplex *, scomplex *, scomplex *, int *, int *,
                     scomplex *, int *, scomplex *, int *, int *);
extern void F77_PCDTTRS(char *, int *, int *, scomplex *, scomplex *, scomplex *,
                     int *, int *, scomplex *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *);
extern void F77_PCDTTRSV(char *, char *, int *, int *, scomplex *, scomplex *,
                      scomplex *, int *, int *, scomplex *, int *, int *,
                      scomplex *, int *, scomplex *, int *, int *);
extern void F77_PCGBSV(int *, int *, int *, int *, scomplex *, int *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void F77_PCGBTRF(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, scomplex *, int *, int *);
extern void F77_PCGBTRS(char *, int *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *);
extern void F77_PCGEBD2(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, scomplex *, int *, int *);
extern void F77_PCGEBRD(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, scomplex *, int *, int *);
extern void F77_PCGECON(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, int *, float *, int *, int *);
extern void F77_PCGEEQU(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *);
extern void F77_PCGEHD2(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCGEHRD(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCGELQ2(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGELQF(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGELS(char *, int *, int *, int *, scomplex *, int *, int *,
                    int *, scomplex *, int *, int *, int *, scomplex *, int *,
                    int *);
extern void F77_PCGEQL2(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGEQLF(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGEQPF(int *, int *, scomplex *, int *, int *, int *, int *,
                     scomplex *, scomplex *, int *, float *, int *, int *);
extern void F77_PCGEQR2(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGEQRF(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGERFS(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, int *, float *, int *, int *);
extern void F77_PCGERQ2(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGERQF(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGESV( int *,  int *, scomplex *,  int *,  int *,  int *, int *,
                    scomplex *,  int *,  int *,  int *, int *);
extern void F77_PCGESVD(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, float *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, int *,
                     float *, int *);
extern void F77_PCGESVX(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *, int *, int *, char *,
                     float *, float *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, float *, float *, float *,
                     scomplex *, int *, float *, int *, int *);
extern void F77_PCGETF2(int *, int *, scomplex *, int *, int *, int *, int *,
                     int *);
extern void F77_PCGETRF( int *,  int *, scomplex *,  int *,  int *,  int *, int *,
                     int *);
extern void F77_PCGETRI( int *, scomplex *,  int *,  int *,  int *,  int *, scomplex *,
                      int *, int *,  int *, int *);
extern void F77_PCGETRS( char *,  int *,  int *,  scomplex *,  int *,  int *,  int *,
                      int *, scomplex *,  int *,  int *,  int *, int *);
extern void F77_PCGGQRF(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCGGRQF(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCHEEV(char *, char *, int *, scomplex *, int *, int *, int *,
                    float *, scomplex *, int *, int *, int *, scomplex *, int *,
                    scomplex *, int *, int *);
extern void F77_PCHEEVD(char *, char *, int *, scomplex *, int *, int *, int *,
                     float *, scomplex *, int *, int *, int *, scomplex *,
                     int *, float *, int *, int *, int *, int *);
extern void F77_PCHEEVR(char *, char *, char *, int *, scomplex *, int *, int *,
                     int *, float *, float *, int *, int *, int *, int *,
                     float *, scomplex *, int *, int *, int *, scomplex *,
                     int *, float *, int *, int *, int *, int *);
extern void F77_PCHEEVX(char *, char *, char *, int *, scomplex *, int *, int *,
                     int *, float *, float *, int *, int *, float *, int *,
                     int *, float *, float *, scomplex *, int *, int *, int *,
                     scomplex *, int *, float *, int *, int *, int *, int *,
                     int *, float *, int *);
extern void F77_PCHEGS2(int *, char *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, int *);
extern void F77_PCHEGST(int *, char *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, float *, int *);
extern void F77_PCHEGVX(int *, char *, char *, char *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, int *, int *, float *, int *, int *, float *,
                     float *, scomplex *, int *, int *, int *, scomplex *,
                     int *, float *, int *, int *, int *, int *, int *, float *,
                     int *);
extern void F77_PCHENGST(int *, char *, int *, scomplex *, int *, int *, int *,
                      scomplex *, int *, int *, int *, float *, scomplex *,
                      int *, int *);
extern void F77_PCHENTRD(char *, int *, scomplex *, int *, int *, int *, float *,
                      float *, scomplex *, scomplex *, int *, scomplex *, int *,
                      int *);
extern void F77_PCHETD2(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, int *, int *);
extern void F77_PCHETRD(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, int *, int *);
extern void F77_PCHETTRD(char *, int *, scomplex *, int *, int *, int *, float *,
                      float *, scomplex *, scomplex *, int *, int *);
extern void F77_PCLABRD(int *, int *, int *, scomplex *, int *, int *, int *,
                     float *, float *, scomplex *, scomplex *, scomplex *,
                     int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void F77_PCLACGV(int *, scomplex *, int *, int *, int *, int *);
extern void F77_PCLACON(int *, scomplex *, int *, int *, int *, scomplex *, int *,
                     int *, int *, float *, int *);
extern void F77_PCLACONSB(scomplex *, int *, int *, int *, int *, scomplex *,
                       scomplex *, scomplex *, scomplex *, int *);
extern void F77_PCLACP2(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *);
extern void F77_PCLACP3(int *, int *, scomplex *, int *, scomplex *, int *, int *,
                     int *, int *);
extern void F77_PCLACPY(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *);
extern void F77_PCLAEVSWP(int *, float *, int *, scomplex *, int *, int *, int *,
                       int *, int *, float *, int *);
extern void F77_PCLAHQR(int *, int *, int *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *, scomplex *, int *, scomplex *,
                     int *, int *, int *, int *);
extern void F77_PCLAHRD(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void F77_PCLAMR1D(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void F77_PCLAPIV(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void F77_PCLAPV2(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, int *, int *, int *, int *);
extern void F77_PCLAQGE(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, float *, float *, float *, char *);
extern void F77_PCLAQSY(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, float *, float *, char *);
extern void F77_PCLARF(char *, int *, int *, scomplex *, int *, int *, int *,
                    int *, scomplex *, scomplex *, int *, int *, int *,
                    scomplex *);
extern void F77_PCLARFB(char *, char *, char *, char *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, scomplex *,
                     int *, int *, int *, scomplex *);
extern void F77_PCLARFC(char *, int *, int *, scomplex *, int *, int *, int *,
                     int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void F77_PCLARFG(int *, scomplex *, int *, int *, scomplex *, int *, int *,
                     int *, int *, scomplex *);
extern void F77_PCLARFT(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, scomplex *, scomplex *);
extern void F77_PCLARZ(char *, int *, int *, int *, scomplex *, int *, int *,
                    int *, int *, scomplex *, scomplex *, int *, int *, int *,
                    scomplex *);
extern void F77_PCLARZB(char *, char *, char *, char *, int *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, scomplex *,
                     int *, int *, int *, scomplex *);
extern void F77_PCLARZC(char *, int *, int *, int *, scomplex *, int *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void F77_PCLARZT(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, scomplex *, scomplex *);
extern void F77_PCLASCL(char *, float *, float *, int *, int *, scomplex *, int *,
                     int *, int *, int *);
extern void F77_PCLASE2(char *, int *, int *, scomplex *, scomplex *, scomplex *,
                     int *, int *, int *);
extern void F77_PCLASET(char *, int *, int *, scomplex *, scomplex *, scomplex *,
                     int *, int *, int *);
extern void F77_PCLASMSUB(scomplex *, int *, int *, int *, int *, float *,
                       scomplex *, int *);
extern void F77_PCLASSQ(int *, scomplex *, int *, int *, int *, int *, float *,
                     float *);
extern void F77_PCLASWP(char *, char *, int *, scomplex *, int *, int *, int *,
                     int *, int *, int *);
extern void F77_PCLATRD(char *, int *, int *, scomplex *, int *, int *, int *,
                     float *, float *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *);
extern void F77_PCLATRS(char *, char *, char *, char *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *);
extern void F77_PCLATRZ(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *);
extern void F77_PCLATTRS(char *, char *, char *, char *, int *, scomplex *, int *,
                      int *, int *, scomplex *, int *, int *, int *, float *,
                      float *, int *);
extern void F77_PCLAUU2(char *, int *, scomplex *, int *, int *, int *);
extern void F77_PCLAUUM(char *, int *, scomplex *, int *, int *, int *);
extern void F77_PCLAWIL(int *, int *, int *, scomplex *, int *, scomplex *,
                     scomplex *, scomplex *, scomplex *);
extern void F77_PCMAX1(int *, scomplex *, int *, scomplex *, int *, int *, int *,
                    int *);
extern void F77_PCPBSV(char *, int *, int *, int *, scomplex *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void F77_PCPBTRF(char *, int *, int *, scomplex *, int *, int *, scomplex *,
                     int *, scomplex *, int *, int *);
extern void F77_PCPBTRS(char *, int *, int *, int *, scomplex *, int *, int *,
                     scomplex *, int *, int *, scomplex *, int *, scomplex *,
                     int *, int *);
extern void F77_PCPBTRSV(char *, char *, int *, int *, int *, scomplex *, int *,
                      int *, scomplex *, int *, int *, scomplex *, int *,
                      scomplex *, int *, int *);
extern void F77_PCPOCON(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, int *, float *, int *, int *);
extern void F77_PCPOEQU(int *, scomplex *, int *, int *, int *, float *, float *,
                     float *, float *, int *);
extern void F77_PCPORFS(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *, int *, float *, float *,
                     scomplex *, int *, float *, int *, int *);
extern void F77_PCPOSV(char *, int *, int *, scomplex *, int *, int *, int *,
                    scomplex *, int *, int *, int *, int *);
extern void F77_PCPOSVX(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *, int *, char *, scomplex *,
                     scomplex *, scomplex *, int *, int *, int *, scomplex *,
                     int *, int *, int *, float *, float *, float *, scomplex *,
                     int *, float *, int *, int *);
extern void F77_PCPOTF2(char *, int *, scomplex *, int *, int *, int *, int *);
extern void F77_PCPOTRF(char *, int *, scomplex *, int *, int *, int *, int *);
extern void F77_PCPOTRI(char *, int *, scomplex *, int *, int *, int *, int *);
extern void F77_PCPOTRS(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, int *);
extern void F77_PCPTSV(char *, int *, int *, scomplex *, scomplex *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void F77_PCPTTRF(int *, scomplex *, scomplex *, int *, int *, scomplex *,
                     int *, scomplex *, int *, int *);
extern void F77_PCPTTRS(char *, int *, int *, scomplex *, scomplex *, int *, int *,
                     scomplex *, int *, int *, scomplex *, int *, scomplex *,
                     int *, int *);
extern void F77_PCPTTRSV(char *, char *, int *, int *, scomplex *, scomplex *,
                      int *, int *, scomplex *, int *, int *, scomplex *, int *,
                      scomplex *, int *, int *);
extern void F77_PCSRSCL(int *, float *, scomplex *, int *, int *, int *, int *);
extern void F77_PCSTEIN(int *, float *, float *, int *, float *, int *, int *,
                     float *, scomplex *, int *, int *, int *, float *, int *,
                     int *, int *, int *, int *, float *, int *);
extern void F77_PCTRCON(char *, char *, char *, int *, scomplex *, int *, int *,
                     int *, float *, scomplex *, int *, float *, int *, int *);
extern void F77_PCTREVC(char *, char *, int *, int *, scomplex *, int *,
                     scomplex *, int *, scomplex *, int *, int *, int *,
                     scomplex *, float *, int *);
extern void F77_PCTRRFS(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     int *, int *, int *, float *, float *, scomplex *, int *,
                     float *, int *, int *);
extern void F77_PCTRTI2(char *, char *, int *, scomplex *, int *, int *, int *,
                     int *);
extern void F77_PCTRTRI(char *, char *, int *, scomplex *, int *, int *, int *,
                     int *);
extern void F77_PCTRTRS(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, int *);
extern void F77_PCTZRZF(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_PCUNG2L(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNG2R(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNGL2(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNGLQ(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNGQL(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNGQR(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNGR2(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNGRQ(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_PCUNM2L(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNM2R(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMBR(char *, char *, char *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void F77_PCUNMHR(char *, char *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void F77_PCUNML2(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMLQ(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMQL(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMQR(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMR2(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMR3(char *, char *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void F77_PCUNMRQ(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PCUNMRZ(char *, char *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void F77_PCUNMTR(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void F77_PDDBSV(int *, int *, int *, int *, double *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void F77_PDDBTRF(int *, int *, int *, double *, int *, int *, double *,
                     int *, double *, int *, int *);
extern void F77_PDDBTRS(char *, int *, int *, int *, int *, double *, int *, int *,
                     double *, int *, int *, double *, int *, double *, int *,
                     int *);
extern void F77_PDDBTRSV(char *, char *, int *, int *, int *, int *, double *,
                      int *, int *, double *, int *, int *, double *, int *,
                      double *, int *, int *);
extern void F77_PDDTSV(int *, int *, double *, double *, double *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void F77_PDDTTRF(int *, double *, double *, double *, int *, int *,
                     double *, int *, double *, int *, int *);
extern void F77_PDDTTRS(char *, int *, int *, double *, double *, double *, int *,
                     int *, double *, int *, int *, double *, int *, double *,
                     int *, int *);
extern void F77_PDDTTRSV(char *, char *, int *, int *, double *, double *,
                      double *, int *, int *, double *, int *, int *, double *,
                      int *, double *, int *, int *);
extern void F77_PDGBSV(int *, int *, int *, int *, double *, int *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void F77_PDGBTRF(int *, int *, int *, double *, int *, int *, int *,
                     double *, int *, double *, int *, int *);
extern void F77_PDGBTRS(char *, int *, int *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, double *, int *, double *,
                     int *, int *);
extern void F77_PDGEBAL(char *, int *, double *, int *, int *, int *, double *,
                     int *);
extern void F77_PDGEBD2(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *, int *);
extern void F77_PDGEBRD(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *, int *);
extern void F77_PDGECON(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void F77_PDGEEQU(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *);
extern void F77_PDGEHD2(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDGEHRD(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDGELQ2(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGELQF(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGELS(char *, int *, int *, int *, double *, int *, int *, int *,
                    double *, int *, int *, int *, double *, int *, int *);
extern void F77_PDGEQL2(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGEQLF(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGEQPF(int *, int *, double *, int *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDGEQR2(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGEQRF(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGERFS(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void F77_PDGERQ2(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGERQF(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGESV(int *, int *, double *, int *, int *, int *, int *,
                    double *, int *, int *, int *, int *);
extern void F77_PDGESVD(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, int *, double *,
                     int *, int *, int *, double *, int *, int *);
extern void F77_PDGESVX(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, int *, int *, char *,
                     double *, double *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void F77_PDGETF2(int *, int *, double *, int *, int *, int *, int *, int *);
extern void F77_PDGETF2K(int *, int *, double *, int *, int *, int *, int *, int *,
                      int *);
extern void F77_PDGETF2_COMM(int *, int *, double *, int *, int *, int *, int *,
                          int *);
extern void F77_PDGETRF(int *, int *, double *, int *, int *, int *, int *, int *);
extern void F77_PDGETRI(int *, double *, int *, int *, int *, int *, double *,
                     int *, int *, int *, int *);
extern void F77_PDGETRS(char *, int *, int *, double *, int *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void F77_PDGGQRF(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDGGRQF(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDHSEQR(char *, char *, int *, int *, int *, double *, int *,
                     double *, double *, double *, int *, double *, int *,
                     int *, int *, int *);
extern void F77_PDLABAD(int *, double *, double *);
extern void F77_PDLABRD(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, double *, double *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *);
extern void F77_PDLACON(int *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *, double *, int *);
extern void F77_PDLACONSB(double *, int *, int *, int *, int *, double *, double *,
                       double *, double *, int *);
extern void F77_PDLACP2(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *);
extern void F77_PDLACP3(int *, int *, double *, int *, double *, int *, int *,
                     int *, int *);
extern void F77_PDLACPY(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *);
extern void F77_PDLAED0(int *, double *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDLAED1(int *, int *, double *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *);
extern void F77_PDLAED2(int *, int *, int *, int *, int *, double *, int *, int *,
                     double *, int *, double *, double *, double *, double *,
                     double *, int *, double *, int *, int *, int *, int *,
                     int *, int *, int *, int *, int *, int *, int *, int *,
                     int *);
extern void F77_PDLAED3(int *, int *, int *, int *, double *, int *, int *,
                     double *, double *, double *, double *, double *, int *,
                     double *, int *, int *, int *, int *, int *, int *, int *,
                     int *);
extern void F77_PDLAEDZ(int *, int *, int *, double *, int *, int *, int *, int *,
                     double *, double *);
extern void F77_PDLAEVSWP(int *, double *, int *, double *, int *, int *, int *,
                       int *, int *, double *, int *);
extern void F77_PDLAHQR(int *, int *, int *, int *, int *, double *, int *,
                     double *, double *, int *, int *, double *, int *,
                     double *, int *, int *, int *, int *);
extern void F77_PDLAHRD(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, double *, int *, int *, int *,
                     double *);
extern void F77_PDLAMR1D(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void F77_PDLAMVE(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *);
extern void F77_PDLAPIV(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void F77_PDLAPV2(char *, char *, int *, int *, double *, int *, int *,
                     int *, int *, int *, int *, int *);
extern void F77_PDLAQGE(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, char *);
extern void F77_PDLAQR2(int *, int *, int *, int *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, double *, int *, double *,
                     double *, double *, int *);
extern void F77_PDLAQR4(int *, int *, int *, int *, int *, double *, int *,
                     double *, double *, int *, int *, double *, int *,
                     double *, int *, double *, int *, double *, int *, int *);
extern void F77_PDLAQR5(int *, int *, int *, int *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, double *, int *,
                     double *, int *, int *, int *);
extern void F77_PDLAQSY(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, char *);
extern void F77_PDLARED1D(int *, int *, int *, int *, double *, double *, double *,
                       int *);
extern void F77_PDLARED2D(int *, int *, int *, int *, double *, double *, double *,
                       int *);
extern void F77_PDLARF(char *, int *, int *, double *, int *, int *, int *, int *,
                    double *, double *, int *, int *, int *, double *);
extern void F77_PDLARFB(char *, char *, char *, char *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *, int *,
                     int *, int *, double *);
extern void F77_PDLARFG(int *, double *, int *, int *, double *, int *, int *,
                     int *, int *, double *);
extern void F77_PDLARFT(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, double *, double *);
extern void F77_PDLARZ(char *, int *, int *, int *, double *, int *, int *, int *,
                    int *, double *, double *, int *, int *, int *, double *);
extern void F77_PDLARZB(char *, char *, char *, char *, int *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *, int *,
                     int *, int *, double *);
extern void F77_PDLARZT(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, double *, double *);
extern void F77_PDLASCL(char *, double *, double *, int *, int *, double *, int *,
                     int *, int *, int *);
extern void F77_PDLASE2(char *, int *, int *, double *, double *, double *, int *,
                     int *, int *);
extern void F77_PDLASET(char *, int *, int *, double *, double *, double *, int *,
                     int *, int *);
extern void F77_PDLASMSUB(double *, int *, int *, int *, int *, double *, double *,
                       int *);
extern void F77_PDLASRT(char *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void F77_PDLASSQ(int *, double *, int *, int *, int *, int *, double *,
                     double *);
extern void F77_PDLASWP(char *, char *, int *, double *, int *, int *, int *,
                     int *, int *, int *);
extern void F77_PDLATRD(char *, int *, int *, double *, int *, int *, int *,
                     double *, double *, double *, double *, int *, int *,
                     int *, double *);
extern void F77_PDLATRS(char *, char *, char *, char *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, double *);
extern void F77_PDLATRZ(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *);
extern void F77_PDLAUU2(char *, int *, double *, int *, int *, int *);
extern void F77_PDLAUUM(char *, int *, double *, int *, int *, int *);
extern void F77_PDLAWIL(int *, int *, int *, double *, int *, double *, double *,
                     double *, double *);
extern void F77_PDORG2L(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORG2R(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORGL2(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORGLQ(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORGQL(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORGQR(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORGR2(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORGRQ(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void F77_PDORM2L(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORM2R(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMBR(char *, char *, char *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void F77_PDORMHR(char *, char *, int *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void F77_PDORML2(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMLQ(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMQL(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMQR(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMR2(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMR3(char *, char *, int *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void F77_PDORMRQ(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDORMRZ(char *, char *, int *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void F77_PDORMTR(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void F77_PDPBSV(char *, int *, int *, int *, double *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void F77_PDPBTRF(char *, int *, int *, double *, int *, int *, double *,
                     int *, double *, int *, int *);
extern void F77_PDPBTRS(char *, int *, int *, int *, double *, int *, int *,
                     double *, int *, int *, double *, int *, double *, int *,
                     int *);
extern void F77_PDPBTRSV(char *, char *, int *, int *, int *, double *, int *,
                      int *, double *, int *, int *, double *, int *, double *,
                      int *, int *);
extern void F77_PDPOCON(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void F77_PDPOEQU(int *, double *, int *, int *, int *, double *, double *,
                     double *, double *, int *);
extern void F77_PDPORFS(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, int *, double *, double *,
                     double *, int *, int *, int *, int *);
extern void F77_PDPOSV(char *, int *, int *, double *, int *, int *, int *,
                    double *, int *, int *, int *, int *);
extern void F77_PDPOSVX(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, int *, char *, double *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, double *, double *,
                     int *, int *, int *, int *);
extern void F77_PDPOTF2(char *, int *, double *, int *, int *, int *, int *);
extern void F77_PDPOTRF(char *, int *, double *, int *, int *, int *, int *);
extern void F77_PDPOTRI(char *, int *, double *, int *, int *, int *, int *);
extern void F77_PDPOTRS(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void F77_PDPTSV(int *, int *, double *, double *, int *, int *, double *,
                    int *, int *, double *, int *, int *);
extern void F77_PDPTTRF(int *, double *, double *, int *, int *, double *, int *,
                     double *, int *, int *);
extern void F77_PDPTTRS(int *, int *, double *, double *, int *, int *, double *,
                     int *, int *, double *, int *, double *, int *, int *);
extern void F77_PDPTTRSV(char *, int *, int *, double *, double *, int *, int *,
                      double *, int *, int *, double *, int *, double *, int *,
                      int *);
extern void F77_PDROT(int *, double *, int *, int *, int *, int *, double *, int *,
                   int *, int *, int *, double *, double *, double *, int *,
                   int *);
extern void F77_PDRSCL(int *, double *, double *, int *, int *, int *, int *);
extern void F77_PDSTEBZ(int *, char *, char *, int *, double *, double *, int *,
                     int *, double *, double *, double *, int *, int *,
                     double *, int *, int *, double *, int *, int *, int *,
                     int *);
extern void F77_PDSTEDC(char *, int *, double *, double *, double *, int *, int *,
                     int *, double *, int *, int *, int *, int *);
extern void F77_PDSTEIN(int *, double *, double *, int *, double *, int *, int *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *, int *, double *, int *);
extern void F77_PDSYEV(char *, char *, int *, double *, int *, int *, int *,
                    double *, double *, int *, int *, int *, double *, int *,
                    int *);
extern void F77_PDSYEVD(char *, char *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *);
extern void F77_PDSYEVR(char *, char *, char *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *);
extern void F77_PDSYEVX(char *, char *, char *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, double *, int *,
                     int *, double *, double *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *, int *, double *,
                     int *);
extern void F77_PDSYGS2(int *, char *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void F77_PDSYGST(int *, char *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, int *);
extern void F77_PDSYGVX(int *, char *, char *, char *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *, double *, int *, int *, double *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *, int *, double *, int *);
extern void F77_PDSYNGST(int *, char *, int *, double *, int *, int *, int *,
                      double *, int *, int *, int *, double *, double *, int *,
                      int *);
extern void F77_PDSYNTRD(char *, int *, double *, int *, int *, int *, double *,
                      double *, double *, double *, int *, int *);
extern void F77_PDSYTD2(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, int *, int *);
extern void F77_PDSYTRD(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, int *, int *);
extern void F77_PDSYTTRD(char *, int *, double *, int *, int *, int *, double *,
                      double *, double *, double *, int *, int *);
extern void F77_PDTRCON(char *, char *, char *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, int *, int *);
extern void F77_PDTRORD(char *, int *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *, int *,
                     double *, int *, int *, int *, int *);
extern void F77_PDTRRFS(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, double *, int *,
                     int *, int *, int *);
extern void F77_PDTRSEN(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, double *, double *, double *, int *,
                     int *, int *, int *);
extern void F77_PDTRTI2(char *, char *, int *, double *, int *, int *, int *,
                     int *);
extern void F77_PDTRTRI(char *, char *, int *, double *, int *, int *, int *,
                     int *);
extern void F77_PDTRTRS(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, int *);
extern void F77_PDTZRZF(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void F77_PDUPDATE(int *, int *, int *, int *, int *, int *, int *, int *,
                      int *, double *, int *, int *, int *, int *, int *, int *,
                      int *, int *);
extern void F77_PDZSUM1(int *, double *, dcomplex *, int *, int *, int *, int *);
extern void F77_PILAVER(int *, int *, int *);
extern void F77_PMPCOL(int *, int *, int *, int *, int *, int *, int *, int *,
                    int *, int *);
extern void F77_PMPIM2(int *, int *, int *, int *, int *);
extern void F77_PSCSUM1(int *, float *, scomplex *, int *, int *, int *, int *);
extern void F77_PSDBSV(int *, int *, int *, int *, float *, int *, int *, float *,
                    int *, int *, float *, int *, int *);
extern void F77_PSDBTRF(int *, int *, int *, float *, int *, int *, float *, int *,
                     float *, int *, int *);
extern void F77_PSDBTRS(char *, int *, int *, int *, int *, float *, int *, int *,
                     float *, int *, int *, float *, int *, float *, int *,
                     int *);
extern void F77_PSDBTRSV(char *, char *, int *, int *, int *, int *, float *,
                      int *, int *, float *, int *, int *, float *, int *,
                      float *, int *, int *);
extern void F77_PSDTSV(int *, int *, float *, float *, float *, int *, int *,
                    float *, int *, int *, float *, int *, int *);
extern void F77_PSDTTRF(int *, float *, float *, float *, int *, int *, float *,
                     int *, float *, int *, int *);
extern void F77_PSDTTRS(char *, int *, int *, float *, float *, float *, int *,
                     int *, float *, int *, int *, float *, int *, float *,
                     int *, int *);
extern void F77_PSDTTRSV(char *, char *, int *, int *, float *, float *, float *,
                      int *, int *, float *, int *, int *, float *, int *,
                      float *, int *, int *);
extern void F77_PSGBSV(int *, int *, int *, int *, float *, int *, int *, int *,
                    float *, int *, int *, float *, int *, int *);
extern void F77_PSGBTRF(int *, int *, int *, float *, int *, int *, int *, float *,
                     int *, float *, int *, int *);
extern void F77_PSGBTRS(char *, int *, int *, int *, int *, float *, int *, int *,
                     int *, float *, int *, int *, float *, int *, float *,
                     int *, int *);
extern void F77_PSGEBAL(char *, int *, float *, int *, int *, int *, float *,
                     int *);
extern void F77_PSGEBD2(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *, int *);
extern void F77_PSGEBRD(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *, int *);
extern void F77_PSGECON(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, int *);
extern void F77_PSGEEQU(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *);
extern void F77_PSGEHD2(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGEHRD(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGELQ2(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGELQF(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGELS(char *, int *, int *, int *, float *, int *, int *, int *,
                    float *, int *, int *, int *, float *, int *, int *);
extern void F77_PSGEQL2(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGEQLF(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGEQPF(int *, int *, float *, int *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGEQR2(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGEQRF(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGERFS(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, float *, int *, int *,
                     int *, float *, int *, int *, int *, float *, float *,
                     float *, int *, int *, int *, int *);
extern void F77_PSGERQ2(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGERQF(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSGESV(int *, int *, float *, int *, int *, int *, int *, float *,
                    int *, int *, int *, int *);
extern void F77_PSGESVD(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *);
extern void F77_PSGESVX(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, char *, float *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, float *, float *, int *,
                     int *, int *, int *);
extern void F77_PSGETF2(int *, int *, float *, int *, int *, int *, int *, int *);
extern void F77_PSGETRF(int *, int *, float *, int *, int *, int *, int *, int *);
extern void F77_PSGETRI(int *, float *, int *, int *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void F77_PSGETRS(char *, int *, int *, float *, int *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void F77_PSGGQRF(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *);
extern void F77_PSGGRQF(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *);
extern void F77_PSHSEQR(char *, char *, int *, int *, int *, float *, int *,
                     float *, float *, float *, int *, float *, int *, int *,
                     int *, int *);
extern void F77_PSLABAD(int *, float *, float *);
extern void F77_PSLABRD(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *);
extern void F77_PSLACON(int *, float *, int *, int *, int *, float *, int *, int *,
                     int *, int *, float *, int *);
extern void F77_PSLACONSB(float *, int *, int *, int *, int *, float *, float *,
                       float *, float *, int *);
extern void F77_PSLACP2(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *);
extern void F77_PSLACP3(int *, int *, float *, int *, float *, int *, int *, int *,
                     int *);
extern void F77_PSLACPY(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *);
extern void F77_PSLAED0(int *, float *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void F77_PSLAED1(int *, int *, float *, int *, float *, int *, int *, int *,
                     float *, float *, int *, int *);
extern void F77_PSLAED2(int *, int *, int *, int *, int *, float *, int *, int *,
                     float *, int *, float *, float *, float *, float *,
                     float *, int *, float *, int *, int *, int *, int *, int *,
                     int *, int *, int *, int *, int *, int *, int *, int *);
extern void F77_PSLAED3(int *, int *, int *, int *, float *, int *, int *, float *,
                     float *, float *, float *, float *, int *, float *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void F77_PSLAEDZ(int *, int *, int *, float *, int *, int *, int *, int *,
                     float *, float *);
extern void F77_PSLAEVSWP(int *, float *, int *, float *, int *, int *, int *,
                       int *, int *, float *, int *);
extern void F77_PSLAHQR(int *, int *, int *, int *, int *, float *, int *, float *,
                     float *, int *, int *, float *, int *, float *, int *,
                     int *, int *, int *);
extern void F77_PSLAHRD(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, float *);
extern void F77_PSLAMR1D(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void F77_PSLAMVE(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *);
extern void F77_PSLAPIV(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void F77_PSLAPV2(char *, char *, int *, int *, float *, int *, int *, int *,
                     int *, int *, int *, int *);
extern void F77_PSLAQGE(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, char *);
extern void F77_PSLAQR2(int *, int *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, float *, int *, float *, float *,
                     float *, int *);
extern void F77_PSLAQR4(int *, int *, int *, int *, int *, float *, int *, float *,
                     float *, int *, int *, float *, int *, float *, int *,
                     float *, int *, float *, int *, int *);
extern void F77_PSLAQR5(int *, int *, int *, int *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, float *, int *,
                     float *, int *, int *, int *);
extern void F77_PSLAQSY(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, char *);
extern void F77_PSLARED1D(int *, int *, int *, int *, float *, float *, float *,
                       int *);
extern void F77_PSLARED2D(int *, int *, int *, int *, float *, float *, float *,
                       int *);
extern void F77_PSLARF(char *, int *, int *, float *, int *, int *, int *, int *,
                    float *, float *, int *, int *, int *, float *);
extern void F77_PSLARFB(char *, char *, char *, char *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *, int *, float *);
extern void F77_PSLARFG(int *, float *, int *, int *, float *, int *, int *, int *,
                     int *, float *);
extern void F77_PSLARFT(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *);
extern void F77_PSLARZ(char *, int *, int *, int *, float *, int *, int *, int *,
                    int *, float *, float *, int *, int *, int *, float *);
extern void F77_PSLARZB(char *, char *, char *, char *, int *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *, int *, float *);
extern void F77_PSLARZT(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *);
extern void F77_PSLASCL(char *, float *, float *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void F77_PSLASE2(char *, int *, int *, float *, float *, float *, int *,
                     int *, int *);
extern void F77_PSLASET(char *, int *, int *, float *, float *, float *, int *,
                     int *, int *);
extern void F77_PSLASMSUB(float *, int *, int *, int *, int *, float *, float *,
                       int *);
extern void F77_PSLASRT(char *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void F77_PSLASSQ(int *, float *, int *, int *, int *, int *, float *,
                     float *);
extern void F77_PSLASWP(char *, char *, int *, float *, int *, int *, int *, int *,
                     int *, int *);
extern void F77_PSLATRD(char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *, float *, int *, int *, int *,
                     float *);
extern void F77_PSLATRS(char *, char *, char *, char *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *,
                     float *, float *);
extern void F77_PSLATRZ(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *);
extern void F77_PSLAUU2(char *, int *, float *, int *, int *, int *);
extern void F77_PSLAUUM(char *, int *, float *, int *, int *, int *);
extern void F77_PSLAWIL(int *, int *, int *, float *, int *, float *, float *,
                     float *, float *);
extern void F77_PSORG2L(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORG2R(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORGL2(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORGLQ(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORGQL(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORGQR(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORGR2(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORGRQ(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PSORM2L(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORM2R(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMBR(char *, char *, char *, int *, int *, int *, float *,
                     int *, int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void F77_PSORMHR(char *, char *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void F77_PSORML2(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMLQ(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMQL(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMQR(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMR2(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMR3(char *, char *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void F77_PSORMRQ(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void F77_PSORMRZ(char *, char *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void F77_PSORMTR(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void F77_PSPBSV(char *, int *, int *, int *, float *, int *, int *, float *,
                    int *, int *, float *, int *, int *);
extern void F77_PSPBTRF(char *, int *, int *, float *, int *, int *, float *,
                     int *, float *, int *, int *);
extern void F77_PSPBTRS(char *, int *, int *, int *, float *, int *, int *,
                     float *, int *, int *, float *, int *, float *, int *,
                     int *);
extern void F77_PSPBTRSV(char *, char *, int *, int *, int *, float *, int *,
                      int *, float *, int *, int *, float *, int *, float *,
                      int *, int *);
extern void F77_PSPOCON(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, int *);
extern void F77_PSPOEQU(int *, float *, int *, int *, int *, float *, float *,
                     float *, float *, int *);
extern void F77_PSPORFS(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, float *,
                     int *, int *, int *, int *);
extern void F77_PSPOSV(char *, int *, int *, float *, int *, int *, int *, float *,
                    int *, int *, int *, int *);
extern void F77_PSPOSVX(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, char *, float *, float *,
                     float *, int *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *, float *, int *, int *, int *,
                     int *);
extern void F77_PSPOTF2(char *, int *, float *, int *, int *, int *, int *);
extern void F77_PSPOTRF(char *, int *, float *, int *, int *, int *, int *);
extern void F77_PSPOTRI(char *, int *, float *, int *, int *, int *, int *);
extern void F77_PSPOTRS(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void F77_PSPTSV(int *, int *, float *, float *, int *, int *, float *,
                    int *, int *, float *, int *, int *);
extern void F77_PSPTTRF(int *, float *, float *, int *, int *, float *, int *,
                     float *, int *, int *);
extern void F77_PSPTTRS(int *, int *, float *, float *, int *, int *, float *,
                     int *, int *, float *, int *, float *, int *, int *);
extern void F77_PSPTTRSV(char *, int *, int *, float *, float *, int *, int *,
                      float *, int *, int *, float *, int *, float *, int *,
                      int *);
extern void F77_PSROT(int *, double *, int *, int *, int *, int *, double *, int *,
                   int *, int *, int *, float *, float *, float *, int *,
                   int *);
extern void F77_PSRSCL(int *, float *, float *, int *, int *, int *, int *);
extern void F77_PSSTEBZ(int *, char *, char *, int *, float *, float *, int *,
                     int *, float *, float *, float *, int *, int *, float *,
                     int *, int *, float *, int *, int *, int *, int *);
extern void F77_PSSTEDC(char *, int *, float *, float *, float *, int *, int *,
                     int *, float *, int *, int *, int *, int *);
extern void F77_PSSTEIN(int *, float *, float *, int *, float *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *, int *, float *, int *);
extern void F77_PSSYEV(char *, char *, int *, float *, int *, int *, int *,
                    float *, float *, int *, int *, int *, float *, int *,
                    int *);
extern void F77_PSSYEVD(char *, char *, int *, float *, int *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void F77_PSSYEVR(char *, char *, char *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void F77_PSSYEVX(char *, char *, char *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, float *, int *,
                     int *, float *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, int *, float *,
                     int *);
extern void F77_PSSYGS2(int *, char *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void F77_PSSYGST(int *, char *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, int *);
extern void F77_PSSYGVX(int *, char *, char *, char *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *, float *, int *, int *, float *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *, int *, float *, int *);
extern void F77_PSSYNGST(int *, char *, int *, float *, int *, int *, int *,
                      float *, int *, int *, int *, float *, float *, int *,
                      int *);
extern void F77_PSSYNTRD(char *, int *, float *, int *, int *, int *, float *,
                      float *, float *, float *, int *, int *);
extern void F77_PSSYTD2(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, int *, int *);
extern void F77_PSSYTRD(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, int *, int *);
extern void F77_PSSYTTRD(char *, int *, float *, int *, int *, int *, float *,
                      float *, float *, float *, int *, int *);
extern void F77_PSTRCON(char *, char *, char *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, int *);
extern void F77_PSTRORD(char *, int *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, int *,
                     float *, int *, int *, int *, int *);
extern void F77_PSTRRFS(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, float *, int *, int *,
                     int *, int *);
extern void F77_PSTRSEN(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, int *, int *, int *, float *, float *,
                     int *, float *, float *, float *, int *, int *, int *,
                     int *);
extern void F77_PSTRTI2(char *, char *, int *, float *, int *, int *, int *,
                     int *);
extern void F77_PSTRTRI(char *, char *, int *, float *, int *, int *, int *,
                     int *);
extern void F77_PSTRTRS(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, int *);
extern void F77_PSTZRZF(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void F77_PZDBSV(int *, int *, int *, int *, dcomplex *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void F77_PZDBTRF(int *, int *, int *, dcomplex *, int *, int *, dcomplex *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZDBTRS(char *, int *, int *, int *, int *, dcomplex *, int *,
                     int *, dcomplex *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZDBTRSV(char *, char *, int *, int *, int *, int *, dcomplex *,
                      int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                      dcomplex *, int *, int *);
extern void F77_PZDRSCL(int *, double *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZDTSV(int *, int *, dcomplex *, dcomplex *, dcomplex *, int *,
                    int *, dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void F77_PZDTTRF(int *, dcomplex *, dcomplex *, dcomplex *, int *, int *,
                     dcomplex *, int *, dcomplex *, int *, int *);
extern void F77_PZDTTRS(char *, int *, int *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZDTTRSV(char *, char *, int *, int *, dcomplex *, dcomplex *,
                      dcomplex *, int *, int *, dcomplex *, int *, int *,
                      dcomplex *, int *, dcomplex *, int *, int *);
extern void F77_PZGBSV(int *, int *, int *, int *, dcomplex *, int *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void F77_PZGBTRF(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, dcomplex *, int *, int *);
extern void F77_PZGBTRS(char *, int *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZGEBD2(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, dcomplex *, int *,
                     int *);
extern void F77_PZGEBRD(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, dcomplex *, int *,
                     int *);
extern void F77_PZGECON(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void F77_PZGEEQU(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *);
extern void F77_PZGEHD2(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZGEHRD(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZGELQ2(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGELQF(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGELS(char *, int *, int *, int *, dcomplex *, int *, int *,
                    int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                    int *);
extern void F77_PZGEQL2(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGEQLF(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGEQPF(int *, int *, dcomplex *, int *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, double *, int *, int *);
extern void F77_PZGEQR2(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGEQRF(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGERFS(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void F77_PZGERQ2(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGERQF(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGESV(int *, int *, dcomplex *, int *, int *, int *, int *,
                    dcomplex *, int *, int *, int *, int *);
extern void F77_PZGESVD(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, double *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, int *,
                     float *, int *);
extern void F77_PZGESVX(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, int *, char *,
                     double *, double *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, double *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void F77_PZGETF2(int *, int *, dcomplex *, int *, int *, int *, int *,
                     int *);
extern void F77_PZGETRF(int *, int *, dcomplex *, int *, int *, int *, int *,
                     int *);
extern void F77_PZGETRI(int *, dcomplex *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, int *);
extern void F77_PZGETRS(char *, int *, int *, dcomplex *, int *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZGGQRF(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZGGRQF(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZHEEV(char *, char *, int *, dcomplex *, int *, int *, int *,
                    double *, dcomplex *, int *, int *, int *, dcomplex *,
                    int *, dcomplex *, int *, int *);
extern void F77_PZHEEVD(char *, char *, int *, dcomplex *, int *, int *, int *,
                     double *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, double *, int *, int *, int *, int *);
extern void F77_PZHEEVR(char *, char *, char *, int *, dcomplex *, int *, int *,
                     int *, double *, double *, int *, int *, int *, int *,
                     double *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, double *, int *, int *, int *, int *);
extern void F77_PZHEEVX(char *, char *, char *, int *, dcomplex *, int *, int *,
                     int *, double *, double *, int *, int *, double *, int *,
                     int *, double *, double *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, double *, int *, int *, int *, int *,
                     int *, double *, int *);
extern void F77_PZHEGS2(int *, char *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, int *);
extern void F77_PZHEGST(int *, char *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, double *, int *);
extern void F77_PZHEGVX(int *, char *, char *, char *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, int *, int *, double *, int *, int *, double *,
                     double *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, double *, int *, int *, int *, int *, int *,
                     double *, int *);
extern void F77_PZHENGST(int *, char *, int *, dcomplex *, int *, int *, int *,
                      dcomplex *, int *, int *, int *, double *, dcomplex *,
                      int *, int *);
extern void F77_PZHENTRD(char *, int *, dcomplex *, int *, int *, int *, double *,
                      double *, dcomplex *, dcomplex *, int *, dcomplex *,
                      int *, int *);
extern void F77_PZHETD2(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, int *, int *);
extern void F77_PZHETRD(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, int *, int *);
extern void F77_PZHETTRD(char *, int *, dcomplex *, int *, int *, int *, double *,
                      double *, dcomplex *, dcomplex *, int *, int *);
extern void F77_PZLABRD(int *, int *, int *, dcomplex *, int *, int *, int *,
                     double *, double *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void F77_PZLACGV(int *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZLACON(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, double *, int *);
extern void F77_PZLACONSB(dcomplex *, int *, int *, int *, int *, dcomplex *,
                       dcomplex *, dcomplex *, dcomplex *, int *);
extern void F77_PZLACP2(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *);
extern void F77_PZLACP3(int *, int *, dcomplex *, int *, dcomplex *, int *, int *,
                     int *, int *);
extern void F77_PZLACPY(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *);
extern void F77_PZLAEVSWP(int *, double *, int *, dcomplex *, int *, int *, int *,
                       int *, int *, double *, int *);
extern void F77_PZLAHQR(int *, int *, int *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, dcomplex *,
                     int *, int *, int *, int *);
extern void F77_PZLAHRD(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void F77_PZLAMR1D(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void F77_PZLAPIV(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void F77_PZLAPV2(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, int *, int *, int *, int *);
extern void F77_PZLAQGE(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, double *, double *, double *, char *);
extern void F77_PZLAQSY(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, double *, double *, char *);
extern void F77_PZLARF(char *, int *, int *, dcomplex *, int *, int *, int *,
                    int *, dcomplex *, dcomplex *, int *, int *, int *,
                    dcomplex *);
extern void F77_PZLARFB(char *, char *, char *, char *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, dcomplex *,
                     int *, int *, int *, dcomplex *);
extern void F77_PZLARFC(char *, int *, int *, dcomplex *, int *, int *, int *,
                     int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void F77_PZLARFG(int *, dcomplex *, int *, int *, dcomplex *, int *, int *,
                     int *, int *, dcomplex *);
extern void F77_PZLARFT(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, dcomplex *, dcomplex *);
extern void F77_PZLARZ(char *, int *, int *, int *, dcomplex *, int *, int *,
                    int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                    dcomplex *);
extern void F77_PZLARZB(char *, char *, char *, char *, int *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, dcomplex *,
                     int *, int *, int *, dcomplex *);
extern void F77_PZLARZC(char *, int *, int *, int *, dcomplex *, int *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void F77_PZLARZT(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, dcomplex *, dcomplex *);
extern void F77_PZLASCL(char *, double *, double *, int *, int *, dcomplex *,
                     int *, int *, int *, int *);
extern void F77_PZLASE2(char *, int *, int *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, int *);
extern void F77_PZLASET(char *, int *, int *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, int *);
extern void F77_PZLASMSUB(dcomplex *, int *, int *, int *, int *, double *,
                       dcomplex *, int *);
extern void F77_PZLASSQ(int *, dcomplex *, int *, int *, int *, int *, double *,
                     double *);
extern void F77_PZLASWP(char *, char *, int *, dcomplex *, int *, int *, int *,
                     int *, int *, int *);
extern void F77_PZLATRD(char *, int *, int *, dcomplex *, int *, int *, int *,
                     double *, double *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *);
extern void F77_PZLATRS(char *, char *, char *, char *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, int *);
extern void F77_PZLATRZ(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *);
extern void F77_PZLATTRS(char *, char *, char *, char *, int *, dcomplex *, int *,
                      int *, int *, dcomplex *, int *, int *, int *, double *,
                      double *, int *);
extern void F77_PZLAUU2(char *, int *, dcomplex *, int *, int *, int *);
extern void F77_PZLAUUM(char *, int *, dcomplex *, int *, int *, int *);
extern void F77_PZLAWIL(int *, int *, int *, dcomplex *, int *, dcomplex *,
                     dcomplex *, dcomplex *, dcomplex *);
extern void F77_PZMAX1(int *, double *, int *, dcomplex *, int *, int *, int *,
                    int *);
extern void F77_PZPBSV(char *, int *, int *, int *, dcomplex *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void F77_PZPBTRF(char *, int *, int *, dcomplex *, int *, int *, dcomplex *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZPBTRS(char *, int *, int *, int *, dcomplex *, int *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, dcomplex *,
                     int *, int *);
extern void F77_PZPBTRSV(char *, char *, int *, int *, int *, dcomplex *, int *,
                      int *, dcomplex *, int *, int *, dcomplex *, int *,
                      dcomplex *, int *, int *);
extern void F77_PZPOCON(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void F77_PZPOEQU(int *, dcomplex *, int *, int *, int *, double *, double *,
                     double *, double *, int *);
extern void F77_PZPORFS(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, double *, double *,
                     dcomplex *, int *, double *, int *, int *);
extern void F77_PZPOSV(char *, int *, int *, dcomplex *, int *, int *, int *,
                    dcomplex *, int *, int *, int *, int *);
extern void F77_PZPOSVX(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, char *, dcomplex *,
                     dcomplex *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, double *, double *, double *,
                     dcomplex *, int *, double *, int *, int *);
extern void F77_PZPOTF2(char *, int *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZPOTRF(char *, int *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZPOTRI(char *, int *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZPOTRS(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, int *);
extern void F77_PZPTSV(char *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void F77_PZPTTRF(int *, dcomplex *, dcomplex *, int *, int *, dcomplex *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZPTTRS(char *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, dcomplex *,
                     int *, int *);
extern void F77_PZPTTRSV(char *, char *, int *, int *, dcomplex *, dcomplex *,
                      int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                      dcomplex *, int *, int *);
extern void F77_PZSTEIN(int *, double *, double *, int *, double *, int *, int *,
                     double *, dcomplex *, int *, int *, int *, double *, int *,
                     int *, int *, int *, int *, double *, int *);
extern void F77_PZTRCON(char *, char *, char *, int *, dcomplex *, int *, int *,
                     int *, double *, dcomplex *, int *, double *, int *,
                     int *);
extern void F77_PZTREVC(char *, char *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, double *, int *);
extern void F77_PZTRRFS(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, double *, double *, dcomplex *, int *,
                     double *, int *, int *);
extern void F77_PZTRTI2(char *, char *, int *, dcomplex *, int *, int *, int *,
                     int *);
extern void F77_PZTRTRI(char *, char *, int *, dcomplex *, int *, int *, int *,
                     int *);
extern void F77_PZTRTRS(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, int *);
extern void F77_PZTZRZF(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void F77_PZUNG2L(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNG2R(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNGL2(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNGLQ(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNGQL(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNGQR(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNGR2(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNGRQ(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void F77_PZUNM2L(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNM2R(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMBR(char *, char *, char *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZUNMHR(char *, char *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZUNML2(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMLQ(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMQL(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMQR(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMR2(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMR3(char *, char *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZUNMRQ(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_PZUNMRZ(char *, char *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void F77_PZUNMTR(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void F77_SDBTF2(int *, int *, int *, int *, float *, int *, int *);
extern void F77_SDBTRF(int *, int *, int *, int *, float *, int *, int *);
extern void F77_SDTTRF(int *, scomplex *, scomplex *, scomplex *, int *);
extern void F77_SDTTRSV(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_SLAMSH(float *, int *, int *, int *, float *, int *, int *,
                    float *);
extern void F77_SLAPST(char *, int *, float *, int *, int *);
extern void F77_SLAQR6(char *, int *, int *, int *, int *, int *, int *, int *,
                    float *, float *, float *, int *, int *, int *, float *,
                    int *, float *, int *, float *, int *, int *, float *,
                    int *, int *, float *, int *);
extern void F77_SLAR1VA(int *, int *, int *, float *, float *, float *, float *,
                     float *, float *, float *, float *, int *, int *, float *,
                     float *, int *, int *, float *, float *, float *, float *);
extern void F77_SLAREF(char *, float *, int *, int *, float *, int *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, float *,
                    float *, float *, float *, float *, float *);
extern void F77_SLARRB2(int *, float *, float *, int *, int *, float *, float *,
                     int *, float *, float *, float *, float *, int *, float *,
                     float *, float *, int *, int *);
extern void F77_SLARRD2(char *, char *, int *, float *, float *, int *, int *,
                     float *, float *, float *, float *, float *, float *,
                     int *, int *, int *, float *, float *, float *, float *,
                     int *, int *, float *, int *, int *, int *, int *);
extern void F77_SLARRE2(char *, int *, float *, float *, int *, int *, float *,
                     float *, float *, float *, float *, float *, int *, int *,
                     int *, int *, int *, float *, float *, float *, int *,
                     int *, float *, double *, float *, int *, int *);
extern void F77_SLARRE2A(char *, int *, float *, float *, int *, int *, float *,
                      float *, float *, float *, float *, float *, int *, int *,
                      int *, int *, int *, int *, int *, float *, float *,
                      float *, int *, int *, float *, float *, double *,
                      float *, int *, float *, int *);
extern void F77_SLARRF2(int *, float *, float *, float *, int *, int *, int *,
                     int *, float *, float *, float *, int *, float *, float *,
                     float *, double *, float *, float *, float *, float *,
                     int *);
extern void F77_SLARRV2(int *, float *, float *, float *, float *, double *, int *,
                     int *, int *, int *, int *, int *, float *, float *,
                     float *, float *, float *, float *, int *, int *, float *,
                     float *, float *, int *, int *, float *, int *, int *,
                     int *, int *, int *, int *, int *, int *);
extern void F77_SLASORTE(float *, int *, int *, float *, int *);
extern void F77_SLASRT2(char *, int *, float *, int *, int *);
extern void F77_SPTTRSV(char *, int *, int *, float *, scomplex *, scomplex *,
                     int *, int *);
extern void F77_SSTEGR2(char *, char *, int *, float *, float *, float *, float *,
                     int *, int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, int *, int *, int *);
extern void F77_SSTEGR2A(char *, char *, int *, float *, float *, float *, float *,
                      int *, int *, int *, float *, float *, int *, int *,
                      float *, int *, int *, int *, int *, int *, int *, int *,
                      int *, int *, float *, float *, float *, float *, int *);
extern void F77_SSTEGR2B(char *, int *, float *, float *, int *, float *, float *,
                      int *, int *, int *, float *, int *, int *, int *, int *,
                      int *, int *, int *, float *, float *, float *, float *,
                      float *, int *, int *, int *, int *, int *, int *, int *);
extern void F77_SSTEIN2(int *, float *, float *, int *, float *, int *, int *,
                     float *, float *, int *, float *, int *, int *, int *);
extern void F77_SSTEQR2(char *, int *, float *, float *, float *, int *, int *,
                     float *, int *);
extern void F77_STRMVT(char *, int *, float *, int *, float *, int *, float *,
                    int *, float *, int *, float *, int *);
extern void F77_ZDBTF2(int *, int *, int *, int *, dcomplex *, int *, int *);
extern void F77_ZDBTRF(int *, int *, int *, int *, float *, int *, int *);
extern void F77_ZDTTRF(int *, scomplex *, scomplex *, scomplex *, int *);
extern void F77_ZDTTRSV(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void F77_ZLAHQR2(int *, int *, int *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void F77_ZLAMSH(dcomplex *, int *, int *, int *, dcomplex *, int *, int *,
                    double *);
extern void F77_ZLANV2(dcomplex *, dcomplex *, dcomplex *, dcomplex *, dcomplex *,
                    dcomplex *, double *, dcomplex *);
extern void F77_ZLAREF(char *, dcomplex *, int *, int *, dcomplex *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, int *,
                    dcomplex *, dcomplex *, dcomplex *, dcomplex *, dcomplex *,
                    dcomplex *);
extern void F77_ZPTTRSV(char *, char *, int *, int *, float *, scomplex *,
                     scomplex *, int *, int *);
extern void F77_ZSTEQR2(char *, int *, double *, double *, dcomplex *, int *,
                     int *, double *, int *);
extern void F77_ZTRMVT(char *, int *, scomplex *, int *, scomplex *, int *,
                    scomplex *, int *, scomplex *, int *, scomplex *, int *);
#ifdef __cplusplus
}
#endif

#endif