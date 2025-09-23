/* ---------------------------------------------------------------------
 *
 *  -- AOCL ScaLAPACK Wrappers --
 *     Copyright (c) 2025 Advanced Micro Devices, Inc.  All rights reserved.
 *
 *  ---------------------------------------------------------------------
 */
#ifdef ENABLE_AOCL_WRAPPERS

#include "aocl_f2c_src_wrappers.h"

void mangle_bdlaapp(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK) {
  F77_BDLAAPP(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BDLAAPP(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK) {
  F77_BDLAAPP(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BDLAAPP_(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
              int *NITRAF, int *ITRAF, double *DTRAF, double *WORK) {
  F77_BDLAAPP(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void mangle_bdlaexc(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO) {
  F77_BDLAEXC(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BDLAEXC(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO) {
  F77_BDLAEXC(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BDLAEXC_(int *N, double *T, int *LDT, int *J1, int *N1, int *N2,
              int *ITRAF, double *DTRAF, double *WORK, int *INFO) {
  F77_BDLAEXC(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void mangle_bdtrexc(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO) {
  F77_BDTREXC(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BDTREXC(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO) {
  F77_BDTREXC(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BDTREXC_(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO) {
  F77_BDTREXC(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void mangle_bslaapp(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK) {
  F77_BSLAAPP(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BSLAAPP(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK) {
  F77_BSLAAPP(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void BSLAAPP_(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
              int *NITRAF, int *ITRAF, float *DTRAF, float *WORK) {
  F77_BSLAAPP(ISIDE, M, N, NB, A, LDA, NITRAF, ITRAF, DTRAF, WORK);
}

void mangle_bslaexc(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO) {
  F77_BSLAEXC(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BSLAEXC(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO) {
  F77_BSLAEXC(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void BSLAEXC_(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
              float *DTRAF, float *WORK, int *INFO) {
  F77_BSLAEXC(N, T, LDT, J1, N1, N2, ITRAF, DTRAF, WORK, INFO);
}

void mangle_bstrexc(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO) {
  F77_BSTREXC(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BSTREXC(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO) {
  F77_BSTREXC(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void BSTREXC_(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO) {
  F77_BSTREXC(N, T, LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, INFO);
}

void mangle_cdbtf2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO) {
  F77_CDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTF2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO) {
  F77_CDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTF2_(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
             int *INFO) {
  F77_CDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_cdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_CDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_CDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void CDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  F77_CDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_cdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_CDTTRF(N, DL, D, DU, INFO);
}

void CDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_CDTTRF(N, DL, D, DU, INFO);
}

void CDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_CDTTRF(N, DL, D, DU, INFO);
}

void mangle_cdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_CDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void CDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_CDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void CDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_CDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void mangle_clahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO) {
  F77_CLAHQR2(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void CLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO) {
  F77_CLAHQR2(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void CLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
              int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *LDZ, int *INFO) {
  F77_CLAHQR2(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void mangle_clamsh(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP) {
  F77_CLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void CLAMSH(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP) {
  F77_CLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void CLAMSH_(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
             int *LDH, int *N, float *ULP) {
  F77_CLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void mangle_clanv2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN) {
  F77_CLANV2(A, B, C, D, RT1, RT2, CS, SN);
}

void CLANV2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN) {
  F77_CLANV2(A, B, C, D, RT1, RT2, CS, SN);
}

void CLANV2_(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
             scomplex *RT2, float *CS, scomplex *SN) {
  F77_CLANV2(A, B, C, D, RT1, RT2, CS, SN);
}

void mangle_claref(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
            scomplex *T2, scomplex *T3) {
  F77_CLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void CLAREF(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
            scomplex *T2, scomplex *T3) {
  F77_CLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void CLAREF_(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
             int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
             int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
             scomplex *VECS, scomplex *V2, scomplex *V3, scomplex *T1,
             scomplex *T2, scomplex *T3) {
  F77_CLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void mangle_cpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  F77_CPTTRSV(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void CPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  F77_CPTTRSV(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void CPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  F77_CPTTRSV(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void mangle_csteqr2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  F77_CSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void CSTEQR2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  F77_CSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void CSTEQR2_(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
              int *NR, float *WORK, int *INFO) {
  F77_CSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void mangle_ctrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  F77_CTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void CTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  F77_CTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void CTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ) {
  F77_CTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void mangle_ddbtf2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
            int *INFO) {
  F77_DDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTF2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
            int *INFO) {
  F77_DDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTF2_(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
             int *INFO) {
  F77_DDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_ddbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_DDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_DDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void DDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  F77_DDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_ddttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_DDTTRF(N, DL, D, DU, INFO);
}

void DDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_DDTTRF(N, DL, D, DU, INFO);
}

void DDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_DDTTRF(N, DL, D, DU, INFO);
}

void mangle_ddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_DDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void DDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_DDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void DDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_DDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void mangle_dlamsh(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP) {
  F77_DLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void DLAMSH(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP) {
  F77_DLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void DLAMSH_(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
             int *N, double *ULP) {
  F77_DLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void mangle_dlapst(char *ID, int *N, double *D, int *INDX, int *INFO) {
  F77_DLAPST(ID, N, D, INDX, INFO);
}

void DLAPST(char *ID, int *N, double *D, int *INDX, int *INFO) {
  F77_DLAPST(ID, N, D, INDX, INFO);
}

void DLAPST_(char *ID, int *N, double *D, int *INDX, int *INFO) {
  F77_DLAPST(ID, N, D, INDX, INFO);
}

void mangle_dlaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, double *SR, double *SI, double *H, int *LDH,
            int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V, int *LDV,
            double *U, int *LDU, int *NV, double *WV, int *LDWV, int *NH,
            double *WH, int *LDWH) {
  F77_DLAQR6(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void DLAQR6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, double *SR, double *SI, double *H, int *LDH,
            int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V, int *LDV,
            double *U, int *LDU, int *NV, double *WV, int *LDWV, int *NH,
            double *WH, int *LDWH) {
  F77_DLAQR6(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void DLAQR6_(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
             int *KBOT, int *NSHFTS, double *SR, double *SI, double *H,
             int *LDH, int *ILOZ, int *IHIZ, double *Z, int *LDZ, double *V,
             int *LDV, double *U, int *LDU, int *NV, double *WV, int *LDWV,
             int *NH, double *WH, int *LDWH) {
  F77_DLAQR6(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void mangle_dlar1va(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
             double *LD, double *LLD, double *PIVMIN, double *GAPTOL, double *Z,
             int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA, int *R,
             int *ISUPPZ, double *NRMINV, double *RESID, double *RQCORR,
             double *WORK) {
  F77_DLAR1VA(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void DLAR1VA(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
             double *LD, double *LLD, double *PIVMIN, double *GAPTOL, double *Z,
             int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA, int *R,
             int *ISUPPZ, double *NRMINV, double *RESID, double *RQCORR,
             double *WORK) {
  F77_DLAR1VA(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void DLAR1VA_(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
              double *LD, double *LLD, double *PIVMIN, double *GAPTOL,
              double *Z, int *WANTNC, int *NEGCNT, double *ZTZ, double *MINGMA,
              int *R, int *ISUPPZ, double *NRMINV, double *RESID,
              double *RQCORR, double *WORK) {
  F77_DLAR1VA(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void mangle_dlaref(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
            double *V2, double *V3, double *T1, double *T2, double *T3) {
  F77_DLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void DLAREF(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
            double *V2, double *V3, double *T1, double *T2, double *T3) {
  F77_DLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void DLAREF_(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
             int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
             int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, double *VECS,
             double *V2, double *V3, double *T1, double *T2, double *T3) {
  F77_DLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void mangle_dlarrb2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
             double *RTOL1, double *RTOL2, int *OFFSET, double *W, double *WGAP,
             double *WERR, double *WORK, int *IWORK, double *PIVMIN,
             double *LGPVMN, double *LGSPDM, int *TWIST, int *INFO) {
  F77_DLARRB2(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void DLARRB2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
             double *RTOL1, double *RTOL2, int *OFFSET, double *W, double *WGAP,
             double *WERR, double *WORK, int *IWORK, double *PIVMIN,
             double *LGPVMN, double *LGSPDM, int *TWIST, int *INFO) {
  F77_DLARRB2(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void DLARRB2_(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
              double *RTOL1, double *RTOL2, int *OFFSET, double *W,
              double *WGAP, double *WERR, double *WORK, int *IWORK,
              double *PIVMIN, double *LGPVMN, double *LGSPDM, int *TWIST,
              int *INFO) {
  F77_DLARRB2(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void mangle_dlarrd2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
             int *IU, double *GERS, double *RELTOL, double *D, double *E,
             double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
             double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
             int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
             int *INFO) {
  F77_DLARRD2(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void DLARRD2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
             int *IU, double *GERS, double *RELTOL, double *D, double *E,
             double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
             double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
             int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
             int *INFO) {
  F77_DLARRD2(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void DLARRD2_(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
              int *IU, double *GERS, double *RELTOL, double *D, double *E,
              double *E2, double *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
              double *W, double *WERR, double *WL, double *WU, int *IBLOCK,
              int *INDEXW, double *WORK, int *IWORK, int *DOL, int *DOU,
              int *INFO) {
  F77_DLARRD2(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void mangle_dlarre2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
             double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
             double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
             int *IWORK, int *INFO) {
  F77_DLARRE2(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void DLARRE2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
             double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
             double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
             int *IWORK, int *INFO) {
  F77_DLARRE2(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void DLARRE2_(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, double *W, double *WERR, double *WGAP, int *IBLOCK,
              int *INDEXW, double *GERS, double *PIVMIN, double *WORK,
              int *IWORK, int *INFO) {
  F77_DLARRE2(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void mangle_dlarre2a(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
              double *D, double *E, double *E2, double *RTOL1, double *RTOL2,
              double *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, double *W, double *WERR,
              double *WGAP, int *IBLOCK, int *INDEXW, double *GERS,
              double *SDIAM, double *PIVMIN, double *WORK, int *IWORK,
              double *MINRGP, int *INFO) {
  F77_DLARRE2A(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
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
  F77_DLARRE2A(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
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
  F77_DLARRE2A(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void mangle_dlarrf2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
             int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
             double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
             double *WORK, int *INFO) {
  F77_DLARRF2(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void DLARRF2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
             int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
             double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
             double *WORK, int *INFO) {
  F77_DLARRF2(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void DLARRF2_(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
              int *CLMID1, int *CLMID2, double *W, double *WGAP, double *WERR,
              int *TRYMID, double *SPDIAM, double *CLGAPL, double *CLGAPR,
              double *PIVMIN, double *SIGMA, double *DPLUS, double *LPLUS,
              double *WORK, int *INFO) {
  F77_DLARRF2(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void mangle_dlarrv2(int *N, double *VL, double *VU, double *D, double *L,
             double *PIVMIN, int *ISPLIT, int *M, int *DOL, int *DOU,
             int *NEEDIL, int *NEEDIU, double *MINRGP, double *RTOL1,
             double *RTOL2, double *W, double *WERR, double *WGAP, int *IBLOCK,
             int *INDEXW, double *GERS, double *SDIAM, double *Z, int *LDZ,
             int *ISUPPZ, double *WORK, int *IWORK, int *VSTART, int *FINISH,
             int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_DLARRV2(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
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
  F77_DLARRV2(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
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
  F77_DLARRV2(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void mangle_dlasorte(double *S, int *LDS, int *J, double *OUT, int *INFO) {
  F77_DLASORTE(S, LDS, J, OUT, INFO);
}

void DLASORTE(double *S, int *LDS, int *J, double *OUT, int *INFO) {
  F77_DLASORTE(S, LDS, J, OUT, INFO);
}

void DLASORTE_(double *S, int *LDS, int *J, double *OUT, int *INFO) {
  F77_DLASORTE(S, LDS, J, OUT, INFO);
}

void mangle_dlasrt2(char *ID, int *N, double *D, int *KEY, int *INFO) {
  F77_DLASRT2(ID, N, D, KEY, INFO);
}

void DLASRT2(char *ID, int *N, double *D, int *KEY, int *INFO) {
  F77_DLASRT2(ID, N, D, KEY, INFO);
}

void DLASRT2_(char *ID, int *N, double *D, int *KEY, int *INFO) {
  F77_DLASRT2(ID, N, D, KEY, INFO);
}

void mangle_dpttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  F77_DPTTRSV(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void DPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  F77_DPTTRSV(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void DPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  F77_DPTTRSV(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void mangle_dstegr2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
             double *VU, int *IL, int *IU, int *M, double *W, double *Z,
             int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
             int *INFO) {
  F77_DSTEGR2(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void DSTEGR2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
             double *VU, int *IL, int *IU, int *M, double *W, double *Z,
             int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
             int *INFO) {
  F77_DSTEGR2(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void DSTEGR2_(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, int *ISUPPZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *DOL, int *DOU, int *ZOFFSET,
              int *INFO) {
  F77_DSTEGR2(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void mangle_dstegr2a(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              int *INDERR, int *NSPLIT, double *PIVMIN, double *SCALE,
              double *WL, double *WU, int *INFO) {
  F77_DSTEGR2A(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void DSTEGR2A(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
              double *VU, int *IL, int *IU, int *M, double *W, double *Z,
              int *LDZ, int *NZC, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
              int *INDERR, int *NSPLIT, double *PIVMIN, double *SCALE,
              double *WL, double *WU, int *INFO) {
  F77_DSTEGR2A(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void DSTEGR2A_(char *JOBZ, char *RANGE, int *N, double *D, double *E,
               double *VL, double *VU, int *IL, int *IU, int *M, double *W,
               double *Z, int *LDZ, int *NZC, double *WORK, int *LWORK,
               int *IWORK, int *LIWORK, int *DOL, int *DOU, int *NEEDIL,
               int *NEEDIU, int *INDERR, int *NSPLIT, double *PIVMIN,
               double *SCALE, double *WL, double *WU, int *INFO) {
  F77_DSTEGR2A(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void mangle_dstegr2b(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
              double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
              double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_DSTEGR2B(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void DSTEGR2B(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
              double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
              double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_DSTEGR2B(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void DSTEGR2B_(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
               double *Z, int *LDZ, int *NZC, int *ISUPPZ, double *WORK,
               int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
               int *NEEDIL, int *NEEDIU, double *INDWLC, double *PIVMIN,
               double *SCALE, double *WL, double *WU, int *VSTART, int *FINISH,
               int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_DSTEGR2B(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void mangle_dstein2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  F77_DSTEIN2(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void DSTEIN2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  F77_DSTEIN2(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void DSTEIN2_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
              int *IWORK, int *IFAIL, int *INFO) {
  F77_DSTEIN2(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void mangle_dsteqr2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  F77_DSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void DSTEQR2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  F77_DSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void DSTEQR2_(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
              int *NR, double *WORK, int *INFO) {
  F77_DSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void mangle_dtrmvt(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ) {
  F77_DTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void DTRMVT(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ) {
  F77_DTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void DTRMVT_(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
             double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ) {
  F77_DTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void mangle_icopypv(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO) {
  F77_ICOPYPV(M, N, A, IA, JA, DESCA, TPIV, IPIV, INFO);
}

void ICOPYPV(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO) {
  F77_ICOPYPV(M, N, A, IA, JA, DESCA, TPIV, IPIV, INFO);
}

void ICOPYPV_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *TPIV, int *IPIV, int *INFO) {
  F77_ICOPYPV(M, N, A, IA, JA, DESCA, TPIV, IPIV, INFO);
}

void mangle_pcdbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pcdbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pcdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_pcdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               scomplex *A, int *JA, int *DESCA, scomplex *B, int *IB,
               int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
               int *INFO) {
  F77_PCDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_pcdtsv(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDTSV(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCDTSV_(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pcdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
              int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pcdttrs(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
             scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
             int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDTTRS(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
             scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
             int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PCDTTRS_(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
              scomplex *DU, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_pcdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
              int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PCDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
              int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PCDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PCDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
               scomplex *D, scomplex *DU, int *JA, int *DESCA, scomplex *B,
               int *IB, int *DESCB, scomplex *AF, int *LAF, scomplex *WORK,
               int *LWORK, int *INFO) {
  F77_PCDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_pcgbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PCGBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PCGBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_pcgbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PCGBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PCGBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pcgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PCGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PCGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void mangle_pcgebd2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBD2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBD2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_pcgebrd(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBRD(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PCGEBRD_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_pcgecon(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGECON(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGECON_(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pcgeequ(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO) {
  F77_PCGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PCGEEQU(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO) {
  F77_PCGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PCGEEQU_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              int *INFO) {
  F77_PCGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void mangle_pcgehd2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHD2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHD2_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgehrd(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHRD(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEHRD_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgelq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgelqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGELQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgels(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PCGELS(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PCGELS_(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_pcgeql2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQL2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQL2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgeqlf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQLF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQLF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgeqpf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  F77_PCGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGEQPF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  F77_PCGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGEQPF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void mangle_pcgeqr2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQR2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQR2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgeqrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGEQRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgerfs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
             int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGERFS(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
             int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCGERFS_(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X,
              int *IX, int *JX, int *DESCX, float *FERR, float *BERR,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *INFO) {
  F77_PCGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pcgerq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgerqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCGERQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcgesv(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGESV(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGESV_(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_pcgesvd(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
             int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
             scomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  F77_PCGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PCGESVD(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
             int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
             scomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  F77_PCGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PCGESVD_(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *S, scomplex *U, int *IU, int *JU,
              int *DESCU, scomplex *VT, int *IVT, int *JVT, int *DESCVT,
              scomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  F77_PCGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void mangle_pcgesvx(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCGESVX(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
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
  F77_PCGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void mangle_pcgetf2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PCGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETF2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PCGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETF2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  F77_PCGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pcgetrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PCGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PCGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PCGETRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  F77_PCGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pcgetri(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PCGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PCGETRI(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PCGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PCGETRI_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PCGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pcgetrs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PCGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGETRS(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PCGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PCGETRS_(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PCGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_pcggqrf(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGQRF(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGQRF_(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pcggrqf(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGRQF(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PCGGRQF_(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pcheev(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
            int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
            scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
            int *INFO) {
  F77_PCHEEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PCHEEV(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
            int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
            scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
            int *INFO) {
  F77_PCHEEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PCHEEV_(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, scomplex *RWORK, int *LRWORK,
             int *INFO) {
  F77_PCHEEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void mangle_pcheevd(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PCHEEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVD(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
             scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PCHEEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVD_(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, float *W, scomplex *Z, int *IZ, int *JZ, int *DESCZ,
              scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PCHEEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void mangle_pcheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PCHEEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PCHEEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PCHEEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              int *M, int *NZ, float *W, scomplex *Z, int *IZ, int *JZ,
              int *DESCZ, scomplex *WORK, int *LWORK, float *RWORK, int *LRWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PCHEEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void mangle_pcheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCHEEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCHEEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCHEEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCHEEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
              scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCHEEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pchegs2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCHEGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCHEGS2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCHEGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCHEGS2_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PCHEGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pchegst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO) {
  F77_PCHEGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PCHEGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO) {
  F77_PCHEGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PCHEGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, int *INFO) {
  F77_PCHEGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void mangle_pchegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC,
             scomplex *Z, int *IZ, int *JZ, int *DESCZ, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCHEGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
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
  F77_PCHEGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
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
  F77_PCHEGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pchengst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCHENGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PCHENGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCHENGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PCHENGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
               int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
               float *SCALE, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCHENGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void mangle_pchentrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO) {
  F77_PCHENTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PCHENTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO) {
  F77_PCHENTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PCHENTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               scomplex *RWORK, int *LRWORK, int *INFO) {
  F77_PCHENTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void mangle_pchetd2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCHETD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETD2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCHETD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETD2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCHETD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pchetrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCHETRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PCHETRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCHETRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pchettrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCHETTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCHETTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PCHETTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               int *INFO) {
  F77_PCHETTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pclabrd(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *X,
             int *IX, int *JX, int *DESCX, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  F77_PCLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PCLABRD(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *X,
             int *IX, int *JX, int *DESCX, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  F77_PCLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PCLABRD_(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *X, int *IX, int *JX, int *DESCX, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK) {
  F77_PCLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void mangle_pclacgv(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  F77_PCLACGV(N, X, IX, JX, DESCX, INCX);
}

void PCLACGV(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  F77_PCLACGV(N, X, IX, JX, DESCX, INCX);
}

void PCLACGV_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  F77_PCLACGV(N, X, IX, JX, DESCX, INCX);
}

void mangle_pclacon(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE) {
  F77_PCLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PCLACON(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE) {
  F77_PCLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PCLACON_(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
              int *IX, int *JX, int *DESCX, float *EST, int *KASE) {
  F77_PCLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void mangle_pclaconsb(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK) {
  F77_PCLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PCLACONSB(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK) {
  F77_PCLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PCLACONSB_(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
                scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK) {
  F77_PCLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void mangle_pclacp2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PCLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACP2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PCLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACP2_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PCLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pclacp3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  F77_PCLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PCLACP3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  F77_PCLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PCLACP3_(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
              int *II, int *JJ, int *REV) {
  F77_PCLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void mangle_pclacpy(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PCLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACPY(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PCLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLACPY_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PCLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pclaevswp(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK) {
  F77_PCLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PCLAEVSWP(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK) {
  F77_PCLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PCLAEVSWP_(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK) {
  F77_PCLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void mangle_pclahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
             int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
             int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  F77_PCLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PCLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
             int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
             int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  F77_PCLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PCLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
              int *DESCA, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *DESCZ, scomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO) {
  F77_PCLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void mangle_pclahrd(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  F77_PCLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PCLAHRD(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK) {
  F77_PCLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PCLAHRD_(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *T, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK) {
  F77_PCLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void mangle_pclamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PCLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PCLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PCLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  F77_PCLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pclapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  F77_PCLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PCLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  F77_PCLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PCLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK) {
  F77_PCLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void mangle_pclapv2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PCLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PCLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PCLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PCLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PCLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void mangle_pclaqge(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED) {
  F77_PCLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PCLAQGE(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED) {
  F77_PCLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PCLAQGE_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              char *EQUED) {
  F77_PCLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void mangle_pclaqsy(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  F77_PCLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PCLAQSY(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  F77_PCLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PCLAQSY_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  F77_PCLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void mangle_pclarf(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  F77_PCLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARF(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  F77_PCLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARF_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pclarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  F77_PCLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PCLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  F77_PCLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PCLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, scomplex *V, int *IV, int *JV, int *DESCV,
              scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
              scomplex *WORK) {
  F77_PCLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void mangle_pclarfc(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARFC(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARFC(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARFC(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARFC_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARFC(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pclarfg(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU) {
  F77_PCLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PCLARFG(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU) {
  F77_PCLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PCLARFG_(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, scomplex *TAU) {
  F77_PCLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void mangle_pclarft(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  F77_PCLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARFT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  F77_PCLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARFT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  F77_PCLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pclarz(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  F77_PCLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZ(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK) {
  F77_PCLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZ_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pclarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  F77_PCLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PCLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
             scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
             scomplex *WORK) {
  F77_PCLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PCLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, scomplex *V, int *IV, int *JV, int *DESCV,
              scomplex *T, scomplex *C, int *IC, int *JC, int *DESCC,
              scomplex *WORK) {
  F77_PCLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void mangle_pclarzc(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARZC(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZC(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARZC(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PCLARZC_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK) {
  F77_PCLARZC(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pclarzt(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  F77_PCLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARZT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  F77_PCLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PCLARZT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK) {
  F77_PCLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pclascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PCLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PCLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PCLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PCLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PCLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void mangle_pclase2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASE2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASE2_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pclaset(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASET(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PCLASET_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pclasmsub(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK) {
  F77_PCLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PCLASMSUB(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK) {
  F77_PCLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PCLASMSUB_(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                scomplex *BUF, int *LWORK) {
  F77_PCLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void mangle_pclassq(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  F77_PCLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PCLASSQ(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  F77_PCLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PCLASSQ_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ) {
  F77_PCLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void mangle_pclaswp(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PCLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PCLASWP(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PCLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PCLASWP_(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PCLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void mangle_pclatrd(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK) {
  F77_PCLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PCLATRD(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK) {
  F77_PCLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PCLATRD_(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
              int *IW, int *JW, int *DESCW, scomplex *WORK) {
  F77_PCLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void mangle_pclatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK) {
  F77_PCLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PCLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK) {
  F77_PCLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PCLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK) {
  F77_PCLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void mangle_pclatrz(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK) {
  F77_PCLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PCLATRZ(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK) {
  F77_PCLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PCLATRZ_(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK) {
  F77_PCLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void mangle_pclattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO) {
  F77_PCLATTRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PCLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO) {
  F77_PCLATTRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PCLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
               int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO) {
  F77_PCLATTRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void mangle_pclauu2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUU2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUU2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pclauum(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUUM(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PCLAUUM_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PCLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pclawil(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V) {
  F77_PCLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PCLAWIL(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V) {
  F77_PCLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PCLAWIL_(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
              scomplex *H33, scomplex *H43H34, scomplex *V) {
  F77_PCLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void mangle_pcmax1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  F77_PCMAX1(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PCMAX1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  F77_PCMAX1(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PCMAX1_(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX) {
  F77_PCMAX1(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void mangle_pcpbsv(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPBSV(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPBSV_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pcpbtrf(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPBTRF(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPBTRF_(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pcpbtrs(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPBTRS(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void mangle_pcpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
               int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
               scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void mangle_pcpocon(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPOCON(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPOCON_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pcpoequ(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  F77_PCPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PCPOEQU(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  F77_PCPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PCPOEQU_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO) {
  F77_PCPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void mangle_pcporfs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
             int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPORFS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
             int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
             int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PCPORFS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
              scomplex *B, int *IB, int *JB, int *DESCB, scomplex *X, int *IX,
              int *JX, int *DESCX, float *FERR, float *BERR, scomplex *WORK,
              int *LWORK, float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pcposv(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOSV(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOSV_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pcposvx(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, scomplex *SR, scomplex *SC, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void PCPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, scomplex *SR, scomplex *SC, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
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
  F77_PCPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void mangle_pcpotf2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PCPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTF2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PCPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTF2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PCPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pcpotrf(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PCPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRF(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PCPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRF_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PCPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pcpotri(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PCPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRI(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PCPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PCPOTRI_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PCPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pcpotrs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOTRS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PCPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PCPOTRS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PCPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pcptsv(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCPTSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPTSV(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PCPTSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PCPTSV_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCPTSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pcpttrf(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPTTRF(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PCPTTRF_(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pcpttrs(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPTTRS(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPTTRS(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPTTRS(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PCPTTRS_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCPTTRS(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void mangle_pcpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
              scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCPTTRSV(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
              scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
              int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PCPTTRSV(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PCPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
               scomplex *E, int *JA, int *DESCA, scomplex *B, int *IB,
               int *DESCB, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
               int *INFO) {
  F77_PCPTTRSV(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void mangle_pcsrscl(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PCSRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PCSRSCL(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PCSRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PCSRSCL_(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX) {
  F77_PCSRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void mangle_pcstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCSTEIN(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PCSTEIN_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, scomplex *Z, int *IZ, int *JZ,
              int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PCSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pctrcon(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PCTRCON(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO) {
  F77_PCTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PCTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  F77_PCTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void mangle_pctrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO) {
  F77_PCTREVC(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PCTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO) {
  F77_PCTREVC(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PCTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
              int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
              int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO) {
  F77_PCTREVC(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void mangle_pctrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *FERR, float *BERR, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  // PCTRRFS( UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO ) F77_PCTRRFS(UPLO,
  // TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X, IX, JX, DESCX,
  // FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
             float *FERR, float *BERR, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO) {
  // F77_PCTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PCTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, scomplex *X, int *IX, int *JX, int *DESCX,
              float *FERR, float *BERR, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO) {
  // F77_PCTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void mangle_pctrti2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PCTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTI2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PCTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTI2_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PCTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pctrtri(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PCTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTRI(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PCTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PCTRTRI_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PCTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pctrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  F77_PCTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PCTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  F77_PCTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PCTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO) {
  F77_PCTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void mangle_pctzrzf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCTZRZF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCTZRZF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcung2l(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2L(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2L_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcung2r(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2R(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNG2R_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcungl2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGL2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGL2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcunglq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGLQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGLQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcungql(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQL(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQL_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcungqr(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQR(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGQR_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcungr2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGR2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGR2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcungrq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGRQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PCUNGRQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pcunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PCUNMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pcunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PCUNMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pcunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PCUNMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pcunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PCUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pcunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
             scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PCUNMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *TAU,
              scomplex *C, int *IC, int *JC, int *DESCC, scomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PCUNMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pcunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PCUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO) {
  F77_PCUNMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pddbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO) {
  F77_PDDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pddbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pddbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_pddbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
               double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_pddtsv(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDTSV(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDDTSV_(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO) {
  F77_PDDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pddttrf(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDTTRF(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDDTTRF_(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pddttrs(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDTTRS(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PDDTTRS_(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_pddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PDDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL,
               double *D, double *DU, int *JA, int *DESCA, double *B, int *IB,
               int *DESCB, double *AF, int *LAF, double *WORK, int *LWORK,
               int *INFO) {
  F77_PDDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_pdgbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PDGBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PDGBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_pdgbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PDGBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PDGBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pdgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PDGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PDGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void mangle_pdgebal(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO) {
  F77_PDGEBAL(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PDGEBAL(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO) {
  F77_PDGEBAL(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PDGEBAL_(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
              double *SCALE, int *INFO) {
  F77_PDGEBAL(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void mangle_pdgebd2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBD2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBD2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO) {
  F77_PDGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_pdgebrd(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBRD(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PDGEBRD_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO) {
  F77_PDGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_pdgecon(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGECON(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGECON_(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_pdgeequ(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  F77_PDGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PDGEEQU(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  F77_PDGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PDGEEQU_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO) {
  F77_PDGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void mangle_pdgehd2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHD2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHD2_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgehrd(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHRD(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEHRD_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgelq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgelqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGELQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgels(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PDGELS(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PDGELS_(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_pdgeql2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQL2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQL2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgeqlf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQLF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQLF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgeqpf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PDGEQPF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PDGEQPF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void mangle_pdgeqr2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQR2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQR2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgeqrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGEQRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgerfs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGERFS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDGERFS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, double *B, int *IB, int *JB, int *DESCB, double *X,
              int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_pdgerq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgerqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDGERQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdgesv(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGESV(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGESV_(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
             int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_pdgesvd(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
             int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PDGESVD(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
             int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PDGESVD_(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *S, double *U, int *IU, int *JU,
              int *DESCU, double *VT, int *IVT, int *JVT, int *DESCVT,
              double *WORK, int *LWORK, int *INFO) {
  F77_PDGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void mangle_pdgesvx(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
             int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGESVX(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
             int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
              int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, char *EQUED, double *R, double *C, double *B, int *IB,
              int *JB, int *DESCB, double *X, int *IX, int *JX, int *DESCX,
              double *RCOND, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdgetf2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PDGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PDGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  F77_PDGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pdgetf2k(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO) {
  F77_PDGETF2K(M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO);
}

void PDGETF2K(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO) {
  F77_PDGETF2K(M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO);
}

void PDGETF2K_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
               int *IPIV, int *PANEL, int *INFO) {
  F77_PDGETF2K(M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO);
}

void mangle_pdgetf2_comm(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO) {
  F77_PDGETF2_COMM(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2_COMM(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO) {
  F77_PDGETF2_COMM(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETF2_COMM_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                   int *IPIV, int *INFO) {
  F77_PDGETF2_COMM(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pdgetrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PDGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PDGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PDGETRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  F77_PDGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pdgetri(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGETRI(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDGETRI_(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdgetrs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PDGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGETRS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PDGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PDGETRS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PDGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_pdggqrf(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  F77_PDGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGQRF(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  F77_PDGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGQRF_(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO) {
  F77_PDGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pdggrqf(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  F77_PDGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGRQF(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO) {
  F77_PDGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PDGGRQF_(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO) {
  F77_PDGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pdhseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDHSEQR(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDHSEQR(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
              int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDHSEQR(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void mangle_pdlabad(int *ICTXT, double *SMALL, double *LARGE) {
  F77_PDLABAD(ICTXT, SMALL, LARGE);
}

void PDLABAD(int *ICTXT, double *SMALL, double *LARGE) {
  F77_PDLABAD(ICTXT, SMALL, LARGE);
}

void PDLABAD_(int *ICTXT, double *SMALL, double *LARGE) {
  F77_PDLABAD(ICTXT, SMALL, LARGE);
}

void mangle_pdlabrd(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAUQ, double *TAUP, double *X,
             int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
             int *DESCY, double *WORK) {
  F77_PDLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PDLABRD(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAUQ, double *TAUP, double *X,
             int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
             int *DESCY, double *WORK) {
  F77_PDLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PDLABRD_(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *X,
              int *IX, int *JX, int *DESCX, double *Y, int *IY, int *JY,
              int *DESCY, double *WORK) {
  F77_PDLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void mangle_pdlacon(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE) {
  F77_PDLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PDLACON(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE) {
  F77_PDLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PDLACON_(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
              int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE) {
  F77_PDLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void mangle_pdlaconsb(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK) {
  F77_PDLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PDLACONSB(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK) {
  F77_PDLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PDLACONSB_(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
                double *H33, double *H43H34, double *BUF, int *LWORK) {
  F77_PDLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void mangle_pdlacp2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  F77_PDLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACP2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  F77_PDLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACP2_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  F77_PDLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pdlacp3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV) {
  F77_PDLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PDLACP3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV) {
  F77_PDLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PDLACP3_(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
              int *II, int *JJ, int *REV) {
  F77_PDLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void mangle_pdlacpy(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  F77_PDLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACPY(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  F77_PDLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLACPY_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB) {
  F77_PDLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pdlaed0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO) {
  F77_PDLAED0(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PDLAED0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO) {
  F77_PDLAED0(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PDLAED0_(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *IWORK, int *INFO) {
  F77_PDLAED0(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void mangle_pdlaed1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO) {
  F77_PDLAED1(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PDLAED1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO) {
  F77_PDLAED1(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PDLAED1_(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO) {
  F77_PDLAED1(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void mangle_pdlaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
             int *DCOL, double *Q, int *LDQ, double *RHO, double *Z, double *W,
             double *DLAMDA, double *Q2, int *LDQ2, double *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  F77_PDLAED2(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PDLAED2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
             int *DCOL, double *Q, int *LDQ, double *RHO, double *Z, double *W,
             double *DLAMDA, double *Q2, int *LDQ2, double *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  F77_PDLAED2(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PDLAED2_(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D,
              int *DROW, int *DCOL, double *Q, int *LDQ, double *RHO, double *Z,
              double *W, double *DLAMDA, double *Q2, int *LDQ2, double *QBUF,
              int *CTOT, int *PSM, int *NPCOL, int *INDX, int *INDXC,
              int *INDXP, int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2,
              int *IB1, int *IB2) {
  F77_PDLAED2(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void mangle_pdlaed3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
             int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
             double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
             int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
             int *INFO) {
  F77_PDLAED3(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PDLAED3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
             int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
             double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
             int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
             int *INFO) {
  F77_PDLAED3(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PDLAED3_(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
              int *DCOL, double *RHO, double *DLAMDA, double *W, double *Z,
              double *U, int *LDU, double *BUF, int *INDX, int *INDCOL,
              int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
              int *INFO) {
  F77_PDLAED3(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void mangle_pdlaedz(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK) {
  F77_PDLAEDZ(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PDLAEDZ(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK) {
  F77_PDLAEDZ(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PDLAEDZ_(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, double *Z, double *WORK) {
  F77_PDLAEDZ(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void mangle_pdlaevswp(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK) {
  F77_PDLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PDLAEVSWP(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK) {
  F77_PDLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PDLAEVSWP_(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK) {
  F77_PDLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void mangle_pdlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
             int *ILWORK, int *INFO) {
  F77_PDLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PDLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
             int *ILWORK, int *INFO) {
  F77_PDLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PDLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
              int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
              double *Z, int *DESCZ, double *WORK, int *LWORK, int *IWORK,
              int *ILWORK, int *INFO) {
  F77_PDLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void mangle_pdlahrd(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK) {
  F77_PDLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PDLAHRD(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK) {
  F77_PDLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PDLAHRD_(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
              double *WORK) {
  F77_PDLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void mangle_pdlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PDLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PDLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PDLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  F77_PDLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pdlamve(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK) {
  F77_PDLAMVE(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PDLAMVE(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK) {
  F77_PDLAMVE(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PDLAMVE_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *DWORK) {
  F77_PDLAMVE(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void mangle_pdlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  F77_PDLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PDLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  F77_PDLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PDLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              double *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK) {
  F77_PDLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void mangle_pdlapv2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PDLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PDLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PDLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PDLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PDLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void mangle_pdlaqge(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  F77_PDLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PDLAQGE(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  F77_PDLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PDLAQGE_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED) {
  F77_PDLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void mangle_pdlaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z, int *DESCZ,
             int *NS, int *ND, double *SR, double *SI, double *T, int *LDT,
             double *V, int *LDV, double *WR, double *WI, double *WORK,
             int *LWORK) {
  F77_PDLAQR2(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PDLAQR2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z, int *DESCZ,
             int *NS, int *ND, double *SR, double *SI, double *T, int *LDT,
             double *V, int *LDV, double *WR, double *WI, double *WORK,
             int *LWORK) {
  F77_PDLAQR2(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PDLAQR2_(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
              double *A, int *DESCA, int *ILOZ, int *IHIZ, double *Z,
              int *DESCZ, int *NS, int *ND, double *SR, double *SI, double *T,
              int *LDT, double *V, int *LDV, double *WR, double *WI,
              double *WORK, int *LWORK) {
  F77_PDLAQR2(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void mangle_pdlaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDLAQR4(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PDLAQR4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
             int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
             double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDLAQR4(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PDLAQR4_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
              int *DESCA, double *WR, double *WI, int *ILOZ, int *IHIZ,
              double *Z, int *DESCZ, double *T, int *LDT, double *V, int *LDV,
              double *WORK, int *LWORK, int *INFO) {
  F77_PDLAQR4(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void mangle_pdlaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
             int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK) {
  F77_PDLAQR5(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PDLAQR5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
             int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
             int *LWORK, int *IWORK, int *LIWORK) {
  F77_PDLAQR5(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PDLAQR5_(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
              int *NSHFTS, double *SR, double *SI, double *H, int *DESCH,
              int *ILOZ, int *IHIZ, double *Z, int *DESCZ, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK) {
  F77_PDLAQR5(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void mangle_pdlaqsy(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  F77_PDLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PDLAQSY(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  F77_PDLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PDLAQSY_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX,
              char *EQUED) {
  F77_PDLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void mangle_pdlared1d(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK) {
  F77_PDLARED1D(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PDLARED1D(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK) {
  F77_PDLARED1D(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PDLARED1D_(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
                double *BYALL, double *WORK, int *LWORK) {
  F77_PDLARED1D(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void mangle_pdlared2d(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK) {
  F77_PDLARED2D(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PDLARED2D(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK) {
  F77_PDLARED2D(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PDLARED2D_(int *N, int *IA, int *JA, int *DESC, double *BYROW,
                double *BYALL, double *WORK, int *LWORK) {
  F77_PDLARED2D(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void mangle_pdlarf(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK) {
  F77_PDLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARF(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK) {
  F77_PDLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARF_(char *SIDE, int *M, int *N, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK) {
  F77_PDLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pdlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  F77_PDLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PDLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  F77_PDLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PDLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC,
              double *WORK) {
  F77_PDLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void mangle_pdlarfg(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU) {
  F77_PDLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PDLARFG(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU) {
  F77_PDLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PDLARFG_(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
              int *JX, int *DESCX, int *INCX, double *TAU) {
  F77_PDLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void mangle_pdlarft(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  F77_PDLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARFT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  F77_PDLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARFT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  F77_PDLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pdlarz(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK) {
  F77_PDLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARZ(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK) {
  F77_PDLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PDLARZ_(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK) {
  F77_PDLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pdlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  F77_PDLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PDLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK) {
  F77_PDLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PDLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC,
              double *WORK) {
  F77_PDLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void mangle_pdlarzt(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  F77_PDLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARZT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  F77_PDLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PDLARZT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK) {
  F77_PDLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pdlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PDLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PDLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PDLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PDLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PDLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void mangle_pdlase2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  F77_PDLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASE2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  F77_PDLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASE2_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pdlaset(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  F77_PDLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASET(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA) {
  F77_PDLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PDLASET_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pdlasmsub(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK) {
  F77_PDLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PDLASMSUB(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK) {
  F77_PDLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PDLASMSUB_(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                double *BUF, int *LWORK) {
  F77_PDLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void mangle_pdlasrt(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  F77_PDLASRT(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDLASRT(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  F77_PDLASRT(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDLASRT_(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  F77_PDLASRT(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdlassq(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  F77_PDLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PDLASSQ(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  F77_PDLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PDLASSQ_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ) {
  F77_PDLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void mangle_pdlaswp(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PDLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PDLASWP(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PDLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PDLASWP_(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PDLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void mangle_pdlatrd(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK) {
  F77_PDLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PDLATRD(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK) {
  F77_PDLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PDLATRD_(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
              int *JW, int *DESCW, double *WORK) {
  F77_PDLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void mangle_pdlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK) {
  F77_PDLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PDLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK) {
  F77_PDLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PDLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK) {
  F77_PDLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void mangle_pdlatrz(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK) {
  F77_PDLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PDLATRZ(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK) {
  F77_PDLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PDLATRZ_(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK) {
  F77_PDLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void mangle_pdlauu2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUU2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUU2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pdlauum(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUUM(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PDLAUUM_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA) {
  F77_PDLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pdlawil(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V) {
  F77_PDLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PDLAWIL(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V) {
  F77_PDLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PDLAWIL_(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
              double *H33, double *H43H34, double *V) {
  F77_PDLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void mangle_pdorg2l(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2L(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2L_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorg2r(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2R(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORG2R_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorgl2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGL2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGL2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorglq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGLQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGLQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorgql(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQL(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQL_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorgqr(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQR(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGQR_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorgr2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGR2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGR2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorgrq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGRQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDORGRQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDORGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDORMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDORMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDORMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pdormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDORMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDORMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDORMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pdorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormql(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDORMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pdormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PDORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pdormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDORMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pdormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PDORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO) {
  F77_PDORMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pdpbsv(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPBSV(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO) {
  F77_PDPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPBSV_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO) {
  F77_PDPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pdpbtrf(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPBTRF(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPBTRF_(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pdpbtrs(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PDPBTRS(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PDPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void mangle_pdpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PDPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PDPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
               int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
               int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void mangle_pdpocon(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPOCON(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPOCON_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PDPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_pdpoequ(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  F77_PDPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PDPOEQU(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  F77_PDPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PDPOEQU_(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO) {
  F77_PDPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void mangle_pdporfs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, double *B,
             int *IB, int *JB, int *DESCB, double *X, int *IX, int *JX,
             int *DESCX, double *FERR, double *BERR, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PDPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPORFS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF, double *B,
             int *IB, int *JB, int *DESCB, double *X, int *IX, int *JX,
             int *DESCX, double *FERR, double *BERR, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PDPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PDPORFS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              double *B, int *IB, int *JB, int *DESCB, double *X, int *IX,
              int *JX, int *DESCX, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_pdposv(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOSV(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOSV_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pdposvx(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *RCOND,
             double *FERR, double *BERR, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PDPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *RCOND,
             double *FERR, double *BERR, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PDPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
              int *JA, int *DESCA, double *AF, int *IAF, int *JAF, int *DESCAF,
              char *EQUED, double *SR, double *SC, double *B, int *IB, int *JB,
              int *DESCB, double *X, int *IX, int *JX, int *DESCX,
              double *RCOND, double *FERR, double *BERR, double *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdpotf2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PDPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTF2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PDPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTF2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PDPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pdpotrf(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PDPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRF(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PDPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRF_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PDPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pdpotri(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PDPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRI(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PDPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PDPOTRI_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PDPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pdpotrs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOTRS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDPOTRS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pdptsv(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO) {
  F77_PDPTSV(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPTSV(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO) {
  F77_PDPTSV(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PDPTSV_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDPTSV(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pdpttrf(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRF(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRF_(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pdpttrs(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO) {
  F77_PDPTTRS(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRS(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO) {
  F77_PDPTTRS(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PDPTTRS_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
              double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRS(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pdpttrsv(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PDPTTRSV(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PDPTTRSV_(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
               int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
               double *WORK, int *LWORK, int *INFO) {
  F77_PDPTTRSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void mangle_pdrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO) {
  F77_PDROT(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PDROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO) {
  F77_PDROT(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PDROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
            double *SN, double *WORK, int *LWORK, int *INFO) {
  F77_PDROT(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void mangle_pdrscl(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  F77_PDRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PDRSCL(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  F77_PDRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PDRSCL_(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PDRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void mangle_pdstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
             double *VU, int *IL, int *IU, double *ABSTOL, double *D, double *E,
             int *M, int *NSPLIT, double *W, int *IBLOCK, int *ISPLIT,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDSTEBZ(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEBZ(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
             double *VU, int *IL, int *IU, double *ABSTOL, double *D, double *E,
             int *M, int *NSPLIT, double *W, int *IBLOCK, int *ISPLIT,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDSTEBZ(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEBZ_(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
              double *VU, int *IL, int *IU, double *ABSTOL, double *D,
              double *E, int *M, int *NSPLIT, double *W, int *IBLOCK,
              int *ISPLIT, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  F77_PDSTEBZ(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdstedc(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDSTEDC(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEDC(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PDSTEDC(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSTEDC_(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
              int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PDSTEDC(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PDSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PDSTEIN(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PDSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PDSTEIN_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PDSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pdsyev(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO) {
  F77_PDSYEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PDSYEV(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO) {
  F77_PDSYEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PDSYEV_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *INFO) {
  F77_PDSYEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void mangle_pdsyevd(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDSYEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDSYEVD(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDSYEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PDSYEVD_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDSYEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void mangle_pdsyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  F77_PDSYEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSYEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  F77_PDSYEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDSYEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              int *M, int *NZ, double *W, double *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  F77_PDSYEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdsyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  F77_PDSYEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PDSYEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  F77_PDSYEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PDSYEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
              int *INFO) {
  F77_PDSYEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void mangle_pdsygs2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDSYGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDSYGS2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDSYGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PDSYGS2_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PDSYGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pdsygst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO) {
  F77_PDSYGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PDSYGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO) {
  F77_PDSYGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PDSYGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO) {
  F77_PDSYGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void mangle_pdsygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             double *Z, int *IZ, int *JZ, int *DESCZ, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *IFAIL, int *ICLUSTR, double *GAP,
             int *INFO) {
  F77_PDSYGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
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
  F77_PDSYGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
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
  F77_PDSYGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pdsyngst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO) {
  F77_PDSYNGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PDSYNGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO) {
  F77_PDSYNGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PDSYNGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
               int *DESCA, double *B, int *IB, int *JB, int *DESCB,
               double *SCALE, double *WORK, int *LWORK, int *INFO) {
  F77_PDSYNGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void mangle_pdsyntrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDSYNTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYNTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDSYNTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYNTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO) {
  F77_PDSYNTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pdsytd2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDSYTD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTD2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDSYTD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTD2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDSYTD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pdsytrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDSYTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO) {
  F77_PDSYTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDSYTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pdsyttrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDSYTTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO) {
  F77_PDSYTTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PDSYTTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO) {
  F77_PDSYTTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pdtrcon(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PDTRCON(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PDTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void mangle_pdtrord(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
             int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
             double *WR, double *WI, int *M, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRORD(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRORD(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
             int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
             double *WR, double *WI, int *M, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRORD(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRORD_(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
              int *JT, int *DESCT, double *Q, int *IQ, int *JQ, int *DESCQ,
              double *WR, double *WI, int *M, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRORD(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdtrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
             double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // F77_PDTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
             double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // F77_PDTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, double *X, int *IX, int *JX, int *DESCX, double *FERR,
              double *BERR, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  // F77_PDTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdtrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
             int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WR, double *WI, int *M, double *S, double *SEP,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRSEN(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRSEN(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
             int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WR, double *WI, int *M, double *S, double *SEP,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PDTRSEN(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PDTRSEN_(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
              int *IT, int *JT, int *DESCT, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WR, double *WI, int *M, double *S,
              double *SEP, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  F77_PDTRSEN(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pdtrti2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PDTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTI2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PDTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTI2_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PDTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pdtrtri(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PDTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTRI(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PDTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PDTRTRI_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PDTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pdtrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  F77_PDTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PDTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  F77_PDTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PDTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, int *INFO) {
  F77_PDTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void mangle_pdtzrzf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDTZRZF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PDTZRZF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO) {
  F77_PDTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pdupdate(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO) {
  F77_PDUPDATE(M, N, I, J, JO, JB, JN, IA, JA, A, DESCA, TPIV, IPIV, PANEL, BPANEL,
            DS, BCAST, INFO);
}

void PDUPDATE(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO) {
  F77_PDUPDATE(M, N, I, J, JO, JB, JN, IA, JA, A, DESCA, TPIV, IPIV, PANEL, BPANEL,
            DS, BCAST, INFO);
}

void PDUPDATE_(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
               int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
               int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO) {
  F77_PDUPDATE(M, N, I, J, JO, JB, JN, IA, JA, A, DESCA, TPIV, IPIV, PANEL, BPANEL,
            DS, BCAST, INFO);
}

void mangle_pdzsum1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PDZSUM1(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PDZSUM1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PDZSUM1(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PDZSUM1_(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX) {
  F77_PDZSUM1(N, ASUM, X, IX, JX, DESCX, INCX);
}

void mangle_pilaver(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH) {
  F77_PILAVER(VERS_MAJOR, VERS_MINOR, VERS_PATCH);
}

void PILAVER(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH) {
  F77_PILAVER(VERS_MAJOR, VERS_MINOR, VERS_PATCH);
}

void PILAVER_(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH) {
  F77_PILAVER(VERS_MAJOR, VERS_MINOR, VERS_PATCH);
}

void mangle_pmpcol(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL) {
  F77_PMPCOL(MYPROC, NPROCS, IIL, NEEDIL, NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL,
          LASTCL);
}

void PMPCOL(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL) {
  F77_PMPCOL(MYPROC, NPROCS, IIL, NEEDIL, NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL,
          LASTCL);
}

void PMPCOL_(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
             int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL) {
  F77_PMPCOL(MYPROC, NPROCS, IIL, NEEDIL, NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL,
          LASTCL);
}

void mangle_pmpim2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS) {
  F77_PMPIM2(IL, IU, NPROCS, PMYILS, PMYIUS);
}

void PMPIM2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS) {
  F77_PMPIM2(IL, IU, NPROCS, PMYILS, PMYIUS);
}

void PMPIM2_(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS) {
  F77_PMPIM2(IL, IU, NPROCS, PMYILS, PMYIUS);
}

void mangle_pscsum1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PSCSUM1(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PSCSUM1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PSCSUM1(N, ASUM, X, IX, JX, DESCX, INCX);
}

void PSCSUM1_(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX) {
  F77_PSCSUM1(N, ASUM, X, IX, JX, DESCX, INCX);
}

void mangle_psdbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  F77_PSDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  F77_PSDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_psdbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_psdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_psdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_psdtsv(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  F77_PSDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDTSV(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  F77_PSDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSDTSV_(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_psdttrf(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDTTRF(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSDTTRF_(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_psdttrs(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDTTRS(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PSDTTRS_(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_psdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PSDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
               float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_psgbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  F77_PSGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PSGBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  F77_PSGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PSGBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
             int *LWORK, int *INFO) {
  F77_PSGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_psgbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PSGBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PSGBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void mangle_psgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PSGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PSGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void mangle_psgebal(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO) {
  F77_PSGEBAL(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PSGEBAL(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO) {
  F77_PSGEBAL(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void PSGEBAL_(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
              float *SCALE, int *INFO) {
  F77_PSGEBAL(JOB, N, A, DESCA, ILO, IHI, SCALE, INFO);
}

void mangle_psgebd2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBD2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBD2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_psgebrd(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBRD(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PSGEBRD_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_psgecon(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGECON(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGECON_(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PSGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_psgeequ(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO) {
  F77_PSGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PSGEEQU(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO) {
  F77_PSGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PSGEEQU_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO) {
  F77_PSGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void mangle_psgehd2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHD2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHD2_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgehrd(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHRD(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEHRD_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgelq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgelqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGELQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgels(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  F77_PSGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PSGELS(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO) {
  F77_PSGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PSGELS_(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
             int *LWORK, int *INFO) {
  F77_PSGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_psgeql2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQL2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQL2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgeqlf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQLF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQLF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgeqpf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PSGEQPF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void PSGEQPF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, INFO);
}

void mangle_psgeqr2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQR2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQR2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgeqrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGEQRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgerfs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             float *B, int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGERFS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
             float *B, int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSGERFS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, int *IPIV,
              float *B, int *IB, int *JB, int *DESCB, float *X, int *IX,
              int *JX, int *DESCX, float *FERR, float *BERR, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_psgerq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgerqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSGERQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psgesv(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGESV(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGESV_(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
             int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_psgesvd(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
             int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PSGESVD(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
             int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void PSGESVD_(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *S, float *U, int *IU, int *JU,
              int *DESCU, float *VT, int *IVT, int *JVT, int *DESCVT,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, INFO);
}

void mangle_psgesvx(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
             int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGESVX(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
             int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
             float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGESVX_(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
              int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, char *EQUED, float *R, float *C, float *B, int *IB,
              int *JB, int *DESCB, float *X, int *IX, int *JX, int *DESCX,
              float *RCOND, float *FERR, float *BERR, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_psgetf2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PSGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETF2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PSGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETF2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO) {
  F77_PSGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_psgetrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PSGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO) {
  F77_PSGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PSGETRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO) {
  F77_PSGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_psgetri(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGETRI(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSGETRI_(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_psgetrs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PSGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGETRS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PSGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PSGETRS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PSGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_psggqrf(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGQRF(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGQRF_(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_psggrqf(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGRQF(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PSGGRQF_(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pshseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSHSEQR(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSHSEQR(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
              int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSHSEQR(JOB, COMPZ, N, ILO, IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void mangle_pslabad(int *ICTXT, float *SMALL, float *LARGE) {
  F77_PSLABAD(ICTXT, SMALL, LARGE);
}

void PSLABAD(int *ICTXT, float *SMALL, float *LARGE) {
  F77_PSLABAD(ICTXT, SMALL, LARGE);
}

void PSLABAD_(int *ICTXT, float *SMALL, float *LARGE) {
  F77_PSLABAD(ICTXT, SMALL, LARGE);
}

void mangle_pslabrd(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
             int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  F77_PSLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PSLABRD(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
             int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  F77_PSLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PSLABRD_(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAUQ, float *TAUP, float *X, int *IX,
              int *JX, int *DESCX, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK) {
  F77_PSLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void mangle_pslacon(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE) {
  F77_PSLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PSLACON(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE) {
  F77_PSLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void PSLACON_(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
              int *JX, int *DESCX, int *ISGN, float *EST, int *KASE) {
  F77_PSLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, ISGN, EST, KASE);
}

void mangle_pslaconsb(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK) {
  F77_PSLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PSLACONSB(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK) {
  F77_PSLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PSLACONSB_(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
                float *H33, float *H43H34, float *BUF, int *LWORK) {
  F77_PSLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void mangle_pslacp2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  F77_PSLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACP2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  F77_PSLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACP2_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB) {
  F77_PSLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pslacp3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV) {
  F77_PSLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PSLACP3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV) {
  F77_PSLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PSLACP3_(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
              int *JJ, int *REV) {
  F77_PSLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void mangle_pslacpy(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  F77_PSLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACPY(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB) {
  F77_PSLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLACPY_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB) {
  F77_PSLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pslaed0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO) {
  F77_PSLAED0(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PSLAED0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO) {
  F77_PSLAED0(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void PSLAED0_(int *N, float *D, float *E, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *IWORK, int *INFO) {
  F77_PSLAED0(N, D, E, Q, IQ, JQ, DESCQ, WORK, IWORK, INFO);
}

void mangle_pslaed1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO) {
  F77_PSLAED1(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PSLAED1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO) {
  F77_PSLAED1(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void PSLAED1_(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO) {
  F77_PSLAED1(N, N1, D, ID, Q, IQ, JQ, DESCQ, RHO, WORK, IWORK, INFO);
}

void mangle_pslaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
             int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
             float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  F77_PSLAED2(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PSLAED2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
             int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
             float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
             int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
             int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
             int *IB2) {
  F77_PSLAED2(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void PSLAED2_(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
              int *DCOL, float *Q, int *LDQ, float *RHO, float *Z, float *W,
              float *DLAMDA, float *Q2, int *LDQ2, float *QBUF, int *CTOT,
              int *PSM, int *NPCOL, int *INDX, int *INDXC, int *INDXP,
              int *INDCOL, int *COLTYP, int *NN, int *NN1, int *NN2, int *IB1,
              int *IB2) {
  F77_PSLAED2(ICTXT, K, N, N1, NB, D, DROW, DCOL, Q, LDQ, RHO, Z, W, DLAMDA, Q2,
           LDQ2, QBUF, CTOT, PSM, NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN,
           NN1, NN2, IB1, IB2);
}

void mangle_pslaed3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
             int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z, float *U,
             int *LDU, float *BUF, int *INDX, int *INDCOL, int *INDROW,
             int *INDXR, int *INDXC, int *CTOT, int *NPCOL, int *INFO) {
  F77_PSLAED3(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PSLAED3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
             int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z, float *U,
             int *LDU, float *BUF, int *INDX, int *INDCOL, int *INDROW,
             int *INDXR, int *INDXC, int *CTOT, int *NPCOL, int *INFO) {
  F77_PSLAED3(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void PSLAED3_(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
              int *DCOL, float *RHO, float *DLAMDA, float *W, float *Z,
              float *U, int *LDU, float *BUF, int *INDX, int *INDCOL,
              int *INDROW, int *INDXR, int *INDXC, int *CTOT, int *NPCOL,
              int *INFO) {
  F77_PSLAED3(ICTXT, K, N, NB, D, DROW, DCOL, RHO, DLAMDA, W, Z, U, LDU, BUF, INDX,
           INDCOL, INDROW, INDXR, INDXC, CTOT, NPCOL, INFO);
}

void mangle_pslaedz(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK) {
  F77_PSLAEDZ(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PSLAEDZ(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK) {
  F77_PSLAEDZ(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void PSLAEDZ_(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, float *Z, float *WORK) {
  F77_PSLAEDZ(N, N1, ID, Q, IQ, JQ, LDQ, DESCQ, Z, WORK);
}

void mangle_pslaevswp(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK) {
  F77_PSLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PSLAEVSWP(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK) {
  F77_PSLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void PSLAEVSWP_(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK) {
  F77_PSLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, WORK, LWORK);
}

void mangle_pslahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  F77_PSLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PSLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  F77_PSLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void PSLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
              int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
              int *DESCZ, float *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO) {
  F77_PSLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ,
           WORK, LWORK, IWORK, ILWORK, INFO);
}

void mangle_pslahrd(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  F77_PSLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PSLAHRD(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK) {
  F77_PSLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PSLAHRD_(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK) {
  F77_PSLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void mangle_pslamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PSLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PSLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PSLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  F77_PSLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pslamve(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK) {
  F77_PSLAMVE(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PSLAMVE(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK) {
  F77_PSLAMVE(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void PSLAMVE_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB,
              float *DWORK) {
  F77_PSLAMVE(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB, DWORK);
}

void mangle_pslapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  F77_PSLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PSLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK) {
  F77_PSLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PSLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
              int *DESCIP, int *IWORK) {
  F77_PSLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void mangle_pslapv2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PSLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PSLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PSLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PSLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PSLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void mangle_pslaqge(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED) {
  F77_PSLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PSLAQGE(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED) {
  F77_PSLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PSLAQGE_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX,
              char *EQUED) {
  F77_PSLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void mangle_pslaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
             int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
             float *V, int *LDV, float *WR, float *WI, float *WORK,
             int *LWORK) {
  F77_PSLAQR2(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PSLAQR2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
             float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
             int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
             float *V, int *LDV, float *WR, float *WI, float *WORK,
             int *LWORK) {
  F77_PSLAQR2(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void PSLAQR2_(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
              float *A, int *DESCA, int *ILOZ, int *IHIZ, float *Z, int *DESCZ,
              int *NS, int *ND, float *SR, float *SI, float *T, int *LDT,
              float *V, int *LDV, float *WR, float *WI, float *WORK,
              int *LWORK) {
  F77_PSLAQR2(WANTT, WANTZ, N, KTOP, KBOT, NW, A, DESCA, ILOZ, IHIZ, Z, DESCZ, NS,
           ND, SR, SI, T, LDT, V, LDV, WR, WI, WORK, LWORK);
}

void mangle_pslaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
             int *LWORK, int *INFO) {
  F77_PSLAQR4(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PSLAQR4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
             int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
             int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
             int *LWORK, int *INFO) {
  F77_PSLAQR4(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void PSLAQR4_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
              int *DESCA, float *WR, float *WI, int *ILOZ, int *IHIZ, float *Z,
              int *DESCZ, float *T, int *LDT, float *V, int *LDV, float *WORK,
              int *LWORK, int *INFO) {
  F77_PSLAQR4(WANTT, WANTZ, N, ILO, IHI, A, DESCA, WR, WI, ILOZ, IHIZ, Z, DESCZ, T,
           LDT, V, LDV, WORK, LWORK, INFO);
}

void mangle_pslaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, float *SR, float *SI, float *H, int *DESCH, int *ILOZ,
             int *IHIZ, float *Z, int *DESCZ, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK) {
  F77_PSLAQR5(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PSLAQR5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
             int *NSHFTS, float *SR, float *SI, float *H, int *DESCH, int *ILOZ,
             int *IHIZ, float *Z, int *DESCZ, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK) {
  F77_PSLAQR5(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void PSLAQR5_(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
              int *NSHFTS, float *SR, float *SI, float *H, int *DESCH,
              int *ILOZ, int *IHIZ, float *Z, int *DESCZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK) {
  F77_PSLAQR5(WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, DESCH, ILOZ,
           IHIZ, Z, DESCZ, WORK, LWORK, IWORK, LIWORK);
}

void mangle_pslaqsy(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  F77_PSLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PSLAQSY(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  F77_PSLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PSLAQSY_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED) {
  F77_PSLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void mangle_pslared1d(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK) {
  F77_PSLARED1D(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PSLARED1D(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK) {
  F77_PSLARED1D(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void PSLARED1D_(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
                float *WORK, int *LWORK) {
  F77_PSLARED1D(N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void mangle_pslared2d(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK) {
  F77_PSLARED2D(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PSLARED2D(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK) {
  F77_PSLARED2D(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void PSLARED2D_(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
                float *WORK, int *LWORK) {
  F77_PSLARED2D(N, IA, JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void mangle_pslarf(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK) {
  F77_PSLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARF(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK) {
  F77_PSLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARF_(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
             int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
             float *WORK) {
  F77_PSLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pslarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  F77_PSLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PSLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  F77_PSLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PSLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
              float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  F77_PSLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void mangle_pslarfg(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU) {
  F77_PSLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PSLARFG(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU) {
  F77_PSLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PSLARFG_(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
              int *JX, int *DESCX, int *INCX, float *TAU) {
  F77_PSLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void mangle_pslarft(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  F77_PSLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARFT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  F77_PSLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARFT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  F77_PSLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pslarz(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK) {
  F77_PSLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARZ(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK) {
  F77_PSLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PSLARZ_(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
             int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK) {
  F77_PSLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pslarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  F77_PSLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PSLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  F77_PSLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PSLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
              float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK) {
  F77_PSLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void mangle_pslarzt(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  F77_PSLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARZT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  F77_PSLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PSLARZT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK) {
  F77_PSLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pslascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PSLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PSLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PSLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PSLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PSLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void mangle_pslase2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  F77_PSLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASE2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  F77_PSLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASE2_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA) {
  F77_PSLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pslaset(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  F77_PSLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASET(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA) {
  F77_PSLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PSLASET_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA) {
  F77_PSLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pslasmsub(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK) {
  F77_PSLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PSLASMSUB(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK) {
  F77_PSLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PSLASMSUB_(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                float *BUF, int *LWORK) {
  F77_PSLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void mangle_pslasrt(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSLASRT(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSLASRT(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSLASRT(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSLASRT_(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  F77_PSLASRT(ID, N, D, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pslassq(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  F77_PSLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PSLASSQ(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ) {
  F77_PSLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PSLASSQ_(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ) {
  F77_PSLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void mangle_pslaswp(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PSLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PSLASWP(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PSLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PSLASWP_(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PSLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void mangle_pslatrd(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK) {
  F77_PSLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PSLATRD(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK) {
  F77_PSLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PSLATRD_(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
              int *JW, int *DESCW, float *WORK) {
  F77_PSLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void mangle_pslatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK) {
  F77_PSLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PSLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK) {
  F77_PSLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PSLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, float *WORK) {
  F77_PSLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void mangle_pslatrz(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK) {
  F77_PSLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PSLATRZ(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK) {
  F77_PSLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PSLATRZ_(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK) {
  F77_PSLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void mangle_pslauu2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  F77_PSLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUU2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  F77_PSLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUU2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  F77_PSLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pslauum(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  F77_PSLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUUM(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  F77_PSLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PSLAUUM_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA) {
  F77_PSLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pslawil(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V) {
  F77_PSLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PSLAWIL(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V) {
  F77_PSLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PSLAWIL_(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
              float *H33, float *H43H34, float *V) {
  F77_PSLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void mangle_psorg2l(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2L(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2L_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorg2r(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2R(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORG2R_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorgl2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGL2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGL2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorglq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGLQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGLQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorgql(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQL(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQL_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorgqr(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQR(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGQR_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorgr2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGR2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGR2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorgrq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGRQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSORGRQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSORGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_psorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSORMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_psormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSORMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_psorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormql(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_psormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PSORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_psormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_psormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PSORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO) {
  F77_PSORMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pspbsv(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  F77_PSPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPBSV(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO) {
  F77_PSPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPBSV_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pspbtrf(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPBTRF(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPBTRF_(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pspbtrs(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PSPBTRS(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PSPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void mangle_pspbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PSPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PSPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
               int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
               int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void mangle_pspocon(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPOCON(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPOCON_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PSPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_pspoequ(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  F77_PSPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PSPOEQU(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO) {
  F77_PSPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PSPOEQU_(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO) {
  F77_PSPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void mangle_psporfs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
             int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPORFS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
             int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
             int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void PSPORFS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF, float *B,
              int *IB, int *JB, int *DESCB, float *X, int *IX, int *JX,
              int *DESCX, float *FERR, float *BERR, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PSPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK,
           INFO);
}

void mangle_psposv(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOSV(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOSV_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_psposvx(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
             float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PSPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
             int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
             float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void PSPOSVX_(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
              int *JA, int *DESCA, float *AF, int *IAF, int *JAF, int *DESCAF,
              char *EQUED, float *SR, float *SC, float *B, int *IB, int *JB,
              int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *RCOND,
              float *FERR, float *BERR, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PSPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, IWORK, LIWORK, INFO);
}

void mangle_pspotf2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PSPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTF2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PSPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTF2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PSPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pspotrf(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PSPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRF(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PSPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRF_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PSPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pspotri(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PSPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRI(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PSPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PSPOTRI_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PSPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pspotrs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOTRS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSPOTRS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_psptsv(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO) {
  F77_PSPTSV(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPTSV(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO) {
  F77_PSPTSV(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PSPTSV_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSPTSV(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pspttrf(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRF(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRF_(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO) {
  F77_PSPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pspttrs(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO) {
  F77_PSPTTRS(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRS(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO) {
  F77_PSPTTRS(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void PSPTTRS_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
              float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
              int *LWORK, int *INFO) {
  F77_PSPTTRS(N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pspttrsv(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSPTTRSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PSPTTRSV(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSPTTRSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void PSPTTRSV_(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
               int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
               float *WORK, int *LWORK, int *INFO) {
  F77_PSPTTRSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
            INFO);
}

void mangle_psrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO) {
  F77_PSROT(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PSROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO) {
  F77_PSROT(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void PSROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
            float *SN, float *WORK, int *LWORK, int *INFO) {
  F77_PSROT(N, X, IX, JX, DESCX, INCX, Y, IY, JY, DESCY, INCY, CS, SN, WORK, LWORK,
         INFO);
}

void mangle_psrscl(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  F77_PSRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PSRSCL(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX) {
  F77_PSRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PSRSCL_(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PSRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void mangle_psstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
             int *IL, int *IU, float *ABSTOL, float *D, float *E, int *M,
             int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT, float *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSTEBZ(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEBZ(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
             int *IL, int *IU, float *ABSTOL, float *D, float *E, int *M,
             int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT, float *WORK,
             int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSTEBZ(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEBZ_(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL,
              float *VU, int *IL, int *IU, float *ABSTOL, float *D, float *E,
              int *M, int *NSPLIT, float *W, int *IBLOCK, int *ISPLIT,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSTEBZ(ICTXT, RANGE, ORDER, N, VL, VU, IL, IU, ABSTOL, D, E, M, NSPLIT, W,
           IBLOCK, ISPLIT, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_psstedc(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSSTEDC(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEDC(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSSTEDC(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSTEDC_(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
              int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PSSTEDC(COMPZ, N, D, E, Q, IQ, JQ, DESCQ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_psstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
             int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSTEIN(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
             int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSTEIN_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *IFAIL,
              int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pssyev(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO) {
  F77_PSSYEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PSSYEV(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO) {
  F77_PSSYEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void PSSYEV_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSSYEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          INFO);
}

void mangle_pssyevd(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSYEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSSYEVD(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSYEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void PSSYEVD_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSYEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, INFO);
}

void mangle_pssyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSYEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSYEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSYEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSSYEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              int *M, int *NZ, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSSYEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pssyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
             int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSYEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PSSYEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
             float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
             int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSYEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void PSSYEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
              int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSYEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, IWORK, LIWORK, IFAIL,
           ICLUSTR, GAP, INFO);
}

void mangle_pssygs2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSSYGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSSYGS2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSSYGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PSSYGS2_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PSSYGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pssygst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO) {
  F77_PSSYGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PSSYGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO) {
  F77_PSSYGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PSSYGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              int *INFO) {
  F77_PSSYGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void mangle_pssygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *VL, float *VU, int *IL, int *IU, float *ABSTOL,
             int *M, int *NZ, float *W, float *ORFAC, float *Z, int *IZ,
             int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSYGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSYGVX(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *VL, float *VU, int *IL, int *IU, float *ABSTOL,
             int *M, int *NZ, float *W, float *ORFAC, float *Z, int *IZ,
             int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSYGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PSSYGVX_(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *B, int *IB,
              int *JB, int *DESCB, float *VL, float *VU, int *IL, int *IU,
              float *ABSTOL, int *M, int *NZ, float *W, float *ORFAC, float *Z,
              int *IZ, int *JZ, int *DESCZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *IFAIL, int *ICLUSTR, float *GAP, int *INFO) {
  F77_PSSYGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pssyngst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSSYNGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PSSYNGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO) {
  F77_PSSYNGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PSSYNGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
               int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
               float *WORK, int *LWORK, int *INFO) {
  F77_PSSYNGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void mangle_pssyntrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSSYNTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYNTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSSYNTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYNTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO) {
  F77_PSSYNTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pssytd2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSSYTD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTD2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSSYTD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTD2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSSYTD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pssytrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSSYTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO) {
  F77_PSSYTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSSYTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pssyttrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSSYTTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO) {
  F77_PSSYTTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PSSYTTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO) {
  F77_PSSYTTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pstrcon(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PSTRCON(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PSTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void PSTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PSTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, IWORK,
           LIWORK, INFO);
}

void mangle_pstrord(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
             int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSTRORD(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRORD(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
             int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PSTRORD(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRORD_(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
              int *JT, int *DESCT, float *Q, int *IQ, int *JQ, int *DESCQ,
              float *WR, float *WI, int *M, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO) {
  F77_PSTRORD(COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR, WI,
           M, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pstrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
             float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // F77_PSTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
             float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO) {
  // F77_PSTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, float *X, int *IX, int *JX, int *DESCX, float *FERR,
              float *BERR, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO) {
  // F77_PSTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pstrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
             int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSTRSEN(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRSEN(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
             int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSTRSEN(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PSTRSEN_(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
              int *IT, int *JT, int *DESCT, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WR, float *WI, int *M, float *S, float *SEP,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PSTRSEN(JOB, COMPQ, SELECT, PARA, N, T, IT, JT, DESCT, Q, IQ, JQ, DESCQ, WR,
           WI, M, S, SEP, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pstrti2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PSTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTI2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PSTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTI2_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PSTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pstrtri(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PSTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTRI(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PSTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PSTRTRI_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PSTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pstrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  F77_PSTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PSTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO) {
  F77_PSTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PSTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, int *INFO) {
  F77_PSTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void mangle_pstzrzf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSTZRZF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO) {
  F77_PSTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PSTZRZF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO) {
  F77_PSTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzdbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZDBSV(N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pzdbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDBTRF(N, BWL, BWU, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pzdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_pzdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               dcomplex *A, int *JA, int *DESCA, dcomplex *B, int *IB,
               int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
               int *INFO) {
  F77_PZDBTRSV(UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_pzdrscl(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PZDRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PZDRSCL(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX) {
  F77_PZDRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void PZDRSCL_(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX) {
  F77_PZDRSCL(N, SA, SX, IX, JX, DESCX, INCX);
}

void mangle_pzdtsv(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDTSV(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZDTSV_(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZDTSV(N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pzdttrf(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDTTRF(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZDTTRF_(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
              int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZDTTRF(N, DL, D, DU, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pzdttrs(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
             dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDTTRS(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
             dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void PZDTTRS_(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
              dcomplex *DU, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZDTTRS(TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
           LWORK, INFO);
}

void mangle_pzdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
              dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PZDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
              dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PZDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void PZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
               dcomplex *D, dcomplex *DU, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK,
               int *LWORK, int *INFO) {
  F77_PZDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, JA, DESCA, B, IB, DESCB, AF, LAF,
            WORK, LWORK, INFO);
}

void mangle_pzgbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PZGBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void PZGBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGBSV(N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_pzgbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PZGBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void PZGBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZGBTRF(N, BWL, BWU, A, JA, DESCA, IPIV, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pzgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PZGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void PZGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGBTRS(TRANS, N, BWL, BWU, NRHS, A, JA, DESCA, IPIV, B, IB, DESCB, AF, LAF,
           WORK, LWORK, INFO);
}

void mangle_pzgebd2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBD2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBD2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEBD2(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_pzgebrd(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBRD(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void PZGEBRD_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEBRD(M, N, A, IA, JA, DESCA, D, E, TAUQ, TAUP, WORK, LWORK, INFO);
}

void mangle_pzgecon(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGECON(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGECON_(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGECON(NORM, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pzgeequ(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  F77_PZGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PZGEEQU(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO) {
  F77_PZGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void PZGEEQU_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO) {
  F77_PZGEEQU(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, INFO);
}

void mangle_pzgehd2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHD2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHD2_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZGEHD2(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgehrd(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHRD(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEHRD_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZGEHRD(N, ILO, IHI, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgelq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgelqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGELQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgels(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PZGELS(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void PZGELS_(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGELS(TRANS, M, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, WORK, LWORK,
          INFO);
}

void mangle_pzgeql2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQL2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQL2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQL2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgeqlf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQLF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQLF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQLF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgeqpf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGEQPF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGEQPF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGEQPF(M, N, A, IA, JA, DESCA, IPIV, TAU, WORK, LWORK, RWORK, LRWORK, INFO);
}

void mangle_pzgeqr2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQR2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQR2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQR2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgeqrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGEQRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGEQRF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgerfs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *INFO) {
  F77_PZGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGERFS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *INFO) {
  F77_PZGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZGERFS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
              int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *FERR, double *BERR,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *INFO) {
  F77_PZGERFS(TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV, B, IB,
           JB, DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pzgerq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGERQ2(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgerqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZGERQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGERQF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzgesv(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGESV(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGESV_(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZGESV(N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_pzgesvd(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
             int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
             dcomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  F77_PZGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PZGESVD(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
             int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
             dcomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  F77_PZGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void PZGESVD_(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *S, dcomplex *U, int *IU, int *JU,
              int *DESCU, dcomplex *VT, int *IVT, int *JVT, int *DESCVT,
              dcomplex *WORK, int *LWORK, float *RWORK, int *INFO) {
  F77_PZGESVD(JOBU, JOBVT, M, N, A, IA, JA, DESCA, S, U, IU, JU, DESCU, VT, IVT,
           JVT, DESCVT, WORK, LWORK, RWORK, INFO);
}

void mangle_pzgesvx(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZGESVX(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             int *IPIV, char *EQUED, double *R, double *C, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
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
  F77_PZGESVX(FACT, TRANS, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, IPIV,
           EQUED, R, C, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR,
           WORK, LWORK, RWORK, LRWORK, INFO);
}

void mangle_pzgetf2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PZGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETF2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PZGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETF2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  F77_PZGETF2(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pzgetrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PZGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO) {
  F77_PZGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void PZGETRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO) {
  F77_PZGETRF(M, N, A, IA, JA, DESCA, IPIV, INFO);
}

void mangle_pzgetri(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PZGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PZGETRI(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PZGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void PZGETRI_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PZGETRI(N, A, IA, JA, DESCA, IPIV, WORK, LWORK, IWORK, LIWORK, INFO);
}

void mangle_pzgetrs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PZGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGETRS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO) {
  F77_PZGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void PZGETRS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PZGETRS(TRANS, N, NRHS, A, IA, JA, DESCA, IPIV, B, IB, JB, DESCB, INFO);
}

void mangle_pzggqrf(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGQRF(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGQRF_(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGGQRF(N, M, P, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pzggrqf(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGRQF(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void PZGGRQF_(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZGGRQF(M, P, N, A, IA, JA, DESCA, TAUA, B, IB, JB, DESCB, TAUB, WORK, LWORK,
           INFO);
}

void mangle_pzheev(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
            int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
            dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
            int *INFO) {
  F77_PZHEEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PZHEEV(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
            int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
            dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
            int *INFO) {
  F77_PZHEEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void PZHEEV_(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, dcomplex *RWORK, int *LRWORK,
             int *INFO) {
  F77_PZHEEV(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
          RWORK, LRWORK, INFO);
}

void mangle_pzheevd(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PZHEEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVD(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
             dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK, int *IWORK,
             int *LIWORK, int *INFO) {
  F77_PZHEEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVD_(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *W, dcomplex *Z, int *IZ, int *JZ, int *DESCZ,
              dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
              int *IWORK, int *LIWORK, int *INFO) {
  F77_PZHEEVD(JOBZ, UPLO, N, A, IA, JA, DESCA, W, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void mangle_pzheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PZHEEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVR(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK, int *LRWORK,
             int *IWORK, int *LIWORK, int *INFO) {
  F77_PZHEEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void PZHEEVR_(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              int *M, int *NZ, double *W, dcomplex *Z, int *IZ, int *JZ,
              int *DESCZ, dcomplex *WORK, int *LWORK, double *RWORK,
              int *LRWORK, int *IWORK, int *LIWORK, int *INFO) {
  F77_PZHEEVR(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, M, NZ, W, Z,
           IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK, LIWORK, INFO);
}

void mangle_pzheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZHEEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZHEEVX(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZHEEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZHEEVX_(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *VL, double *VU, int *IL, int *IU,
              double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
              dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZHEEVX(JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, VL, VU, IL, IU, ABSTOL, M,
           NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK, RWORK, LRWORK, IWORK,
           LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pzhegs2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZHEGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZHEGS2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZHEGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZHEGS2_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PZHEGS2(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pzhegst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO) {
  F77_PZHEGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PZHEGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO) {
  F77_PZHEGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void PZHEGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO) {
  F77_PZHEGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, INFO);
}

void mangle_pzhegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, double *VL, double *VU, int *IL, int *IU,
             double *ABSTOL, int *M, int *NZ, double *W, double *ORFAC,
             dcomplex *Z, int *IZ, int *JZ, int *DESCZ, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZHEGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
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
  F77_PZHEGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
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
  F77_PZHEGVX(IBTYPE, JOBZ, RANGE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, VL,
           VU, IL, IU, ABSTOL, M, NZ, W, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           RWORK, LRWORK, IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pzhengst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZHENGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PZHENGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZHENGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void PZHENGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
               int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
               double *SCALE, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZHENGST(IBTYPE, UPLO, N, A, IA, JA, DESCA, B, IB, JB, DESCB, SCALE, WORK,
            LWORK, INFO);
}

void mangle_pzhentrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO) {
  F77_PZHENTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PZHENTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO) {
  F77_PZHENTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void PZHENTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               dcomplex *RWORK, int *LRWORK, int *INFO) {
  F77_PZHENTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, RWORK, LRWORK,
            INFO);
}

void mangle_pzhetd2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZHETD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETD2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZHETD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETD2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZHETD2(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pzhetrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZHETRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO) {
  F77_PZHETRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZHETRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pzhettrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZHETTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZHETTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void PZHETTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               int *INFO) {
  F77_PZHETTRD(UPLO, N, A, IA, JA, DESCA, D, E, TAU, WORK, LWORK, INFO);
}

void mangle_pzlabrd(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP, dcomplex *X,
             int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  F77_PZLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PZLABRD(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP, dcomplex *X,
             int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  F77_PZLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void PZLABRD_(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *X, int *IX, int *JX, int *DESCX, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK) {
  F77_PZLABRD(M, N, NB, A, IA, JA, DESCA, D, E, TAUQ, TAUP, X, IX, JX, DESCX, Y,
           IY, JY, DESCY, WORK);
}

void mangle_pzlacgv(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  F77_PZLACGV(N, X, IX, JX, DESCX, INCX);
}

void PZLACGV(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  F77_PZLACGV(N, X, IX, JX, DESCX, INCX);
}

void PZLACGV_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX) {
  F77_PZLACGV(N, X, IX, JX, DESCX, INCX);
}

void mangle_pzlacon(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE) {
  F77_PZLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PZLACON(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE) {
  F77_PZLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void PZLACON_(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *EST, int *KASE) {
  F77_PZLACON(N, V, IV, JV, DESCV, X, IX, JX, DESCX, EST, KASE);
}

void mangle_pzlaconsb(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK) {
  F77_PZLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PZLACONSB(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK) {
  F77_PZLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void PZLACONSB_(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
                dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK) {
  F77_PZLACONSB(A, DESCA, I, L, M, H44, H33, H43H34, BUF, LWORK);
}

void mangle_pzlacp2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PZLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACP2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PZLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACP2_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PZLACP2(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pzlacp3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  F77_PZLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PZLACP3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV) {
  F77_PZLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void PZLACP3_(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
              int *II, int *JJ, int *REV) {
  F77_PZLACP3(M, I, A, DESCA, B, LDB, II, JJ, REV);
}

void mangle_pzlacpy(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PZLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACPY(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PZLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLACPY_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB) {
  F77_PZLACPY(UPLO, M, N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pzlaevswp(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK) {
  F77_PZLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PZLAEVSWP(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK) {
  F77_PZLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void PZLAEVSWP_(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK) {
  F77_PZLAEVSWP(N, ZIN, LDZI, Z, IZ, JZ, DESCZ, NVS, KEY, RWORK, LRWORK);
}

void mangle_pzlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
             int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
             int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  F77_PZLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PZLAHQR(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
             int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
             int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
             int *INFO) {
  F77_PZLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void PZLAHQR_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
              int *DESCA, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *DESCZ, dcomplex *WORK, int *LWORK, int *IWORK, int *ILWORK,
              int *INFO) {
  F77_PZLAHQR(WANTT, WANTZ, N, ILO, IHI, A, DESCA, W, ILOZ, IHIZ, Z, DESCZ, WORK,
           LWORK, IWORK, ILWORK, INFO);
}

void mangle_pzlahrd(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  F77_PZLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PZLAHRD(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK) {
  F77_PZLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void PZLAHRD_(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK) {
  F77_PZLAHRD(N, K, NB, A, IA, JA, DESCA, TAU, T, Y, IY, JY, DESCY, WORK);
}

void mangle_pzlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PZLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB) {
  F77_PZLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void PZLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB) {
  F77_PZLAMR1D(N, A, IA, JA, DESCA, B, IB, JB, DESCB);
}

void mangle_pzlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  F77_PZLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PZLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK) {
  F77_PZLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void PZLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK) {
  F77_PZLAPIV(DIREC, ROWCOL, PIVROC, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP,
           IWORK);
}

void mangle_pzlapv2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PZLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PZLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PZLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void PZLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP) {
  F77_PZLAPV2(DIREC, ROWCOL, M, N, A, IA, JA, DESCA, IPIV, IP, JP, DESCIP);
}

void mangle_pzlaqge(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  F77_PZLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PZLAQGE(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED) {
  F77_PZLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void PZLAQGE_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED) {
  F77_PZLAQGE(M, N, A, IA, JA, DESCA, R, C, ROWCND, COLCND, AMAX, EQUED);
}

void mangle_pzlaqsy(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  F77_PZLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PZLAQSY(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED) {
  F77_PZLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void PZLAQSY_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX,
              char *EQUED) {
  F77_PZLAQSY(UPLO, N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, EQUED);
}

void mangle_pzlarf(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  F77_PZLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARF(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  F77_PZLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARF_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARF(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pzlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  F77_PZLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PZLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  F77_PZLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void PZLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, dcomplex *V, int *IV, int *JV, int *DESCV,
              dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
              dcomplex *WORK) {
  F77_PZLARFB(SIDE, TRANS, DIRECT, STOREV, M, N, K, V, IV, JV, DESCV, T, C, IC, JC,
           DESCC, WORK);
}

void mangle_pzlarfc(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARFC(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARFC(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARFC(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARFC_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARFC(SIDE, M, N, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pzlarfg(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU) {
  F77_PZLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PZLARFG(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU) {
  F77_PZLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void PZLARFG_(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, dcomplex *TAU) {
  F77_PZLARFG(N, ALPHA, IAX, JAX, X, IX, JX, DESCX, INCX, TAU);
}

void mangle_pzlarft(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  F77_PZLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARFT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  F77_PZLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARFT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  F77_PZLARFT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pzlarz(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  F77_PZLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZ(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK) {
  F77_PZLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZ_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARZ(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pzlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  F77_PZLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PZLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
             dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
             dcomplex *WORK) {
  F77_PZLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void PZLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, dcomplex *V, int *IV, int *JV, int *DESCV,
              dcomplex *T, dcomplex *C, int *IC, int *JC, int *DESCC,
              dcomplex *WORK) {
  F77_PZLARZB(SIDE, TRANS, DIRECT, STOREV, M, N, K, L, V, IV, JV, DESCV, T, C, IC,
           JC, DESCC, WORK);
}

void mangle_pzlarzc(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARZC(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZC(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARZC(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void PZLARZC_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK) {
  F77_PZLARZC(SIDE, M, N, L, V, IV, JV, DESCV, INCV, TAU, C, IC, JC, DESCC, WORK);
}

void mangle_pzlarzt(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  F77_PZLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARZT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  F77_PZLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void PZLARZT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK) {
  F77_PZLARZT(DIRECT, STOREV, N, K, V, IV, JV, DESCV, TAU, T, WORK);
}

void mangle_pzlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PZLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PZLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PZLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void PZLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO) {
  F77_PZLASCL(TYPE, CFROM, CTO, M, N, A, IA, JA, DESCA, INFO);
}

void mangle_pzlase2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASE2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASE2_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLASE2(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pzlaset(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASET(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void PZLASET_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLASET(UPLO, M, N, ALPHA, BETA, A, IA, JA, DESCA);
}

void mangle_pzlasmsub(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK) {
  F77_PZLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PZLASMSUB(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK) {
  F77_PZLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void PZLASMSUB_(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                dcomplex *BUF, int *LWORK) {
  F77_PZLASMSUB(A, DESCA, I, L, K, SMLNUM, BUF, LWORK);
}

void mangle_pzlassq(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  F77_PZLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PZLASSQ(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ) {
  F77_PZLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void PZLASSQ_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ) {
  F77_PZLASSQ(N, X, IX, JX, DESCX, INCX, SCALE, SUMSQ);
}

void mangle_pzlaswp(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PZLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PZLASWP(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PZLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void PZLASWP_(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV) {
  F77_PZLASWP(DIREC, ROWCOL, N, A, IA, JA, DESCA, K1, K2, IPIV);
}

void mangle_pzlatrd(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK) {
  F77_PZLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PZLATRD(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK) {
  F77_PZLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void PZLATRD_(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
              int *IW, int *JW, int *DESCW, dcomplex *WORK) {
  F77_PZLATRD(UPLO, N, NB, A, IA, JA, DESCA, D, E, TAU, W, IW, JW, DESCW, WORK);
}

void mangle_pzlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK) {
  F77_PZLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PZLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK) {
  F77_PZLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void PZLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK) {
  F77_PZLATRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
           SCALE, CNORM, WORK);
}

void mangle_pzlatrz(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK) {
  F77_PZLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PZLATRZ(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK) {
  F77_PZLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void PZLATRZ_(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK) {
  F77_PZLATRZ(M, N, L, A, IA, JA, DESCA, TAU, WORK);
}

void mangle_pzlattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO) {
  F77_PZLATTRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PZLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO) {
  F77_PZLATTRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void PZLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
               int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO) {
  F77_PZLATTRS(UPLO, TRANS, DIAG, NORMIN, N, A, IA, JA, DESCA, X, IX, JX, DESCX,
            SCALE, CNORM, INFO);
}

void mangle_pzlauu2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUU2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUU2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLAUU2(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pzlauum(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUUM(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void PZLAUUM_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA) {
  F77_PZLAUUM(UPLO, N, A, IA, JA, DESCA);
}

void mangle_pzlawil(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V) {
  F77_PZLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PZLAWIL(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V) {
  F77_PZLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void PZLAWIL_(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
              dcomplex *H33, dcomplex *H43H34, dcomplex *V) {
  F77_PZLAWIL(II, JJ, M, A, DESCA, H44, H33, H43H34, V);
}

void mangle_pzmax1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  F77_PZMAX1(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PZMAX1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX) {
  F77_PZMAX1(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void PZMAX1_(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX) {
  F77_PZMAX1(N, AMAX, INDX, X, IX, JX, DESCX, INCX);
}

void mangle_pzpbsv(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPBSV(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPBSV_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZPBSV(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pzpbtrf(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPBTRF(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPBTRF_(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRF(UPLO, N, BW, A, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pzpbtrs(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPBTRS(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRS(UPLO, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void mangle_pzpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
               int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
               dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPBTRSV(UPLO, TRANS, N, BW, NRHS, A, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void mangle_pzpocon(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPOCON(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPOCON_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPOCON(UPLO, N, A, IA, JA, DESCA, ANORM, RCOND, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pzpoequ(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  F77_PZPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PZPOEQU(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO) {
  F77_PZPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void PZPOEQU_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO) {
  F77_PZPOEQU(N, A, IA, JA, DESCA, SR, SC, SCOND, AMAX, INFO);
}

void mangle_pzporfs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPORFS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void PZPORFS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
              dcomplex *B, int *IB, int *JB, int *DESCB, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *FERR, double *BERR, dcomplex *WORK,
              int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPORFS(UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, B, IB, JB,
           DESCB, X, IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK,
           INFO);
}

void mangle_pzposv(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOSV(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOSV_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZPOSV(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pzposvx(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void PZPOSVX(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *AF, int *IAF, int *JAF, int *DESCAF,
             char *EQUED, dcomplex *SR, dcomplex *SC, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *RCOND, double *FERR, double *BERR, dcomplex *WORK,
             int *LWORK, double *RWORK, int *LRWORK, int *INFO) {
  F77_PZPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
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
  F77_PZPOSVX(FACT, UPLO, N, NRHS, A, IA, JA, DESCA, AF, IAF, JAF, DESCAF, EQUED,
           SR, SC, B, IB, JB, DESCB, X, IX, JX, DESCX, RCOND, FERR, BERR, WORK,
           LWORK, RWORK, LRWORK, INFO);
}

void mangle_pzpotf2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PZPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTF2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PZPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTF2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PZPOTF2(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pzpotrf(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PZPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRF(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PZPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRF_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PZPOTRF(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pzpotri(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PZPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRI(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO) {
  F77_PZPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void PZPOTRI_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO) {
  F77_PZPOTRI(UPLO, N, A, IA, JA, DESCA, INFO);
}

void mangle_pzpotrs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOTRS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO) {
  F77_PZPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void PZPOTRS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO) {
  F77_PZPOTRS(UPLO, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, INFO);
}

void mangle_pzptsv(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZPTSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPTSV(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO) {
  F77_PZPTSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void PZPTSV_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZPTSV(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, WORK, LWORK, INFO);
}

void mangle_pzpttrf(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPTTRF(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void PZPTTRF_(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPTTRF(N, D, E, JA, DESCA, AF, LAF, WORK, LWORK, INFO);
}

void mangle_pzpttrs(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPTTRS(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPTTRS(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPTTRS(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void PZPTTRS_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZPTTRS(UPLO, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK, LWORK,
           INFO);
}

void mangle_pzpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
              dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZPTTRSV(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
              dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO) {
  F77_PZPTTRSV(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void PZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
               dcomplex *E, int *JA, int *DESCA, dcomplex *B, int *IB,
               int *DESCB, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
               int *INFO) {
  F77_PZPTTRSV(UPLO, TRANS, N, NRHS, D, E, JA, DESCA, B, IB, DESCB, AF, LAF, WORK,
            LWORK, INFO);
}

void mangle_pzstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZSTEIN(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
             int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void PZSTEIN_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, dcomplex *Z, int *IZ, int *JZ,
              int *DESCZ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *IFAIL, int *ICLUSTR, double *GAP, int *INFO) {
  F77_PZSTEIN(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, IZ, JZ, DESCZ, WORK, LWORK,
           IWORK, LIWORK, IFAIL, ICLUSTR, GAP, INFO);
}

void mangle_pztrcon(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PZTRCON(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  F77_PZTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void PZTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  F77_PZTRCON(NORM, UPLO, DIAG, N, A, IA, JA, DESCA, RCOND, WORK, LWORK, RWORK,
           LRWORK, INFO);
}

void mangle_pztrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO) {
  F77_PZTREVC(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PZTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO) {
  F77_PZTREVC(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void PZTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
              int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
              int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO) {
  F77_PZTREVC(SIDE, HOWMNY, SELECT, N, T, DESCT, VL, DESCVL, VR, DESCVR, MM, M,
           WORK, RWORK, INFO);
}

void mangle_pztrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  // F77_PZTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZTRRFS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
             double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO) {
  // F77_PZTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void PZTRRFS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, dcomplex *X, int *IX, int *JX, int *DESCX,
              double *FERR, double *BERR, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO) {
  // F77_PZTRRFS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB, X,
  // IX, JX, DESCX, FERR, BERR, WORK, LWORK, RWORK, LRWORK, INFO);
}

void mangle_pztrti2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PZTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTI2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PZTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTI2_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PZTRTI2(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pztrtri(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PZTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTRI(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO) {
  F77_PZTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void PZTRTRI_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO) {
  F77_PZTRTRI(UPLO, DIAG, N, A, IA, JA, DESCA, INFO);
}

void mangle_pztrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  F77_PZTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PZTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO) {
  F77_PZTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void PZTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO) {
  F77_PZTRTRS(UPLO, TRANS, DIAG, N, NRHS, A, IA, JA, DESCA, B, IB, JB, DESCB,
           INFO);
}

void mangle_pztzrzf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZTZRZF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZTZRZF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZTZRZF(M, N, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzung2l(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2L(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2L_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNG2L(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzung2r(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2R(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNG2R_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNG2R(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzungl2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGL2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGL2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGL2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzunglq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGLQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGLQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGLQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzungql(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQL(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQL_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGQL(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzungqr(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQR(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGQR_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGQR(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzungr2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGR2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGR2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGR2(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzungrq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGRQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void PZUNGRQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNGRQ(M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK, INFO);
}

void mangle_pzunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNM2L(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNM2R(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PZUNMBR(VECT, SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pzunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PZUNMHR(SIDE, TRANS, M, N, ILO, IHI, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pzunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNML2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMLQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMQL(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMQR(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMR2(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PZUNMR3(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pzunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void PZUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMRQ(SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC, WORK,
           LWORK, INFO);
}

void mangle_pzunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
             dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
             int *LWORK, int *INFO) {
  F77_PZUNMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *TAU,
              dcomplex *C, int *IC, int *JC, int *DESCC, dcomplex *WORK,
              int *LWORK, int *INFO) {
  F77_PZUNMRZ(SIDE, TRANS, M, N, K, L, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_pzunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void PZUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO) {
  F77_PZUNMTR(SIDE, UPLO, TRANS, M, N, A, IA, JA, DESCA, TAU, C, IC, JC, DESCC,
           WORK, LWORK, INFO);
}

void mangle_sdbtf2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_SDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTF2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_SDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTF2_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  F77_SDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_sdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_SDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_SDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void SDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  F77_SDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_sdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_SDTTRF(N, DL, D, DU, INFO);
}

void SDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_SDTTRF(N, DL, D, DU, INFO);
}

void SDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_SDTTRF(N, DL, D, DU, INFO);
}

void mangle_sdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_SDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void SDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_SDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void SDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_SDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void mangle_slamsh(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP) {
  F77_SLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void SLAMSH(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP) {
  F77_SLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void SLAMSH_(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
             int *N, float *ULP) {
  F77_SLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void mangle_slapst(char *ID, int *N, float *D, int *INDX, int *INFO) {
  F77_SLAPST(ID, N, D, INDX, INFO);
}

void SLAPST(char *ID, int *N, float *D, int *INDX, int *INFO) {
  F77_SLAPST(ID, N, D, INDX, INFO);
}

void SLAPST_(char *ID, int *N, float *D, int *INDX, int *INFO) {
  F77_SLAPST(ID, N, D, INDX, INFO);
}

void mangle_slaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
            int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
            float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
            float *WH, int *LDWH) {
  F77_SLAQR6(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void SLAQR6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
            int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
            int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
            float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
            float *WH, int *LDWH) {
  F77_SLAQR6(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void SLAQR6_(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
             int *KBOT, int *NSHFTS, float *SR, float *SI, float *H, int *LDH,
             int *ILOZ, int *IHIZ, float *Z, int *LDZ, float *V, int *LDV,
             float *U, int *LDU, int *NV, float *WV, int *LDWV, int *NH,
             float *WH, int *LDWH) {
  F77_SLAQR6(JOB, WANTT, WANTZ, KACC22, N, KTOP, KBOT, NSHFTS, SR, SI, H, LDH,
          ILOZ, IHIZ, Z, LDZ, V, LDV, U, LDU, NV, WV, LDWV, NH, WH, LDWH);
}

void mangle_slar1va(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
             float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
             int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
             int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
             float *WORK) {
  F77_SLAR1VA(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SLAR1VA(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
             float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
             int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
             int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
             float *WORK) {
  F77_SLAR1VA(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SLAR1VA_(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
              float *LD, float *LLD, float *PIVMIN, float *GAPTOL, float *Z,
              int *WANTNC, int *NEGCNT, float *ZTZ, float *MINGMA, int *R,
              int *ISUPPZ, float *NRMINV, float *RESID, float *RQCORR,
              float *WORK) {
  F77_SLAR1VA(N, B1, BN, LAMBDA, D, L, LD, LLD, PIVMIN, GAPTOL, Z, WANTNC, NEGCNT,
           ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void mangle_slaref(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
            float *V2, float *V3, float *T1, float *T2, float *T3) {
  F77_SLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SLAREF(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
            int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
            int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
            float *V2, float *V3, float *T1, float *T2, float *T3) {
  F77_SLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SLAREF_(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
             int *BLOCK, int *IROW1, int *ICOL1, int *ISTART, int *ISTOP,
             int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ, float *VECS,
             float *V2, float *V3, float *T1, float *T2, float *T3) {
  F77_SLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void mangle_slarrb2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
             float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
             float *WERR, float *WORK, int *IWORK, float *PIVMIN, float *LGPVMN,
             float *LGSPDM, int *TWIST, int *INFO) {
  F77_SLARRB2(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void SLARRB2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
             float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
             float *WERR, float *WORK, int *IWORK, float *PIVMIN, float *LGPVMN,
             float *LGSPDM, int *TWIST, int *INFO) {
  F77_SLARRB2(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void SLARRB2_(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
              float *RTOL1, float *RTOL2, int *OFFSET, float *W, float *WGAP,
              float *WERR, float *WORK, int *IWORK, float *PIVMIN,
              float *LGPVMN, float *LGSPDM, int *TWIST, int *INFO) {
  F77_SLARRB2(N, D, LLD, IFIRST, ILAST, RTOL1, RTOL2, OFFSET, W, WGAP, WERR, WORK,
           IWORK, PIVMIN, LGPVMN, LGSPDM, TWIST, INFO);
}

void mangle_slarrd2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
             int *IU, float *GERS, float *RELTOL, float *D, float *E, float *E2,
             float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M, float *W,
             float *WERR, float *WL, float *WU, int *IBLOCK, int *INDEXW,
             float *WORK, int *IWORK, int *DOL, int *DOU, int *INFO) {
  F77_SLARRD2(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void SLARRD2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
             int *IU, float *GERS, float *RELTOL, float *D, float *E, float *E2,
             float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M, float *W,
             float *WERR, float *WL, float *WU, int *IBLOCK, int *INDEXW,
             float *WORK, int *IWORK, int *DOL, int *DOU, int *INFO) {
  F77_SLARRD2(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void SLARRD2_(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
              int *IU, float *GERS, float *RELTOL, float *D, float *E,
              float *E2, float *PIVMIN, int *NSPLIT, int *ISPLIT, int *M,
              float *W, float *WERR, float *WL, float *WU, int *IBLOCK,
              int *INDEXW, float *WORK, int *IWORK, int *DOL, int *DOU,
              int *INFO) {
  F77_SLARRD2(RANGE, ORDER, N, VL, VU, IL, IU, GERS, RELTOL, D, E, E2, PIVMIN,
           NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, DOL,
           DOU, INFO);
}

void mangle_slarre2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
             float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
             float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
             int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
             int *INFO) {
  F77_SLARRE2(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void SLARRE2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
             float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
             float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
             int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
             int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
             int *INFO) {
  F77_SLARRE2(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void SLARRE2_(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, float *W, float *WERR, float *WGAP, int *IBLOCK,
              int *INDEXW, float *GERS, double *PIVMIN, float *WORK, int *IWORK,
              int *INFO) {
  F77_SLARRE2(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
           ISPLIT, M, DOL, DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN,
           WORK, IWORK, INFO);
}

void mangle_slarre2a(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
              float *D, float *E, float *E2, float *RTOL1, float *RTOL2,
              float *SPLTOL, int *NSPLIT, int *ISPLIT, int *M, int *DOL,
              int *DOU, int *NEEDIL, int *NEEDIU, float *W, float *WERR,
              float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
              double *PIVMIN, float *WORK, int *IWORK, float *MINRGP,
              int *INFO) {
  F77_SLARRE2A(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
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
  F77_SLARRE2A(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
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
  F77_SLARRE2A(RANGE, N, VL, VU, IL, IU, D, E, E2, RTOL1, RTOL2, SPLTOL, NSPLIT,
            ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW,
            GERS, SDIAM, PIVMIN, WORK, IWORK, MINRGP, INFO);
}

void mangle_slarrf2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
             int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
             double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
             float *WORK, int *INFO) {
  F77_SLARRF2(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void SLARRF2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
             int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
             int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
             double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
             float *WORK, int *INFO) {
  F77_SLARRF2(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void SLARRF2_(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
              int *CLMID1, int *CLMID2, float *W, float *WGAP, float *WERR,
              int *TRYMID, float *SPDIAM, float *CLGAPL, float *CLGAPR,
              double *PIVMIN, float *SIGMA, float *DPLUS, float *LPLUS,
              float *WORK, int *INFO) {
  F77_SLARRF2(N, D, L, LD, CLSTRT, CLEND, CLMID1, CLMID2, W, WGAP, WERR, TRYMID,
           SPDIAM, CLGAPL, CLGAPR, PIVMIN, SIGMA, DPLUS, LPLUS, WORK, INFO);
}

void mangle_slarrv2(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
             int *ISPLIT, int *M, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
             float *MINRGP, float *RTOL1, float *RTOL2, float *W, float *WERR,
             float *WGAP, int *IBLOCK, int *INDEXW, float *GERS, float *SDIAM,
             float *Z, int *LDZ, int *ISUPPZ, float *WORK, int *IWORK,
             int *VSTART, int *FINISH, int *MAXCLS, int *NDEPTH, int *PARITY,
             int *ZOFFSET, int *INFO) {
  F77_SLARRV2(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
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
  F77_SLARRV2(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
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
  F77_SLARRV2(N, VL, VU, D, L, PIVMIN, ISPLIT, M, DOL, DOU, NEEDIL, NEEDIU, MINRGP,
           RTOL1, RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, LDZ,
           ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET,
           INFO);
}

void mangle_slasorte(float *S, int *LDS, int *J, float *OUT, int *INFO) {
  F77_SLASORTE(S, LDS, J, OUT, INFO);
}

void SLASORTE(float *S, int *LDS, int *J, float *OUT, int *INFO) {
  F77_SLASORTE(S, LDS, J, OUT, INFO);
}

void SLASORTE_(float *S, int *LDS, int *J, float *OUT, int *INFO) {
  F77_SLASORTE(S, LDS, J, OUT, INFO);
}

void mangle_slasrt2(char *ID, int *N, float *D, int *KEY, int *INFO) {
  F77_SLASRT2(ID, N, D, KEY, INFO);
}

void SLASRT2(char *ID, int *N, float *D, int *KEY, int *INFO) {
  F77_SLASRT2(ID, N, D, KEY, INFO);
}

void SLASRT2_(char *ID, int *N, float *D, int *KEY, int *INFO) {
  F77_SLASRT2(ID, N, D, KEY, INFO);
}

void mangle_spttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  F77_SPTTRSV(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void SPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO) {
  F77_SPTTRSV(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void SPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  F77_SPTTRSV(TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void mangle_sstegr2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
             float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
             int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO) {
  F77_SSTEGR2(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void SSTEGR2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
             float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
             int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO) {
  F77_SSTEGR2(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void SSTEGR2_(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, int *ISUPPZ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *DOL, int *DOU, int *ZOFFSET, int *INFO) {
  F77_SSTEGR2(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, ISUPPZ,
           WORK, LWORK, IWORK, LIWORK, DOL, DOU, ZOFFSET, INFO);
}

void mangle_sstegr2a(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *DOL, int *DOU, int *NEEDIL, int *NEEDIU, int *INDERR,
              int *NSPLIT, float *PIVMIN, float *SCALE, float *WL, float *WU,
              int *INFO) {
  F77_SSTEGR2A(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void SSTEGR2A(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
              float *VU, int *IL, int *IU, int *M, float *W, float *Z, int *LDZ,
              int *NZC, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *DOL, int *DOU, int *NEEDIL, int *NEEDIU, int *INDERR,
              int *NSPLIT, float *PIVMIN, float *SCALE, float *WL, float *WU,
              int *INFO) {
  F77_SSTEGR2A(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void SSTEGR2A_(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
               float *VU, int *IL, int *IU, int *M, float *W, float *Z,
               int *LDZ, int *NZC, float *WORK, int *LWORK, int *IWORK,
               int *LIWORK, int *DOL, int *DOU, int *NEEDIL, int *NEEDIU,
               int *INDERR, int *NSPLIT, float *PIVMIN, float *SCALE, float *WL,
               float *WU, int *INFO) {
  F77_SSTEGR2A(JOBZ, RANGE, N, D, E, VL, VU, IL, IU, M, W, Z, LDZ, NZC, WORK,
            LWORK, IWORK, LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDERR, NSPLIT,
            PIVMIN, SCALE, WL, WU, INFO);
}

void mangle_sstegr2b(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
              float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
              float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_SSTEGR2B(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void SSTEGR2B(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
              float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
              int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
              int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
              float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
              int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_SSTEGR2B(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void SSTEGR2B_(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
               float *Z, int *LDZ, int *NZC, int *ISUPPZ, float *WORK,
               int *LWORK, int *IWORK, int *LIWORK, int *DOL, int *DOU,
               int *NEEDIL, int *NEEDIU, float *INDWLC, float *PIVMIN,
               float *SCALE, float *WL, float *WU, int *VSTART, int *FINISH,
               int *MAXCLS, int *NDEPTH, int *PARITY, int *ZOFFSET, int *INFO) {
  F77_SSTEGR2B(JOBZ, N, D, E, M, W, Z, LDZ, NZC, ISUPPZ, WORK, LWORK, IWORK,
            LIWORK, DOL, DOU, NEEDIL, NEEDIU, INDWLC, PIVMIN, SCALE, WL, WU,
            VSTART, FINISH, MAXCLS, NDEPTH, PARITY, ZOFFSET, INFO);
}

void mangle_sstein2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  F77_SSTEIN2(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void SSTEIN2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO) {
  F77_SSTEIN2(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void SSTEIN2_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
              int *IWORK, int *IFAIL, int *INFO) {
  F77_SSTEIN2(N, D, E, M, W, IBLOCK, ISPLIT, ORFAC, Z, LDZ, WORK, IWORK, IFAIL,
           INFO);
}

void mangle_ssteqr2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  F77_SSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void SSTEQR2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO) {
  F77_SSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void SSTEQR2_(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
              int *NR, float *WORK, int *INFO) {
  F77_SSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void mangle_strmvt(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ) {
  F77_STRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void STRMVT(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ) {
  F77_STRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void STRMVT_(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
             float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ) {
  F77_STRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void mangle_zdbtf2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO) {
  F77_ZDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTF2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO) {
  F77_ZDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTF2_(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
             int *INFO) {
  F77_ZDBTF2(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_zdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_ZDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO) {
  F77_ZDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void ZDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB,
             int *INFO) {
  F77_ZDBTRF(M, N, KL, KU, AB, LDAB, INFO);
}

void mangle_zdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_ZDTTRF(N, DL, D, DU, INFO);
}

void ZDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_ZDTTRF(N, DL, D, DU, INFO);
}

void ZDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO) {
  F77_ZDTTRF(N, DL, D, DU, INFO);
}

void mangle_zdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_ZDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void ZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_ZDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void ZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO) {
  F77_ZDTTRSV(UPLO, TRANS, N, NRHS, DL, D, DU, B, LDB, INFO);
}

void mangle_zlahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO) {
  F77_ZLAHQR2(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void ZLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO) {
  F77_ZLAHQR2(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void ZLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
              int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *LDZ, int *INFO) {
  F77_ZLAHQR2(WANTT, WANTZ, N, ILO, IHI, H, LDH, W, ILOZ, IHIZ, Z, LDZ, INFO);
}

void mangle_zlamsh(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP) {
  F77_ZLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void ZLAMSH(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP) {
  F77_ZLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void ZLAMSH_(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
             int *LDH, int *N, double *ULP) {
  F77_ZLAMSH(S, LDS, NBULGE, JBLK, H, LDH, N, ULP);
}

void mangle_zlanv2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN) {
  F77_ZLANV2(A, B, C, D, RT1, RT2, CS, SN);
}

void ZLANV2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN) {
  F77_ZLANV2(A, B, C, D, RT1, RT2, CS, SN);
}

void ZLANV2_(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
             dcomplex *RT2, double *CS, dcomplex *SN) {
  F77_ZLANV2(A, B, C, D, RT1, RT2, CS, SN);
}

void mangle_zlaref(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
            dcomplex *T2, dcomplex *T3) {
  F77_ZLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void ZLAREF(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
            int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
            int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
            dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
            dcomplex *T2, dcomplex *T3) {
  F77_ZLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void ZLAREF_(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
             int *LDZ, int *BLOCK, int *IROW1, int *ICOL1, int *ISTART,
             int *ISTOP, int *ITMP1, int *ITMP2, int *LILOZ, int *LIHIZ,
             dcomplex *VECS, dcomplex *V2, dcomplex *V3, dcomplex *T1,
             dcomplex *T2, dcomplex *T3) {
  F77_ZLAREF(TYPE, A, LDA, WANTZ, Z, LDZ, BLOCK, IROW1, ICOL1, ISTART, ISTOP,
          ITMP1, ITMP2, LILOZ, LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void mangle_zpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  F77_ZPTTRSV(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void ZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO) {
  F77_ZPTTRSV(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void ZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO) {
  F77_ZPTTRSV(UPLO, TRANS, N, NRHS, D, E, B, LDB, INFO);
}

void mangle_zsteqr2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  F77_ZSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void ZSTEQR2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO) {
  F77_ZSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void ZSTEQR2_(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
              int *NR, double *WORK, int *INFO) {
  F77_ZSTEQR2(COMPZ, N, D, E, Z, LDZ, NR, WORK, INFO);
}

void mangle_ztrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  F77_ZTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void ZTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ) {
  F77_ZTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

void ZTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ) {
  F77_ZTRMVT(UPLO, N, T, LDT, X, INCX, Y, INCY, W, INCW, Z, INCZ);
}

/* mangle_pclange */
float mangle_pclange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PCLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PCLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return F77_PCLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pclanhe */
float mangle_pclanhe(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return F77_PCLANHE(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return F77_PCLANHE(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK) {
  return F77_PCLANHE(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pclanhs */
float mangle_pclanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PCLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
float PCLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PCLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
float PCLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return F77_PCLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pclansy */
float mangle_pclansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return F77_PCLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return F77_PCLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PCLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK) {
  return F77_PCLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pclantr */
float mangle_pclantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return F77_PCLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return F77_PCLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PCLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return F77_PCLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pclatra */
scomplex mangle_pclatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return F77_PCLATRA(N, A, IA, JA, DESCA);
}
scomplex PCLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return F77_PCLATRA(N, A, IA, JA, DESCA);
}
scomplex PCLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return F77_PCLATRA(N, A, IA, JA, DESCA);
}

/* mangle_pdlamch */
double mangle_pdlamch(int *ICTXT, char *CMACH) { return F77_PDLAMCH(ICTXT, CMACH); }
double PDLAMCH(int *ICTXT, char *CMACH) { return F77_PDLAMCH(ICTXT, CMACH); }
double PDLAMCH_(int *ICTXT, char *CMACH) { return F77_PDLAMCH(ICTXT, CMACH); }

/* mangle_pdlange */
void mangle_pdlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PDLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PDLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  F77_PDLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pdlanhs */
void mangle_pdlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PDLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
void PDLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PDLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
void PDLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  F77_PDLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pdlansy */
void mangle_pdlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PDLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PDLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PDLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PDLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  F77_PDLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pdlantr */
void mangle_pdlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  F77_PDLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  F77_PDLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PDLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  F77_PDLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pdlatra */
void mangle_pdlatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  F77_PDLATRA(N, A, IA, JA, DESCA);
}
void PDLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  F77_PDLATRA(N, A, IA, JA, DESCA);
}
void PDLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  F77_PDLATRA(N, A, IA, JA, DESCA);
}

/* mangle_pilaenvx */
int mangle_pilaenvx(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4) {
  return F77_PILAENVX(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PILAENVX(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4) {
  return F77_PILAENVX(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PILAENVX_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
              float *N2, float *N3, float *N4) {
  return F77_PILAENVX(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}

/* mangle_piparmq */
int mangle_piparmq(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB) {
  return F77_PIPARMQ(ICTXT, ISPEC, NAME, OPTS, N, ILO, IHI, LWORKNB);
}
int PIPARMQ(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB) {
  return F77_PIPARMQ(ICTXT, ISPEC, NAME, OPTS, N, ILO, IHI, LWORKNB);
}
int PIPARMQ_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
             float *ILO, float *IHI, float *LWORKNB) {
  return F77_PIPARMQ(ICTXT, ISPEC, NAME, OPTS, N, ILO, IHI, LWORKNB);
}

/* mangle_pjlaenv */
int mangle_pjlaenv(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4) {
  return F77_PJLAENV(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PJLAENV(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4) {
  return F77_PJLAENV(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}
int PJLAENV_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4) {
  return F77_PJLAENV(ICTXT, ISPEC, NAME, OPTS, N1, N2, N3, N4);
}

/* mangle_pslamch */
float mangle_pslamch(float *ICTXT, float *CMACH) { return F77_PSLAMCH(ICTXT, CMACH); }
float PSLAMCH(float *ICTXT, float *CMACH) { return F77_PSLAMCH(ICTXT, CMACH); }
float PSLAMCH_(float *ICTXT, float *CMACH) { return F77_PSLAMCH(ICTXT, CMACH); }

/* mangle_pslange */
float mangle_pslange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PSLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PSLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return F77_PSLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pslanhs */
float mangle_pslanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PSLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
float PSLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  return F77_PSLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
float PSLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK) {
  return F77_PSLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pslansy */
float mangle_pslansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return F77_PSLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PSLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  return F77_PSLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
float PSLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK) {
  return F77_PSLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pslantr */
float mangle_pslantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return F77_PSLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return F77_PSLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
float PSLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  return F77_PSLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pslatra */
float mangle_pslatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return F77_PSLATRA(N, A, IA, JA, DESCA);
}
float PSLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return F77_PSLATRA(N, A, IA, JA, DESCA);
}
float PSLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  return F77_PSLATRA(N, A, IA, JA, DESCA);
}

/* mangle_pzlange */
void mangle_pzlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  F77_PZLANGE(NORM, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pzlanhe */
void mangle_pzlanhe(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANHE(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANHE(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  F77_PZLANHE(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pzlanhs */
void mangle_pzlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
void PZLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}
void PZLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK) {
  F77_PZLANHS(NORM, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pzlansy */
void mangle_pzlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK) {
  F77_PZLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}
void PZLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK) {
  F77_PZLANSY(NORM, UPLO, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pzlantr */
void mangle_pzlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  F77_PZLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  F77_PZLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}
void PZLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK) {
  F77_PZLANTR(NORM, UPLO, DIAG, M, N, A, IA, JA, DESCA, WORK);
}

/* mangle_pzlatra */
void mangle_pzlatra(float *N, float *A, float *IA, float *JA, float *DESCA) {
  F77_PZLATRA(N, A, IA, JA, DESCA);
}
void PZLATRA(float *N, float *A, float *IA, float *JA, float *DESCA) {
  F77_PZLATRA(N, A, IA, JA, DESCA);
}
void PZLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA) {
  F77_PZLATRA(N, A, IA, JA, DESCA);
}

#endif