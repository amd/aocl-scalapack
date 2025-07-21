/* ---------------------------------------------------------------------
 *
 *  -- AOCL ScaLAPACK Wrappers --
 *     Copyright (c) 2025 Advanced Micro Devices, Inc.  All rights reserved.
 *
 *  ---------------------------------------------------------------------
 */

#include "aocl_f2c_src_wrappers.h"

void bdlaapp(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK) {
  bdlaapp_(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BDLAAPP(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK) {
  bdlaapp_(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BDLAAPP_(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
              int *NITRAF, int *ITRAF, double *DTRAF, double *WORK) {
  bdlaapp_(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void bdlaexc(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO) {
  bdlaexc_(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BDLAEXC(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO) {
  bdlaexc_(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BDLAEXC_(int *N, double *T, int *LDT, int *J1, int *N1, int *N2,
              int *ITRAF, double *DTRAF, double *WORK, int *INFO) {
  bdlaexc_(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void bdtrexc(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO) {
  bdtrexc_(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BDTREXC(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO) {
  bdtrexc_(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BDTREXC_(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO) {
  bdtrexc_(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void bslaapp(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK) {
  bslaapp_(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BSLAAPP(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK) {
  bslaapp_(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BSLAAPP_(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
              int *NITRAF, int *ITRAF, float *DTRAF, float *WORK) {
  bslaapp_(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void bslaexc(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO) {
  bslaexc_(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BSLAEXC(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO) {
  bslaexc_(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BSLAEXC_(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
              float *DTRAF, float *WORK, int *INFO) {
  bslaexc_(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void bstrexc(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO) {
  bstrexc_(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BSTREXC(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO) {
  bstrexc_(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BSTREXC_(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO) {
  bstrexc_(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void cdbtf2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO) {
  cdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTF2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO) {
  cdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTF2_(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
             int *INFO) {
  cdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void cdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  cdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  cdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  cdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void cdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  cdttrf_(N, DL, D, DU, INFO);
}

void CDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  cdttrf_(N, DL, D, DU, INFO);
}

void CDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  cdttrf_(N, DL, D, DU, INFO);
}

void cdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  cdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void CDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  cdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void CDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  cdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void clahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO) {
  clahqr2_(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void CLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO) {
  clahqr2_(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void CLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
              int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *LDZ, int *INFO) {
  clahqr2_(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void clamsh(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP) {
  clamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void CLAMSH(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP) {
  clamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void CLAMSH_(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
             int *LDH, int *N, float *ULP) {
  clamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void clanv2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN) {
  clanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void CLANV2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN) {
  clanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void CLANV2_(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
             scomplex *RT2, float *CS, scomplex *SN) {
  clanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void claref(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
            scomplex *T2, scomplex *T3) {
  claref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void CLAREF(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
            scomplex *T2, scomplex *T3) {
  claref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void CLAREF_(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
             int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
             int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
             scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
             scomplex *T2, scomplex *T3) {
  claref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void cpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  cpttrsv_(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void CPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  cpttrsv_(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void CPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  cpttrsv_(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void csteqr2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  csteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void CSTEQR2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  csteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void CSTEQR2_(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
              int *NR, float *WORK, int *INFO) {
  csteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void ctrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  ctrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void CTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  ctrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void CTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ) {
  ctrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void ddbtf2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
            int *INFO) {
  ddbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTF2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
            int *INFO) {
  ddbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTF2_(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
             int *INFO) {
  ddbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void ddbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  ddbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  ddbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  ddbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void ddttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  ddttrf_(N, DL, D, DU, INFO);
}

void DDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  ddttrf_(N, DL, D, DU, INFO);
}

void DDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  ddttrf_(N, DL, D, DU, INFO);
}

void ddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  ddttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void DDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  ddttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void DDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  ddttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void dlamsh(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP) {
  dlamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void DLAMSH(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP) {
  dlamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void DLAMSH_(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
             int *N, double *ULP) {
  dlamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void dlapst(char *ID, int *N, double *D, int *INDX, int *INFO) {
  dlapst_(ID, N, D, INDX, INFO);
}

void DLAPST(char *ID, int *N, double *D, int *INDX, int *INFO) {
  dlapst_(ID, N, D, INDX, INFO);
}

void DLAPST_(char *ID, int *N, double *D, int *INDX, int *INFO) {
  dlapst_(ID, N, D, INDX, INFO);
}

void dlaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, double *SR, double *SI, double *H, int *LDH,
            int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V, int *LDV,
            double *U, int *LDU, int *NV, double *WV, int *LDWV, int *NH,
            double *WH, int *LDWH) {
  dlaqr6_(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void DLAQR6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, double *SR, double *SI, double *H, int *LDH,
            int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V, int *LDV,
            double *U, int *LDU, int *NV, double *WV, int *LDWV, int *NH,
            double *WH, int *LDWH) {
  dlaqr6_(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void DLAQR6_(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
             int *KBOT, int *NSHFTS, double *SR, double *SI, double *H,
             int *LDH, int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V,
             int *LDV, double *U, int *LDU, int *NV, double *WV, int *LDWV,
             int *NH, double *WH, int *LDWH) {
  dlaqr6_(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void dlar1va(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
             double *LD, double *LLD, double *PIVMIN, double *GAPTOL, double *Z,
             int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA, int *R,
             int *ISUPPZ, double *NRMINV, double *RESID, double *RQCORR,
             double *WORK) {
  dlar1va_(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void DLAR1VA(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
             double *LD, double *LLD, double *PIVMIN, double *GAPTOL, double *Z,
             int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA, int *R,
             int *ISUPPZ, double *NRMINV, double *RESID, double *RQCORR,
             double *WORK) {
  dlar1va_(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void DLAR1VA_(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
              double *LD, double *LLD, double *PIVMIN, double *GAPTOL,
              double *Z, int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA,
              int *R, int *ISUPPZ, double *NRMINV, double *RESID,
              double *RQCORR, double *WORK) {
  dlar1va_(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void dlaref(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
            double *V2, double *V3, double *T1, double *T2, double *T3) {
  dlaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void DLAREF(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
            double *V2, double *V3, double *T1, double *T2, double *T3) {
  dlaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void DLAREF_(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
             int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
             int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
             double *V2, double *V3, double *T1, double *T2, double *T3) {
  dlaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void dlarrb2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
             double *RTOL1, double *RTOL2, int *OFFSET, double *W, double *WGAP,
             double *WERR, double *WORK, int *IWORK, double *PIVMIN,
             double *LGPVMN, double *LGSPDM, int *TWIST, int *INFO) {
  dlarrb2_(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void DLARRB2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
             double *RTOL1, double *RTOL2, int *OFFSET, double *W, double *WGAP,
             double *WERR, double *WORK, int *IWORK, double *PIVMIN,
             double *LGPVMN, double *LGSPDM, int *TWIST, int *INFO) {
  dlarrb2_(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void DLARRB2_(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
              double *RTOL1, double *RTOL2, int *OFFSET, double *W,
              double *WGAP, double *WERR, double *WORK, int *IWORK,
              double *PIVMIN, double *LGPVMN, double *LGSPDM, int *TWIST,
              int *INFO) {
  dlarrb2_(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void dlaneg2(int *N, double *D, double *LLD, double *SIGMA, double *PIVMIN,
             int *R) {
  dlaneg2_(N, D, LLD, SIGMA, PIVMIN, R);
}

void DLANEG2(int *N, double *D, double *LLD, double *SIGMA, double *PIVMIN,
             int *R) {
  dlaneg2_(N, D, LLD, SIGMA, PIVMIN, R);
}

void DLANEG2_(int *N, double *D, double *LLD, double *SIGMA, double *PIVMIN,
              int *R) {
  dlaneg2_(N, D, LLD, SIGMA, PIVMIN, R);
}

void dlaneg2a(int *N, double *DLLD, double *SIGMA, double *PIVMIN, int *R) {
  dlaneg2a_(N, DLLD, SIGMA, PIVMIN, R);
}

void DLANEG2A(int *N, double *DLLD, double *SIGMA, double *PIVMIN, int *R) {
  dlaneg2a_(N, DLLD, SIGMA, PIVMIN, R);
}

void DLANEG2A_(int *N, double *DLLD, double *SIGMA, double *PIVMIN, int *R) {
  dlaneg2a_(N, DLLD, SIGMA, PIVMIN, R);
}

void dlarrd2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
             int *IU, double *GERS, double *RELTOL, double *D, double *E,
             double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
             double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
             int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
             int *INFO) {
  dlarrd2_(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void DLARRD2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
             int *IU, double *GERS, double *RELTOL, double *D, double *E,
             double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
             double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
             int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
             int *INFO) {
  dlarrd2_(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void DLARRD2_(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
              int *IU, double *GERS, double *RELTOL, double *D, double *E,
              double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
              double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
              int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
              int *INFO) {
  dlarrd2_(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void dlarre2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
             double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
             double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
             int *IWORK, int *INFO) {
  dlarre2_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void DLARRE2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
             double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
             double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
             int *IWORK, int *INFO) {
  dlarre2_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void DLARRE2_(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
              int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
              int *IWORK, int *INFO) {
  dlarre2_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void dlarre2a(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
              double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
              double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
              double *MINRGP, int *INFO) {
  dlarre2a_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void DLARRE2A(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
              double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
              double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
              double *MINRGP, int *INFO) {
  dlarre2a_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void DLARRE2A_(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
               double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
               double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
               int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
               double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
               double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
               double *MINRGP, int *INFO) {
  dlarre2a_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void dlarrf2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
             int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
             double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
             double *WORK, int *INFO) {
  dlarrf2_(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void DLARRF2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
             int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
             double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
             double *WORK, int *INFO) {
  dlarrf2_(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void DLARRF2_(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
              int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
              int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
              double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
              double *WORK, int *INFO) {
  dlarrf2_(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void dlarrv2(int *N, double *VL, double *VU, double *D, double *L,
             double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
             int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
             double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
             int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
             int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  dlarrv2_(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void DLARRV2(int *N, double *VL, double *VU, double *D, double *L,
             double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
             int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
             double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
             int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
             int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  dlarrv2_(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void DLARRV2_(int *N, double *VL, double *VU, double *D, double *L,
              double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
              double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
              int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
              int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  dlarrv2_(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void dlasorte(double *S, int *LDS, int *J, double *OUT, int *INFO) {
  dlasorte_(S, LDS, J, OUT, INFO);
}

void DLASORTE(double *S, int *LDS, int *J, double *OUT, int *INFO) {
  dlasorte_(S, LDS, J, OUT, INFO);
}

void DLASORTE_(double *S, int *LDS, int *J, double *OUT, int *INFO) {
  dlasorte_(S, LDS, J, OUT, INFO);
}

void dlasrt2(char *ID, int *N, double *D, int *KEY, int *INFO) {
  dlasrt2_(ID, N, D, KEY, INFO);
}

void DLASRT2(char *ID, int *N, double *D, int *KEY, int *INFO) {
  dlasrt2_(ID, N, D, KEY, INFO);
}

void DLASRT2_(char *ID, int *N, double *D, int *KEY, int *INFO) {
  dlasrt2_(ID, N, D, KEY, INFO);
}

void dpttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  dpttrsv_(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void DPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  dpttrsv_(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void DPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  dpttrsv_(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void dstegr2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
             double *VU, int *IL, int *IU, int *M, double *W, double *Z,
             int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
             int *INFO) {
  dstegr2_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void DSTEGR2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
             double *VU, int *IL, int *IU, int *M, double *W, double *Z,
             int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
             int *INFO) {
  dstegr2_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void DSTEGR2_(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
              int *INFO) {
  dstegr2_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void dstegr2a(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              int *INDERR, int *NSPLIT, double *PIVMIN, double *SCALE,
              double *WL, double *WU, int *INFO) {
  dstegr2a_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void DSTEGR2A(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              int *INDERR, int *NSPLIT, double *PIVMIN, double *SCALE,
              double *WL, double *WU, int *INFO) {
  dstegr2a_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void DSTEGR2A_(char *JOBZ, char *RANGE, int *N, double *D, double *E,
               double *VL, double *VU, int *IL, int *IU, int *M, double *W,
               double *Z, int *LDZ, int *NZC, double *WORK, int *LWORK,
               int *IWORK, int *LIWORK, int *DOL, int *DOU, int *NEEDIL,
               int *NEEDIU, int *INDERR, int *NSPLIT, double *PIVMIN,
               double *SCALE, double *WL, double *WU, int *INFO) {
  dstegr2a_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void dstegr2b(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
              double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
              double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  dstegr2b_(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void DSTEGR2B(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
              double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
              double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  dstegr2b_(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void DSTEGR2B_(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
               double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
               int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
               int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
               double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
               int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  dstegr2b_(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void dstein2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  dstein2_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void DSTEIN2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  dstein2_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void DSTEIN2_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
              int *IWORK, int *IFAIL, int *INFO) {
  dstein2_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void dsteqr2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  dsteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void DSTEQR2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  dsteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void DSTEQR2_(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
              int *NR, double *WORK, int *INFO) {
  dsteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void dtrmvt(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ) {
  dtrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void DTRMVT(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ) {
  dtrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void DTRMVT_(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
             double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ) {
  dtrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void icopypv(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO) {
  icopypv_(M, N, A, IA, JA, DESCA, TPIV, IPIV, INFO);
}

void ICOPYPV(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO) {
  icopypv_(M, N, A, IA, JA, DESCA, TPIV, IPIV, INFO);
}

void ICOPYPV_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *TPIV, int *IPIV, int *INFO) {
  icopypv_(M, N, A, IA, JA, DESCA, TPIV, IPIV, INFO);
}

void pcdbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pcdbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pcdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void pcdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
               int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
               int *INFO) {
  pcdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void pcdtsv(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDTSV(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDTSV_(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO) {
  pcdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pcdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  pcdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  pcdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
              int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pcdttrs(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
             scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
             int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  pcdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDTTRS(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
             scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
             int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  pcdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDTTRS_(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
              scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void pcdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
              int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
              int *LWORK, int *INFO) {
  pcdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
              int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
              int *LWORK, int *INFO) {
  pcdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
               scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
               int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
               int *LWORK, int *INFO) {
  pcdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void pcgbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  pcgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PCGBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  pcgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PCGBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO) {
  pcgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void pcgbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  pcgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PCGBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  pcgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PCGBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void pcgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PCGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PCGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void pcgebd2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBD2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBD2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO) {
  pcgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void pcgebrd(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBRD(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBRD_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO) {
  pcgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void pcgecon(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGECON(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGECON_(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  pcgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pcgeequ(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO) {
  pcgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PCGEEQU(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO) {
  pcgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PCGEEQU_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              int *INFO) {
  pcgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void pcgehd2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHD2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHD2_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgehrd(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHRD(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHRD_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgelq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgelqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgels(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  pcgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PCGELS(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  pcgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PCGELS_(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO) {
  pcgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void pcgeql2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQL2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQL2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgeqlf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQLF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQLF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgeqpf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  pcgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGEQPF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  pcgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGEQPF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  pcgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void pcgeqr2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQR2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQR2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgeqrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgerfs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
             int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  pcgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGERFS(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
             int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  pcgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGERFS_(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
              int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *INFO) {
  pcgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pcgerq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgerqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcgesv(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGESV(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGESV_(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void pcgesvd(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
             int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
             scomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  pcgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PCGESVD(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
             int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
             scomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  pcgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PCGESVD_(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
              int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
              scomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  pcgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void pcgesvx(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGESVX(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
              int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF,
              int *DESCAF, int *IPIV, char *EQUED, float *R, float *C,
              scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
              int *JX, int *DESCX, float *RCOND, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *INFO) {
  pcgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void pcgetf2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pcgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETF2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pcgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETF2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  pcgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pcgetrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pcgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pcgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  pcgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pcgetri(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pcgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PCGETRI(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pcgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PCGETRI_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pcgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pcgetrs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  pcgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGETRS(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  pcgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGETRS_(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pcgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void pcggqrf(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  pcggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGQRF(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  pcggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGQRF_(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  pcggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pcggrqf(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  pcggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGRQF(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  pcggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGRQF_(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  pcggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pcheev(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
            int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
            scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
            int *INFO) {
  pcheev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PCHEEV(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
            int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
            scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
            int *INFO) {
  pcheev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PCHEEV_(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
             int *INFO) {
  pcheev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void pcheevd(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pcheevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVD(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pcheevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVD_(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  pcheevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void pcheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pcheevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pcheevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
              int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pcheevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void pcheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pcheevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCHEEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pcheevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCHEEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
              scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pcheevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pchegs2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pchegs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCHEGS2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pchegs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCHEGS2_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pchegs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pchegst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO) {
  pchegst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PCHEGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO) {
  pchegst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PCHEGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, int *INFO) {
  pchegst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void pchegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pchegvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCHEGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pchegvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCHEGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
              scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pchegvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pchengst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO) {
  pchengst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PCHENGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO) {
  pchengst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PCHENGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
               int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
               float *SCALE, scomplex *WORK, int *LWORK, int *INFO) {
  pchengst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void pchentrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO) {
  pchentrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PCHENTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO) {
  pchentrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PCHENTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               scomplex *RWORK, int *LRWORK, int *INFO) {
  pchentrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void pchetd2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  pchetd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETD2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  pchetd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETD2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  pchetd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pchetrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  pchetrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  pchetrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  pchetrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pchettrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  pchettrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  pchettrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               int *INFO) {
  pchettrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pclabrd(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *X,
             int *IX, int *JX, int *DESCX, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  pclabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PCLABRD(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *X,
             int *IX, int *JX, int *DESCX, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  pclabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PCLABRD_(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *X, int *IX, int *JX, int *DESCX, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK) {
  pclabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void pclacgv(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  pclacgv_(N, X, IX, JX, DESCX, INCX);
}

void PCLACGV(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  pclacgv_(N, X, IX, JX, DESCX, INCX);
}

void PCLACGV_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  pclacgv_(N, X, IX, JX, DESCX, INCX);
}

void pclacon(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE) {
  pclacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PCLACON(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE) {
  pclacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PCLACON_(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
              int *IX, int *JX, int *DESCX, float *EST, int *KASE) {
  pclacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void pclaconsb(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK) {
  pclaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PCLACONSB(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK) {
  pclaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PCLACONSB_(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
                scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK) {
  pclaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void pclacp2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  pclacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACP2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  pclacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACP2_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  pclacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pclacp3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  pclacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PCLACP3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  pclacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PCLACP3_(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
              int *II, int *JJ, int *REV) {
  pclacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void pclacpy(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  pclacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACPY(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  pclacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACPY_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  pclacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pclaevswp(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK) {
  pclaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PCLAEVSWP(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK) {
  pclaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PCLAEVSWP_(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK) {
  pclaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void pclahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
             int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
             int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  pclahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PCLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
             int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
             int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  pclahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PCLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
              int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO) {
  pclahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void pclahrd(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  pclahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PCLAHRD(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  pclahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PCLAHRD_(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *T, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK) {
  pclahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void pclamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pclamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pclamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  pclamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pclapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  pclapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PCLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  pclapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PCLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK) {
  pclapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void pclapv2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pclapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PCLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pclapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PCLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pclapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void pclaqge(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED) {
  pclaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PCLAQGE(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED) {
  pclaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PCLAQGE_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              char *EQUED) {
  pclaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void pclaqsy(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  pclaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PCLAQSY(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  pclaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PCLAQSY_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  pclaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void pclarf(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  pclarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARF(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  pclarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARF_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  pclarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pclarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  pclarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PCLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  pclarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PCLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
              scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
              scomplex *WORK) {
  pclarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void pclarfc(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  pclarfc_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARFC(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  pclarfc_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARFC_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK) {
  pclarfc_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pclarfg(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU) {
  pclarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PCLARFG(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU) {
  pclarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PCLARFG_(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, scomplex *TAU) {
  pclarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void pclarft(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  pclarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARFT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  pclarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARFT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  pclarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pclarz(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  pclarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZ(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  pclarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZ_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  pclarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pclarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  pclarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PCLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  pclarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PCLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
              scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
              scomplex *WORK) {
  pclarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void pclarzc(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  pclarzc_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZC(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  pclarzc_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZC_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK) {
  pclarzc_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pclarzt(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  pclarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARZT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  pclarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARZT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  pclarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pclascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  pclascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PCLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  pclascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PCLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, int *INFO) {
  pclascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void pclase2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  pclase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASE2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  pclase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASE2_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA) {
  pclase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pclaset(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  pclaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASET(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  pclaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASET_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA) {
  pclaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pclasmsub(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK) {
  pclasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PCLASMSUB(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK) {
  pclasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PCLASMSUB_(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                scomplex *BUF, int *LWORK) {
  pclasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void pclassq(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  pclassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PCLASSQ(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  pclassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PCLASSQ_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ) {
  pclassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void pclaswp(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pclaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PCLASWP(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pclaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PCLASWP_(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  pclaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void pclatrd(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK) {
  pclatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PCLATRD(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK) {
  pclatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PCLATRD_(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
              int *IW, int *JW, int *DESCW, scomplex *WORK) {
  pclatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void pclatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK) {
  pclatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PCLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK) {
  pclatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PCLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK) {
  pclatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void pclatrz(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK) {
  pclatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PCLATRZ(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK) {
  pclatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PCLATRZ_(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK) {
  pclatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void pclattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO) {
  pclattrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PCLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO) {
  pclattrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PCLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
               int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO) {
  pclattrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void pclauu2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  pclauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUU2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  pclauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUU2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  pclauu2_(UPLO, N, A, IA, JA, DESCA);
}

void pclauum(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  pclauum_(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUUM(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  pclauum_(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUUM_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  pclauum_(UPLO, N, A, IA, JA, DESCA);
}

void pclawil(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V) {
  pclawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PCLAWIL(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V) {
  pclawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PCLAWIL_(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
              scomplex *H33, scomplex *H43H34, scomplex *V) {
  pclawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void pcmax1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  pcmax1_(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PCMAX1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  pcmax1_(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PCMAX1_(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX) {
  pcmax1_(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void ccombamax1(scomplex *V1, scomplex *V2) { ccombamax1_(V1, V2); }

void CCOMBAMAX1(scomplex *V1, scomplex *V2) { ccombamax1_(V1, V2); }

void CCOMBAMAX1_(scomplex *V1, scomplex *V2) { ccombamax1_(V1, V2); }

void pcpbsv(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPBSV(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPBSV_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pcpbtrf(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPBTRF(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPBTRF_(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pcpbtrs(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPBTRS(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void pcpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
               int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
               scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void pcpocon(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPOCON(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPOCON_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  pcpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pcpoequ(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  pcpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PCPOEQU(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  pcpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PCPOEQU_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO) {
  pcpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void pcporfs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
             int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  pcporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPORFS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
             int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  pcporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPORFS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
              scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
              int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  pcporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pcposv(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOSV(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOSV_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pcposvx(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, scomplex *SR, scomplex *SC, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void PCPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, scomplex *SR, scomplex *SC, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pcposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void PCPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
              int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF,
              int *DESCAF, char *EQUED, scomplex *SR, scomplex *SC, scomplex *B,
              int *IB, int *JB, int *DESCB, scomplex *X, int *IX, int *JX,
              int *DESCX, float *RCOND, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *INFO) {
  pcposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void pcpotf2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pcpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTF2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pcpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTF2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pcpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pcpotrf(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pcpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRF(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pcpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRF_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pcpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pcpotri(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pcpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRI(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pcpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRI_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pcpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pcpotrs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOTRS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pcpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOTRS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pcpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pcptsv(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcptsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPTSV(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  pcptsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPTSV_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcptsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pcpttrf(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPTTRF(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPTTRF_(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pcpttrs(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpttrs_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPTTRS(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpttrs_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPTTRS_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  pcpttrs_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void pcpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
              scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcpttrsv_(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
              scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  pcpttrsv_(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
               scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
               int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
               int *INFO) {
  pcpttrsv_(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void pcsrscl(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pcsrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PCSRSCL(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pcsrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PCSRSCL_(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX) {
  pcsrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void pcstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pcstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCSTEIN(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pcstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCSTEIN_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
              int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pcstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pctrcon(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pctrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PCTRCON(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  pctrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PCTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  pctrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void pctrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO) {
  pctrevc_(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PCTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO) {
  pctrevc_(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PCTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
              int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
              int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO) {
  pctrevc_(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void pctrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *FERR, float *BERR, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  // PCTRRFS( UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO ) pctrrfs_(UPLO,
  // TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X, IX, JX, DESCX,
  // FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *FERR, float *BERR, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  // pctrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
              float *FERR, float *BERR, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  // pctrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void pctrti2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pctrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTI2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pctrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTI2_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pctrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pctrtri(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pctrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTRI(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pctrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTRI_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pctrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pctrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  pctrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PCTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  pctrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PCTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO) {
  pctrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void pctzrzf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pctzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCTZRZF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pctzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCTZRZF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pctzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcung2l(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcung2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2L(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcung2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2L_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcung2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcung2r(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcung2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2R(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcung2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2R_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcung2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcungl2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGL2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGL2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcunglq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcunglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGLQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcunglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGLQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcunglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcungql(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQL(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQL_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcungqr(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQR(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQR_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcungr2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGR2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGR2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcungrq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGRQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGRQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  pcungrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pcunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  pcunmbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pcunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  pcunmhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pcunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  pcunmr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pcunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pcunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  pcunmrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  pcunmrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pcunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  pcunmtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pddbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pddbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pddbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO) {
  pddbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pddbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pddbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void pddbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
               double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void pddtsv(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pddtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDTSV(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pddtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDTSV_(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO) {
  pddtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pddttrf(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDTTRF(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDTTRF_(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pddttrs(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDTTRS(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDTTRS_(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void pddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pddttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL,
               double *D, double *DU, int *JA, int *DESCA, double *B, int *IB,
               int *DESCB, double *AF, int *LAF, double *WORK, int *LWORK,
               int *INFO) {
  pddttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void pdgbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pdgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PDGBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pdgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PDGBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *WORK, int *LWORK, int *INFO) {
  pdgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void pdgbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO) {
  pdgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PDGBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO) {
  pdgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PDGBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
              int *INFO) {
  pdgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void pdgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PDGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PDGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void pdgebal(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO) {
  pdgebal_(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PDGEBAL(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO) {
  pdgebal_(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PDGEBAL_(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
              double *SCALE, int *INFO) {
  pdgebal_(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void pdgebd2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  pdgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBD2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  pdgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBD2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO) {
  pdgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void pdgebrd(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  pdgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBRD(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  pdgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBRD_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO) {
  pdgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void pdgecon(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGECON(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGECON_(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pdgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void pdgeequ(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  pdgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PDGEEQU(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  pdgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PDGEEQU_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO) {
  pdgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void pdgehd2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHD2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHD2_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgehrd(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHRD(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHRD_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgelq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgelqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgels(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pdgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PDGELS(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pdgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PDGELS_(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *WORK, int *LWORK, int *INFO) {
  pdgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void pdgeql2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQL2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQL2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgeqlf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQLF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQLF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgeqpf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PDGEQPF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PDGEQPF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void pdgeqr2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQR2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQR2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgeqrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgerfs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGERFS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGERFS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, double *B, int *IB, int *JB, int *DESCB, double *X,
              int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void pdgerq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgerqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdgesv(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGESV(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGESV_(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
             int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void pdgesvd(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
             int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
             double *WORK, int *LWORK, int *INFO) {
  pdgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PDGESVD(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
             int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
             double *WORK, int *LWORK, int *INFO) {
  pdgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PDGESVD_(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
              int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
              double *WORK, int *LWORK, int *INFO) {
  pdgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void pdgesvx(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
             int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGESVX(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
             int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
              int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
              int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
              double *RCOND, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdgetf2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  pdgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  pdgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  pdgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pdgetf2k(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO) {
  pdgetf2k_(M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO);
}

void PDGETF2K(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO) {
  pdgetf2k_(M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO);
}

void PDGETF2K_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
               int *IPIV, int *PANEL, int *INFO) {
  pdgetf2k_(M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO);
}

void pdgetf2_comm(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO) {
  pdgetf2_comm_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2_COMM(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO) {
  pdgetf2_comm_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2_COMM_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                   int *IPIV, int *INFO) {
  pdgetf2_comm_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pdgetrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  pdgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  pdgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  pdgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pdgetri(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGETRI(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGETRI_(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdgetrs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  pdgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGETRS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  pdgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGETRS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pdgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void pdggqrf(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  pdggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGQRF(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  pdggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGQRF_(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO) {
  pdggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pdggrqf(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  pdggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGRQF(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  pdggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGRQF_(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO) {
  pdggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pdhseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdhseqr_(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdhseqr_(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
              int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdhseqr_(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void pdlabad(int *ICTXT, double *SMALL, double *LARGE) {
  pdlabad_(ICTXT, SMALL, LARGE);
}

void PDLABAD(int *ICTXT, double *SMALL, double *LARGE) {
  pdlabad_(ICTXT, SMALL, LARGE);
}

void PDLABAD_(int *ICTXT, double *SMALL, double *LARGE) {
  pdlabad_(ICTXT, SMALL, LARGE);
}

void pdlabrd(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAUQ, double *TAUP, double *X,
             int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
             int *DESCY, double *WORK) {
  pdlabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PDLABRD(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAUQ, double *TAUP, double *X,
             int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
             int *DESCY, double *WORK) {
  pdlabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PDLABRD_(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *X,
              int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
              int *DESCY, double *WORK) {
  pdlabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void pdlacon(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE) {
  pdlacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PDLACON(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE) {
  pdlacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PDLACON_(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
              int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE) {
  pdlacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void pdlaconsb(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK) {
  pdlaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PDLACONSB(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK) {
  pdlaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PDLACONSB_(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
                double *H33, double *H43H34, double *BUF, int *LWORK) {
  pdlaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void pdlacp2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  pdlacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACP2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  pdlacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACP2_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  pdlacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pdlacp3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV) {
  pdlacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PDLACP3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV) {
  pdlacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PDLACP3_(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
              int *II, int *JJ, int *REV) {
  pdlacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void pdlacpy(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  pdlacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACPY(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  pdlacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACPY_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  pdlacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pdlaed0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO) {
  pdlaed0_(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PDLAED0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO) {
  pdlaed0_(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PDLAED0_(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *IWORK, int *INFO) {
  pdlaed0_(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void pdlaed1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO) {
  pdlaed1_(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PDLAED1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO) {
  pdlaed1_(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PDLAED1_(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO) {
  pdlaed1_(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void pdlaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
             int *DCOL, double *Q, int *LDQ, double *RHO, double *Z, double *W,
             double *DLAMDA, double *Q2, int *LDQ2, double *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  pdlaed2_(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PDLAED2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
             int *DCOL, double *Q, int *LDQ, double *RHO, double *Z, double *W,
             double *DLAMDA, double *Q2, int *LDQ2, double *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  pdlaed2_(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PDLAED2_(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D,
              int *DROW, int *DCOL, double *Q, int *LDQ, double *RHO, double *Z,
              double *W, double *DLAMDA, double *Q2, int *LDQ2, double *QBUF,
              int *CTOT, int *PSM, int *NPCOL, int *INDX, int *INDXC,
              int *INDXP, int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2,
              int *IB1, int *IB2) {
  pdlaed2_(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void pdlaed3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
             int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
             double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
             int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
             int *INFO) {
  pdlaed3_(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PDLAED3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
             int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
             double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
             int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
             int *INFO) {
  pdlaed3_(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PDLAED3_(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
              int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
              double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
              int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
              int *INFO) {
  pdlaed3_(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void pdlaedz(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK) {
  pdlaedz_(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PDLAEDZ(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK) {
  pdlaedz_(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PDLAEDZ_(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, double *Z, double *WORK) {
  pdlaedz_(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void pdlaevswp(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK) {
  pdlaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PDLAEVSWP(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK) {
  pdlaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PDLAEVSWP_(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK) {
  pdlaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void pdlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
             int *ILWORK, int *INFO) {
  pdlahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PDLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
             int *ILWORK, int *INFO) {
  pdlahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PDLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
              int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
              double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
              int *ILWORK, int *INFO) {
  pdlahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void pdlahrd(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK) {
  pdlahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PDLAHRD(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK) {
  pdlahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PDLAHRD_(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
              double *WORK) {
  pdlahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void pdlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pdlamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pdlamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  pdlamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pdlamve(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK) {
  pdlamve_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PDLAMVE(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK) {
  pdlamve_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PDLAMVE_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *DWORK) {
  pdlamve_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void pdlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  pdlapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PDLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  pdlapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PDLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              double *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK) {
  pdlapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void pdlapv2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pdlapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PDLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pdlapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PDLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pdlapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void pdlaqge(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  pdlaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PDLAQGE(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  pdlaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PDLAQGE_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED) {
  pdlaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void pdlaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z, int *DESCZ,
             int *NS, int *ND, double *SR, double *SI, double *T, int *LDT,
             double *V, int *LDV, double *WR, double *WI, double *WORK,
             int *LWORK) {
  pdlaqr2_(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PDLAQR2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z, int *DESCZ,
             int *NS, int *ND, double *SR, double *SI, double *T, int *LDT,
             double *V, int *LDV, double *WR, double *WI, double *WORK,
             int *LWORK) {
  pdlaqr2_(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PDLAQR2_(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
              double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z,
              int *DESCZ, int *NS, int *ND, double *SR, double *SI, double *T,
              int *LDT, double *V, int *LDV, double *WR, double *WI,
              double *WORK, int *LWORK) {
  pdlaqr2_(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void pdlaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
             double *WORK, int *LWORK, int *INFO) {
  pdlaqr4_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PDLAQR4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
             double *WORK, int *LWORK, int *INFO) {
  pdlaqr4_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PDLAQR4_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
              int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
              double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
              double *WORK, int *LWORK, int *INFO) {
  pdlaqr4_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void pdlaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
             int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK) {
  pdlaqr5_(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PDLAQR5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
             int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK) {
  pdlaqr5_(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PDLAQR5_(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
              int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
              int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK) {
  pdlaqr5_(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void pdlaqsy(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  pdlaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PDLAQSY(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  pdlaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PDLAQSY_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX,
              char *EQUED) {
  pdlaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void pdlared1d(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK) {
  pdlared1d_(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PDLARED1D(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK) {
  pdlared1d_(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PDLARED1D_(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
                double *BYALL, double *WORK, int *LWORK) {
  pdlared1d_(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void pdlared2d(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK) {
  pdlared2d_(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PDLARED2D(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK) {
  pdlared2d_(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PDLARED2D_(int *N, int *IA, int *JA, int *DESC, double *BYROW,
                double *BYALL, double *WORK, int *LWORK) {
  pdlared2d_(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void pdlarf(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK) {
  pdlarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARF(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK) {
  pdlarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARF_(char *SIDE, int *M, int *N, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK) {
  pdlarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pdlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  pdlarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PDLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  pdlarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PDLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC,
              double *WORK) {
  pdlarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void pdlarfg(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU) {
  pdlarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PDLARFG(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU) {
  pdlarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PDLARFG_(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
              int *JX, int *DESCX, int *INCX, double *TAU) {
  pdlarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void pdlarft(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  pdlarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARFT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  pdlarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARFT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  pdlarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pdlarz(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK) {
  pdlarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARZ(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK) {
  pdlarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARZ_(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK) {
  pdlarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pdlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  pdlarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PDLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  pdlarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PDLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC,
              double *WORK) {
  pdlarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void pdlarzt(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  pdlarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARZT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  pdlarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARZT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  pdlarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pdlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  pdlascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PDLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  pdlascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PDLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, int *INFO) {
  pdlascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void pdlase2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  pdlase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASE2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  pdlase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASE2_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA) {
  pdlase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pdlaset(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  pdlaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASET(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  pdlaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASET_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA) {
  pdlaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pdlasmsub(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK) {
  pdlasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PDLASMSUB(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK) {
  pdlasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PDLASMSUB_(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                double *BUF, int *LWORK) {
  pdlasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void pdlasrt(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  pdlasrt_(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDLASRT(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  pdlasrt_(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDLASRT_(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  pdlasrt_(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdlassq(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  pdlassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PDLASSQ(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  pdlassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PDLASSQ_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ) {
  pdlassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void pdlaswp(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pdlaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PDLASWP(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pdlaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PDLASWP_(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  pdlaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void pdlatrd(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK) {
  pdlatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PDLATRD(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK) {
  pdlatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PDLATRD_(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
              int *JW, int *DESCW, double *WORK) {
  pdlatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void pdlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK) {
  pdlatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PDLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK) {
  pdlatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PDLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK) {
  pdlatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void pdlatrz(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK) {
  pdlatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PDLATRZ(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK) {
  pdlatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PDLATRZ_(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK) {
  pdlatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void pdlauu2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  pdlauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUU2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  pdlauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUU2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  pdlauu2_(UPLO, N, A, IA, JA, DESCA);
}

void pdlauum(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  pdlauum_(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUUM(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  pdlauum_(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUUM_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  pdlauum_(UPLO, N, A, IA, JA, DESCA);
}

void pdlawil(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V) {
  pdlawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PDLAWIL(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V) {
  pdlawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PDLAWIL_(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
              double *H33, double *H43H34, double *V) {
  pdlawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void pdorg2l(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorg2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2L(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorg2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2L_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorg2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorg2r(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorg2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2R(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorg2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2R_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorg2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorgl2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGL2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGL2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorglq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGLQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGLQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorgql(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQL(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQL_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorgqr(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQR(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQR_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorgr2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGR2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGR2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorgrq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGRQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGRQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdorgrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  pdormbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  pdormbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  pdormbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pdormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  pdormhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  pdormhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  pdormhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pdorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdorml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormql(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  pdormr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pdormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pdormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  pdormrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pdormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  pdormtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pdpbsv(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pdpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPBSV(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  pdpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPBSV_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO) {
  pdpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pdpbtrf(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPBTRF(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPBTRF_(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pdpbtrs(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO) {
  pdpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PDPBTRS(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO) {
  pdpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PDPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  pdpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void pdpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PDPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PDPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
               int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
               int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void pdpocon(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPOCON(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPOCON_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pdpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void pdpoequ(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  pdpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PDPOEQU(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  pdpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PDPOEQU_(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO) {
  pdpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void pdporfs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, double *B,
             int *IB, int *JB, int *DESCB, double *X, int *IX, int *JX,
             int *DESCX, double *FERR, double *BERR, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pdporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPORFS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, double *B,
             int *IB, int *JB, int *DESCB, double *X, int *IX, int *JX,
             int *DESCX, double *FERR, double *BERR, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pdporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPORFS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
              int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void pdposv(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOSV(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOSV_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pdposvx(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *RCOND,
             double *FERR, double *BERR, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PDPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *RCOND,
             double *FERR, double *BERR, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PDPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
              int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
              int *DESCB, double *X, int *IX, int *JX, int *DESCX,
              double *RCOND, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void pdpotf2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pdpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTF2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pdpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTF2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pdpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pdpotrf(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pdpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRF(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pdpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRF_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pdpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pdpotri(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pdpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRI(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pdpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRI_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pdpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pdpotrs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOTRS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOTRS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pdptsv(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO) {
  pdptsv_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPTSV(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO) {
  pdptsv_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPTSV_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
             int *INFO) {
  pdptsv_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pdpttrf(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRF(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRF_(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  pdpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pdpttrs(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO) {
  pdpttrs_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRS(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO) {
  pdpttrs_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRS_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
              double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  pdpttrs_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void pdpttrsv(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  pdpttrsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PDPTTRSV(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  pdpttrsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PDPTTRSV_(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
               int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
               double *WORK, int *LWORK, int *INFO) {
  pdpttrsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void pdrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO) {
  pdrot_(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PDROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO) {
  pdrot_(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PDROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
            double *SN, double *WORK, int *LWORK, int *INFO) {
  pdrot_(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void pdrscl(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  pdrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PDRSCL(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  pdrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PDRSCL_(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pdrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void pdstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
             double *VU, int *IL, int *IU, double *ABSTOL, double *D, double *E,
             int *M, int *NSPLIT, double *W, int *IBLOCK, int *ISPLIT,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdstebz_(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEBZ(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
             double *VU, int *IL, int *IU, double *ABSTOL, double *D, double *E,
             int *M, int *NSPLIT, double *W, int *IBLOCK, int *ISPLIT,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdstebz_(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEBZ_(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
              double *VU, int *IL, int *IU, double *ABSTOL, double *D,
              double *E, int *M, int *NSPLIT, double *W, int *IBLOCK,
              int *ISPLIT, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  pdstebz_(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdlaebz(int *IJOB, int *N, int *MMAX, int *MINP, double *ABSTOL,
             double *RELTOL, double *PIVMIN, double *D, int *NVAL,
             double *INTVL, int *INTVLCT, int *MOUT, double *LSAVE, int *IEFLAG,
             int *INFO) {
  pdlaebz_(IJOB, N, MMAX, MINP, ABSTOL, RELTOL, PIVMIN, D, NVAL, INTVL, INTVLCT,
           MOUT, LSAVE, IEFLAG, INFO);
}

void PDLAEBZ(int *IJOB, int *N, int *MMAX, int *MINP, double *ABSTOL,
             double *RELTOL, double *PIVMIN, double *D, int *NVAL,
             double *INTVL, int *INTVLCT, int *MOUT, double *LSAVE, int *IEFLAG,
             int *INFO) {
  pdlaebz_(IJOB, N, MMAX, MINP, ABSTOL, RELTOL, PIVMIN, D, NVAL, INTVL, INTVLCT,
           MOUT, LSAVE, IEFLAG, INFO);
}

void PDLAEBZ_(int *IJOB, int *N, int *MMAX, int *MINP, double *ABSTOL,
              double *RELTOL, double *PIVMIN, double *D, int *NVAL,
              double *INTVL, int *INTVLCT, int *MOUT, double *LSAVE,
              int *IEFLAG, int *INFO) {
  pdlaebz_(IJOB, N, MMAX, MINP, ABSTOL, RELTOL, PIVMIN, D, NVAL, INTVL, INTVLCT,
           MOUT, LSAVE, IEFLAG, INFO);
}

void pdlaecv(int *IJOB, int *KF, int *KL, double *INTVL, int *INTVLCT,
             int *NVAL, double *ABSTOL, double *RELTOL) {
  pdlaecv_(IJOB, KF, KL, INTVL, INTVLCT, NVAL, ABSTOL, RELTOL);
}

void PDLAECV(int *IJOB, int *KF, int *KL, double *INTVL, int *INTVLCT,
             int *NVAL, double *ABSTOL, double *RELTOL) {
  pdlaecv_(IJOB, KF, KL, INTVL, INTVLCT, NVAL, ABSTOL, RELTOL);
}

void PDLAECV_(int *IJOB, int *KF, int *KL, double *INTVL, int *INTVLCT,
              int *NVAL, double *ABSTOL, double *RELTOL) {
  pdlaecv_(IJOB, KF, KL, INTVL, INTVLCT, NVAL, ABSTOL, RELTOL);
}

void pdlapdct(double *SIGMA, int *N, double *D, double *PIVMIN, int *COUNT) {
  pdlapdct_(SIGMA, N, D, PIVMIN, COUNT);
}

void PDLAPDCT(double *SIGMA, int *N, double *D, double *PIVMIN, int *COUNT) {
  pdlapdct_(SIGMA, N, D, PIVMIN, COUNT);
}

void PDLAPDCT_(double *SIGMA, int *N, double *D, double *PIVMIN, int *COUNT) {
  pdlapdct_(SIGMA, N, D, PIVMIN, COUNT);
}

void pdstedc(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdstedc_(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEDC(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pdstedc_(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEDC_(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
              int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  pdstedc_(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pdstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PDSTEIN(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pdstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PDSTEIN_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pdstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pdsyev(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO) {
  pdsyev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PDSYEV(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO) {
  pdsyev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PDSYEV_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *INFO) {
  pdsyev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void pdsyevd(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdsyevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDSYEVD(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdsyevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDSYEVD_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdsyevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void pdsyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  pdsyevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSYEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  pdsyevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSYEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  pdsyevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdsyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  pdsyevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PDSYEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  pdsyevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PDSYEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
              int *INFO) {
  pdsyevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void pdsygs2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdsygs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDSYGS2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdsygs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDSYGS2_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pdsygs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pdsygst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO) {
  pdsygst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PDSYGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO) {
  pdsygst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PDSYGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO) {
  pdsygst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void pdsygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  pdsygvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PDSYGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  pdsygvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PDSYGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
              int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
              int *INFO) {
  pdsygvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pdsyngst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO) {
  pdsyngst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PDSYNGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO) {
  pdsyngst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PDSYNGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
               int *DESCA, double *B, int *IB, int *JB, int *DESCB,
               double *SCALE, double *WORK, int *LWORK, int *INFO) {
  pdsyngst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void pdsyntrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  pdsyntrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYNTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  pdsyntrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYNTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO) {
  pdsyntrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pdsytd2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  pdsytd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTD2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  pdsytd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTD2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  pdsytd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pdsytrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  pdsytrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  pdsytrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  pdsytrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pdsyttrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  pdsyttrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  pdsyttrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO) {
  pdsyttrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pdtrcon(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pdtrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PDTRCON(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pdtrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PDTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pdtrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void pdtrord(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
             int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
             double *WR, double *WI, int *M, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pdtrord_(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRORD(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
             int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
             double *WR, double *WI, int *M, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pdtrord_(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRORD_(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
              int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
              double *WR, double *WI, int *M, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pdtrord_(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdtrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
             double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // pdtrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
             double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // pdtrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
              double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  // pdtrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdtrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
             int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WR, double *WI, int *M, double *S, double *SEP,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdtrsen_(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRSEN(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
             int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WR, double *WI, int *M, double *S, double *SEP,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pdtrsen_(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRSEN_(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
              int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WR, double *WI, int *M, double *S,
              double *SEP, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  pdtrsen_(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pdtrti2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pdtrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTI2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pdtrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTI2_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pdtrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pdtrtri(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pdtrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTRI(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pdtrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTRI_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pdtrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pdtrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  pdtrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PDTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  pdtrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PDTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, int *INFO) {
  pdtrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void pdtzrzf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdtzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDTZRZF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdtzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDTZRZF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  pdtzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pdupdate(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO) {
  pdupdate_(M, N, I, J, JO, JB, JN, IA, JA, A, DESCA, TPIV, IPIV, PANEL, BPANEL,
            DS, BCAST, INFO);
}

void PDUPDATE(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO) {
  pdupdate_(M, N, I, J, JO, JB, JN, IA, JA, A, DESCA, TPIV, IPIV, PANEL, BPANEL,
            DS, BCAST, INFO);
}

void PDUPDATE_(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
               int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
               int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO) {
  pdupdate_(M, N, I, J, JO, JB, JN, IA, JA, A, DESCA, TPIV, IPIV, PANEL, BPANEL,
            DS, BCAST, INFO);
}

void pdzsum1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pdzsum1_(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PDZSUM1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pdzsum1_(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PDZSUM1_(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX) {
  pdzsum1_(N, ASUM, X, IX, JX, DESCX, INCX);
}

void pilaver(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH) {
  pilaver_(VERS_MAJOR, VERS_MINOR, VERS_PATCH);
}

void PILAVER(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH) {
  pilaver_(VERS_MAJOR, VERS_MINOR, VERS_PATCH);
}

void PILAVER_(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH) {
  pilaver_(VERS_MAJOR, VERS_MINOR, VERS_PATCH);
}

void pmpcol(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL) {
  pmpcol_(MYPROC, NPROCS, IIL, NEEDIL, NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL,
          LASTCL);
}

void PMPCOL(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL) {
  pmpcol_(MYPROC, NPROCS, IIL, NEEDIL, NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL,
          LASTCL);
}

void PMPCOL_(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
             int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL) {
  pmpcol_(MYPROC, NPROCS, IIL, NEEDIL, NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL,
          LASTCL);
}

void pmpim2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS) {
  pmpim2_(IL, IU, NPROCS, PMYILS, PMYIUS);
}

void PMPIM2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS) {
  pmpim2_(IL, IU, NPROCS, PMYILS, PMYIUS);
}

void PMPIM2_(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS) {
  pmpim2_(IL, IU, NPROCS, PMYILS, PMYIUS);
}

void pscsum1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pscsum1_(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PSCSUM1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pscsum1_(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PSCSUM1_(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX) {
  pscsum1_(N, ASUM, X, IX, JX, DESCX, INCX);
}

void psdbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  psdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  psdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  psdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void psdbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void psdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void psdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void psdtsv(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  psdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDTSV(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  psdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDTSV_(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  psdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void psdttrf(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDTTRF(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDTTRF_(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void psdttrs(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDTTRS(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDTTRS_(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void psdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
               float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void psgbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  psgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PSGBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  psgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PSGBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
             int *LWORK, int *INFO) {
  psgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void psgbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO) {
  psgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PSGBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO) {
  psgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PSGBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
              int *INFO) {
  psgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void psgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PSGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PSGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  psgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void psgebal(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO) {
  psgebal_(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PSGEBAL(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO) {
  psgebal_(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PSGEBAL_(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
              float *SCALE, int *INFO) {
  psgebal_(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void psgebd2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  psgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBD2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  psgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBD2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO) {
  psgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void psgebrd(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  psgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBRD(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  psgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBRD_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO) {
  psgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void psgecon(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  psgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGECON(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  psgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGECON_(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  psgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void psgeequ(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO) {
  psgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PSGEEQU(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO) {
  psgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PSGEEQU_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO) {
  psgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void psgehd2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHD2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHD2_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgehrd(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHRD(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHRD_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgelq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgelqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgels(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  psgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PSGELS(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  psgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PSGELS_(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
             int *LWORK, int *INFO) {
  psgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void psgeql2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQL2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQL2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgeqlf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQLF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQLF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgeqpf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PSGEQPF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PSGEQPF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void psgeqr2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQR2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQR2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgeqrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgerfs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             float *B, int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  psgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGERFS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             float *B, int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  psgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGERFS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
              float *B, int *IB, int *JB, int *DESCB, float *X, int *IX,
              int *JX, int *DESCX, float *FERR, float *BERR, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void psgerq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgerqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  psgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psgesv(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  psgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGESV(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  psgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGESV_(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
             int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  psgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void psgesvd(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
             int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
             float *WORK, int *LWORK, int *INFO) {
  psgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PSGESVD(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
             int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
             float *WORK, int *LWORK, int *INFO) {
  psgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PSGESVD_(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
              int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
              float *WORK, int *LWORK, int *INFO) {
  psgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void psgesvx(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
             int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  psgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGESVX(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
             int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  psgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
              int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
              int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
              float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  psgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void psgetf2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  psgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETF2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  psgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETF2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO) {
  psgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void psgetrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  psgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  psgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO) {
  psgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void psgetri(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGETRI(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGETRI_(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void psgetrs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  psgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGETRS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  psgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGETRS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  psgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void psggqrf(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  psggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGQRF(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  psggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGQRF_(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO) {
  psggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void psggrqf(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  psggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGRQF(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  psggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGRQF_(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO) {
  psggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pshseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pshseqr_(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pshseqr_(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
              int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pshseqr_(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void pslabad(int *ICTXT, float *SMALL, float *LARGE) {
  pslabad_(ICTXT, SMALL, LARGE);
}

void PSLABAD(int *ICTXT, float *SMALL, float *LARGE) {
  pslabad_(ICTXT, SMALL, LARGE);
}

void PSLABAD_(int *ICTXT, float *SMALL, float *LARGE) {
  pslabad_(ICTXT, SMALL, LARGE);
}

void pslabrd(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
             int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  pslabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PSLABRD(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
             int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  pslabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PSLABRD_(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
              int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK) {
  pslabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void pslacon(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE) {
  pslacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PSLACON(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE) {
  pslacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PSLACON_(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
              int *JX, int *DESCX, int *ISGN, float *EST, int *KASE) {
  pslacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void pslaconsb(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK) {
  pslaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PSLACONSB(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK) {
  pslaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PSLACONSB_(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
                float *H33, float *H43H34, float *BUF, int *LWORK) {
  pslaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void pslacp2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  pslacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACP2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  pslacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACP2_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB) {
  pslacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pslacp3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV) {
  pslacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PSLACP3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV) {
  pslacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PSLACP3_(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
              int *JJ, int *REV) {
  pslacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void pslacpy(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  pslacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACPY(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  pslacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACPY_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB) {
  pslacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pslaed0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO) {
  pslaed0_(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PSLAED0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO) {
  pslaed0_(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PSLAED0_(int *N, float *D, float *E, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *IWORK, int *INFO) {
  pslaed0_(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void pslaed1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO) {
  pslaed1_(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PSLAED1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO) {
  pslaed1_(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PSLAED1_(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO) {
  pslaed1_(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void pslaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
             int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
             float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  pslaed2_(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PSLAED2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
             int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
             float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  pslaed2_(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PSLAED2_(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
              int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
              float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
              int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
              int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
              int *IB2) {
  pslaed2_(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void pslaed3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
             int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z, float *U,
             int *LDU, float *BUF, int *INDX, int *INDCOL, int *INDROW,
             int *INDXR, int *INDXC, int *CTOT, int *NPCOL, int *INFO) {
  pslaed3_(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PSLAED3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
             int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z, float *U,
             int *LDU, float *BUF, int *INDX, int *INDCOL, int *INDROW,
             int *INDXR, int *INDXC, int *CTOT, int *NPCOL, int *INFO) {
  pslaed3_(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PSLAED3_(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
              int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z,
              float *U, int *LDU, float *BUF, int *INDX, int *INDCOL,
              int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
              int *INFO) {
  pslaed3_(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void pslaedz(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK) {
  pslaedz_(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PSLAEDZ(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK) {
  pslaedz_(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PSLAEDZ_(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, float *Z, float *WORK) {
  pslaedz_(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void pslaevswp(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK) {
  pslaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PSLAEVSWP(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK) {
  pslaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PSLAEVSWP_(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK) {
  pslaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void pslahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  pslahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PSLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  pslahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PSLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
              int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
              int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO) {
  pslahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void pslahrd(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  pslahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PSLAHRD(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  pslahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PSLAHRD_(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK) {
  pslahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void pslamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pslamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pslamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  pslamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pslamve(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK) {
  pslamve_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PSLAMVE(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK) {
  pslamve_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PSLAMVE_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB,
              float *DWORK) {
  pslamve_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void pslapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  pslapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PSLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  pslapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PSLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
              int *DESCIP, int *IWORK) {
  pslapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void pslapv2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pslapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PSLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pslapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PSLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pslapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void pslaqge(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED) {
  pslaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PSLAQGE(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED) {
  pslaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PSLAQGE_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX,
              char *EQUED) {
  pslaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void pslaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
             int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
             float *V, int *LDV, float *WR, float *WI, float *WORK,
             int *LWORK) {
  pslaqr2_(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PSLAQR2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
             int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
             float *V, int *LDV, float *WR, float *WI, float *WORK,
             int *LWORK) {
  pslaqr2_(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PSLAQR2_(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
              float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
              int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
              float *V, int *LDV, float *WR, float *WI, float *WORK,
              int *LWORK) {
  pslaqr2_(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void pslaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
             int *LWORK, int *INFO) {
  pslaqr4_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PSLAQR4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
             int *LWORK, int *INFO) {
  pslaqr4_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PSLAQR4_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
              int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
              int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
              int *LWORK, int *INFO) {
  pslaqr4_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void pslaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, float *SR, float *SI, float *H, int *DESCH, int *ILOZ,
             int *IHIZ, float *Z, int *DESCZ, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK) {
  pslaqr5_(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PSLAQR5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, float *SR, float *SI, float *H, int *DESCH, int *ILOZ,
             int *IHIZ, float *Z, int *DESCZ, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK) {
  pslaqr5_(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PSLAQR5_(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
              int *NSHFTS, float *SR, float *SI, float *H, int *DESCH,
              int *ILOZ, int *IHIZ, float *Z, int *DESCZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK) {
  pslaqr5_(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void pslaqsy(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  pslaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PSLAQSY(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  pslaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PSLAQSY_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  pslaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void pslared1d(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK) {
  pslared1d_(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PSLARED1D(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK) {
  pslared1d_(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PSLARED1D_(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
                float *WORK, int *LWORK) {
  pslared1d_(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void pslared2d(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK) {
  pslared2d_(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PSLARED2D(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK) {
  pslared2d_(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PSLARED2D_(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
                float *WORK, int *LWORK) {
  pslared2d_(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void pslarf(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK) {
  pslarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARF(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK) {
  pslarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARF_(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
             int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
             float *WORK) {
  pslarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pslarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  pslarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PSLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  pslarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PSLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
              float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  pslarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void pslarfg(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU) {
  pslarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PSLARFG(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU) {
  pslarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PSLARFG_(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
              int *JX, int *DESCX, int *INCX, float *TAU) {
  pslarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void pslarft(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  pslarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARFT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  pslarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARFT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  pslarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pslarz(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK) {
  pslarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARZ(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK) {
  pslarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARZ_(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
             int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK) {
  pslarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pslarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  pslarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PSLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  pslarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PSLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
              float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  pslarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void pslarzt(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  pslarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARZT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  pslarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARZT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  pslarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pslascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  pslascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PSLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  pslascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PSLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *INFO) {
  pslascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void pslase2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  pslase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASE2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  pslase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASE2_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA) {
  pslase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pslaset(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  pslaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASET(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  pslaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASET_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA) {
  pslaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pslasmsub(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK) {
  pslasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PSLASMSUB(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK) {
  pslasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PSLASMSUB_(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                float *BUF, int *LWORK) {
  pslasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void pslasrt(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pslasrt_(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSLASRT(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pslasrt_(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSLASRT_(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  pslasrt_(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pslassq(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  pslassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PSLASSQ(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  pslassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PSLASSQ_(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ) {
  pslassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void pslaswp(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pslaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PSLASWP(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pslaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PSLASWP_(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  pslaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void pslatrd(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK) {
  pslatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PSLATRD(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK) {
  pslatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PSLATRD_(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
              int *JW, int *DESCW, float *WORK) {
  pslatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void pslatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK) {
  pslatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PSLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK) {
  pslatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PSLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, float *WORK) {
  pslatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void pslatrz(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK) {
  pslatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PSLATRZ(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK) {
  pslatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PSLATRZ_(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK) {
  pslatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void pslauu2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  pslauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUU2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  pslauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUU2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  pslauu2_(UPLO, N, A, IA, JA, DESCA);
}

void pslauum(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  pslauum_(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUUM(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  pslauum_(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUUM_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  pslauum_(UPLO, N, A, IA, JA, DESCA);
}

void pslawil(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V) {
  pslawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PSLAWIL(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V) {
  pslawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PSLAWIL_(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
              float *H33, float *H43H34, float *V) {
  pslawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void psorg2l(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorg2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2L(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorg2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2L_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorg2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorg2r(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorg2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2R(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorg2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2R_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorg2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorgl2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGL2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGL2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorglq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGLQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGLQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorgql(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQL(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQL_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorgqr(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQR(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQR_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorgr2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGR2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGR2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorgrq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGRQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGRQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  psorgrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void psorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK,
              int *INFO) {
  psormbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void psormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK,
              int *INFO) {
  psormhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void psorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psorml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormql(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void psormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void psormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void psormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  psormtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pspbsv(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  pspbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPBSV(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  pspbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPBSV_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  pspbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pspbtrf(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPBTRF(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPBTRF_(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pspbtrs(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO) {
  pspbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PSPBTRS(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO) {
  pspbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PSPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO) {
  pspbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void pspbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PSPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PSPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
               int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
               int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void pspocon(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pspocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPOCON(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pspocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPOCON_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  pspocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void pspoequ(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  pspoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PSPOEQU(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  pspoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PSPOEQU_(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO) {
  pspoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void psporfs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
             int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  psporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPORFS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
             int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  psporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPORFS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
              int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
              int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  psporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void psposv(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  psposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOSV(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  psposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOSV_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  psposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void psposvx(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
             float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  psposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PSPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
             float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  psposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PSPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
              int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
              char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
              int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
              float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  psposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void pspotf2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pspotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTF2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pspotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTF2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pspotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pspotrf(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pspotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRF(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pspotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRF_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pspotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pspotri(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pspotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRI(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pspotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRI_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pspotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pspotrs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pspotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOTRS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pspotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOTRS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pspotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void psptsv(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO) {
  psptsv_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPTSV(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO) {
  psptsv_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPTSV_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  psptsv_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pspttrf(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRF(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRF_(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  pspttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pspttrs(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO) {
  pspttrs_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRS(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO) {
  pspttrs_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRS_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
              float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
              int *LWORK, int *INFO) {
  pspttrs_(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void pspttrsv(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO) {
  pspttrsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PSPTTRSV(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO) {
  pspttrsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PSPTTRSV_(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
               int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
               float *WORK, int *LWORK, int *INFO) {
  pspttrsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void psrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO) {
  psrot_(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PSROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO) {
  psrot_(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PSROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
            float *SN, float *WORK, int *LWORK, int *INFO) {
  psrot_(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void psrscl(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  psrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PSRSCL(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  psrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PSRSCL_(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  psrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void psstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
             int *IL, int *IU, float *ABSTOL, float *D, float *E, int *M,
             int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT, float *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psstebz_(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEBZ(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
             int *IL, int *IU, float *ABSTOL, float *D, float *E, int *M,
             int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT, float *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psstebz_(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEBZ_(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL,
              float *VU, int *IL, int *IU, float *ABSTOL, float *D, float *E,
              int *M, int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  psstebz_(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pslaebz(int *IJOB, int *N, int *MMAX, int *MINP, float *ABSTOL,
             float *RELTOL, float *PIVMIN, float *D, int *NVAL, float *INTVL,
             int *INTVLCT, int *MOUT, float *LSAVE, int *IEFLAG, int *INFO) {
  pslaebz_(IJOB, N, MMAX, MINP, ABSTOL, RELTOL, PIVMIN, D, NVAL, INTVL, INTVLCT,
           MOUT, LSAVE, IEFLAG, INFO);
}

void PSLAEBZ(int *IJOB, int *N, int *MMAX, int *MINP, float *ABSTOL,
             float *RELTOL, float *PIVMIN, float *D, int *NVAL, float *INTVL,
             int *INTVLCT, int *MOUT, float *LSAVE, int *IEFLAG, int *INFO) {
  pslaebz_(IJOB, N, MMAX, MINP, ABSTOL, RELTOL, PIVMIN, D, NVAL, INTVL, INTVLCT,
           MOUT, LSAVE, IEFLAG, INFO);
}

void PSLAEBZ_(int *IJOB, int *N, int *MMAX, int *MINP, float *ABSTOL,
              float *RELTOL, float *PIVMIN, float *D, int *NVAL, float *INTVL,
              int *INTVLCT, int *MOUT, float *LSAVE, int *IEFLAG, int *INFO) {
  pslaebz_(IJOB, N, MMAX, MINP, ABSTOL, RELTOL, PIVMIN, D, NVAL, INTVL, INTVLCT,
           MOUT, LSAVE, IEFLAG, INFO);
}

void pslaecv(int *IJOB, int *KF, int *KL, float *INTVL, int *INTVLCT, int *NVAL,
             float *ABSTOL, float *RELTOL) {
  pslaecv_(IJOB, KF, KL, INTVL, INTVLCT, NVAL, ABSTOL, RELTOL);
}

void PSLAECV(int *IJOB, int *KF, int *KL, float *INTVL, int *INTVLCT, int *NVAL,
             float *ABSTOL, float *RELTOL) {
  pslaecv_(IJOB, KF, KL, INTVL, INTVLCT, NVAL, ABSTOL, RELTOL);
}

void PSLAECV_(int *IJOB, int *KF, int *KL, float *INTVL, int *INTVLCT,
              int *NVAL, float *ABSTOL, float *RELTOL) {
  pslaecv_(IJOB, KF, KL, INTVL, INTVLCT, NVAL, ABSTOL, RELTOL);
}

void pslapdct(float *SIGMA, int *N, float *D, float *PIVMIN, int *COUNT) {
  pslapdct_(SIGMA, N, D, PIVMIN, COUNT);
}

void PSLAPDCT(float *SIGMA, int *N, float *D, float *PIVMIN, int *COUNT) {
  pslapdct_(SIGMA, N, D, PIVMIN, COUNT);
}

void PSLAPDCT_(float *SIGMA, int *N, float *D, float *PIVMIN, int *COUNT) {
  pslapdct_(SIGMA, N, D, PIVMIN, COUNT);
}

void psstedc(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  psstedc_(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEDC(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  psstedc_(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEDC_(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
              int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  psstedc_(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void psstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
             int *ICLUSTR, float *GAP, int *INFO) {
  psstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSTEIN(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
             int *ICLUSTR, float *GAP, int *INFO) {
  psstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSTEIN_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
              int *ICLUSTR, float *GAP, int *INFO) {
  psstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pssyev(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO) {
  pssyev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PSSYEV(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO) {
  pssyev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PSSYEV_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *INFO) {
  pssyev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void pssyevd(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pssyevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSSYEVD(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pssyevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSSYEVD_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pssyevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void pssyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pssyevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSYEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pssyevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSYEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pssyevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pssyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
             int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pssyevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PSSYEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
             int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pssyevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PSSYEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
              int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pssyevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void pssygs2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pssygs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSSYGS2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pssygs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSSYGS2_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pssygs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pssygst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO) {
  pssygst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PSSYGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO) {
  pssygst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PSSYGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              int *INFO) {
  pssygst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void pssygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *VL, float *VU, int *IL, int *IU, float *ABSTOL,
             int *M, int *NZ, float *W, float *ORFAC, float *Z, int *IZ,
             int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pssygvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSYGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *VL, float *VU, int *IL, int *IU, float *ABSTOL,
             int *M, int *NZ, float *W, float *ORFAC, float *Z, int *IZ,
             int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pssygvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSYGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *B, int *IB,
              int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
              int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  pssygvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pssyngst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO) {
  pssyngst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PSSYNGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO) {
  pssyngst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PSSYNGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
               int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
               float *WORK, int *LWORK, int *INFO) {
  pssyngst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void pssyntrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  pssyntrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYNTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  pssyntrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYNTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO) {
  pssyntrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pssytd2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  pssytd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTD2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  pssytd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTD2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  pssytd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pssytrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  pssytrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  pssytrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  pssytrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pssyttrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  pssyttrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  pssyttrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO) {
  pssyttrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pstrcon(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pstrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PSTRCON(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pstrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PSTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pstrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void pstrord(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
             int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pstrord_(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRORD(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
             int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pstrord_(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRORD_(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
              int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
              float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  pstrord_(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pstrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
             float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // pstrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
             float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // pstrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
              float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  // pstrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pstrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
             int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pstrsen_(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRSEN(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
             int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pstrsen_(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRSEN_(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
              int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pstrsen_(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pstrti2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pstrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTI2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pstrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTI2_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pstrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pstrtri(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pstrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTRI(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pstrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTRI_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pstrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pstrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  pstrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PSTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  pstrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PSTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, int *INFO) {
  pstrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void pstzrzf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  pstzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSTZRZF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  pstzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSTZRZF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  pstzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzdbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzdbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pzdbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzdbtrf_(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pzdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzdbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void pzdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
               int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
               int *INFO) {
  pzdbtrsv_(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void pzdrscl(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pzdrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PZDRSCL(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  pzdrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void PZDRSCL_(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX) {
  pzdrscl_(N, SA, SX, IX, JX, DESCX, INCX);
}

void pzdtsv(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDTSV(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDTSV_(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzdtsv_(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pzdttrf(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDTTRF(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDTTRF_(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
              int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzdttrf_(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pzdttrs(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
             dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDTTRS(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
             dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDTTRS_(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
              dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzdttrs_(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void pzdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
              dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
              int *LWORK, int *INFO) {
  pzdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
              dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
              int *LWORK, int *INFO) {
  pzdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
               dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
               int *LWORK, int *INFO) {
  pzdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void pzgbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  pzgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PZGBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  pzgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PZGBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzgbsv_(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void pzgbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PZGBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PZGBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzgbtrf_(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void pzgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PZGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PZGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgbtrs_(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void pzgebd2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBD2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBD2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO) {
  pzgebd2_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void pzgebrd(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBRD(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBRD_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO) {
  pzgebrd_(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void pzgecon(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pzgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGECON(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pzgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGECON_(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  pzgecon_(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pzgeequ(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  pzgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PZGEEQU(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  pzgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PZGEEQU_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO) {
  pzgeequ_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void pzgehd2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHD2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHD2_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzgehd2_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgehrd(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHRD(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHRD_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzgehrd_(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgelq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgelq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgelqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgelqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgels(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  pzgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PZGELS(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  pzgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PZGELS_(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO) {
  pzgels_(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void pzgeql2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQL2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQL2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeql2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgeqlf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQLF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQLF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqlf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgeqpf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pzgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGEQPF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pzgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGEQPF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  pzgeqpf_(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void pzgeqr2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQR2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQR2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqr2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgeqrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgeqrf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgerfs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *INFO) {
  pzgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGERFS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *INFO) {
  pzgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGERFS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO) {
  pzgerfs_(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pzgerq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgerq2_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgerqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzgerqf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzgesv(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGESV(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGESV_(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzgesv_(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void pzgesvd(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
             int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
             dcomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  pzgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PZGESVD(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
             int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
             dcomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  pzgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PZGESVD_(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
              int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
              dcomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  pzgesvd_(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void pzgesvx(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGESVX(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
              int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF,
              int *DESCAF, int *IPIV, char *EQUED, double *R, double *C,
              dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *RCOND, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO) {
  pzgesvx_(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void pzgetf2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pzgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETF2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pzgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETF2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  pzgetf2_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pzgetrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pzgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  pzgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  pzgetrf_(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void pzgetri(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pzgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PZGETRI(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pzgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PZGETRI_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  pzgetri_(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void pzgetrs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  pzgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGETRS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  pzgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGETRS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pzgetrs_(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void pzggqrf(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  pzggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGQRF(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  pzggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGQRF_(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  pzggqrf_(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pzggrqf(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  pzggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGRQF(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  pzggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGRQF_(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  pzggrqf_(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void pzheev(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
            int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
            dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
            int *INFO) {
  pzheev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PZHEEV(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
            int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
            dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
            int *INFO) {
  pzheev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PZHEEV_(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
             int *INFO) {
  pzheev_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void pzheevd(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pzheevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVD(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  pzheevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVD_(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  pzheevd_(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void pzheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pzheevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  pzheevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
              int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK,
              int *LRWORK, int *IWORK, int *LIWORK, int *INFO) {
  pzheevr_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void pzheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzheevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZHEEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzheevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZHEEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzheevx_(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pzhegs2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzhegs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZHEGS2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzhegs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZHEGS2_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pzhegs2_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pzhegst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO) {
  pzhegst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PZHEGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO) {
  pzhegst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PZHEGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO) {
  pzhegst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void pzhegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzhegvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZHEGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzhegvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZHEGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzhegvx_(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pzhengst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO) {
  pzhengst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PZHENGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO) {
  pzhengst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PZHENGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
               int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
               double *SCALE, dcomplex *WORK, int *LWORK, int *INFO) {
  pzhengst_(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void pzhentrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO) {
  pzhentrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PZHENTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO) {
  pzhentrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PZHENTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               dcomplex *RWORK, int *LRWORK, int *INFO) {
  pzhentrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void pzhetd2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzhetd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETD2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzhetd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETD2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzhetd2_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pzhetrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzhetrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  pzhetrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzhetrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pzhettrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzhettrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzhettrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               int *INFO) {
  pzhettrd_(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void pzlabrd(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP, dcomplex *X,
             int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  pzlabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PZLABRD(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP, dcomplex *X,
             int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  pzlabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PZLABRD_(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *X, int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK) {
  pzlabrd_(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void pzlacgv(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  pzlacgv_(N, X, IX, JX, DESCX, INCX);
}

void PZLACGV(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  pzlacgv_(N, X, IX, JX, DESCX, INCX);
}

void PZLACGV_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  pzlacgv_(N, X, IX, JX, DESCX, INCX);
}

void pzlacon(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE) {
  pzlacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PZLACON(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE) {
  pzlacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PZLACON_(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *EST, int *KASE) {
  pzlacon_(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void pzlaconsb(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK) {
  pzlaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PZLACONSB(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK) {
  pzlaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PZLACONSB_(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
                dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK) {
  pzlaconsb_(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void pzlacp2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  pzlacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACP2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  pzlacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACP2_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  pzlacp2_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pzlacp3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  pzlacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PZLACP3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  pzlacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PZLACP3_(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
              int *II, int *JJ, int *REV) {
  pzlacp3_(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void pzlacpy(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  pzlacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACPY(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  pzlacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACPY_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  pzlacpy_(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pzlaevswp(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK) {
  pzlaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PZLAEVSWP(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK) {
  pzlaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PZLAEVSWP_(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK) {
  pzlaevswp_(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void pzlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
             int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
             int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  pzlahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PZLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
             int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
             int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  pzlahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PZLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
              int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO) {
  pzlahqr_(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void pzlahrd(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  pzlahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PZLAHRD(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  pzlahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PZLAHRD_(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK) {
  pzlahrd_(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void pzlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pzlamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  pzlamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  pzlamr1d_(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void pzlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  pzlapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PZLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  pzlapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PZLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK) {
  pzlapiv_(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void pzlapv2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pzlapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PZLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pzlapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PZLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  pzlapv2_(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void pzlaqge(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  pzlaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PZLAQGE(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  pzlaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PZLAQGE_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED) {
  pzlaqge_(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void pzlaqsy(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  pzlaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PZLAQSY(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  pzlaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PZLAQSY_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX,
              char *EQUED) {
  pzlaqsy_(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void pzlarf(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  pzlarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARF(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  pzlarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARF_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  pzlarf_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pzlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  pzlarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PZLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  pzlarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PZLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
              dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
              dcomplex *WORK) {
  pzlarfb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void pzlarfc(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  pzlarfc_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARFC(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  pzlarfc_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARFC_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK) {
  pzlarfc_(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pzlarfg(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU) {
  pzlarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PZLARFG(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU) {
  pzlarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PZLARFG_(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, dcomplex *TAU) {
  pzlarfg_(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void pzlarft(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  pzlarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARFT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  pzlarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARFT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  pzlarft_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pzlarz(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  pzlarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZ(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  pzlarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZ_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  pzlarz_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pzlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  pzlarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PZLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  pzlarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PZLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
              dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
              dcomplex *WORK) {
  pzlarzb_(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void pzlarzc(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  pzlarzc_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZC(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  pzlarzc_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZC_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK) {
  pzlarzc_(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void pzlarzt(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  pzlarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARZT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  pzlarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARZT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  pzlarzt_(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void pzlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO) {
  pzlascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PZLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO) {
  pzlascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PZLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO) {
  pzlascl_(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void pzlase2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASE2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASE2_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlase2_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pzlaset(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASET(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASET_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlaset_(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void pzlasmsub(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK) {
  pzlasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PZLASMSUB(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK) {
  pzlasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PZLASMSUB_(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                dcomplex *BUF, int *LWORK) {
  pzlasmsub_(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void pzlassq(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  pzlassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PZLASSQ(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  pzlassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PZLASSQ_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ) {
  pzlassq_(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void pzlaswp(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pzlaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PZLASWP(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  pzlaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PZLASWP_(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  pzlaswp_(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void pzlatrd(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK) {
  pzlatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PZLATRD(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK) {
  pzlatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PZLATRD_(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
              int *IW, int *JW, int *DESCW, dcomplex *WORK) {
  pzlatrd_(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void pzlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK) {
  pzlatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PZLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK) {
  pzlatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PZLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK) {
  pzlatrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void pzlatrz(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK) {
  pzlatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PZLATRZ(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK) {
  pzlatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PZLATRZ_(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK) {
  pzlatrz_(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void pzlattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO) {
  pzlattrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PZLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO) {
  pzlattrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PZLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
               int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO) {
  pzlattrs_(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void pzlauu2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUU2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlauu2_(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUU2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlauu2_(UPLO, N, A, IA, JA, DESCA);
}

void pzlauum(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlauum_(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUUM(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlauum_(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUUM_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  pzlauum_(UPLO, N, A, IA, JA, DESCA);
}

void pzlawil(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V) {
  pzlawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PZLAWIL(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V) {
  pzlawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PZLAWIL_(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
              dcomplex *H33, dcomplex *H43H34, dcomplex *V) {
  pzlawil_(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void pzmax1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  pzmax1_(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PZMAX1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  pzmax1_(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PZMAX1_(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX) {
  pzmax1_(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void zcombamax1(dcomplex *V1, dcomplex *V2) { zcombamax1_(V1, V2); }

void ZCOMBAMAX1(dcomplex *V1, dcomplex *V2) { zcombamax1_(V1, V2); }

void ZCOMBAMAX1_(dcomplex *V1, dcomplex *V2) { zcombamax1_(V1, V2); }

void pzpbsv(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPBSV(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPBSV_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzpbsv_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pzpbtrf(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPBTRF(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPBTRF_(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrf_(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pzpbtrs(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPBTRS(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrs_(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void pzpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
               int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
               dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpbtrsv_(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void pzpocon(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pzpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPOCON(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pzpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPOCON_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  pzpocon_(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pzpoequ(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  pzpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PZPOEQU(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  pzpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PZPOEQU_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO) {
  pzpoequ_(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void pzporfs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPORFS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPORFS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
              dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzporfs_(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void pzposv(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOSV(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOSV_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzposv_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pzposvx(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void PZPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  pzposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void PZPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
              int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF,
              int *DESCAF, char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B,
              int *IB, int *JB, int *DESCB, dcomplex *X, int *IX, int *JX,
              int *DESCX, double *RCOND, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO) {
  pzposvx_(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void pzpotf2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pzpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTF2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pzpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTF2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pzpotf2_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pzpotrf(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pzpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRF(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pzpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRF_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pzpotrf_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pzpotri(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pzpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRI(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  pzpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRI_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  pzpotri_(UPLO, N, A, IA, JA, DESCA, INFO);
}

void pzpotrs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOTRS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  pzpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOTRS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  pzpotrs_(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void pzptsv(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzptsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPTSV(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  pzptsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPTSV_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzptsv_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void pzpttrf(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPTTRF(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPTTRF_(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpttrf_(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void pzpttrs(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpttrs_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPTTRS(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpttrs_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPTTRS_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  pzpttrs_(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void pzpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
              dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzpttrsv_(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
              dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  pzpttrsv_(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
               dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
               int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
               int *INFO) {
  pzpttrsv_(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void pzstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZSTEIN(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZSTEIN_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  pzstein_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void pztrcon(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pztrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PZTRCON(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  pztrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PZTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  pztrcon_(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void pztrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO) {
  pztrevc_(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PZTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO) {
  pztrevc_(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PZTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
              int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
              int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO) {
  pztrevc_(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void pztrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  // pztrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  // pztrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
              double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  // pztrrfs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void pztrti2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pztrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTI2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pztrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTI2_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pztrti2_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pztrtri(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pztrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTRI(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  pztrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTRI_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  pztrtri_(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void pztrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  pztrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PZTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  pztrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PZTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO) {
  pztrtrs_(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void pztzrzf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pztzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZTZRZF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pztzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZTZRZF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pztzrzf_(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzung2l(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzung2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2L(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzung2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2L_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzung2l_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzung2r(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzung2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2R(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzung2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2R_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzung2r_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzungl2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGL2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGL2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungl2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzunglq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGLQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGLQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunglq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzungql(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQL(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQL_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungql_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzungqr(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQR(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQR_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungqr_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzungr2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGR2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGR2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungr2_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzungrq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGRQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGRQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  pzungrq_(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void pzunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunm2l_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunm2r_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  pzunmbr_(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pzunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  pzunmhr_(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pzunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunml2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmlq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmql_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmqr_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmr2_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  pzunmr3_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pzunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmrq_(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void pzunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  pzunmrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  pzunmrz_(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void pzunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  pzunmtr_(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void sdbtf2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  sdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTF2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  sdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTF2_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  sdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void sdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  sdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  sdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  sdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void sdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  sdttrf_(N, DL, D, DU, INFO);
}

void SDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  sdttrf_(N, DL, D, DU, INFO);
}

void SDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  sdttrf_(N, DL, D, DU, INFO);
}

void sdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  sdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void SDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  sdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void SDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  sdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void slamsh(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP) {
  slamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void SLAMSH(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP) {
  slamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void SLAMSH_(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
             int *N, float *ULP) {
  slamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void slapst(char *ID, int *N, float *D, int *INDX, int *INFO) {
  slapst_(ID, N, D, INDX, INFO);
}

void SLAPST(char *ID, int *N, float *D, int *INDX, int *INFO) {
  slapst_(ID, N, D, INDX, INFO);
}

void SLAPST_(char *ID, int *N, float *D, int *INDX, int *INFO) {
  slapst_(ID, N, D, INDX, INFO);
}

void slaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
            int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
            float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
            float *WH, int *LDWH) {
  slaqr6_(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void SLAQR6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
            int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
            float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
            float *WH, int *LDWH) {
  slaqr6_(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void SLAQR6_(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
             int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
             int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
             float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
             float *WH, int *LDWH) {
  slaqr6_(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void slar1va(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
             float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
             int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
             int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
             float *WORK) {
  slar1va_(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SLAR1VA(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
             float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
             int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
             int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
             float *WORK) {
  slar1va_(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SLAR1VA_(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
              float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
              int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
              int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
              float *WORK) {
  slar1va_(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void slaref(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
            float *V2, float *V3, float *T1, float *T2, float *T3) {
  slaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SLAREF(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
            float *V2, float *V3, float *T1, float *T2, float *T3) {
  slaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SLAREF_(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
             int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
             int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
             float *V2, float *V3, float *T1, float *T2, float *T3) {
  slaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void slarrb2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
             float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
             float *WERR, float *WORK, int *IWORK, float *PIVMIN, float *LGPVMN,
             float *LGSPDM, int *TWIST, int *INFO) {
  slarrb2_(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void SLARRB2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
             float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
             float *WERR, float *WORK, int *IWORK, float *PIVMIN, float *LGPVMN,
             float *LGSPDM, int *TWIST, int *INFO) {
  slarrb2_(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void SLARRB2_(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
              float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
              float *WERR, float *WORK, int *IWORK, float *PIVMIN,
              float *LGPVMN, float *LGSPDM, int *TWIST, int *INFO) {
  slarrb2_(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void slaneg2(int *N, float *D, float *LLD, float *SIGMA, float *PIVMIN,
             int *R) {
  slaneg2_(N, D, LLD, SIGMA, PIVMIN, R);
}

void SLANEG2(int *N, float *D, float *LLD, float *SIGMA, float *PIVMIN,
             int *R) {
  slaneg2_(N, D, LLD, SIGMA, PIVMIN, R);
}

void SLANEG2_(int *N, float *D, float *LLD, float *SIGMA, float *PIVMIN,
              int *R) {
  slaneg2_(N, D, LLD, SIGMA, PIVMIN, R);
}

void slaneg2a(int *N, float *DLLD, float *SIGMA, float *PIVMIN, int *R) {
  slaneg2a_(N, DLLD, SIGMA, PIVMIN, R);
}

void SLANEG2A(int *N, float *DLLD, float *SIGMA, float *PIVMIN, int *R) {
  slaneg2a_(N, DLLD, SIGMA, PIVMIN, R);
}

void SLANEG2A_(int *N, float *DLLD, float *SIGMA, float *PIVMIN, int *R) {
  slaneg2a_(N, DLLD, SIGMA, PIVMIN, R);
}

void slarrd2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
             int *IU, float *GERS, float *RELTOL, float *D, float *E, float *E2,
             float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M, float *W,
             float *WERR, float *WL, float *WU, int *IBLOCK, int *INDEXW,
             float *WORK, int *IWORK, int *DOL, int *DOU, int *INFO) {
  slarrd2_(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void SLARRD2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
             int *IU, float *GERS, float *RELTOL, float *D, float *E, float *E2,
             float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M, float *W,
             float *WERR, float *WL, float *WU, int *IBLOCK, int *INDEXW,
             float *WORK, int *IWORK, int *DOL, int *DOU, int *INFO) {
  slarrd2_(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void SLARRD2_(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
              int *IU, float *GERS, float *RELTOL, float *D, float *E,
              float *E2, float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
              float *W, float *WERR, float *WL, float *WU, int *IBLOCK,
              int *INDEXW, float *WORK, int *IWORK, int *DOL, int *DOU,
              int *INFO) {
  slarrd2_(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void slarre2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
             float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
             float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
             int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
             int *INFO) {
  slarre2_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void SLARRE2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
             float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
             float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
             int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
             int *INFO) {
  slarre2_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void SLARRE2_(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
              int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
              int *INFO) {
  slarre2_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void slarre2a(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
              int *INFO) {
  slarre2a_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void SLARRE2A(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
              int *INFO) {
  slarre2a_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void SLARRE2A_(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
               float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
               float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
               int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
               float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
               double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
               int *INFO) {
  slarre2a_(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void slarrf2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
             int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
             double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
             float *WORK, int *INFO) {
  slarrf2_(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void SLARRF2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
             int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
             double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
             float *WORK, int *INFO) {
  slarrf2_(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void SLARRF2_(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
              int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
              int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
              double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
              float *WORK, int *INFO) {
  slarrf2_(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void slarrv2(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
             int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
             float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
             float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
             float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
             int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
             int *ZOFFSET, int *INFO) {
  slarrv2_(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void SLARRV2(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
             int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
             float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
             float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
             float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
             int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
             int *ZOFFSET, int *INFO) {
  slarrv2_(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void SLARRV2_(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
              int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
              int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
              int *ZOFFSET, int *INFO) {
  slarrv2_(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void slasorte(float *S, int *LDS, int *J, float *OUT, int *INFO) {
  slasorte_(S, LDS, J, OUT, INFO);
}

void SLASORTE(float *S, int *LDS, int *J, float *OUT, int *INFO) {
  slasorte_(S, LDS, J, OUT, INFO);
}

void SLASORTE_(float *S, int *LDS, int *J, float *OUT, int *INFO) {
  slasorte_(S, LDS, J, OUT, INFO);
}

void slasrt2(char *ID, int *N, float *D, int *KEY, int *INFO) {
  slasrt2_(ID, N, D, KEY, INFO);
}

void SLASRT2(char *ID, int *N, float *D, int *KEY, int *INFO) {
  slasrt2_(ID, N, D, KEY, INFO);
}

void SLASRT2_(char *ID, int *N, float *D, int *KEY, int *INFO) {
  slasrt2_(ID, N, D, KEY, INFO);
}

void spttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  spttrsv_(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void SPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  spttrsv_(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void SPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  spttrsv_(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void sstegr2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
             float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
             int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO) {
  sstegr2_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void SSTEGR2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
             float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
             int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO) {
  sstegr2_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void SSTEGR2_(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO) {
  sstegr2_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void sstegr2a(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *DOL, int *DOU, int *NEEDIL, int *NEEDIU, int *INDERR,
              int *NSPLIT, float *PIVMIN, float *SCALE, float *WL, float *WU,
              int *INFO) {
  sstegr2a_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void SSTEGR2A(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *DOL, int *DOU, int *NEEDIL, int *NEEDIU, int *INDERR,
              int *NSPLIT, float *PIVMIN, float *SCALE, float *WL, float *WU,
              int *INFO) {
  sstegr2a_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void SSTEGR2A_(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
               float *VU, int *IL, int *IU, int *M, float *W, float *Z,
               int *LDZ, int *NZC, float *WORK, int *LWORK, int *IWORK,
               int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
               int *INDERR, int *NSPLIT, float *PIVMIN, float *SCALE, float *WL,
               float *WU, int *INFO) {
  sstegr2a_(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void sstegr2b(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
              float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
              float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  sstegr2b_(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void SSTEGR2B(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
              float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
              float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  sstegr2b_(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void SSTEGR2B_(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
               float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
               int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
               int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
               float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
               int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  sstegr2b_(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void sstein2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  sstein2_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void SSTEIN2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  sstein2_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void SSTEIN2_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
              int *IWORK, int *IFAIL, int *INFO) {
  sstein2_(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void ssteqr2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  ssteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void SSTEQR2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  ssteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void SSTEQR2_(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
              int *NR, float *WORK, int *INFO) {
  ssteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void strmvt(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ) {
  strmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void STRMVT(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ) {
  strmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void STRMVT_(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
             float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ) {
  strmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void zdbtf2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO) {
  zdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTF2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO) {
  zdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTF2_(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
             int *INFO) {
  zdbtf2_(M, N, KL, KU, AB, LDAB, INFO);
}

void zdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  zdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  zdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  zdbtrf_(M, N, KL, KU, AB, LDAB, INFO);
}

void zdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  zdttrf_(N, DL, D, DU, INFO);
}

void ZDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  zdttrf_(N, DL, D, DU, INFO);
}

void ZDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  zdttrf_(N, DL, D, DU, INFO);
}

void zdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  zdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void ZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  zdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void ZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  zdttrsv_(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void zlahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO) {
  zlahqr2_(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void ZLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO) {
  zlahqr2_(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void ZLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
              int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *LDZ, int *INFO) {
  zlahqr2_(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void zlamsh(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP) {
  zlamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void ZLAMSH(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP) {
  zlamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void ZLAMSH_(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
             int *LDH, int *N, double *ULP) {
  zlamsh_(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void zlanv2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN) {
  zlanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void ZLANV2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN) {
  zlanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void ZLANV2_(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
             dcomplex *RT2, double *CS, dcomplex *SN) {
  zlanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void zlaref(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
            dcomplex *T2, dcomplex *T3) {
  zlaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void ZLAREF(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
            dcomplex *T2, dcomplex *T3) {
  zlaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void ZLAREF_(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
             int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
             int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
             dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
             dcomplex *T2, dcomplex *T3) {
  zlaref_(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void zpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  zpttrsv_(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void ZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  zpttrsv_(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void ZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  zpttrsv_(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void zsteqr2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  zsteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void ZSTEQR2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  zsteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void ZSTEQR2_(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
              int *NR, double *WORK, int *INFO) {
  zsteqr2_(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void ztrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  ztrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void ZTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  ztrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void ZTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ) {
  ztrmvt_(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

/* pclange */
float pclange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pclange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pclange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return pclange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* pclanhe */
float pclanhe(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return pclanhe_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return pclanhe_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK) {
  return pclanhe_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* pclanhs */
float pclanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pclanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
float PCLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pclanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
float PCLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return pclanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}

/* pclansy */
float pclansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return pclansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return pclansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK) {
  return pclansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* pclantr */
float pclantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return pclantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return pclantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return pclantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* pclatra */
scomplex pclatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return pclatra_(N, A, IA, JA, DESCA);
}
scomplex PCLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return pclatra_(N, A, IA, JA, DESCA);
}
scomplex PCLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return pclatra_(N, A, IA, JA, DESCA);
}

/* pdlamch */
double pdlamch(int *ICTXT, char *CMACH) { pdlamch_(ICTXT, CMACH); }
double PDLAMCH(int *ICTXT, char *CMACH) { pdlamch_(ICTXT, CMACH); }
double PDLAMCH_(int *ICTXT, char *CMACH) { pdlamch_(ICTXT, CMACH); }

/* pdlange */
void pdlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pdlange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pdlange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  pdlange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* pdlanhs */
void pdlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pdlanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
void PDLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pdlanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
void PDLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  pdlanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}

/* pdlansy */
void pdlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pdlansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PDLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pdlansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PDLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  pdlansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* pdlantr */
void pdlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  pdlantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  pdlantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  pdlantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* pdlatra */
void pdlatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  pdlatra_(N, A, IA, JA, DESCA);
}
void PDLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  pdlatra_(N, A, IA, JA, DESCA);
}
void PDLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  pdlatra_(N, A, IA, JA, DESCA);
}

/* pilaenvx */
int pilaenvx(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4) {
  return pilaenvx_(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PILAENVX(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4) {
  return pilaenvx_(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PILAENVX_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
              float *N2, float *N3, float *N4) {
  return pilaenvx_(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}

/* piparmq */
int piparmq(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB) {
  return piparmq_(ICTXT, ISPEC, NAME, OPTS, N, ILO, IHI, LWORKNB);
}
int PIPARMQ(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB) {
  return piparmq_(ICTXT, ISPEC, NAME, OPTS, N, ILO, IHI, LWORKNB);
}
int PIPARMQ_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
             float *ILO, float *IHI, float *LWORKNB) {
  return piparmq_(ICTXT, ISPEC, NAME, OPTS, N, ILO, IHI, LWORKNB);
}

/* pjlaenv */
int pjlaenv(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4) {
  return pjlaenv_(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PJLAENV(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4) {
  return pjlaenv_(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PJLAENV_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4) {
  return pjlaenv_(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}

/* pslamch */
float pslamch(float *ICTXT, float *CMACH) { return pslamch_(ICTXT, CMACH); }
float PSLAMCH(float *ICTXT, float *CMACH) { return pslamch_(ICTXT, CMACH); }
float PSLAMCH_(float *ICTXT, float *CMACH) { return pslamch_(ICTXT, CMACH); }

/* pslange */
float pslange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pslange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pslange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return pslange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* pslanhs */
float pslanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pslanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
float PSLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return pslanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
float PSLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return pslanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}

/* pslansy */
float pslansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return pslansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PSLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return pslansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PSLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK) {
  return pslansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* pslantr */
float pslantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return pslantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return pslantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return pslantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* pslatra */
float pslatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return pslatra_(N, A, IA, JA, DESCA);
}
float PSLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return pslatra_(N, A, IA, JA, DESCA);
}
float PSLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return pslatra_(N, A, IA, JA, DESCA);
}

/* pzlange */
void pzlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  pzlange_(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* pzlanhe */
void pzlanhe(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlanhe_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlanhe_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  pzlanhe_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* pzlanhs */
void pzlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
void PZLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}
void PZLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  pzlanhs_(NORM, N, A, IA, JA, DESCA, WORK);
}

/* pzlansy */
void pzlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  pzlansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  pzlansy_(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* pzlantr */
void pzlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  pzlantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  pzlantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  pzlantr_(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* pzlatra */
void pzlatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  pzlatra_(N, A, IA, JA, DESCA);
}
void PZLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  pzlatra_(N, A, IA, JA, DESCA);
}
void PZLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  pzlatra_(N, A, IA, JA, DESCA);
}
