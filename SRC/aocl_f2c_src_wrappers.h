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

void bdlaapp(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK);
void BDLAAPP(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
             int *NITRAF, int *ITRAF, double *DTRAF, double *WORK);
void BDLAAPP_(int *ISIDE, int *M, int *N, int *NB, double *A, int *LDA,
              int *NITRAF, int *ITRAF, double *DTRAF, double *WORK);
void bdlaexc(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO);
void BDLAEXC(int *N, double *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             double *DTRAF, double *WORK, int *INFO);
void BDLAEXC_(int *N, double *T, int *LDT, int *J1, int *N1, int *N2,
              int *ITRAF, double *DTRAF, double *WORK, int *INFO);
void bdtrexc(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO);
void BDTREXC(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO);
void BDTREXC_(int *N, double *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, double *DTRAF, double *WORK, int *INFO);
void bslaapp(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK);
void BSLAAPP(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
             int *NITRAF, int *ITRAF, float *DTRAF, float *WORK);
void BSLAAPP_(int *ISIDE, int *M, int *N, int *NB, float *A, int *LDA,
              int *NITRAF, int *ITRAF, float *DTRAF, float *WORK);
void bslaexc(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO);
void BSLAEXC(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
             float *DTRAF, float *WORK, int *INFO);
void BSLAEXC_(int *N, float *T, int *LDT, int *J1, int *N1, int *N2, int *ITRAF,
              float *DTRAF, float *WORK, int *INFO);
void bstrexc(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO);
void BSTREXC(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
             int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO);
void BSTREXC_(int *N, float *T, int *LDT, int *IFST, int *ILST, int *NITRAF,
              int *ITRAF, int *NDTRAF, float *DTRAF, float *WORK, int *INFO);
void cdbtf2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO);
void CDBTF2(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
            int *INFO);
void CDBTF2_(int *M, int *N, int *KL, int *KU, scomplex *AB, int *LDAB,
             int *INFO);
void cdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void CDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void CDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void cdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void CDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void CDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void cdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void CDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void CDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void clahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO);
void CLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
             int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z, int *LDZ,
             int *INFO);
void CLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *H,
              int *LDH, scomplex *W, int *ILOZ, int *IHIZ, scomplex *Z,
              int *LDZ, int *INFO);
void clamsh(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP);
void CLAMSH(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
            int *LDH, int *N, float *ULP);
void CLAMSH_(scomplex *S, int *LDS, int *NBULGE, int *JBLK, scomplex *H,
             int *LDH, int *N, float *ULP);
void clanv2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN);
void CLANV2(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
            scomplex *RT2, float *CS, scomplex *SN);
void CLANV2_(scomplex *A, scomplex *B, scomplex *C, scomplex *D, scomplex *RT1,
             scomplex *RT2, float *CS, scomplex *SN);
void claref(char *TYPE, scomplex *A, int *LDA, int *WANTZ, scomplex *Z,
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
void cpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void CPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void CPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void csteqr2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void CSTEQR2(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void CSTEQR2_(char *COMPZ, int *N, float *D, float *E, scomplex *Z, int *LDZ,
              int *NR, float *WORK, int *INFO);
void ctrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void CTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void CTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ);
void ddbtf2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB, int *INFO);
void DDBTF2(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB, int *INFO);
void DDBTF2_(int *M, int *N, int *KL, int *KU, double *AB, int *LDAB,
             int *INFO);
void ddbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void DDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void DDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void ddttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void DDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void DDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void ddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void DDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void DDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void dlamsh(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP);
void DLAMSH(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
            int *N, double *ULP);
void DLAMSH_(double *S, int *LDS, int *NBULGE, int *JBLK, double *H, int *LDH,
             int *N, double *ULP);
void dlapst(char *ID, int *N, double *D, int *INDX, int *INFO);
void DLAPST(char *ID, int *N, double *D, int *INDX, int *INFO);
void DLAPST_(char *ID, int *N, double *D, int *INDX, int *INFO);
void dlaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
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
void dlar1va(int *N, int *B1, int *BN, double *LAMBDA, double *D, double *L,
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
void dlaref(char *TYPE, double *A, int *LDA, int *WANTZ, double *Z, int *LDZ,
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
void dlarrb2(int *N, double *D, double *LLD, int *IFIRST, int *ILAST,
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
void dlaneg2(int *N, double *D, double *LLD, double *SIGMA, double *PIVMIN,
             int *R);
void DLANEG2(int *N, double *D, double *LLD, double *SIGMA, double *PIVMIN,
             int *R);
void DLANEG2_(int *N, double *D, double *LLD, double *SIGMA, double *PIVMIN,
              int *R);
void dlaneg2a(int *N, double *DLLD, double *SIGMA, double *PIVMIN, int *R);
void DLANEG2A(int *N, double *DLLD, double *SIGMA, double *PIVMIN, int *R);
void DLANEG2A_(int *N, double *DLLD, double *SIGMA, double *PIVMIN, int *R);
void dlarrd2(char *RANGE, char *ORDER, int *N, double *VL, double *VU, int *IL,
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
void dlarre2(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
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
void dlarre2a(char *RANGE, int *N, double *VL, double *VU, int *IL, int *IU,
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
void dlarrf2(int *N, double *D, double *L, double *LD, int *CLSTRT, int *CLEND,
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
void dlarrv2(int *N, double *VL, double *VU, double *D, double *L,
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
void dlasorte(double *S, int *LDS, int *J, double *OUT, int *INFO);
void DLASORTE(double *S, int *LDS, int *J, double *OUT, int *INFO);
void DLASORTE_(double *S, int *LDS, int *J, double *OUT, int *INFO);
void dlasrt2(char *ID, int *N, double *D, int *KEY, int *INFO);
void DLASRT2(char *ID, int *N, double *D, int *KEY, int *INFO);
void DLASRT2_(char *ID, int *N, double *D, int *KEY, int *INFO);
void dpttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void DPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void DPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void dstegr2(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
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
void dstegr2a(char *JOBZ, char *RANGE, int *N, double *D, double *E, double *VL,
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
void dstegr2b(char *JOBZ, int *N, double *D, double *E, int *M, double *W,
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
void dstein2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void DSTEIN2(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
             int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void DSTEIN2_(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
              int *ISPLIT, double *ORFAC, double *Z, int *LDZ, double *WORK,
              int *IWORK, int *IFAIL, int *INFO);
void dsteqr2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void DSTEQR2(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void DSTEQR2_(char *COMPZ, int *N, double *D, double *E, double *Z, int *LDZ,
              int *NR, double *WORK, int *INFO);
void dtrmvt(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ);
void DTRMVT(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
            double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ);
void DTRMVT_(char *UPLO, int *N, double *T, int *LDT, double *X, int *INCX,
             double *Y, int *INCY, double *W, int *INCW, double *Z, int *INCZ);
void icopypv(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO);
void ICOPYPV(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *TPIV,
             int *IPIV, int *INFO);
void ICOPYPV_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *TPIV, int *IPIV, int *INFO);
void pcdbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO);
void pcdbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
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
void pcdtsv(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDTSV(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCDTSV_(int *N, int *NRHS, scomplex *DL, scomplex *D, scomplex *DU,
             int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO);
void pcdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
             int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *JA,
              int *DESCA, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void pcdttrs(char *TRANS, int *N, int *NRHS, scomplex *DL, scomplex *D,
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
void pcdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
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
void pcgbsv(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGBSV(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
            int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGBSV_(int *N, int *BWL, int *BWU, int *NRHS, scomplex *A, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO);
void pcgbtrf(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCGBTRF(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
             int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
             int *INFO);
void PCGBTRF_(int *N, int *BWL, int *BWU, scomplex *A, int *JA, int *DESCA,
              int *IPIV, scomplex *AF, int *LAF, scomplex *WORK, int *LWORK,
              int *INFO);
void pcgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
             int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, scomplex *A,
              int *JA, int *DESCA, int *IPIV, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcgebd2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBD2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBD2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO);
void pcgebrd(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBRD(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAUQ, scomplex *TAUP, scomplex *WORK,
             int *LWORK, int *INFO);
void PCGEBRD_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAUQ, scomplex *TAUP,
              scomplex *WORK, int *LWORK, int *INFO);
void pcgecon(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCGECON(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCGECON_(char *NORM, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void pcgeequ(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO);
void PCGEEQU(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             int *INFO);
void PCGEEQU_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              int *INFO);
void pcgehd2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHD2(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHD2_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgehrd(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHRD(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEHRD_(int *N, int *ILO, int *IHI, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgelq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgelqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGELQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgels(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGELS(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
            int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
            scomplex *WORK, int *LWORK, int *INFO);
void PCGELS_(char *TRANS, int *M, int *N, int *NRHS, scomplex *A, int *IA,
             int *JA, int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *WORK, int *LWORK, int *INFO);
void pcgeql2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQL2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQL2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgeqlf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQLF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQLF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgeqpf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO);
void PCGEQPF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK, float *RWORK,
             int *LRWORK, int *INFO);
void PCGEQPF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, scomplex *TAU, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void pcgeqr2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQR2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQR2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgeqrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGEQRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgerfs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
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
void pcgerq2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQ2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQ2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgerqf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCGERQF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcgesv(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCGESV(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCGESV_(int *N, int *NRHS, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pcgesvd(char *JOBU, char *JOBVT, int *M, int *N, scomplex *A, int *IA,
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
void pcgesvx(char *FACT, char *TRANS, int *N, int *NRHS, scomplex *A, int *IA,
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
void pcgetf2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PCGETF2(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PCGETF2_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void pcgetrf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PCGETRF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PCGETRF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void pcgetri(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PCGETRI(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PCGETRI_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              scomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pcgetrs(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PCGETRS(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PCGETRS_(char *TRANS, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, scomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void pcggqrf(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGQRF(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGQRF_(int *N, int *M, int *P, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void pcggrqf(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGRQF(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
             scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void PCGGRQF_(int *M, int *P, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAUA, scomplex *B, int *IB, int *JB, int *DESCB,
              scomplex *TAUB, scomplex *WORK, int *LWORK, int *INFO);
void pcheev(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
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
void pcheevd(char *JOBZ, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
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
void pcheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
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
void pcheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, scomplex *A, int *IA,
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
void pchegs2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCHEGS2(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCHEGS2_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pchegst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO);
void PCHEGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
             float *SCALE, int *INFO);
void PCHEGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, int *INFO);
void pchegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
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
void pchengst(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO);
void PCHENGST(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
              float *SCALE, scomplex *WORK, int *LWORK, int *INFO);
void PCHENGST_(int *IBTYPE, char *UPLO, int *N, scomplex *A, int *IA, int *JA,
               int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB,
               float *SCALE, scomplex *WORK, int *LWORK, int *INFO);
void pchentrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO);
void PCHENTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              scomplex *RWORK, int *LRWORK, int *INFO);
void PCHENTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               scomplex *RWORK, int *LRWORK, int *INFO);
void pchetd2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETD2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETD2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void pchetrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
             int *INFO);
void PCHETRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void pchettrd(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void PCHETTRD(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
              int *INFO);
void PCHETTRD_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, scomplex *TAU, scomplex *WORK, int *LWORK,
               int *INFO);
void pclabrd(int *M, int *N, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
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
void pclacgv(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PCLACGV(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PCLACGV_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void pclacon(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE);
void PCLACON(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
             int *IX, int *JX, int *DESCX, float *EST, int *KASE);
void PCLACON_(int *N, scomplex *V, int *IV, int *JV, int *DESCV, scomplex *X,
              int *IX, int *JX, int *DESCX, float *EST, int *KASE);
void pclaconsb(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK);
void PCLACONSB(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
               scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK);
void PCLACONSB_(scomplex *A, int *DESCA, int *I, int *L, int *M, scomplex *H44,
                scomplex *H33, scomplex *H43H34, scomplex *BUF, int *LWORK);
void pclacp2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACP2(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACP2_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void pclacp3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PCLACP3(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PCLACP3_(int *M, int *I, scomplex *A, int *DESCA, scomplex *B, int *LDB,
              int *II, int *JJ, int *REV);
void pclacpy(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACPY(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void PCLACPY_(char *UPLO, int *M, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB);
void pclaevswp(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK);
void PCLAEVSWP(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK);
void PCLAEVSWP_(int *N, float *ZIN, int *LDZI, scomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *RWORK, int *LRWORK);
void pclahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, scomplex *A,
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
void pclahrd(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK);
void PCLAHRD(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *T, scomplex *Y, int *IY, int *JY,
             int *DESCY, scomplex *WORK);
void PCLAHRD_(int *N, int *K, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *TAU, scomplex *T, scomplex *Y, int *IY,
              int *JY, int *DESCY, scomplex *WORK);
void pclamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PCLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PCLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void pclapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PCLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PCLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK);
void pclapv2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PCLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PCLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void pclaqge(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED);
void PCLAQGE(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
             char *EQUED);
void PCLAQGE_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *R, float *C, float *ROWCND, float *COLCND, float *AMAX,
              char *EQUED);
void pclaqsy(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PCLAQSY(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PCLAQSY_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void pclarf(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARF(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARF_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void pclarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
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
void pclarfc(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARFC(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARFC_(char *SIDE, int *M, int *N, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK);
void pclarfg(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU);
void PCLARFG(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, scomplex *TAU);
void PCLARFG_(int *N, scomplex *ALPHA, int *IAX, int *JAX, scomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, scomplex *TAU);
void pclarft(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARFT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARFT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void pclarz(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARZ(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC, int *JC,
            int *DESCC, scomplex *WORK);
void PCLARZ_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void pclarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
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
void pclarzc(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARZC(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK);
void PCLARZC_(char *SIDE, int *M, int *N, int *L, scomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK);
void pclarzt(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARZT(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
             int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void PCLARZT_(char *DIRECT, char *STOREV, int *N, int *K, scomplex *V, int *IV,
              int *JV, int *DESCV, scomplex *TAU, scomplex *T, scomplex *WORK);
void pclascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PCLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PCLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, int *INFO);
void pclase2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASE2(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASE2_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA);
void pclaset(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASET(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
             scomplex *A, int *IA, int *JA, int *DESCA);
void PCLASET_(char *UPLO, int *M, int *N, scomplex *ALPHA, scomplex *BETA,
              scomplex *A, int *IA, int *JA, int *DESCA);
void pclasmsub(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK);
void PCLASMSUB(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               scomplex *BUF, int *LWORK);
void PCLASMSUB_(scomplex *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                scomplex *BUF, int *LWORK);
void pclassq(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PCLASSQ(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PCLASSQ_(int *N, scomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ);
void pclaswp(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PCLASWP(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PCLASWP_(char *DIREC, char *ROWCOL, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void pclatrd(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK);
void PCLATRD(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
             int *IW, int *JW, int *DESCW, scomplex *WORK);
void PCLATRD_(char *UPLO, int *N, int *NB, scomplex *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, scomplex *TAU, scomplex *W,
              int *IW, int *JW, int *DESCW, scomplex *WORK);
void pclatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK);
void PCLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
             int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK);
void PCLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, scomplex *WORK);
void pclatrz(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK);
void PCLATRZ(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK);
void PCLATRZ_(int *M, int *N, int *L, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK);
void pclattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO);
void PCLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO);
void PCLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               scomplex *A, int *IA, int *JA, int *DESCA, scomplex *X, int *IX,
               int *JX, int *DESCX, float *SCALE, float *CNORM, int *INFO);
void pclauu2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUU2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUU2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void pclauum(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUUM(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void PCLAUUM_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA);
void pclawil(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V);
void PCLAWIL(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
             scomplex *H33, scomplex *H43H34, scomplex *V);
void PCLAWIL_(int *II, int *JJ, int *M, scomplex *A, int *DESCA, scomplex *H44,
              scomplex *H33, scomplex *H43H34, scomplex *V);
void pcmax1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PCMAX1(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PCMAX1_(int *N, scomplex *AMAX, int *INDX, scomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX);
void ccombamax1(scomplex *V1, scomplex *V2);
void CCOMBAMAX1(scomplex *V1, scomplex *V2);
void CCOMBAMAX1_(scomplex *V1, scomplex *V2);
void pcpbsv(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPBSV(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPBSV_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO);
void pcpbtrf(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRF(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRF_(char *UPLO, int *N, int *BW, scomplex *A, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcpbtrs(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRS(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, scomplex *A, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
              int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, scomplex *A,
               int *JA, int *DESCA, scomplex *B, int *IB, int *DESCB,
               scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcpocon(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCPOCON(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCPOCON_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void pcpoequ(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PCPOEQU(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PCPOEQU_(int *N, scomplex *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO);
void pcporfs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
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
void pcposv(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOSV(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
            int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOSV_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pcposvx(char *FACT, char *UPLO, int *N, int *NRHS, scomplex *A, int *IA,
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
void pcpotf2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTF2(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTF2_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pcpotrf(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRF(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRF_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pcpotri(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRI(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PCPOTRI_(char *UPLO, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pcpotrs(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOTRS(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
             int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PCPOTRS_(char *UPLO, int *N, int *NRHS, scomplex *A, int *IA, int *JA,
              int *DESCA, scomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pcptsv(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPTSV(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
            int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
            int *LWORK, int *INFO);
void PCPTSV_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *WORK,
             int *LWORK, int *INFO);
void pcpttrf(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRF(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
             scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRF_(int *N, scomplex *D, scomplex *E, int *JA, int *DESCA,
              scomplex *AF, int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcpttrs(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRS(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
             int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
             int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void PCPTTRS_(char *UPLO, int *N, int *NRHS, scomplex *D, scomplex *E, int *JA,
              int *DESCA, scomplex *B, int *IB, int *DESCB, scomplex *AF,
              int *LAF, scomplex *WORK, int *LWORK, int *INFO);
void pcpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *D,
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
void pcsrscl(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PCSRSCL(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PCSRSCL_(int *N, float *SA, scomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX);
void pcstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
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
void pctrcon(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCTRCON(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
             int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
             float *RWORK, int *LRWORK, int *INFO);
void PCTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, scomplex *A, int *IA,
              int *JA, int *DESCA, float *RCOND, scomplex *WORK, int *LWORK,
              float *RWORK, int *LRWORK, int *INFO);
void pctrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO);
void PCTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
             int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
             int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO);
void PCTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, scomplex *T,
              int *DESCT, scomplex *VL, int *DESCVL, scomplex *VR, int *DESCVR,
              int *MM, int *M, scomplex *WORK, float *RWORK, int *INFO);
void pctrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
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
void pctrti2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTI2(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTI2_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pctrtri(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTRI(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PCTRTRI_(char *UPLO, char *DIAG, int *N, scomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pctrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PCTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PCTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              scomplex *A, int *IA, int *JA, int *DESCA, scomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO);
void pctzrzf(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCTZRZF(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCTZRZF_(int *M, int *N, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcung2l(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2L(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2L_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcung2r(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2R(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNG2R_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcungl2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGL2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGL2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcunglq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGLQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGLQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcungql(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQL(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQL_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcungqr(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQR(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGQR_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcungr2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGR2(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGR2_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcungrq(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGRQ(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
             scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void PCUNGRQ_(int *M, int *N, int *K, scomplex *A, int *IA, int *JA, int *DESCA,
              scomplex *TAU, scomplex *WORK, int *LWORK, int *INFO);
void pcunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
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
void pcunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
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
void pcunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
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
void pcunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pcunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
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
void pcunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
             int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
             int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void PCUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, scomplex *A,
              int *IA, int *JA, int *DESCA, scomplex *TAU, scomplex *C, int *IC,
              int *JC, int *DESCC, scomplex *WORK, int *LWORK, int *INFO);
void pddbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO);
void pddbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void pddbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void pddbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               double *A, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
               double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void pddtsv(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDTSV(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDDTSV_(int *N, int *NRHS, double *DL, double *D, double *DU, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO);
void pddttrf(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRF(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRF_(int *N, double *DL, double *D, double *DU, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void pddttrs(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRS(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
             int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRS_(char *TRANS, int *N, int *NRHS, double *DL, double *D, double *DU,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void pddttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL, double *D,
              double *DU, int *JA, int *DESCA, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, double *DL,
               double *D, double *DU, int *JA, int *DESCA, double *B, int *IB,
               int *DESCB, double *AF, int *LAF, double *WORK, int *LWORK,
               int *INFO);
void pdgbsv(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGBSV(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
            int *DESCA, int *IPIV, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGBSV_(int *N, int *BWL, int *BWU, int *NRHS, double *A, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *WORK, int *LWORK, int *INFO);
void pdgbtrf(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO);
void PDGBTRF(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
             int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
             int *INFO);
void PDGBTRF_(int *N, int *BWL, int *BWU, double *A, int *JA, int *DESCA,
              int *IPIV, double *AF, int *LAF, double *WORK, int *LWORK,
              int *INFO);
void pdgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
             int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, double *A,
              int *JA, int *DESCA, int *IPIV, double *B, int *IB, int *DESCB,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void pdgebal(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO);
void PDGEBAL(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
             double *SCALE, int *INFO);
void PDGEBAL_(char *JOB, int *N, double *A, int *DESCA, int *ILO, int *IHI,
              double *SCALE, int *INFO);
void pdgebd2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBD2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBD2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO);
void pdgebrd(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBRD(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *D,
             double *E, double *TAUQ, double *TAUP, double *WORK, int *LWORK,
             int *INFO);
void PDGEBRD_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAUQ, double *TAUP, double *WORK,
              int *LWORK, int *INFO);
void pdgecon(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDGECON(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDGECON_(char *NORM, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void pdgeequ(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PDGEEQU(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PDGEEQU_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO);
void pdgehd2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHD2(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHD2_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgehrd(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHRD(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
             int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEHRD_(int *N, int *ILO, int *IHI, double *A, int *IA, int *JA,
              int *DESCA, double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgelq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgelqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGELQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgels(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGELS(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDGELS_(char *TRANS, int *M, int *N, int *NRHS, double *A, int *IA,
             int *JA, int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *WORK, int *LWORK, int *INFO);
void pdgeql2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQL2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQL2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgeqlf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQLF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQLF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgeqpf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQPF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQPF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgeqr2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQR2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQR2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgeqrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGEQRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgerfs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
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
void pdgerq2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQ2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQ2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgerqf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDGERQF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdgesv(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDGESV(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
            int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDGESV_(int *N, int *NRHS, double *A, int *IA, int *JA, int *DESCA,
             int *IPIV, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void pdgesvd(char *JOBU, char *JOBVT, int *M, int *N, double *A, int *IA,
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
void pdgesvx(char *FACT, char *TRANS, int *N, int *NRHS, double *A, int *IA,
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
void pdgetf2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETF2(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETF2_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void pdgetf2k(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO);
void PDGETF2K(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *PANEL, int *INFO);
void PDGETF2K_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
               int *IPIV, int *PANEL, int *INFO);
void pdgetf2_comm(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO);
void PDGETF2_COMM(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                  int *IPIV, int *INFO);
void PDGETF2_COMM_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
                   int *IPIV, int *INFO);
void pdgetrf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETRF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PDGETRF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void pdgetri(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGETRI(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDGETRI_(int *N, double *A, int *IA, int *JA, int *DESCA, int *IPIV,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pdgetrs(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PDGETRS(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PDGETRS_(char *TRANS, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, int *IPIV, double *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void pdggqrf(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGQRF(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGQRF_(int *N, int *M, int *P, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO);
void pdggrqf(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGRQF(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAUA, double *B, int *IB, int *JB, int *DESCB,
             double *TAUB, double *WORK, int *LWORK, int *INFO);
void PDGGRQF_(int *M, int *P, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAUA, double *B, int *IB, int *JB, int *DESCB,
              double *TAUB, double *WORK, int *LWORK, int *INFO);
void pdhseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
             int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H,
              int *DESCH, double *WR, double *WI, double *Z, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pdlabad(int *ICTXT, double *SMALL, double *LARGE);
void PDLABAD(int *ICTXT, double *SMALL, double *LARGE);
void PDLABAD_(int *ICTXT, double *SMALL, double *LARGE);
void pdlabrd(int *M, int *N, int *NB, double *A, int *IA, int *JA, int *DESCA,
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
void pdlacon(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE);
void PDLACON(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
             int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE);
void PDLACON_(int *N, double *V, int *IV, int *JV, int *DESCV, double *X,
              int *IX, int *JX, int *DESCX, int *ISGN, double *EST, int *KASE);
void pdlaconsb(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK);
void PDLACONSB(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
               double *H33, double *H43H34, double *BUF, int *LWORK);
void PDLACONSB_(double *A, int *DESCA, int *I, int *L, int *M, double *H44,
                double *H33, double *H43H34, double *BUF, int *LWORK);
void pdlacp2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACP2(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACP2_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void pdlacp3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV);
void PDLACP3(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
             int *II, int *JJ, int *REV);
void PDLACP3_(int *M, int *I, double *A, int *DESCA, double *B, int *LDB,
              int *II, int *JJ, int *REV);
void pdlacpy(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACPY(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void PDLACPY_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB);
void pdlaed0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO);
void PDLAED0(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *IWORK, int *INFO);
void PDLAED0_(int *N, double *D, double *E, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *IWORK, int *INFO);
void pdlaed1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO);
void PDLAED1(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO);
void PDLAED1_(int *N, int *N1, double *D, int *ID, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *RHO, double *WORK, int *IWORK, int *INFO);
void pdlaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, double *D, int *DROW,
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
void pdlaed3(int *ICTXT, int *K, int *N, int *NB, double *D, int *DROW,
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
void pdlaedz(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK);
void PDLAEDZ(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, double *Z, double *WORK);
void PDLAEDZ_(int *N, int *N1, int *ID, double *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, double *Z, double *WORK);
void pdlaevswp(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK);
void PDLAEVSWP(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK);
void PDLAEVSWP_(int *N, double *ZIN, int *LDZI, double *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *WORK, int *LWORK);
void pdlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
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
void pdlahrd(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK);
void PDLAHRD(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
             double *WORK);
void PDLAHRD_(int *N, int *K, int *NB, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *T, double *Y, int *IY, int *JY, int *DESCY,
              double *WORK);
void pdlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PDLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PDLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void pdlamve(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK);
void PDLAMVE(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB,
             double *DWORK);
void PDLAMVE_(char *UPLO, int *M, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *DWORK);
void pdlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PDLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PDLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              double *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK);
void pdlapv2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PDLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PDLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, double *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void pdlaqge(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PDLAQGE(int *M, int *N, double *A, int *IA, int *JA, int *DESCA, double *R,
             double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PDLAQGE_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED);
void pdlaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
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
void pdlaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, double *A,
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
void pdlaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
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
void pdlaqsy(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PDLAQSY(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PDLAQSY_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void pdlared1d(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED1D(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED1D_(int *N, int *IA, int *JA, int *DESC, double *BYCOL,
                double *BYALL, double *WORK, int *LWORK);
void pdlared2d(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED2D(int *N, int *IA, int *JA, int *DESC, double *BYROW,
               double *BYALL, double *WORK, int *LWORK);
void PDLARED2D_(int *N, int *IA, int *JA, int *DESC, double *BYROW,
                double *BYALL, double *WORK, int *LWORK);
void pdlarf(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK);
void PDLARF(char *SIDE, int *M, int *N, double *V, int *IV, int *JV, int *DESCV,
            int *INCV, double *TAU, double *C, int *IC, int *JC, int *DESCC,
            double *WORK);
void PDLARF_(char *SIDE, int *M, int *N, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK);
void pdlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, double *V, int *IV, int *JV, int *DESCV, double *T,
             double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void pdlarfg(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU);
void PDLARFG(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
             int *JX, int *DESCX, int *INCX, double *TAU);
void PDLARFG_(int *N, double *ALPHA, int *IAX, int *JAX, double *X, int *IX,
              int *JX, int *DESCX, int *INCX, double *TAU);
void pdlarft(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARFT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARFT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void pdlarz(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK);
void PDLARZ(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
            int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
            int *DESCC, double *WORK);
void PDLARZ_(char *SIDE, int *M, int *N, int *L, double *V, int *IV, int *JV,
             int *DESCV, int *INCV, double *TAU, double *C, int *IC, int *JC,
             int *DESCC, double *WORK);
void pdlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
             double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void PDLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, double *V, int *IV, int *JV, int *DESCV,
              double *T, double *C, int *IC, int *JC, int *DESCC, double *WORK);
void pdlarzt(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARZT(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
             int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void PDLARZT_(char *DIRECT, char *STOREV, int *N, int *K, double *V, int *IV,
              int *JV, int *DESCV, double *TAU, double *T, double *WORK);
void pdlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PDLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PDLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, int *INFO);
void pdlase2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASE2(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASE2_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA);
void pdlaset(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASET(char *UPLO, int *M, int *N, double *ALPHA, double *BETA, double *A,
             int *IA, int *JA, int *DESCA);
void PDLASET_(char *UPLO, int *M, int *N, double *ALPHA, double *BETA,
              double *A, int *IA, int *JA, int *DESCA);
void pdlasmsub(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK);
void PDLASMSUB(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               double *BUF, int *LWORK);
void PDLASMSUB_(double *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                double *BUF, int *LWORK);
void pdlasrt(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDLASRT(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
             int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
             int *INFO);
void PDLASRT_(char *ID, int *N, double *D, double *Q, int *IQ, int *JQ,
              int *DESCQ, double *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void pdlassq(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PDLASSQ(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PDLASSQ_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ);
void pdlaswp(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PDLASWP(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PDLASWP_(char *DIREC, char *ROWCOL, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void pdlatrd(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK);
void PDLATRD(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
             int *JW, int *DESCW, double *WORK);
void PDLATRD_(char *UPLO, int *N, int *NB, double *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, double *TAU, double *W, int *IW,
              int *JW, int *DESCW, double *WORK);
void pdlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK);
void PDLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK);
void PDLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              double *A, int *IA, int *JA, int *DESCA, double *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, double *WORK);
void pdlatrz(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK);
void PDLATRZ(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK);
void PDLATRZ_(int *M, int *N, int *L, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK);
void pdlauu2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUU2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUU2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void pdlauum(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUUM(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void PDLAUUM_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA);
void pdlawil(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V);
void PDLAWIL(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
             double *H33, double *H43H34, double *V);
void PDLAWIL_(int *II, int *JJ, int *M, double *A, int *DESCA, double *H44,
              double *H33, double *H43H34, double *V);
void pdorg2l(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2L(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2L_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorg2r(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2R(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORG2R_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorgl2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGL2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGL2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorglq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGLQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGLQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorgql(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQL(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQL_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorgqr(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQR(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGQR_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorgr2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGR2(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGR2_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorgrq(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGRQ(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDORGRQ_(int *M, int *N, int *K, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void pdormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
             int *IC, int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void pdorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormql(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void pdormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
              double *A, int *IA, int *JA, int *DESCA, double *TAU, double *C,
              int *IC, int *JC, int *DESCC, double *WORK, int *LWORK,
              int *INFO);
void pdormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
             int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
             int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void PDORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, double *A,
              int *IA, int *JA, int *DESCA, double *TAU, double *C, int *IC,
              int *JC, int *DESCC, double *WORK, int *LWORK, int *INFO);
void pdpbsv(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDPBSV(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
            int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
            int *LWORK, int *INFO);
void PDPBSV_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *WORK,
             int *LWORK, int *INFO);
void pdpbtrf(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRF(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
             double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRF_(char *UPLO, int *N, int *BW, double *A, int *JA, int *DESCA,
              double *AF, int *LAF, double *WORK, int *LWORK, int *INFO);
void pdpbtrs(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO);
void PDPBTRS(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
             int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
             double *WORK, int *LWORK, int *INFO);
void PDPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, double *A, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void pdpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
              int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, double *A,
               int *JA, int *DESCA, double *B, int *IB, int *DESCB, double *AF,
               int *LAF, double *WORK, int *LWORK, int *INFO);
void pdpocon(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDPOCON(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDPOCON_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void pdpoequ(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PDPOEQU(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PDPOEQU_(int *N, double *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO);
void pdporfs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
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
void pdposv(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOSV(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
            int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOSV_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void pdposvx(char *FACT, char *UPLO, int *N, int *NRHS, double *A, int *IA,
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
void pdpotf2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTF2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTF2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pdpotrf(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRF(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRF_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pdpotri(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRI(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PDPOTRI_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pdpotrs(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOTRS(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDPOTRS_(char *UPLO, int *N, int *NRHS, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void pdptsv(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO);
void PDPTSV(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
            double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
            int *INFO);
void PDPTSV_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *WORK, int *LWORK,
             int *INFO);
void pdpttrf(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPTTRF(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
             int *LAF, double *WORK, int *LWORK, int *INFO);
void PDPTTRF_(int *N, double *D, double *E, int *JA, int *DESCA, double *AF,
              int *LAF, double *WORK, int *LWORK, int *INFO);
void pdpttrs(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO);
void PDPTTRS(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
             double *B, int *IB, int *DESCB, double *AF, int *LAF, double *WORK,
             int *LWORK, int *INFO);
void PDPTTRS_(int *N, int *NRHS, double *D, double *E, int *JA, int *DESCA,
              double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void pdpttrsv(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void PDPTTRSV(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
              int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
              double *WORK, int *LWORK, int *INFO);
void PDPTTRSV_(char *UPLO, int *N, int *NRHS, double *D, double *E, int *JA,
               int *DESCA, double *B, int *IB, int *DESCB, double *AF, int *LAF,
               double *WORK, int *LWORK, int *INFO);
void pdrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO);
void PDROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
           double *SN, double *WORK, int *LWORK, int *INFO);
void PDROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, double *CS,
            double *SN, double *WORK, int *LWORK, int *INFO);
void pdrscl(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PDRSCL(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PDRSCL_(int *N, double *SA, double *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void pdstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, double *VL,
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
void pdlaebz(int *IJOB, int *N, int *MMAX, int *MINP, double *ABSTOL,
             double *RELTOL, double *PIVMIN, double *D, int *NVAL,
             double *INTVL, int *INTVLCT, int *MOUT, double *LSAVE, int *IEFLAG,
             int *INFO);
void PDLAEBZ(int *IJOB, int *N, int *MMAX, int *MINP, double *ABSTOL,
             double *RELTOL, double *PIVMIN, double *D, int *NVAL,
             double *INTVL, int *INTVLCT, int *MOUT, double *LSAVE, int *IEFLAG,
             int *INFO);
void PDLAEBZ_(int *IJOB, int *N, int *MMAX, int *MINP, double *ABSTOL,
              double *RELTOL, double *PIVMIN, double *D, int *NVAL,
              double *INTVL, int *INTVLCT, int *MOUT, double *LSAVE,
              int *IEFLAG, int *INFO);
void pdlaecv(int *IJOB, int *KF, int *KL, double *INTVL, int *INTVLCT,
             int *NVAL, double *ABSTOL, double *RELTOL);
void PDLAECV(int *IJOB, int *KF, int *KL, double *INTVL, int *INTVLCT,
             int *NVAL, double *ABSTOL, double *RELTOL);
void PDLAECV_(int *IJOB, int *KF, int *KL, double *INTVL, int *INTVLCT,
              int *NVAL, double *ABSTOL, double *RELTOL);
void pdlapdct(double *SIGMA, int *N, double *D, double *PIVMIN, int *COUNT);
void PDLAPDCT(double *SIGMA, int *N, double *D, double *PIVMIN, int *COUNT);
void PDLAPDCT_(double *SIGMA, int *N, double *D, double *PIVMIN, int *COUNT);
void pdstedc(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDSTEDC(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
             int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PDSTEDC_(char *COMPZ, int *N, double *D, double *E, double *Q, int *IQ,
              int *JQ, int *DESCQ, double *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void pdstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
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
void pdsyev(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO);
void PDSYEV(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
            int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
            double *WORK, int *LWORK, int *INFO);
void PDSYEV_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *INFO);
void pdsyevd(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDSYEVD(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
             double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PDSYEVD_(char *JOBZ, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *W, double *Z, int *IZ, int *JZ, int *DESCZ,
              double *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pdsyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
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
void pdsyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, double *A, int *IA,
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
void pdsygs2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDSYGS2(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void PDSYGS2_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB, int *INFO);
void pdsygst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO);
void PDSYGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
             int *DESCA, double *B, int *IB, int *JB, int *DESCB, double *SCALE,
             int *INFO);
void PDSYGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO);
void pdsygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
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
void pdsyngst(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO);
void PDSYNGST(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
              int *DESCA, double *B, int *IB, int *JB, int *DESCB,
              double *SCALE, double *WORK, int *LWORK, int *INFO);
void PDSYNGST_(int *IBTYPE, char *UPLO, int *N, double *A, int *IA, int *JA,
               int *DESCA, double *B, int *IB, int *JB, int *DESCB,
               double *SCALE, double *WORK, int *LWORK, int *INFO);
void pdsyntrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYNTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYNTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO);
void pdsytd2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTD2(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTD2_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void pdsytrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, double *TAU, double *WORK, int *LWORK,
             int *INFO);
void PDSYTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void pdsyttrd(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYTTRD(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, double *TAU, double *WORK, int *LWORK,
              int *INFO);
void PDSYTTRD_(char *UPLO, int *N, double *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, double *TAU, double *WORK, int *LWORK,
               int *INFO);
void pdtrcon(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDTRCON(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
             int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PDTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, double *A, int *IA,
              int *JA, int *DESCA, double *RCOND, double *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void pdtrord(char *COMPQ, int *SELECT, int *PARA, int *N, double *T, int *IT,
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
void pdtrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
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
void pdtrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, double *T,
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
void pdtrti2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTI2(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTI2_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pdtrtri(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTRI(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PDTRTRI_(char *UPLO, char *DIAG, int *N, double *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pdtrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PDTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
             int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PDTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, double *A,
              int *IA, int *JA, int *DESCA, double *B, int *IB, int *JB,
              int *DESCB, int *INFO);
void pdtzrzf(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDTZRZF(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
             double *TAU, double *WORK, int *LWORK, int *INFO);
void PDTZRZF_(int *M, int *N, double *A, int *IA, int *JA, int *DESCA,
              double *TAU, double *WORK, int *LWORK, int *INFO);
void pdupdate(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO);
void PDUPDATE(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
              int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
              int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO);
void PDUPDATE_(int *M, int *N, int *I, int *J, int *JO, int *JB, int *JN,
               int *IA, int *JA, double *A, int *DESCA, int *TPIV, int *IPIV,
               int *PANEL, int *BPANEL, int *DS, int *BCAST, int *INFO);
void pdzsum1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PDZSUM1(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PDZSUM1_(int *N, double *ASUM, dcomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX);
void pilaver(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH);
void PILAVER(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH);
void PILAVER_(int *VERS_MAJOR, int *VERS_MINOR, int *VERS_PATCH);
void pmpcol(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL);
void PMPCOL(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
            int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL);
void PMPCOL_(int *MYPROC, int *NPROCS, int *IIL, int *NEEDIL, int *NEEDIU,
             int *PMYILS, int *PMYIUS, int *COLBRT, int *FRSTCL, int *LASTCL);
void pmpim2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS);
void PMPIM2(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS);
void PMPIM2_(int *IL, int *IU, int *NPROCS, int *PMYILS, int *PMYIUS);
void pscsum1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PSCSUM1(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
             int *INCX);
void PSCSUM1_(int *N, float *ASUM, scomplex *X, int *IX, int *JX, int *DESCX,
              int *INCX);
void psdbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO);
void psdbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void psdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void psdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRSV(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
              float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDBTRSV_(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
               float *A, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void psdtsv(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDTSV(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSDTSV_(int *N, int *NRHS, float *DL, float *D, float *DU, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO);
void psdttrf(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRF(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRF_(int *N, float *DL, float *D, float *DU, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void psdttrs(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRS(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
             int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRS_(char *TRANS, int *N, int *NRHS, float *DL, float *D, float *DU,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void psdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
              float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *DL, float *D,
               float *DU, int *JA, int *DESCA, float *B, int *IB, int *DESCB,
               float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void psgbsv(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGBSV(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
            int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGBSV_(int *N, int *BWL, int *BWU, int *NRHS, float *A, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *DESCB, float *WORK,
             int *LWORK, int *INFO);
void psgbtrf(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO);
void PSGBTRF(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
             int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
             int *INFO);
void PSGBTRF_(int *N, int *BWL, int *BWU, float *A, int *JA, int *DESCA,
              int *IPIV, float *AF, int *LAF, float *WORK, int *LWORK,
              int *INFO);
void psgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
             int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, float *A,
              int *JA, int *DESCA, int *IPIV, float *B, int *IB, int *DESCB,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void psgebal(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO);
void PSGEBAL(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
             float *SCALE, int *INFO);
void PSGEBAL_(char *JOB, int *N, float *A, int *DESCA, int *ILO, int *IHI,
              float *SCALE, int *INFO);
void psgebd2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBD2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBD2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO);
void psgebrd(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBRD(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
             float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
             int *INFO);
void PSGEBRD_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *D,
              float *E, float *TAUQ, float *TAUP, float *WORK, int *LWORK,
              int *INFO);
void psgecon(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSGECON(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSGECON_(char *NORM, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void psgeequ(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO);
void PSGEEQU(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO);
void PSGEEQU_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX, int *INFO);
void psgehd2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHD2(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHD2_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO);
void psgehrd(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHRD(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEHRD_(int *N, int *ILO, int *IHI, float *A, int *IA, int *JA,
              int *DESCA, float *TAU, float *WORK, int *LWORK, int *INFO);
void psgelq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgelqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGELQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgels(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGELS(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
            int *LWORK, int *INFO);
void PSGELS_(char *TRANS, int *M, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *WORK,
             int *LWORK, int *INFO);
void psgeql2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQL2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQL2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgeqlf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQLF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQLF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgeqpf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEQPF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSGEQPF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgeqr2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQR2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQR2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgeqrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGEQRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgerfs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
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
void psgerq2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQ2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQ2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgerqf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSGERQF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psgesv(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSGESV(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
            int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSGESV_(int *N, int *NRHS, float *A, int *IA, int *JA, int *DESCA,
             int *IPIV, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void psgesvd(char *JOBU, char *JOBVT, int *M, int *N, float *A, int *IA,
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
void psgesvx(char *FACT, char *TRANS, int *N, int *NRHS, float *A, int *IA,
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
void psgetf2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETF2(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETF2_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO);
void psgetrf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETRF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             int *INFO);
void PSGETRF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              int *INFO);
void psgetri(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSGETRI(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSGETRI_(int *N, float *A, int *IA, int *JA, int *DESCA, int *IPIV,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void psgetrs(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PSGETRS(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PSGETRS_(char *TRANS, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, int *IPIV, float *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void psggqrf(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGQRF(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGQRF_(int *N, int *M, int *P, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO);
void psggrqf(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGRQF(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
             float *WORK, int *LWORK, int *INFO);
void PSGGRQF_(int *M, int *P, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAUA, float *B, int *IB, int *JB, int *DESCB, float *TAUB,
              float *WORK, int *LWORK, int *INFO);
void pshseqr(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSHSEQR(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
             int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSHSEQR_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, float *H,
              int *DESCH, float *WR, float *WI, float *Z, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pslabad(int *ICTXT, float *SMALL, float *LARGE);
void PSLABAD(int *ICTXT, float *SMALL, float *LARGE);
void PSLABAD_(int *ICTXT, float *SMALL, float *LARGE);
void pslabrd(int *M, int *N, int *NB, float *A, int *IA, int *JA, int *DESCA,
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
void pslacon(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE);
void PSLACON(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
             int *JX, int *DESCX, int *ISGN, float *EST, int *KASE);
void PSLACON_(int *N, float *V, int *IV, int *JV, int *DESCV, float *X, int *IX,
              int *JX, int *DESCX, int *ISGN, float *EST, int *KASE);
void pslaconsb(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK);
void PSLACONSB(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
               float *H33, float *H43H34, float *BUF, int *LWORK);
void PSLACONSB_(float *A, int *DESCA, int *I, int *L, int *M, float *H44,
                float *H33, float *H43H34, float *BUF, int *LWORK);
void pslacp2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACP2(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACP2_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB);
void pslacp3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV);
void PSLACP3(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
             int *JJ, int *REV);
void PSLACP3_(int *M, int *I, float *A, int *DESCA, float *B, int *LDB, int *II,
              int *JJ, int *REV);
void pslacpy(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACPY(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB);
void PSLACPY_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB);
void pslaed0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO);
void PSLAED0(int *N, float *D, float *E, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *IWORK, int *INFO);
void PSLAED0_(int *N, float *D, float *E, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *IWORK, int *INFO);
void pslaed1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO);
void PSLAED1(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
             int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO);
void PSLAED1_(int *N, int *N1, float *D, int *ID, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *RHO, float *WORK, int *IWORK, int *INFO);
void pslaed2(int *ICTXT, int *K, int *N, int *N1, int *NB, float *D, int *DROW,
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
void pslaed3(int *ICTXT, int *K, int *N, int *NB, float *D, int *DROW,
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
void pslaedz(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK);
void PSLAEDZ(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
             int *DESCQ, float *Z, float *WORK);
void PSLAEDZ_(int *N, int *N1, int *ID, float *Q, int *IQ, int *JQ, int *LDQ,
              int *DESCQ, float *Z, float *WORK);
void pslaevswp(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK);
void PSLAEVSWP(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK);
void PSLAEVSWP_(int *N, float *ZIN, int *LDZI, float *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, float *WORK, int *LWORK);
void pslahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
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
void pslahrd(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK);
void PSLAHRD(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
             float *WORK);
void PSLAHRD_(int *N, int *K, int *NB, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *T, float *Y, int *IY, int *JY, int *DESCY,
              float *WORK);
void pslamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PSLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PSLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void pslamve(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK);
void PSLAMVE(char *UPLO, int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *B, int *IB, int *JB, int *DESCB, float *DWORK);
void PSLAMVE_(char *UPLO, int *M, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *DWORK);
void pslapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PSLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
             int *DESCIP, int *IWORK);
void PSLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *IPIV, int *IP, int *JP,
              int *DESCIP, int *IWORK);
void pslapv2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PSLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PSLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, float *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void pslaqge(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED);
void PSLAQGE(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
             float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED);
void PSLAQGE_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *R,
              float *C, float *ROWCND, float *COLCND, float *AMAX, char *EQUED);
void pslaqr2(int *WANTT, int *WANTZ, int *N, int *KTOP, int *KBOT, int *NW,
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
void pslaqr4(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, float *A,
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
void pslaqr5(int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP, int *KBOT,
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
void pslaqsy(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PSLAQSY(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void PSLAQSY_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *SR, float *SC, float *SCOND, float *AMAX, char *EQUED);
void pslared1d(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED1D(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED1D_(int *N, int *IA, int *JA, int *DESC, float *BYCOL, float *BYALL,
                float *WORK, int *LWORK);
void pslared2d(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED2D(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
               float *WORK, int *LWORK);
void PSLARED2D_(int *N, int *IA, int *JA, int *DESC, float *BYROW, float *BYALL,
                float *WORK, int *LWORK);
void pslarf(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK);
void PSLARF(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
            int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
            float *WORK);
void PSLARF_(char *SIDE, int *M, int *N, float *V, int *IV, int *JV, int *DESCV,
             int *INCV, float *TAU, float *C, int *IC, int *JC, int *DESCC,
             float *WORK);
void pslarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARFB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
             float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARFB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, float *V, int *IV, int *JV, int *DESCV, float *T,
              float *C, int *IC, int *JC, int *DESCC, float *WORK);
void pslarfg(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU);
void PSLARFG(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
             int *JX, int *DESCX, int *INCX, float *TAU);
void PSLARFG_(int *N, float *ALPHA, int *IAX, int *JAX, float *X, int *IX,
              int *JX, int *DESCX, int *INCX, float *TAU);
void pslarft(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARFT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARFT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void pslarz(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK);
void PSLARZ(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
            int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
            int *DESCC, float *WORK);
void PSLARZ_(char *SIDE, int *M, int *N, int *L, float *V, int *IV, int *JV,
             int *DESCV, int *INCV, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK);
void pslarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARZB(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
             int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
             float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK);
void PSLARZB_(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
              int *N, int *K, int *L, float *V, int *IV, int *JV, int *DESCV,
              float *T, float *C, int *IC, int *JC, int *DESCC, float *WORK);
void pslarzt(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARZT(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
             int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void PSLARZT_(char *DIRECT, char *STOREV, int *N, int *K, float *V, int *IV,
              int *JV, int *DESCV, float *TAU, float *T, float *WORK);
void pslascl(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PSLASCL(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, int *INFO);
void PSLASCL_(char *TYPE, float *CFROM, float *CTO, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, int *INFO);
void pslase2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASE2(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASE2_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA);
void pslaset(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASET(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
             int *IA, int *JA, int *DESCA);
void PSLASET_(char *UPLO, int *M, int *N, float *ALPHA, float *BETA, float *A,
              int *IA, int *JA, int *DESCA);
void pslasmsub(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK);
void PSLASMSUB(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
               float *BUF, int *LWORK);
void PSLASMSUB_(float *A, int *DESCA, int *I, int *L, int *K, float *SMLNUM,
                float *BUF, int *LWORK);
void pslasrt(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSLASRT(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ, int *DESCQ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSLASRT_(char *ID, int *N, float *D, float *Q, int *IQ, int *JQ,
              int *DESCQ, float *WORK, int *LWORK, int *IWORK, int *LIWORK,
              int *INFO);
void pslassq(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PSLASSQ(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
             float *SCALE, float *SUMSQ);
void PSLASSQ_(int *N, float *X, int *IX, int *JX, int *DESCX, int *INCX,
              float *SCALE, float *SUMSQ);
void pslaswp(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PSLASWP(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PSLASWP_(char *DIREC, char *ROWCOL, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void pslatrd(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK);
void PSLATRD(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
             int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
             int *JW, int *DESCW, float *WORK);
void PSLATRD_(char *UPLO, int *N, int *NB, float *A, int *IA, int *JA,
              int *DESCA, float *D, float *E, float *TAU, float *W, int *IW,
              int *JW, int *DESCW, float *WORK);
void pslatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK);
void PSLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             float *A, int *IA, int *JA, int *DESCA, float *X, int *IX, int *JX,
             int *DESCX, float *SCALE, float *CNORM, float *WORK);
void PSLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              float *A, int *IA, int *JA, int *DESCA, float *X, int *IX,
              int *JX, int *DESCX, float *SCALE, float *CNORM, float *WORK);
void pslatrz(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK);
void PSLATRZ(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK);
void PSLATRZ_(int *M, int *N, int *L, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK);
void pslauu2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUU2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUU2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void pslauum(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUUM(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void PSLAUUM_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA);
void pslawil(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V);
void PSLAWIL(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
             float *H33, float *H43H34, float *V);
void PSLAWIL_(int *II, int *JJ, int *M, float *A, int *DESCA, float *H44,
              float *H33, float *H43H34, float *V);
void psorg2l(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2L(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2L_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorg2r(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2R(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORG2R_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorgl2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGL2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGL2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorglq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGLQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGLQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorgql(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQL(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQL_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorgqr(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQR(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGQR_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorgr2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGR2(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGR2_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorgrq(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGRQ(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
             float *TAU, float *WORK, int *LWORK, int *INFO);
void PSORGRQ_(int *M, int *N, int *K, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void psorm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psorm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMBR(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMBR_(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMHR(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
             float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
             int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMHR_(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
              float *A, int *IA, int *JA, int *DESCA, float *TAU, float *C,
              int *IC, int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psorml2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORML2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormlq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormql(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormqr(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormr2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMR3_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormrq(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A, int *IA,
             int *JA, int *DESCA, float *TAU, float *C, int *IC, int *JC,
             int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRZ(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMRZ_(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void psormtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
             int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
             int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void PSORMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, float *A,
              int *IA, int *JA, int *DESCA, float *TAU, float *C, int *IC,
              int *JC, int *DESCC, float *WORK, int *LWORK, int *INFO);
void pspbsv(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSPBSV(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
            int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
            int *INFO);
void PSPBSV_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *WORK, int *LWORK,
             int *INFO);
void pspbtrf(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRF(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
             float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRF_(char *UPLO, int *N, int *BW, float *A, int *JA, int *DESCA,
              float *AF, int *LAF, float *WORK, int *LWORK, int *INFO);
void pspbtrs(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO);
void PSPBTRS(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
             int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
             float *WORK, int *LWORK, int *INFO);
void PSPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, float *A, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO);
void pspbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
              int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, float *A,
               int *JA, int *DESCA, float *B, int *IB, int *DESCB, float *AF,
               int *LAF, float *WORK, int *LWORK, int *INFO);
void pspocon(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSPOCON(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSPOCON_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *ANORM, float *RCOND, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void pspoequ(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PSPOEQU(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
             float *SC, float *SCOND, float *AMAX, int *INFO);
void PSPOEQU_(int *N, float *A, int *IA, int *JA, int *DESCA, float *SR,
              float *SC, float *SCOND, float *AMAX, int *INFO);
void psporfs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
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
void psposv(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOSV(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
            int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOSV_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void psposvx(char *FACT, char *UPLO, int *N, int *NRHS, float *A, int *IA,
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
void pspotf2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTF2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTF2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pspotrf(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRF(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRF_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pspotri(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRI(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PSPOTRI_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pspotrs(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOTRS(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSPOTRS_(char *UPLO, int *N, int *NRHS, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void psptsv(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO);
void PSPTSV(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
            float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO);
void PSPTSV_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *WORK, int *LWORK, int *INFO);
void pspttrf(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPTTRF(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
             int *LAF, float *WORK, int *LWORK, int *INFO);
void PSPTTRF_(int *N, float *D, float *E, int *JA, int *DESCA, float *AF,
              int *LAF, float *WORK, int *LWORK, int *INFO);
void pspttrs(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO);
void PSPTTRS(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
             float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
             int *LWORK, int *INFO);
void PSPTTRS_(int *N, int *NRHS, float *D, float *E, int *JA, int *DESCA,
              float *B, int *IB, int *DESCB, float *AF, int *LAF, float *WORK,
              int *LWORK, int *INFO);
void pspttrsv(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO);
void PSPTTRSV(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
              int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
              float *WORK, int *LWORK, int *INFO);
void PSPTTRSV_(char *UPLO, int *N, int *NRHS, float *D, float *E, int *JA,
               int *DESCA, float *B, int *IB, int *DESCB, float *AF, int *LAF,
               float *WORK, int *LWORK, int *INFO);
void psrot(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO);
void PSROT(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
           double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
           float *SN, float *WORK, int *LWORK, int *INFO);
void PSROT_(int *N, double *X, int *IX, int *JX, int *DESCX, int *INCX,
            double *Y, int *IY, int *JY, int *DESCY, int *INCY, float *CS,
            float *SN, float *WORK, int *LWORK, int *INFO);
void psrscl(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PSRSCL(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
            int *INCX);
void PSRSCL_(int *N, float *SA, float *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void psstebz(int *ICTXT, char *RANGE, char *ORDER, int *N, float *VL, float *VU,
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
void pslaebz(int *IJOB, int *N, int *MMAX, int *MINP, float *ABSTOL,
             float *RELTOL, float *PIVMIN, float *D, int *NVAL, float *INTVL,
             int *INTVLCT, int *MOUT, float *LSAVE, int *IEFLAG, int *INFO);
void PSLAEBZ(int *IJOB, int *N, int *MMAX, int *MINP, float *ABSTOL,
             float *RELTOL, float *PIVMIN, float *D, int *NVAL, float *INTVL,
             int *INTVLCT, int *MOUT, float *LSAVE, int *IEFLAG, int *INFO);
void PSLAEBZ_(int *IJOB, int *N, int *MMAX, int *MINP, float *ABSTOL,
              float *RELTOL, float *PIVMIN, float *D, int *NVAL, float *INTVL,
              int *INTVLCT, int *MOUT, float *LSAVE, int *IEFLAG, int *INFO);
void pslaecv(int *IJOB, int *KF, int *KL, float *INTVL, int *INTVLCT, int *NVAL,
             float *ABSTOL, float *RELTOL);
void PSLAECV(int *IJOB, int *KF, int *KL, float *INTVL, int *INTVLCT, int *NVAL,
             float *ABSTOL, float *RELTOL);
void PSLAECV_(int *IJOB, int *KF, int *KL, float *INTVL, int *INTVLCT,
              int *NVAL, float *ABSTOL, float *RELTOL);
void pslapdct(float *SIGMA, int *N, float *D, float *PIVMIN, int *COUNT);
void PSLAPDCT(float *SIGMA, int *N, float *D, float *PIVMIN, int *COUNT);
void PSLAPDCT_(float *SIGMA, int *N, float *D, float *PIVMIN, int *COUNT);
void psstedc(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSSTEDC(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
             int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
             int *LIWORK, int *INFO);
void PSSTEDC_(char *COMPZ, int *N, float *D, float *E, float *Q, int *IQ,
              int *JQ, int *DESCQ, float *WORK, int *LWORK, int *IWORK,
              int *LIWORK, int *INFO);
void psstein(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
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
void pssyev(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO);
void PSSYEV(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
            int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
            float *WORK, int *LWORK, int *INFO);
void PSSYEV_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *INFO);
void pssyevd(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSYEVD(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
             float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PSSYEVD_(char *JOBZ, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *W, float *Z, int *IZ, int *JZ, int *DESCZ,
              float *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pssyevr(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
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
void pssyevx(char *JOBZ, char *RANGE, char *UPLO, int *N, float *A, int *IA,
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
void pssygs2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSSYGS2(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void PSSYGS2_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, int *INFO);
void pssygst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO);
void PSSYGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
             int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
             int *INFO);
void PSSYGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              int *INFO);
void pssygvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N, float *A,
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
void pssyngst(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO);
void PSSYNGST(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
              int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
              float *WORK, int *LWORK, int *INFO);
void PSSYNGST_(int *IBTYPE, char *UPLO, int *N, float *A, int *IA, int *JA,
               int *DESCA, float *B, int *IB, int *JB, int *DESCB, float *SCALE,
               float *WORK, int *LWORK, int *INFO);
void pssyntrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYNTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYNTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO);
void pssytd2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTD2(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTD2_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void pssytrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
             float *D, float *E, float *TAU, float *WORK, int *LWORK,
             int *INFO);
void PSSYTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void pssyttrd(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYTTRD(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *D, float *E, float *TAU, float *WORK, int *LWORK,
              int *INFO);
void PSSYTTRD_(char *UPLO, int *N, float *A, int *IA, int *JA, int *DESCA,
               float *D, float *E, float *TAU, float *WORK, int *LWORK,
               int *INFO);
void pstrcon(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSTRCON(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
             int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
             int *IWORK, int *LIWORK, int *INFO);
void PSTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, float *A, int *IA,
              int *JA, int *DESCA, float *RCOND, float *WORK, int *LWORK,
              int *IWORK, int *LIWORK, int *INFO);
void pstrord(char *COMPQ, int *SELECT, int *PARA, int *N, float *T, int *IT,
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
void pstrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
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
void pstrsen(char *JOB, char *COMPQ, int *SELECT, int *PARA, int *N, float *T,
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
void pstrti2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTI2(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTI2_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pstrtri(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTRI(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PSTRTRI_(char *UPLO, char *DIAG, int *N, float *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pstrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PSTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
             int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
             int *DESCB, int *INFO);
void PSTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS, float *A,
              int *IA, int *JA, int *DESCA, float *B, int *IB, int *JB,
              int *DESCB, int *INFO);
void pstzrzf(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSTZRZF(int *M, int *N, float *A, int *IA, int *JA, int *DESCA, float *TAU,
             float *WORK, int *LWORK, int *INFO);
void PSTZRZF_(int *M, int *N, float *A, int *IA, int *JA, int *DESCA,
              float *TAU, float *WORK, int *LWORK, int *INFO);
void pzdbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO);
void pzdbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzdbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZDBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzdbtrsv(char *UPLO, char *TRANS, int *N, int *BWL, int *BWU, int *NRHS,
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
void pzdrscl(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PZDRSCL(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
             int *INCX);
void PZDRSCL_(int *N, double *SA, dcomplex *SX, int *IX, int *JX, int *DESCX,
              int *INCX);
void pzdtsv(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDTSV(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZDTSV_(int *N, int *NRHS, dcomplex *DL, dcomplex *D, dcomplex *DU,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO);
void pzdttrf(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZDTTRF(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
             int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZDTTRF_(int *N, dcomplex *DL, dcomplex *D, dcomplex *DU, int *JA,
              int *DESCA, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void pzdttrs(char *TRANS, int *N, int *NRHS, dcomplex *DL, dcomplex *D,
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
void pzdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *DL,
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
void pzgbsv(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGBSV(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGBSV_(int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO);
void pzgbtrf(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZGBTRF(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
             int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZGBTRF_(int *N, int *BWL, int *BWU, dcomplex *A, int *JA, int *DESCA,
              int *IPIV, dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK,
              int *INFO);
void pzgbtrs(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZGBTRS(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
             int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZGBTRS_(char *TRANS, int *N, int *BWL, int *BWU, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, int *IPIV, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzgebd2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBD2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBD2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO);
void pzgebrd(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBRD(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
             dcomplex *WORK, int *LWORK, int *INFO);
void PZGEBRD_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAUQ, dcomplex *TAUP,
              dcomplex *WORK, int *LWORK, int *INFO);
void pzgecon(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGECON(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGECON_(char *NORM, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void pzgeequ(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PZGEEQU(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             int *INFO);
void PZGEEQU_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, int *INFO);
void pzgehd2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHD2(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHD2_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgehrd(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHRD(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEHRD_(int *N, int *ILO, int *IHI, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgelq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgelqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGELQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgels(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGELS(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
            int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
            dcomplex *WORK, int *LWORK, int *INFO);
void PZGELS_(char *TRANS, int *M, int *N, int *NRHS, dcomplex *A, int *IA,
             int *JA, int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *WORK, int *LWORK, int *INFO);
void pzgeql2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQL2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQL2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgeqlf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQLF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQLF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgeqpf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGEQPF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZGEQPF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void pzgeqr2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQR2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQR2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgeqrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGEQRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgerfs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
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
void pzgerq2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQ2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQ2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgerqf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZGERQF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzgesv(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZGESV(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
            int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZGESV_(int *N, int *NRHS, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pzgesvd(char *JOBU, char *JOBVT, int *M, int *N, dcomplex *A, int *IA,
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
void pzgesvx(char *FACT, char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA,
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
void pzgetf2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETF2(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETF2_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void pzgetrf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETRF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *IPIV, int *INFO);
void PZGETRF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *IPIV, int *INFO);
void pzgetri(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PZGETRI(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
             dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void PZGETRI_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV,
              dcomplex *WORK, int *LWORK, int *IWORK, int *LIWORK, int *INFO);
void pzgetrs(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PZGETRS(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
             int *INFO);
void PZGETRS_(char *TRANS, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *IPIV, dcomplex *B, int *IB, int *JB, int *DESCB,
              int *INFO);
void pzggqrf(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGQRF(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGQRF_(int *N, int *M, int *P, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void pzggrqf(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGRQF(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
             dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void PZGGRQF_(int *M, int *P, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAUA, dcomplex *B, int *IB, int *JB, int *DESCB,
              dcomplex *TAUB, dcomplex *WORK, int *LWORK, int *INFO);
void pzheev(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
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
void pzheevd(char *JOBZ, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
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
void pzheevr(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
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
void pzheevx(char *JOBZ, char *RANGE, char *UPLO, int *N, dcomplex *A, int *IA,
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
void pzhegs2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZHEGS2(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZHEGS2_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pzhegst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO);
void PZHEGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
             double *SCALE, int *INFO);
void PZHEGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, int *INFO);
void pzhegvx(int *IBTYPE, char *JOBZ, char *RANGE, char *UPLO, int *N,
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
void pzhengst(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO);
void PZHENGST(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
              double *SCALE, dcomplex *WORK, int *LWORK, int *INFO);
void PZHENGST_(int *IBTYPE, char *UPLO, int *N, dcomplex *A, int *IA, int *JA,
               int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB,
               double *SCALE, dcomplex *WORK, int *LWORK, int *INFO);
void pzhentrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO);
void PZHENTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              dcomplex *RWORK, int *LRWORK, int *INFO);
void PZHENTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               dcomplex *RWORK, int *LRWORK, int *INFO);
void pzhetd2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETD2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETD2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void pzhetrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
             int *INFO);
void PZHETRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void pzhettrd(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZHETTRD(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
              int *INFO);
void PZHETTRD_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
               double *D, double *E, dcomplex *TAU, dcomplex *WORK, int *LWORK,
               int *INFO);
void pzlabrd(int *M, int *N, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
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
void pzlacgv(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PZLACGV(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void PZLACGV_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX);
void pzlacon(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE);
void PZLACON(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
             int *IX, int *JX, int *DESCX, double *EST, int *KASE);
void PZLACON_(int *N, dcomplex *V, int *IV, int *JV, int *DESCV, dcomplex *X,
              int *IX, int *JX, int *DESCX, double *EST, int *KASE);
void pzlaconsb(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK);
void PZLACONSB(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
               dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK);
void PZLACONSB_(dcomplex *A, int *DESCA, int *I, int *L, int *M, dcomplex *H44,
                dcomplex *H33, dcomplex *H43H34, dcomplex *BUF, int *LWORK);
void pzlacp2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACP2(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACP2_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void pzlacp3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PZLACP3(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
             int *II, int *JJ, int *REV);
void PZLACP3_(int *M, int *I, dcomplex *A, int *DESCA, dcomplex *B, int *LDB,
              int *II, int *JJ, int *REV);
void pzlacpy(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACPY(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void PZLACPY_(char *UPLO, int *M, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB);
void pzlaevswp(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK);
void PZLAEVSWP(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
               int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK);
void PZLAEVSWP_(int *N, double *ZIN, int *LDZI, dcomplex *Z, int *IZ, int *JZ,
                int *DESCZ, int *NVS, int *KEY, double *RWORK, int *LRWORK);
void pzlahqr(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *A,
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
void pzlahrd(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK);
void PZLAHRD(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY, int *JY,
             int *DESCY, dcomplex *WORK);
void PZLAHRD_(int *N, int *K, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *TAU, dcomplex *T, dcomplex *Y, int *IY,
              int *JY, int *DESCY, dcomplex *WORK);
void pzlamr1d(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PZLAMR1D(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
              int *IB, int *JB, int *DESCB);
void PZLAMR1D_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B,
               int *IB, int *JB, int *DESCB);
void pzlapiv(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PZLAPIV(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
             int *JP, int *DESCIP, int *IWORK);
void PZLAPIV_(char *DIREC, char *ROWCOL, char *PIVROC, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *IPIV, int *IP,
              int *JP, int *DESCIP, int *IWORK);
void pzlapv2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PZLAPV2(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void PZLAPV2_(char *DIREC, char *ROWCOL, int *M, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, int *IPIV, int *IP, int *JP, int *DESCIP);
void pzlaqge(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PZLAQGE(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *R, double *C, double *ROWCND, double *COLCND, double *AMAX,
             char *EQUED);
void PZLAQGE_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *R, double *C, double *ROWCND, double *COLCND,
              double *AMAX, char *EQUED);
void pzlaqsy(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PZLAQSY(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void PZLAQSY_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *SR, double *SC, double *SCOND, double *AMAX, char *EQUED);
void pzlarf(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARF(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARF_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void pzlarfb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
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
void pzlarfc(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARFC(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARFC_(char *SIDE, int *M, int *N, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK);
void pzlarfg(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU);
void PZLARFG(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
             int *JX, int *DESCX, int *INCX, dcomplex *TAU);
void PZLARFG_(int *N, dcomplex *ALPHA, int *IAX, int *JAX, dcomplex *X, int *IX,
              int *JX, int *DESCX, int *INCX, dcomplex *TAU);
void pzlarft(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARFT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARFT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void pzlarz(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARZ(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
            int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC, int *JC,
            int *DESCC, dcomplex *WORK);
void PZLARZ_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void pzlarzb(char *SIDE, char *TRANS, char *DIRECT, char *STOREV, int *M,
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
void pzlarzc(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARZC(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
             int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK);
void PZLARZC_(char *SIDE, int *M, int *N, int *L, dcomplex *V, int *IV, int *JV,
              int *DESCV, int *INCV, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK);
void pzlarzt(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARZT(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
             int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void PZLARZT_(char *DIRECT, char *STOREV, int *N, int *K, dcomplex *V, int *IV,
              int *JV, int *DESCV, dcomplex *TAU, dcomplex *T, dcomplex *WORK);
void pzlascl(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO);
void PZLASCL(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO);
void PZLASCL_(char *TYPE, double *CFROM, double *CTO, int *M, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, int *INFO);
void pzlase2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASE2(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASE2_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA);
void pzlaset(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASET(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
             dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLASET_(char *UPLO, int *M, int *N, dcomplex *ALPHA, dcomplex *BETA,
              dcomplex *A, int *IA, int *JA, int *DESCA);
void pzlasmsub(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK);
void PZLASMSUB(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
               dcomplex *BUF, int *LWORK);
void PZLASMSUB_(dcomplex *A, int *DESCA, int *I, int *L, int *K, double *SMLNUM,
                dcomplex *BUF, int *LWORK);
void pzlassq(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PZLASSQ(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
             double *SCALE, double *SUMSQ);
void PZLASSQ_(int *N, dcomplex *X, int *IX, int *JX, int *DESCX, int *INCX,
              double *SCALE, double *SUMSQ);
void pzlaswp(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PZLASWP(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *K1, int *K2, int *IPIV);
void PZLASWP_(char *DIREC, char *ROWCOL, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *K1, int *K2, int *IPIV);
void pzlatrd(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK);
void PZLATRD(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
             int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
             int *IW, int *JW, int *DESCW, dcomplex *WORK);
void PZLATRD_(char *UPLO, int *N, int *NB, dcomplex *A, int *IA, int *JA,
              int *DESCA, double *D, double *E, dcomplex *TAU, dcomplex *W,
              int *IW, int *JW, int *DESCW, dcomplex *WORK);
void pzlatrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK);
void PZLATRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
             int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK);
void PZLATRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *WORK);
void pzlatrz(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK);
void PZLATRZ(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK);
void PZLATRZ_(int *M, int *N, int *L, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK);
void pzlattrs(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO);
void PZLATTRS(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
              int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO);
void PZLATTRS_(char *UPLO, char *TRANS, char *DIAG, char *NORMIN, int *N,
               dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *X, int *IX,
               int *JX, int *DESCX, double *SCALE, double *CNORM, int *INFO);
void pzlauu2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUU2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUU2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void pzlauum(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUUM(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void PZLAUUM_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA);
void pzlawil(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V);
void PZLAWIL(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
             dcomplex *H33, dcomplex *H43H34, dcomplex *V);
void PZLAWIL_(int *II, int *JJ, int *M, dcomplex *A, int *DESCA, dcomplex *H44,
              dcomplex *H33, dcomplex *H43H34, dcomplex *V);
void pzmax1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PZMAX1(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
            int *DESCX, int *INCX);
void PZMAX1_(int *N, double *AMAX, int *INDX, dcomplex *X, int *IX, int *JX,
             int *DESCX, int *INCX);
void zcombamax1(dcomplex *V1, dcomplex *V2);
void ZCOMBAMAX1(dcomplex *V1, dcomplex *V2);
void ZCOMBAMAX1_(dcomplex *V1, dcomplex *V2);
void pzpbsv(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPBSV(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPBSV_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO);
void pzpbtrf(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRF(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRF_(char *UPLO, int *N, int *BW, dcomplex *A, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzpbtrs(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRS(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRS_(char *UPLO, int *N, int *BW, int *NRHS, dcomplex *A, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzpbtrsv(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRSV(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
              int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPBTRSV_(char *UPLO, char *TRANS, int *N, int *BW, int *NRHS, dcomplex *A,
               int *JA, int *DESCA, dcomplex *B, int *IB, int *DESCB,
               dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzpocon(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZPOCON(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZPOCON_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              double *ANORM, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void pzpoequ(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PZPOEQU(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
             double *SC, double *SCOND, double *AMAX, int *INFO);
void PZPOEQU_(int *N, dcomplex *A, int *IA, int *JA, int *DESCA, double *SR,
              double *SC, double *SCOND, double *AMAX, int *INFO);
void pzporfs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
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
void pzposv(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOSV(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOSV_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pzposvx(char *FACT, char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA,
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
void pzpotf2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTF2(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTF2_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pzpotrf(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRF(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRF_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pzpotri(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRI(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             int *INFO);
void PZPOTRI_(char *UPLO, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              int *INFO);
void pzpotrs(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOTRS(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void PZPOTRS_(char *UPLO, int *N, int *NRHS, dcomplex *A, int *IA, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *JB, int *DESCB, int *INFO);
void pzptsv(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPTSV(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
            int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
            int *LWORK, int *INFO);
void PZPTSV_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *WORK,
             int *LWORK, int *INFO);
void pzpttrf(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRF(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
             dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRF_(int *N, dcomplex *D, dcomplex *E, int *JA, int *DESCA,
              dcomplex *AF, int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzpttrs(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRS(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
             int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
             int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void PZPTTRS_(char *UPLO, int *N, int *NRHS, dcomplex *D, dcomplex *E, int *JA,
              int *DESCA, dcomplex *B, int *IB, int *DESCB, dcomplex *AF,
              int *LAF, dcomplex *WORK, int *LWORK, int *INFO);
void pzpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, dcomplex *D,
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
void pzstein(int *N, double *D, double *E, int *M, double *W, int *IBLOCK,
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
void pztrcon(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZTRCON(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
             int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
             double *RWORK, int *LRWORK, int *INFO);
void PZTRCON_(char *NORM, char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA,
              int *JA, int *DESCA, double *RCOND, dcomplex *WORK, int *LWORK,
              double *RWORK, int *LRWORK, int *INFO);
void pztrevc(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO);
void PZTREVC(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
             int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
             int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO);
void PZTREVC_(char *SIDE, char *HOWMNY, int *SELECT, int *N, dcomplex *T,
              int *DESCT, dcomplex *VL, int *DESCVL, dcomplex *VR, int *DESCVR,
              int *MM, int *M, dcomplex *WORK, double *RWORK, int *INFO);
void pztrrfs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
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
void pztrti2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTI2(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTI2_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pztrtri(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTRI(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
             int *DESCA, int *INFO);
void PZTRTRI_(char *UPLO, char *DIAG, int *N, dcomplex *A, int *IA, int *JA,
              int *DESCA, int *INFO);
void pztrtrs(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PZTRTRS(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
             dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
             int *JB, int *DESCB, int *INFO);
void PZTRTRS_(char *UPLO, char *TRANS, char *DIAG, int *N, int *NRHS,
              dcomplex *A, int *IA, int *JA, int *DESCA, dcomplex *B, int *IB,
              int *JB, int *DESCB, int *INFO);
void pztzrzf(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZTZRZF(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZTZRZF_(int *M, int *N, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzung2l(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2L(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2L_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzung2r(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2R(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNG2R_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzungl2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGL2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGL2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzunglq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGLQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGLQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzungql(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQL(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQL_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzungqr(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQR(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGQR_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzungr2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGR2(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGR2_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzungrq(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGRQ(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
             dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNGRQ_(int *M, int *N, int *K, dcomplex *A, int *IA, int *JA, int *DESCA,
              dcomplex *TAU, dcomplex *WORK, int *LWORK, int *INFO);
void pzunm2l(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2L(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2L_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunm2r(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2R(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNM2R_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmbr(char *VECT, char *SIDE, char *TRANS, int *M, int *N, int *K,
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
void pzunmhr(char *SIDE, char *TRANS, int *M, int *N, int *ILO, int *IHI,
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
void pzunml2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNML2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNML2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmlq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMLQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMLQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmql(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQL(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQL_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmqr(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQR(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMQR_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmr2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMR2(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMR2_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmr3(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
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
void pzunmrq(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMRQ(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMRQ_(char *SIDE, char *TRANS, int *M, int *N, int *K, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void pzunmrz(char *SIDE, char *TRANS, int *M, int *N, int *K, int *L,
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
void pzunmtr(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMTR(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
             int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
             int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void PZUNMTR_(char *SIDE, char *UPLO, char *TRANS, int *M, int *N, dcomplex *A,
              int *IA, int *JA, int *DESCA, dcomplex *TAU, dcomplex *C, int *IC,
              int *JC, int *DESCC, dcomplex *WORK, int *LWORK, int *INFO);
void sdbtf2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTF2(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTF2_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void sdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void SDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void sdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void SDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void SDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void sdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void SDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void SDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void slamsh(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP);
void SLAMSH(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
            int *N, float *ULP);
void SLAMSH_(float *S, int *LDS, int *NBULGE, int *JBLK, float *H, int *LDH,
             int *N, float *ULP);
void slapst(char *ID, int *N, float *D, int *INDX, int *INFO);
void SLAPST(char *ID, int *N, float *D, int *INDX, int *INFO);
void SLAPST_(char *ID, int *N, float *D, int *INDX, int *INFO);
void slaqr6(char *JOB, int *WANTT, int *WANTZ, int *KACC22, int *N, int *KTOP,
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
void slar1va(int *N, int *B1, int *BN, float *LAMBDA, float *D, float *L,
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
void slaref(char *TYPE, float *A, int *LDA, int *WANTZ, float *Z, int *LDZ,
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
void slarrb2(int *N, float *D, float *LLD, int *IFIRST, int *ILAST,
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
void slaneg2(int *N, float *D, float *LLD, float *SIGMA, float *PIVMIN, int *R);
void SLANEG2(int *N, float *D, float *LLD, float *SIGMA, float *PIVMIN, int *R);
void SLANEG2_(int *N, float *D, float *LLD, float *SIGMA, float *PIVMIN,
              int *R);
void slaneg2a(int *N, float *DLLD, float *SIGMA, float *PIVMIN, int *R);
void SLANEG2A(int *N, float *DLLD, float *SIGMA, float *PIVMIN, int *R);
void SLANEG2A_(int *N, float *DLLD, float *SIGMA, float *PIVMIN, int *R);
void slarrd2(char *RANGE, char *ORDER, int *N, float *VL, float *VU, int *IL,
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
void slarre2(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
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
void slarre2a(char *RANGE, int *N, float *VL, float *VU, int *IL, int *IU,
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
void slarrf2(int *N, float *D, float *L, float *LD, int *CLSTRT, int *CLEND,
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
void slarrv2(int *N, float *VL, float *VU, float *D, float *L, double *PIVMIN,
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
void slasorte(float *S, int *LDS, int *J, float *OUT, int *INFO);
void SLASORTE(float *S, int *LDS, int *J, float *OUT, int *INFO);
void SLASORTE_(float *S, int *LDS, int *J, float *OUT, int *INFO);
void slasrt2(char *ID, int *N, float *D, int *KEY, int *INFO);
void SLASRT2(char *ID, int *N, float *D, int *KEY, int *INFO);
void SLASRT2_(char *ID, int *N, float *D, int *KEY, int *INFO);
void spttrsv(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void SPTTRSV(char *TRANS, int *N, int *NRHS, float *D, scomplex *E, scomplex *B,
             int *LDB, int *INFO);
void SPTTRSV_(char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void sstegr2(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
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
void sstegr2a(char *JOBZ, char *RANGE, int *N, float *D, float *E, float *VL,
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
void sstegr2b(char *JOBZ, int *N, float *D, float *E, int *M, float *W,
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
void sstein2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void SSTEIN2(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
             int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
             int *IWORK, int *IFAIL, int *INFO);
void SSTEIN2_(int *N, float *D, float *E, int *M, float *W, int *IBLOCK,
              int *ISPLIT, float *ORFAC, float *Z, int *LDZ, float *WORK,
              int *IWORK, int *IFAIL, int *INFO);
void ssteqr2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void SSTEQR2(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
             int *NR, float *WORK, int *INFO);
void SSTEQR2_(char *COMPZ, int *N, float *D, float *E, float *Z, int *LDZ,
              int *NR, float *WORK, int *INFO);
void strmvt(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ);
void STRMVT(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
            float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ);
void STRMVT_(char *UPLO, int *N, float *T, int *LDT, float *X, int *INCX,
             float *Y, int *INCY, float *W, int *INCW, float *Z, int *INCZ);
void zdbtf2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO);
void ZDBTF2(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
            int *INFO);
void ZDBTF2_(int *M, int *N, int *KL, int *KU, dcomplex *AB, int *LDAB,
             int *INFO);
void zdbtrf(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void ZDBTRF(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void ZDBTRF_(int *M, int *N, int *KL, int *KU, float *AB, int *LDAB, int *INFO);
void zdttrf(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void ZDTTRF(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void ZDTTRF_(int *N, scomplex *DL, scomplex *D, scomplex *DU, int *INFO);
void zdttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void ZDTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
             scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void ZDTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, scomplex *DL,
              scomplex *D, scomplex *DU, scomplex *B, int *LDB, int *INFO);
void zlahqr2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO);
void ZLAHQR2(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
             int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z, int *LDZ,
             int *INFO);
void ZLAHQR2_(int *WANTT, int *WANTZ, int *N, int *ILO, int *IHI, dcomplex *H,
              int *LDH, dcomplex *W, int *ILOZ, int *IHIZ, dcomplex *Z,
              int *LDZ, int *INFO);
void zlamsh(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP);
void ZLAMSH(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
            int *LDH, int *N, double *ULP);
void ZLAMSH_(dcomplex *S, int *LDS, int *NBULGE, int *JBLK, dcomplex *H,
             int *LDH, int *N, double *ULP);
void zlanv2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN);
void ZLANV2(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
            dcomplex *RT2, double *CS, dcomplex *SN);
void ZLANV2_(dcomplex *A, dcomplex *B, dcomplex *C, dcomplex *D, dcomplex *RT1,
             dcomplex *RT2, double *CS, dcomplex *SN);
void zlaref(char *TYPE, dcomplex *A, int *LDA, int *WANTZ, dcomplex *Z,
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
void zpttrsv(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void ZPTTRSV(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
             scomplex *B, int *LDB, int *INFO);
void ZPTTRSV_(char *UPLO, char *TRANS, int *N, int *NRHS, float *D, scomplex *E,
              scomplex *B, int *LDB, int *INFO);
void zsteqr2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void ZSTEQR2(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
             int *NR, double *WORK, int *INFO);
void ZSTEQR2_(char *COMPZ, int *N, double *D, double *E, dcomplex *Z, int *LDZ,
              int *NR, double *WORK, int *INFO);
void ztrmvt(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void ZTRMVT(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
            scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
            int *INCZ);
void ZTRMVT_(char *UPLO, int *N, scomplex *T, int *LDT, scomplex *X, int *INCX,
             scomplex *Y, int *INCY, scomplex *W, int *INCW, scomplex *Z,
             int *INCZ);

/* pclange */
float pclange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* pclanhe */
float pclanhe(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK);
/* pclanhs */
float pclanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PCLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* pclansy */
float pclansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PCLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK);
/* pclantr */
float pclantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PCLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PCLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* pclatra */
scomplex pclatra(float *N, float *A, float *IA, float *JA, float *DESCA);
scomplex PCLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
scomplex PCLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);
/* pdlamch */
double pdlamch(int *ICTXT, char *CMACH);
double PDLAMCH(int *ICTXT, char *CMACH);
double PDLAMCH_(int *ICTXT, char *CMACH);
/* pdlange */
void pdlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* pdlanhs */
void pdlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* pdlansy */
void pdlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PDLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
/* pdlantr */
void pdlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PDLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PDLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* pdlatra */
void pdlatra(float *N, float *A, float *IA, float *JA, float *DESCA);
void PDLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
void PDLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);
/* pilaenvx */
int pilaenvx(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4);
int PILAENVX(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4);
int PILAENVX_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
              float *N2, float *N3, float *N4);
/* piparmq */
int piparmq(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB);
int PIPARMQ(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
            float *ILO, float *IHI, float *LWORKNB);
int PIPARMQ_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N,
             float *ILO, float *IHI, float *LWORKNB);
/* pjlaenv */
int pjlaenv(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4);
int PJLAENV(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
            float *N2, float *N3, float *N4);
int PJLAENV_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS, float *N1,
             float *N2, float *N3, float *N4);
/* pslamch */
float pslamch(float *ICTXT, float *CMACH);
float PSLAMCH(float *ICTXT, float *CMACH);
float PSLAMCH_(float *ICTXT, float *CMACH);
/* pslange */
float pslange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* pslanhs */
float pslanhs(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
float PSLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
               float *DESCA, float *WORK);
/* pslansy */
float pslansy(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PSLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
float PSLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
               float *JA, float *DESCA, float *WORK);
/* pslantr */
float pslantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PSLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
float PSLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
               float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* pslatra */
float pslatra(float *N, float *A, float *IA, float *JA, float *DESCA);
float PSLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
float PSLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);
/* pzlange */
void pzlange(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANGE(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANGE_(float *NORM, float *M, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* pzlanhe */
void pzlanhe(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHE(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHE_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
/* pzlanhs */
void pzlanhs(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHS(float *NORM, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANHS_(float *NORM, float *N, float *A, float *IA, float *JA,
              float *DESCA, float *WORK);
/* pzlansy */
void pzlansy(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANSY(float *NORM, float *UPLO, float *N, float *A, float *IA, float *JA,
             float *DESCA, float *WORK);
void PZLANSY_(float *NORM, float *UPLO, float *N, float *A, float *IA,
              float *JA, float *DESCA, float *WORK);
/* pzlantr */
void pzlantr(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PZLANTR(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
             float *A, float *IA, float *JA, float *DESCA, float *WORK);
void PZLANTR_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
              float *A, float *IA, float *JA, float *DESCA, float *WORK);
/* pzlatra */
void pzlatra(float *N, float *A, float *IA, float *JA, float *DESCA);
void PZLATRA(float *N, float *A, float *IA, float *JA, float *DESCA);
void PZLATRA_(float *N, float *A, float *IA, float *JA, float *DESCA);

// Fortran function declarations for all routines called by the wrappers
extern float pclange_(float *NORM, float *M, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float pclanhe_(float *NORM, float *UPLO, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float pclanhs_(float *NORM, float *N, float *A, float *IA, float *JA,
                      float *DESCA, float *WORK);
extern float pclansy_(float *NORM, float *UPLO, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float pclantr_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                      float *A, float *IA, float *JA, float *DESCA,
                      float *WORK);
extern scomplex pclatra_(float *N, float *A, float *IA, float *JA,
                         float *DESCA);
extern double pdlamch_(int *ICTXT, char *CMACH);
extern void pdlange_(float *NORM, float *M, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void pdlanhs_(float *NORM, float *N, float *A, float *IA, float *JA,
                     float *DESCA, float *WORK);
extern void pdlansy_(float *NORM, float *UPLO, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void pdlantr_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                     float *A, float *IA, float *JA, float *DESCA, float *WORK);
extern void pdlatra_(float *N, float *A, float *IA, float *JA, float *DESCA);
extern int pilaenvx_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS,
                     float *N1, float *N2, float *N3, float *N4);
extern int piparmq_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS,
                    float *N, float *ILO, float *IHI, float *LWORKNB);
extern int pjlaenv_(float *ICTXT, float *ISPEC, float *NAME, float *OPTS,
                    float *N1, float *N2, float *N3, float *N4);
extern float pslamch_(float *ICTXT, float *CMACH);
extern float pslange_(float *NORM, float *M, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float pslanhs_(float *NORM, float *N, float *A, float *IA, float *JA,
                      float *DESCA, float *WORK);
extern float pslansy_(float *NORM, float *UPLO, float *N, float *A, float *IA,
                      float *JA, float *DESCA, float *WORK);
extern float pslantr_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                      float *A, float *IA, float *JA, float *DESCA,
                      float *WORK);
extern float pslatra_(float *N, float *A, float *IA, float *JA, float *DESCA);
extern void pzlange_(float *NORM, float *M, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void pzlanhe_(float *NORM, float *UPLO, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void pzlanhs_(float *NORM, float *N, float *A, float *IA, float *JA,
                     float *DESCA, float *WORK);
extern void pzlansy_(float *NORM, float *UPLO, float *N, float *A, float *IA,
                     float *JA, float *DESCA, float *WORK);
extern void pzlantr_(float *NORM, float *UPLO, float *DIAG, float *M, float *N,
                     float *A, float *IA, float *JA, float *DESCA, float *WORK);
extern void pzlatra_(float *N, float *A, float *IA, float *JA, float *DESCA);

extern void bdlaapp_(int *, int *, int *, int *, double *, int *, int *, int *,
                     double *, double *);
extern void bdlaexc_(int *, double *, int *, int *, int *, int *, int *,
                     double *, double *, int *);
extern void bdtrexc_(int *, double *, int *, int *, int *, int *, int *, int *,
                     double *, double *, int *);
extern void bslaapp_(int *, int *, int *, int *, float *, int *, int *, int *,
                     float *, float *);
extern void bslaexc_(int *, float *, int *, int *, int *, int *, int *, float *,
                     float *, int *);
extern void bstrexc_(int *, float *, int *, int *, int *, int *, int *, int *,
                     float *, float *, int *);
extern void cdbtf2_(int *, int *, int *, int *, scomplex *, int *, int *);
extern void cdbtrf_(int *, int *, int *, int *, float *, int *, int *);
extern void cdttrf_(int *, scomplex *, scomplex *, scomplex *, int *);
extern void cdttrsv_(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void clahqr2_(int *, int *, int *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *, scomplex *, int *, int *);
extern void clamsh_(scomplex *, int *, int *, int *, scomplex *, int *, int *,
                    float *);
extern void clanv2_(scomplex *, scomplex *, scomplex *, scomplex *, scomplex *,
                    scomplex *, float *, scomplex *);
extern void claref_(char *, scomplex *, int *, int *, scomplex *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, int *,
                    scomplex *, scomplex *, scomplex *, scomplex *, scomplex *,
                    scomplex *);
extern void cpttrsv_(char *, char *, int *, int *, float *, scomplex *,
                     scomplex *, int *, int *);
extern void csteqr2_(char *, int *, float *, float *, scomplex *, int *, int *,
                     float *, int *);
extern void ctrmvt_(char *, int *, scomplex *, int *, scomplex *, int *,
                    scomplex *, int *, scomplex *, int *, scomplex *, int *);
extern void ddbtf2_(int *, int *, int *, int *, double *, int *, int *);
extern void ddbtrf_(int *, int *, int *, int *, float *, int *, int *);
extern void ddttrf_(int *, scomplex *, scomplex *, scomplex *, int *);
extern void ddttrsv_(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void dlamsh_(double *, int *, int *, int *, double *, int *, int *,
                    double *);
extern void dlapst_(char *, int *, double *, int *, int *);
extern void dlaqr6_(char *, int *, int *, int *, int *, int *, int *, int *,
                    double *, double *, double *, int *, int *, int *, double *,
                    int *, double *, int *, double *, int *, int *, double *,
                    int *, int *, double *, int *);
extern void dlar1va_(int *, int *, int *, double *, double *, double *,
                     double *, double *, double *, double *, double *, int *,
                     int *, double *, double *, int *, int *, double *,
                     double *, double *, double *);
extern void dlaref_(char *, double *, int *, int *, double *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, int *,
                    double *, double *, double *, double *, double *, double *);
extern void dlarrb2_(int *, double *, double *, int *, int *, double *,
                     double *, int *, double *, double *, double *, double *,
                     int *, double *, double *, double *, int *, int *);
extern void dlaneg2_(int *, double *, double *, double *, double *, int *);
extern void dlaneg2a_(int *, double *, double *, double *, int *);
extern void dlarrd2_(char *, char *, int *, double *, double *, int *, int *,
                     double *, double *, double *, double *, double *, double *,
                     int *, int *, int *, double *, double *, double *,
                     double *, int *, int *, double *, int *, int *, int *,
                     int *);
extern void dlarre2_(char *, int *, double *, double *, int *, int *, double *,
                     double *, double *, double *, double *, double *, int *,
                     int *, int *, int *, int *, double *, double *, double *,
                     int *, int *, double *, double *, double *, int *, int *);
extern void dlarre2a_(char *, int *, double *, double *, int *, int *, double *,
                      double *, double *, double *, double *, double *, int *,
                      int *, int *, int *, int *, int *, int *, double *,
                      double *, double *, int *, int *, double *, double *,
                      double *, double *, int *, double *, int *);
extern void dlarrf2_(int *, double *, double *, double *, int *, int *, int *,
                     int *, double *, double *, double *, int *, double *,
                     double *, double *, double *, double *, double *, double *,
                     double *, int *);
extern void dlarrv2_(int *, double *, double *, double *, double *, double *,
                     int *, int *, int *, int *, int *, int *, double *,
                     double *, double *, double *, double *, double *, int *,
                     int *, double *, double *, double *, int *, int *,
                     double *, int *, int *, int *, int *, int *, int *, int *,
                     int *);
extern void dlasorte_(double *, int *, int *, double *, int *);
extern void dlasrt2_(char *, int *, double *, int *, int *);
extern void dpttrsv_(char *, int *, int *, float *, scomplex *, scomplex *,
                     int *, int *);
extern void dstegr2_(char *, char *, int *, double *, double *, double *,
                     double *, int *, int *, int *, double *, double *, int *,
                     int *, int *, double *, int *, int *, int *, int *, int *,
                     int *, int *);
extern void dstegr2a_(char *, char *, int *, double *, double *, double *,
                      double *, int *, int *, int *, double *, double *, int *,
                      int *, double *, int *, int *, int *, int *, int *, int *,
                      int *, int *, int *, double *, double *, double *,
                      double *, int *);
extern void dstegr2b_(char *, int *, double *, double *, int *, double *,
                      double *, int *, int *, int *, double *, int *, int *,
                      int *, int *, int *, int *, int *, double *, double *,
                      double *, double *, double *, int *, int *, int *, int *,
                      int *, int *, int *);
extern void dstein2_(int *, double *, double *, int *, double *, int *, int *,
                     double *, double *, int *, double *, int *, int *, int *);
extern void dsteqr2_(char *, int *, double *, double *, double *, int *, int *,
                     double *, int *);
extern void dtrmvt_(char *, int *, double *, int *, double *, int *, double *,
                    int *, double *, int *, double *, int *);
extern void icopypv_(int *, int *, double *, int *, int *, int *, int *, int *,
                     int *);
extern void pcdbsv_(int *, int *, int *, int *, scomplex *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void pcdbtrf_(int *, int *, int *, scomplex *, int *, int *, scomplex *,
                     int *, scomplex *, int *, int *);
extern void pcdbtrs_(char *, int *, int *, int *, int *, scomplex *, int *,
                     int *, scomplex *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *);
extern void pcdbtrsv_(char *, char *, int *, int *, int *, int *, scomplex *,
                      int *, int *, scomplex *, int *, int *, scomplex *, int *,
                      scomplex *, int *, int *);
extern void pcdtsv_(int *, int *, scomplex *, scomplex *, scomplex *, int *,
                    int *, scomplex *, int *, int *, scomplex *, int *, int *);
extern void pcdttrf_(int *, scomplex *, scomplex *, scomplex *, int *, int *,
                     scomplex *, int *, scomplex *, int *, int *);
extern void pcdttrs_(char *, int *, int *, scomplex *, scomplex *, scomplex *,
                     int *, int *, scomplex *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *);
extern void pcdttrsv_(char *, char *, int *, int *, scomplex *, scomplex *,
                      scomplex *, int *, int *, scomplex *, int *, int *,
                      scomplex *, int *, scomplex *, int *, int *);
extern void pcgbsv_(int *, int *, int *, int *, scomplex *, int *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void pcgbtrf_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, scomplex *, int *, int *);
extern void pcgbtrs_(char *, int *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *);
extern void pcgebd2_(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, scomplex *, int *, int *);
extern void pcgebrd_(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, scomplex *, int *, int *);
extern void pcgecon_(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, int *, float *, int *, int *);
extern void pcgeequ_(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *);
extern void pcgehd2_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcgehrd_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcgelq2_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgelqf_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgels_(char *, int *, int *, int *, scomplex *, int *, int *,
                    int *, scomplex *, int *, int *, int *, scomplex *, int *,
                    int *);
extern void pcgeql2_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgeqlf_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgeqpf_(int *, int *, scomplex *, int *, int *, int *, int *,
                     scomplex *, scomplex *, int *, float *, int *, int *);
extern void pcgeqr2_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgeqrf_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgerfs_(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, int *, float *, int *, int *);
extern void pcgerq2_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgerqf_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcgesv_(int *, int *, scomplex *, int *, int *, int *, int *,
                    scomplex *, int *, int *, int *, int *);
extern void pcgesvd_(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, float *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, int *,
                     float *, int *);
extern void pcgesvx_(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *, int *, int *, char *,
                     float *, float *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, float *, float *, float *,
                     scomplex *, int *, float *, int *, int *);
extern void pcgetf2_(int *, int *, scomplex *, int *, int *, int *, int *,
                     int *);
extern void pcgetrf_(int *, int *, scomplex *, int *, int *, int *, int *,
                     int *);
extern void pcgetri_(int *, scomplex *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, int *);
extern void pcgetrs_(char *, int *, int *, scomplex *, int *, int *, int *,
                     int *, scomplex *, int *, int *, int *, int *);
extern void pcggqrf_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcggrqf_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcheev_(char *, char *, int *, scomplex *, int *, int *, int *,
                    float *, scomplex *, int *, int *, int *, scomplex *, int *,
                    scomplex *, int *, int *);
extern void pcheevd_(char *, char *, int *, scomplex *, int *, int *, int *,
                     float *, scomplex *, int *, int *, int *, scomplex *,
                     int *, float *, int *, int *, int *, int *);
extern void pcheevr_(char *, char *, char *, int *, scomplex *, int *, int *,
                     int *, float *, float *, int *, int *, int *, int *,
                     float *, scomplex *, int *, int *, int *, scomplex *,
                     int *, float *, int *, int *, int *, int *);
extern void pcheevx_(char *, char *, char *, int *, scomplex *, int *, int *,
                     int *, float *, float *, int *, int *, float *, int *,
                     int *, float *, float *, scomplex *, int *, int *, int *,
                     scomplex *, int *, float *, int *, int *, int *, int *,
                     int *, float *, int *);
extern void pchegs2_(int *, char *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, int *);
extern void pchegst_(int *, char *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, float *, int *);
extern void pchegvx_(int *, char *, char *, char *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, int *, int *, float *, int *, int *, float *,
                     float *, scomplex *, int *, int *, int *, scomplex *,
                     int *, float *, int *, int *, int *, int *, int *, float *,
                     int *);
extern void pchengst_(int *, char *, int *, scomplex *, int *, int *, int *,
                      scomplex *, int *, int *, int *, float *, scomplex *,
                      int *, int *);
extern void pchentrd_(char *, int *, scomplex *, int *, int *, int *, float *,
                      float *, scomplex *, scomplex *, int *, scomplex *, int *,
                      int *);
extern void pchetd2_(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, int *, int *);
extern void pchetrd_(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, scomplex *, int *, int *);
extern void pchettrd_(char *, int *, scomplex *, int *, int *, int *, float *,
                      float *, scomplex *, scomplex *, int *, int *);
extern void pclabrd_(int *, int *, int *, scomplex *, int *, int *, int *,
                     float *, float *, scomplex *, scomplex *, scomplex *,
                     int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void pclacgv_(int *, scomplex *, int *, int *, int *, int *);
extern void pclacon_(int *, scomplex *, int *, int *, int *, scomplex *, int *,
                     int *, int *, float *, int *);
extern void pclaconsb_(scomplex *, int *, int *, int *, int *, scomplex *,
                       scomplex *, scomplex *, scomplex *, int *);
extern void pclacp2_(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *);
extern void pclacp3_(int *, int *, scomplex *, int *, scomplex *, int *, int *,
                     int *, int *);
extern void pclacpy_(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *);
extern void pclaevswp_(int *, float *, int *, scomplex *, int *, int *, int *,
                       int *, int *, float *, int *);
extern void pclahqr_(int *, int *, int *, int *, int *, scomplex *, int *,
                     scomplex *, int *, int *, scomplex *, int *, scomplex *,
                     int *, int *, int *, int *);
extern void pclahrd_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void pclamr1d_(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void pclapiv_(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void pclapv2_(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, int *, int *, int *, int *);
extern void pclaqge_(int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, float *, float *, float *, char *);
extern void pclaqsy_(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, float *, float *, char *);
extern void pclarf_(char *, int *, int *, scomplex *, int *, int *, int *,
                    int *, scomplex *, scomplex *, int *, int *, int *,
                    scomplex *);
extern void pclarfb_(char *, char *, char *, char *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, scomplex *,
                     int *, int *, int *, scomplex *);
extern void pclarfc_(char *, int *, int *, scomplex *, int *, int *, int *,
                     int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void pclarfg_(int *, scomplex *, int *, int *, scomplex *, int *, int *,
                     int *, int *, scomplex *);
extern void pclarft_(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, scomplex *, scomplex *);
extern void pclarz_(char *, int *, int *, int *, scomplex *, int *, int *,
                    int *, int *, scomplex *, scomplex *, int *, int *, int *,
                    scomplex *);
extern void pclarzb_(char *, char *, char *, char *, int *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, scomplex *,
                     int *, int *, int *, scomplex *);
extern void pclarzc_(char *, int *, int *, int *, scomplex *, int *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *);
extern void pclarzt_(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, scomplex *, scomplex *);
extern void pclascl_(char *, float *, float *, int *, int *, scomplex *, int *,
                     int *, int *, int *);
extern void pclase2_(char *, int *, int *, scomplex *, scomplex *, scomplex *,
                     int *, int *, int *);
extern void pclaset_(char *, int *, int *, scomplex *, scomplex *, scomplex *,
                     int *, int *, int *);
extern void pclasmsub_(scomplex *, int *, int *, int *, int *, float *,
                       scomplex *, int *);
extern void pclassq_(int *, scomplex *, int *, int *, int *, int *, float *,
                     float *);
extern void pclaswp_(char *, char *, int *, scomplex *, int *, int *, int *,
                     int *, int *, int *);
extern void pclatrd_(char *, int *, int *, scomplex *, int *, int *, int *,
                     float *, float *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *);
extern void pclatrs_(char *, char *, char *, char *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *);
extern void pclatrz_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *);
extern void pclattrs_(char *, char *, char *, char *, int *, scomplex *, int *,
                      int *, int *, scomplex *, int *, int *, int *, float *,
                      float *, int *);
extern void pclauu2_(char *, int *, scomplex *, int *, int *, int *);
extern void pclauum_(char *, int *, scomplex *, int *, int *, int *);
extern void pclawil_(int *, int *, int *, scomplex *, int *, scomplex *,
                     scomplex *, scomplex *, scomplex *);
extern void pcmax1_(int *, scomplex *, int *, scomplex *, int *, int *, int *,
                    int *);
extern void ccombamax1_(scomplex *, scomplex *);
extern void pcpbsv_(char *, int *, int *, int *, scomplex *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void pcpbtrf_(char *, int *, int *, scomplex *, int *, int *, scomplex *,
                     int *, scomplex *, int *, int *);
extern void pcpbtrs_(char *, int *, int *, int *, scomplex *, int *, int *,
                     scomplex *, int *, int *, scomplex *, int *, scomplex *,
                     int *, int *);
extern void pcpbtrsv_(char *, char *, int *, int *, int *, scomplex *, int *,
                      int *, scomplex *, int *, int *, scomplex *, int *,
                      scomplex *, int *, int *);
extern void pcpocon_(char *, int *, scomplex *, int *, int *, int *, float *,
                     float *, scomplex *, int *, float *, int *, int *);
extern void pcpoequ_(int *, scomplex *, int *, int *, int *, float *, float *,
                     float *, float *, int *);
extern void pcporfs_(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *, int *, float *, float *,
                     scomplex *, int *, float *, int *, int *);
extern void pcposv_(char *, int *, int *, scomplex *, int *, int *, int *,
                    scomplex *, int *, int *, int *, int *);
extern void pcposvx_(char *, char *, int *, int *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *, int *, char *, scomplex *,
                     scomplex *, scomplex *, int *, int *, int *, scomplex *,
                     int *, int *, int *, float *, float *, float *, scomplex *,
                     int *, float *, int *, int *);
extern void pcpotf2_(char *, int *, scomplex *, int *, int *, int *, int *);
extern void pcpotrf_(char *, int *, scomplex *, int *, int *, int *, int *);
extern void pcpotri_(char *, int *, scomplex *, int *, int *, int *, int *);
extern void pcpotrs_(char *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *, int *, int *);
extern void pcptsv_(char *, int *, int *, scomplex *, scomplex *, int *, int *,
                    scomplex *, int *, int *, scomplex *, int *, int *);
extern void pcpttrf_(int *, scomplex *, scomplex *, int *, int *, scomplex *,
                     int *, scomplex *, int *, int *);
extern void pcpttrs_(char *, int *, int *, scomplex *, scomplex *, int *, int *,
                     scomplex *, int *, int *, scomplex *, int *, scomplex *,
                     int *, int *);
extern void pcpttrsv_(char *, char *, int *, int *, scomplex *, scomplex *,
                      int *, int *, scomplex *, int *, int *, scomplex *, int *,
                      scomplex *, int *, int *);
extern void pcsrscl_(int *, float *, scomplex *, int *, int *, int *, int *);
extern void pcstein_(int *, float *, float *, int *, float *, int *, int *,
                     float *, scomplex *, int *, int *, int *, float *, int *,
                     int *, int *, int *, int *, float *, int *);
extern void pctrcon_(char *, char *, char *, int *, scomplex *, int *, int *,
                     int *, float *, scomplex *, int *, float *, int *, int *);
extern void pctrevc_(char *, char *, int *, int *, scomplex *, int *,
                     scomplex *, int *, scomplex *, int *, int *, int *,
                     scomplex *, float *, int *);
extern void pctrrfs_(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     int *, int *, int *, float *, float *, scomplex *, int *,
                     float *, int *, int *);
extern void pctrti2_(char *, char *, int *, scomplex *, int *, int *, int *,
                     int *);
extern void pctrtri_(char *, char *, int *, scomplex *, int *, int *, int *,
                     int *);
extern void pctrtrs_(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, int *, int *, int *, int *);
extern void pctzrzf_(int *, int *, scomplex *, int *, int *, int *, scomplex *,
                     scomplex *, int *, int *);
extern void pcung2l_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcung2r_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcungl2_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcunglq_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcungql_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcungqr_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcungr2_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcungrq_(int *, int *, int *, scomplex *, int *, int *, int *,
                     scomplex *, scomplex *, int *, int *);
extern void pcunm2l_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunm2r_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmbr_(char *, char *, char *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void pcunmhr_(char *, char *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void pcunml2_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmlq_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmql_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmqr_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmr2_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmr3_(char *, char *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void pcunmrq_(char *, char *, int *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pcunmrz_(char *, char *, int *, int *, int *, int *, scomplex *,
                     int *, int *, int *, scomplex *, scomplex *, int *, int *,
                     int *, scomplex *, int *, int *);
extern void pcunmtr_(char *, char *, char *, int *, int *, scomplex *, int *,
                     int *, int *, scomplex *, scomplex *, int *, int *, int *,
                     scomplex *, int *, int *);
extern void pddbsv_(int *, int *, int *, int *, double *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void pddbtrf_(int *, int *, int *, double *, int *, int *, double *,
                     int *, double *, int *, int *);
extern void pddbtrs_(char *, int *, int *, int *, int *, double *, int *, int *,
                     double *, int *, int *, double *, int *, double *, int *,
                     int *);
extern void pddbtrsv_(char *, char *, int *, int *, int *, int *, double *,
                      int *, int *, double *, int *, int *, double *, int *,
                      double *, int *, int *);
extern void pddtsv_(int *, int *, double *, double *, double *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void pddttrf_(int *, double *, double *, double *, int *, int *,
                     double *, int *, double *, int *, int *);
extern void pddttrs_(char *, int *, int *, double *, double *, double *, int *,
                     int *, double *, int *, int *, double *, int *, double *,
                     int *, int *);
extern void pddttrsv_(char *, char *, int *, int *, double *, double *,
                      double *, int *, int *, double *, int *, int *, double *,
                      int *, double *, int *, int *);
extern void pdgbsv_(int *, int *, int *, int *, double *, int *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void pdgbtrf_(int *, int *, int *, double *, int *, int *, int *,
                     double *, int *, double *, int *, int *);
extern void pdgbtrs_(char *, int *, int *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, double *, int *, double *,
                     int *, int *);
extern void pdgebal_(char *, int *, double *, int *, int *, int *, double *,
                     int *);
extern void pdgebd2_(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *, int *);
extern void pdgebrd_(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *, int *);
extern void pdgecon_(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void pdgeequ_(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *);
extern void pdgehd2_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdgehrd_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdgelq2_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgelqf_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgels_(char *, int *, int *, int *, double *, int *, int *, int *,
                    double *, int *, int *, int *, double *, int *, int *);
extern void pdgeql2_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgeqlf_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgeqpf_(int *, int *, double *, int *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdgeqr2_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgeqrf_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgerfs_(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void pdgerq2_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgerqf_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdgesv_(int *, int *, double *, int *, int *, int *, int *,
                    double *, int *, int *, int *, int *);
extern void pdgesvd_(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, int *, double *,
                     int *, int *, int *, double *, int *, int *);
extern void pdgesvx_(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, int *, int *, char *,
                     double *, double *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void pdgetf2_(int *, int *, double *, int *, int *, int *, int *, int *);
extern void pdgetf2k_(int *, int *, double *, int *, int *, int *, int *, int *,
                      int *);
extern void pdgetf2_comm_(int *, int *, double *, int *, int *, int *, int *,
                          int *);
extern void pdgetrf_(int *, int *, double *, int *, int *, int *, int *, int *);
extern void pdgetri_(int *, double *, int *, int *, int *, int *, double *,
                     int *, int *, int *, int *);
extern void pdgetrs_(char *, int *, int *, double *, int *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void pdggqrf_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdggrqf_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdhseqr_(char *, char *, int *, int *, int *, double *, int *,
                     double *, double *, double *, int *, double *, int *,
                     int *, int *, int *);
extern void pdlabad_(int *, double *, double *);
extern void pdlabrd_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, double *, double *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *);
extern void pdlacon_(int *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *, double *, int *);
extern void pdlaconsb_(double *, int *, int *, int *, int *, double *, double *,
                       double *, double *, int *);
extern void pdlacp2_(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *);
extern void pdlacp3_(int *, int *, double *, int *, double *, int *, int *,
                     int *, int *);
extern void pdlacpy_(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *);
extern void pdlaed0_(int *, double *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdlaed1_(int *, int *, double *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *);
extern void pdlaed2_(int *, int *, int *, int *, int *, double *, int *, int *,
                     double *, int *, double *, double *, double *, double *,
                     double *, int *, double *, int *, int *, int *, int *,
                     int *, int *, int *, int *, int *, int *, int *, int *,
                     int *);
extern void pdlaed3_(int *, int *, int *, int *, double *, int *, int *,
                     double *, double *, double *, double *, double *, int *,
                     double *, int *, int *, int *, int *, int *, int *, int *,
                     int *);
extern void pdlaedz_(int *, int *, int *, double *, int *, int *, int *, int *,
                     double *, double *);
extern void pdlaevswp_(int *, double *, int *, double *, int *, int *, int *,
                       int *, int *, double *, int *);
extern void pdlahqr_(int *, int *, int *, int *, int *, double *, int *,
                     double *, double *, int *, int *, double *, int *,
                     double *, int *, int *, int *, int *);
extern void pdlahrd_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, double *, int *, int *, int *,
                     double *);
extern void pdlamr1d_(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void pdlamve_(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *);
extern void pdlapiv_(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void pdlapv2_(char *, char *, int *, int *, double *, int *, int *,
                     int *, int *, int *, int *, int *);
extern void pdlaqge_(int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, double *, char *);
extern void pdlaqr2_(int *, int *, int *, int *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, double *, int *, double *,
                     double *, double *, int *);
extern void pdlaqr4_(int *, int *, int *, int *, int *, double *, int *,
                     double *, double *, int *, int *, double *, int *,
                     double *, int *, double *, int *, double *, int *, int *);
extern void pdlaqr5_(int *, int *, int *, int *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, double *, int *,
                     double *, int *, int *, int *);
extern void pdlaqsy_(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, char *);
extern void pdlared1d_(int *, int *, int *, int *, double *, double *, double *,
                       int *);
extern void pdlared2d_(int *, int *, int *, int *, double *, double *, double *,
                       int *);
extern void pdlarf_(char *, int *, int *, double *, int *, int *, int *, int *,
                    double *, double *, int *, int *, int *, double *);
extern void pdlarfb_(char *, char *, char *, char *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *, int *,
                     int *, int *, double *);
extern void pdlarfg_(int *, double *, int *, int *, double *, int *, int *,
                     int *, int *, double *);
extern void pdlarft_(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, double *, double *);
extern void pdlarz_(char *, int *, int *, int *, double *, int *, int *, int *,
                    int *, double *, double *, int *, int *, int *, double *);
extern void pdlarzb_(char *, char *, char *, char *, int *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *, int *,
                     int *, int *, double *);
extern void pdlarzt_(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, double *, double *);
extern void pdlascl_(char *, double *, double *, int *, int *, double *, int *,
                     int *, int *, int *);
extern void pdlase2_(char *, int *, int *, double *, double *, double *, int *,
                     int *, int *);
extern void pdlaset_(char *, int *, int *, double *, double *, double *, int *,
                     int *, int *);
extern void pdlasmsub_(double *, int *, int *, int *, int *, double *, double *,
                       int *);
extern void pdlasrt_(char *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void pdlassq_(int *, double *, int *, int *, int *, int *, double *,
                     double *);
extern void pdlaswp_(char *, char *, int *, double *, int *, int *, int *,
                     int *, int *, int *);
extern void pdlatrd_(char *, int *, int *, double *, int *, int *, int *,
                     double *, double *, double *, double *, int *, int *,
                     int *, double *);
extern void pdlatrs_(char *, char *, char *, char *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, double *);
extern void pdlatrz_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *);
extern void pdlauu2_(char *, int *, double *, int *, int *, int *);
extern void pdlauum_(char *, int *, double *, int *, int *, int *);
extern void pdlawil_(int *, int *, int *, double *, int *, double *, double *,
                     double *, double *);
extern void pdorg2l_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorg2r_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorgl2_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorglq_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorgql_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorgqr_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorgr2_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorgrq_(int *, int *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *);
extern void pdorm2l_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdorm2r_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormbr_(char *, char *, char *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void pdormhr_(char *, char *, int *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void pdorml2_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormlq_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormql_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormqr_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormr2_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormr3_(char *, char *, int *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void pdormrq_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdormrz_(char *, char *, int *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, int *, int *,
                     int *, double *, int *, int *);
extern void pdormtr_(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, double *, double *, int *, int *, int *,
                     double *, int *, int *);
extern void pdpbsv_(char *, int *, int *, int *, double *, int *, int *,
                    double *, int *, int *, double *, int *, int *);
extern void pdpbtrf_(char *, int *, int *, double *, int *, int *, double *,
                     int *, double *, int *, int *);
extern void pdpbtrs_(char *, int *, int *, int *, double *, int *, int *,
                     double *, int *, int *, double *, int *, double *, int *,
                     int *);
extern void pdpbtrsv_(char *, char *, int *, int *, int *, double *, int *,
                      int *, double *, int *, int *, double *, int *, double *,
                      int *, int *);
extern void pdpocon_(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, int *, int *, int *, int *);
extern void pdpoequ_(int *, double *, int *, int *, int *, double *, double *,
                     double *, double *, int *);
extern void pdporfs_(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, int *, double *, double *,
                     double *, int *, int *, int *, int *);
extern void pdposv_(char *, int *, int *, double *, int *, int *, int *,
                    double *, int *, int *, int *, int *);
extern void pdposvx_(char *, char *, int *, int *, double *, int *, int *,
                     int *, double *, int *, int *, int *, char *, double *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, double *, double *, double *, double *,
                     int *, int *, int *, int *);
extern void pdpotf2_(char *, int *, double *, int *, int *, int *, int *);
extern void pdpotrf_(char *, int *, double *, int *, int *, int *, int *);
extern void pdpotri_(char *, int *, double *, int *, int *, int *, int *);
extern void pdpotrs_(char *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void pdptsv_(int *, int *, double *, double *, int *, int *, double *,
                    int *, int *, double *, int *, int *);
extern void pdpttrf_(int *, double *, double *, int *, int *, double *, int *,
                     double *, int *, int *);
extern void pdpttrs_(int *, int *, double *, double *, int *, int *, double *,
                     int *, int *, double *, int *, double *, int *, int *);
extern void pdpttrsv_(char *, int *, int *, double *, double *, int *, int *,
                      double *, int *, int *, double *, int *, double *, int *,
                      int *);
extern void pdrot_(int *, double *, int *, int *, int *, int *, double *, int *,
                   int *, int *, int *, double *, double *, double *, int *,
                   int *);
extern void pdrscl_(int *, double *, double *, int *, int *, int *, int *);
extern void pdstebz_(int *, char *, char *, int *, double *, double *, int *,
                     int *, double *, double *, double *, int *, int *,
                     double *, int *, int *, double *, int *, int *, int *,
                     int *);
extern void pdlaebz_(int *, int *, int *, int *, double *, double *, double *,
                     double *, int *, double *, int *, int *, double *, int *,
                     int *);
extern void pdlaecv_(int *, int *, int *, double *, int *, int *, double *,
                     double *);
extern void pdlapdct_(double *, int *, double *, double *, int *);
extern void pdstedc_(char *, int *, double *, double *, double *, int *, int *,
                     int *, double *, int *, int *, int *, int *);
extern void pdstein_(int *, double *, double *, int *, double *, int *, int *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *, int *, double *, int *);
extern void pdsyev_(char *, char *, int *, double *, int *, int *, int *,
                    double *, double *, int *, int *, int *, double *, int *,
                    int *);
extern void pdsyevd_(char *, char *, int *, double *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *);
extern void pdsyevr_(char *, char *, char *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, int *, int *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *);
extern void pdsyevx_(char *, char *, char *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, double *, int *,
                     int *, double *, double *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *, int *, double *,
                     int *);
extern void pdsygs2_(int *, char *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, int *);
extern void pdsygst_(int *, char *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, int *);
extern void pdsygvx_(int *, char *, char *, char *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *, double *, int *, int *, double *,
                     double *, double *, int *, int *, int *, double *, int *,
                     int *, int *, int *, int *, double *, int *);
extern void pdsyngst_(int *, char *, int *, double *, int *, int *, int *,
                      double *, int *, int *, int *, double *, double *, int *,
                      int *);
extern void pdsyntrd_(char *, int *, double *, int *, int *, int *, double *,
                      double *, double *, double *, int *, int *);
extern void pdsytd2_(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, int *, int *);
extern void pdsytrd_(char *, int *, double *, int *, int *, int *, double *,
                     double *, double *, double *, int *, int *);
extern void pdsyttrd_(char *, int *, double *, int *, int *, int *, double *,
                      double *, double *, double *, int *, int *);
extern void pdtrcon_(char *, char *, char *, int *, double *, int *, int *,
                     int *, double *, double *, int *, int *, int *, int *);
extern void pdtrord_(char *, int *, int *, int *, double *, int *, int *, int *,
                     double *, int *, int *, int *, double *, double *, int *,
                     double *, int *, int *, int *, int *);
extern void pdtrrfs_(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     int *, int *, int *, double *, double *, double *, int *,
                     int *, int *, int *);
extern void pdtrsen_(char *, char *, int *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, double *, double *, double *, int *,
                     int *, int *, int *);
extern void pdtrti2_(char *, char *, int *, double *, int *, int *, int *,
                     int *);
extern void pdtrtri_(char *, char *, int *, double *, int *, int *, int *,
                     int *);
extern void pdtrtrs_(char *, char *, char *, int *, int *, double *, int *,
                     int *, int *, double *, int *, int *, int *, int *);
extern void pdtzrzf_(int *, int *, double *, int *, int *, int *, double *,
                     double *, int *, int *);
extern void pdupdate_(int *, int *, int *, int *, int *, int *, int *, int *,
                      int *, double *, int *, int *, int *, int *, int *, int *,
                      int *, int *);
extern void pdzsum1_(int *, double *, dcomplex *, int *, int *, int *, int *);
extern void pilaver_(int *, int *, int *);
extern void pmpcol_(int *, int *, int *, int *, int *, int *, int *, int *,
                    int *, int *);
extern void pmpim2_(int *, int *, int *, int *, int *);
extern void pscsum1_(int *, float *, scomplex *, int *, int *, int *, int *);
extern void psdbsv_(int *, int *, int *, int *, float *, int *, int *, float *,
                    int *, int *, float *, int *, int *);
extern void psdbtrf_(int *, int *, int *, float *, int *, int *, float *, int *,
                     float *, int *, int *);
extern void psdbtrs_(char *, int *, int *, int *, int *, float *, int *, int *,
                     float *, int *, int *, float *, int *, float *, int *,
                     int *);
extern void psdbtrsv_(char *, char *, int *, int *, int *, int *, float *,
                      int *, int *, float *, int *, int *, float *, int *,
                      float *, int *, int *);
extern void psdtsv_(int *, int *, float *, float *, float *, int *, int *,
                    float *, int *, int *, float *, int *, int *);
extern void psdttrf_(int *, float *, float *, float *, int *, int *, float *,
                     int *, float *, int *, int *);
extern void psdttrs_(char *, int *, int *, float *, float *, float *, int *,
                     int *, float *, int *, int *, float *, int *, float *,
                     int *, int *);
extern void psdttrsv_(char *, char *, int *, int *, float *, float *, float *,
                      int *, int *, float *, int *, int *, float *, int *,
                      float *, int *, int *);
extern void psgbsv_(int *, int *, int *, int *, float *, int *, int *, int *,
                    float *, int *, int *, float *, int *, int *);
extern void psgbtrf_(int *, int *, int *, float *, int *, int *, int *, float *,
                     int *, float *, int *, int *);
extern void psgbtrs_(char *, int *, int *, int *, int *, float *, int *, int *,
                     int *, float *, int *, int *, float *, int *, float *,
                     int *, int *);
extern void psgebal_(char *, int *, float *, int *, int *, int *, float *,
                     int *);
extern void psgebd2_(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *, int *);
extern void psgebrd_(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *, int *);
extern void psgecon_(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, int *);
extern void psgeequ_(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *);
extern void psgehd2_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgehrd_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgelq2_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgelqf_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgels_(char *, int *, int *, int *, float *, int *, int *, int *,
                    float *, int *, int *, int *, float *, int *, int *);
extern void psgeql2_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgeqlf_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgeqpf_(int *, int *, float *, int *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgeqr2_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgeqrf_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgerfs_(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, float *, int *, int *,
                     int *, float *, int *, int *, int *, float *, float *,
                     float *, int *, int *, int *, int *);
extern void psgerq2_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgerqf_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psgesv_(int *, int *, float *, int *, int *, int *, int *, float *,
                    int *, int *, int *, int *);
extern void psgesvd_(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *);
extern void psgesvx_(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, char *, float *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, float *, float *, int *,
                     int *, int *, int *);
extern void psgetf2_(int *, int *, float *, int *, int *, int *, int *, int *);
extern void psgetrf_(int *, int *, float *, int *, int *, int *, int *, int *);
extern void psgetri_(int *, float *, int *, int *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void psgetrs_(char *, int *, int *, float *, int *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void psggqrf_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *);
extern void psggrqf_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *);
extern void pshseqr_(char *, char *, int *, int *, int *, float *, int *,
                     float *, float *, float *, int *, float *, int *, int *,
                     int *, int *);
extern void pslabad_(int *, float *, float *);
extern void pslabrd_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *);
extern void pslacon_(int *, float *, int *, int *, int *, float *, int *, int *,
                     int *, int *, float *, int *);
extern void pslaconsb_(float *, int *, int *, int *, int *, float *, float *,
                       float *, float *, int *);
extern void pslacp2_(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *);
extern void pslacp3_(int *, int *, float *, int *, float *, int *, int *, int *,
                     int *);
extern void pslacpy_(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *);
extern void pslaed0_(int *, float *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void pslaed1_(int *, int *, float *, int *, float *, int *, int *, int *,
                     float *, float *, int *, int *);
extern void pslaed2_(int *, int *, int *, int *, int *, float *, int *, int *,
                     float *, int *, float *, float *, float *, float *,
                     float *, int *, float *, int *, int *, int *, int *, int *,
                     int *, int *, int *, int *, int *, int *, int *, int *);
extern void pslaed3_(int *, int *, int *, int *, float *, int *, int *, float *,
                     float *, float *, float *, float *, int *, float *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void pslaedz_(int *, int *, int *, float *, int *, int *, int *, int *,
                     float *, float *);
extern void pslaevswp_(int *, float *, int *, float *, int *, int *, int *,
                       int *, int *, float *, int *);
extern void pslahqr_(int *, int *, int *, int *, int *, float *, int *, float *,
                     float *, int *, int *, float *, int *, float *, int *,
                     int *, int *, int *);
extern void pslahrd_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, float *);
extern void pslamr1d_(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void pslamve_(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *);
extern void pslapiv_(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void pslapv2_(char *, char *, int *, int *, float *, int *, int *, int *,
                     int *, int *, int *, int *);
extern void pslaqge_(int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, float *, char *);
extern void pslaqr2_(int *, int *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, float *, int *, float *, float *,
                     float *, int *);
extern void pslaqr4_(int *, int *, int *, int *, int *, float *, int *, float *,
                     float *, int *, int *, float *, int *, float *, int *,
                     float *, int *, float *, int *, int *);
extern void pslaqr5_(int *, int *, int *, int *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, float *, int *,
                     float *, int *, int *, int *);
extern void pslaqsy_(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, char *);
extern void pslared1d_(int *, int *, int *, int *, float *, float *, float *,
                       int *);
extern void pslared2d_(int *, int *, int *, int *, float *, float *, float *,
                       int *);
extern void pslarf_(char *, int *, int *, float *, int *, int *, int *, int *,
                    float *, float *, int *, int *, int *, float *);
extern void pslarfb_(char *, char *, char *, char *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *, int *, float *);
extern void pslarfg_(int *, float *, int *, int *, float *, int *, int *, int *,
                     int *, float *);
extern void pslarft_(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *);
extern void pslarz_(char *, int *, int *, int *, float *, int *, int *, int *,
                    int *, float *, float *, int *, int *, int *, float *);
extern void pslarzb_(char *, char *, char *, char *, int *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, int *,
                     int *, int *, float *);
extern void pslarzt_(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *);
extern void pslascl_(char *, float *, float *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void pslase2_(char *, int *, int *, float *, float *, float *, int *,
                     int *, int *);
extern void pslaset_(char *, int *, int *, float *, float *, float *, int *,
                     int *, int *);
extern void pslasmsub_(float *, int *, int *, int *, int *, float *, float *,
                       int *);
extern void pslasrt_(char *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void pslassq_(int *, float *, int *, int *, int *, int *, float *,
                     float *);
extern void pslaswp_(char *, char *, int *, float *, int *, int *, int *, int *,
                     int *, int *);
extern void pslatrd_(char *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *, float *, int *, int *, int *,
                     float *);
extern void pslatrs_(char *, char *, char *, char *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *,
                     float *, float *);
extern void pslatrz_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *);
extern void pslauu2_(char *, int *, float *, int *, int *, int *);
extern void pslauum_(char *, int *, float *, int *, int *, int *);
extern void pslawil_(int *, int *, int *, float *, int *, float *, float *,
                     float *, float *);
extern void psorg2l_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorg2r_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorgl2_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorglq_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorgql_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorgqr_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorgr2_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorgrq_(int *, int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void psorm2l_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psorm2r_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormbr_(char *, char *, char *, int *, int *, int *, float *,
                     int *, int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void psormhr_(char *, char *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void psorml2_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormlq_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormql_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormqr_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormr2_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormr3_(char *, char *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void psormrq_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, float *,
                     int *, int *);
extern void psormrz_(char *, char *, int *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void psormtr_(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *);
extern void pspbsv_(char *, int *, int *, int *, float *, int *, int *, float *,
                    int *, int *, float *, int *, int *);
extern void pspbtrf_(char *, int *, int *, float *, int *, int *, float *,
                     int *, float *, int *, int *);
extern void pspbtrs_(char *, int *, int *, int *, float *, int *, int *,
                     float *, int *, int *, float *, int *, float *, int *,
                     int *);
extern void pspbtrsv_(char *, char *, int *, int *, int *, float *, int *,
                      int *, float *, int *, int *, float *, int *, float *,
                      int *, int *);
extern void pspocon_(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, int *, int *, int *, int *);
extern void pspoequ_(int *, float *, int *, int *, int *, float *, float *,
                     float *, float *, int *);
extern void psporfs_(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, float *,
                     int *, int *, int *, int *);
extern void psposv_(char *, int *, int *, float *, int *, int *, int *, float *,
                    int *, int *, int *, int *);
extern void psposvx_(char *, char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, char *, float *, float *,
                     float *, int *, int *, int *, float *, int *, int *, int *,
                     float *, float *, float *, float *, int *, int *, int *,
                     int *);
extern void pspotf2_(char *, int *, float *, int *, int *, int *, int *);
extern void pspotrf_(char *, int *, float *, int *, int *, int *, int *);
extern void pspotri_(char *, int *, float *, int *, int *, int *, int *);
extern void pspotrs_(char *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void psptsv_(int *, int *, float *, float *, int *, int *, float *,
                    int *, int *, float *, int *, int *);
extern void pspttrf_(int *, float *, float *, int *, int *, float *, int *,
                     float *, int *, int *);
extern void pspttrs_(int *, int *, float *, float *, int *, int *, float *,
                     int *, int *, float *, int *, float *, int *, int *);
extern void pspttrsv_(char *, int *, int *, float *, float *, int *, int *,
                      float *, int *, int *, float *, int *, float *, int *,
                      int *);
extern void psrot_(int *, double *, int *, int *, int *, int *, double *, int *,
                   int *, int *, int *, float *, float *, float *, int *,
                   int *);
extern void psrscl_(int *, float *, float *, int *, int *, int *, int *);
extern void psstebz_(int *, char *, char *, int *, float *, float *, int *,
                     int *, float *, float *, float *, int *, int *, float *,
                     int *, int *, float *, int *, int *, int *, int *);
extern void pslaebz_(int *, int *, int *, int *, float *, float *, float *,
                     float *, int *, float *, int *, int *, float *, int *,
                     int *);
extern void pslaecv_(int *, int *, int *, float *, int *, int *, float *,
                     float *);
extern void pslapdct_(float *, int *, float *, float *, int *);
extern void psstedc_(char *, int *, float *, float *, float *, int *, int *,
                     int *, float *, int *, int *, int *, int *);
extern void psstein_(int *, float *, float *, int *, float *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *, int *, float *, int *);
extern void pssyev_(char *, char *, int *, float *, int *, int *, int *,
                    float *, float *, int *, int *, int *, float *, int *,
                    int *);
extern void pssyevd_(char *, char *, int *, float *, int *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void pssyevr_(char *, char *, char *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, int *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *);
extern void pssyevx_(char *, char *, char *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, float *, int *,
                     int *, float *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, int *, float *,
                     int *);
extern void pssygs2_(int *, char *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *);
extern void pssygst_(int *, char *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, int *);
extern void pssygvx_(int *, char *, char *, char *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *, float *, int *, int *, float *,
                     float *, float *, int *, int *, int *, float *, int *,
                     int *, int *, int *, int *, float *, int *);
extern void pssyngst_(int *, char *, int *, float *, int *, int *, int *,
                      float *, int *, int *, int *, float *, float *, int *,
                      int *);
extern void pssyntrd_(char *, int *, float *, int *, int *, int *, float *,
                      float *, float *, float *, int *, int *);
extern void pssytd2_(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, int *, int *);
extern void pssytrd_(char *, int *, float *, int *, int *, int *, float *,
                     float *, float *, float *, int *, int *);
extern void pssyttrd_(char *, int *, float *, int *, int *, int *, float *,
                      float *, float *, float *, int *, int *);
extern void pstrcon_(char *, char *, char *, int *, float *, int *, int *,
                     int *, float *, float *, int *, int *, int *, int *);
extern void pstrord_(char *, int *, int *, int *, float *, int *, int *, int *,
                     float *, int *, int *, int *, float *, float *, int *,
                     float *, int *, int *, int *, int *);
extern void pstrrfs_(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, float *, int *,
                     int *, int *, float *, float *, float *, int *, int *,
                     int *, int *);
extern void pstrsen_(char *, char *, int *, int *, int *, float *, int *, int *,
                     int *, float *, int *, int *, int *, float *, float *,
                     int *, float *, float *, float *, int *, int *, int *,
                     int *);
extern void pstrti2_(char *, char *, int *, float *, int *, int *, int *,
                     int *);
extern void pstrtri_(char *, char *, int *, float *, int *, int *, int *,
                     int *);
extern void pstrtrs_(char *, char *, char *, int *, int *, float *, int *,
                     int *, int *, float *, int *, int *, int *, int *);
extern void pstzrzf_(int *, int *, float *, int *, int *, int *, float *,
                     float *, int *, int *);
extern void pzdbsv_(int *, int *, int *, int *, dcomplex *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void pzdbtrf_(int *, int *, int *, dcomplex *, int *, int *, dcomplex *,
                     int *, dcomplex *, int *, int *);
extern void pzdbtrs_(char *, int *, int *, int *, int *, dcomplex *, int *,
                     int *, dcomplex *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *);
extern void pzdbtrsv_(char *, char *, int *, int *, int *, int *, dcomplex *,
                      int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                      dcomplex *, int *, int *);
extern void pzdrscl_(int *, double *, dcomplex *, int *, int *, int *, int *);
extern void pzdtsv_(int *, int *, dcomplex *, dcomplex *, dcomplex *, int *,
                    int *, dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void pzdttrf_(int *, dcomplex *, dcomplex *, dcomplex *, int *, int *,
                     dcomplex *, int *, dcomplex *, int *, int *);
extern void pzdttrs_(char *, int *, int *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *);
extern void pzdttrsv_(char *, char *, int *, int *, dcomplex *, dcomplex *,
                      dcomplex *, int *, int *, dcomplex *, int *, int *,
                      dcomplex *, int *, dcomplex *, int *, int *);
extern void pzgbsv_(int *, int *, int *, int *, dcomplex *, int *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void pzgbtrf_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, dcomplex *, int *, int *);
extern void pzgbtrs_(char *, int *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *);
extern void pzgebd2_(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, dcomplex *, int *,
                     int *);
extern void pzgebrd_(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, dcomplex *, int *,
                     int *);
extern void pzgecon_(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void pzgeequ_(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, double *, double *, double *, int *);
extern void pzgehd2_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzgehrd_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzgelq2_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgelqf_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgels_(char *, int *, int *, int *, dcomplex *, int *, int *,
                    int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                    int *);
extern void pzgeql2_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgeqlf_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgeqpf_(int *, int *, dcomplex *, int *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, double *, int *, int *);
extern void pzgeqr2_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgeqrf_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgerfs_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void pzgerq2_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgerqf_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzgesv_(int *, int *, dcomplex *, int *, int *, int *, int *,
                    dcomplex *, int *, int *, int *, int *);
extern void pzgesvd_(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, double *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, int *,
                     float *, int *);
extern void pzgesvx_(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, int *, char *,
                     double *, double *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, double *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void pzgetf2_(int *, int *, dcomplex *, int *, int *, int *, int *,
                     int *);
extern void pzgetrf_(int *, int *, dcomplex *, int *, int *, int *, int *,
                     int *);
extern void pzgetri_(int *, dcomplex *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, int *);
extern void pzgetrs_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, int *);
extern void pzggqrf_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzggrqf_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzheev_(char *, char *, int *, dcomplex *, int *, int *, int *,
                    double *, dcomplex *, int *, int *, int *, dcomplex *,
                    int *, dcomplex *, int *, int *);
extern void pzheevd_(char *, char *, int *, dcomplex *, int *, int *, int *,
                     double *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, double *, int *, int *, int *, int *);
extern void pzheevr_(char *, char *, char *, int *, dcomplex *, int *, int *,
                     int *, double *, double *, int *, int *, int *, int *,
                     double *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, double *, int *, int *, int *, int *);
extern void pzheevx_(char *, char *, char *, int *, dcomplex *, int *, int *,
                     int *, double *, double *, int *, int *, double *, int *,
                     int *, double *, double *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, double *, int *, int *, int *, int *,
                     int *, double *, int *);
extern void pzhegs2_(int *, char *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, int *);
extern void pzhegst_(int *, char *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, double *, int *);
extern void pzhegvx_(int *, char *, char *, char *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, int *, int *, double *, int *, int *, double *,
                     double *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, double *, int *, int *, int *, int *, int *,
                     double *, int *);
extern void pzhengst_(int *, char *, int *, dcomplex *, int *, int *, int *,
                      dcomplex *, int *, int *, int *, double *, dcomplex *,
                      int *, int *);
extern void pzhentrd_(char *, int *, dcomplex *, int *, int *, int *, double *,
                      double *, dcomplex *, dcomplex *, int *, dcomplex *,
                      int *, int *);
extern void pzhetd2_(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, int *, int *);
extern void pzhetrd_(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, dcomplex *, int *, int *);
extern void pzhettrd_(char *, int *, dcomplex *, int *, int *, int *, double *,
                      double *, dcomplex *, dcomplex *, int *, int *);
extern void pzlabrd_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     double *, double *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void pzlacgv_(int *, dcomplex *, int *, int *, int *, int *);
extern void pzlacon_(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, double *, int *);
extern void pzlaconsb_(dcomplex *, int *, int *, int *, int *, dcomplex *,
                       dcomplex *, dcomplex *, dcomplex *, int *);
extern void pzlacp2_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *);
extern void pzlacp3_(int *, int *, dcomplex *, int *, dcomplex *, int *, int *,
                     int *, int *);
extern void pzlacpy_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *);
extern void pzlaevswp_(int *, double *, int *, dcomplex *, int *, int *, int *,
                       int *, int *, double *, int *);
extern void pzlahqr_(int *, int *, int *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, dcomplex *,
                     int *, int *, int *, int *);
extern void pzlahrd_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void pzlamr1d_(int *, dcomplex *, int *, int *, int *, dcomplex *, int *,
                      int *, int *);
extern void pzlapiv_(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, int *, int *, int *, int *, int *);
extern void pzlapv2_(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, int *, int *, int *, int *);
extern void pzlaqge_(int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, double *, double *, double *, char *);
extern void pzlaqsy_(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, double *, double *, char *);
extern void pzlarf_(char *, int *, int *, dcomplex *, int *, int *, int *,
                    int *, dcomplex *, dcomplex *, int *, int *, int *,
                    dcomplex *);
extern void pzlarfb_(char *, char *, char *, char *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, dcomplex *,
                     int *, int *, int *, dcomplex *);
extern void pzlarfc_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void pzlarfg_(int *, dcomplex *, int *, int *, dcomplex *, int *, int *,
                     int *, int *, dcomplex *);
extern void pzlarft_(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, dcomplex *, dcomplex *);
extern void pzlarz_(char *, int *, int *, int *, dcomplex *, int *, int *,
                    int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                    dcomplex *);
extern void pzlarzb_(char *, char *, char *, char *, int *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, dcomplex *,
                     int *, int *, int *, dcomplex *);
extern void pzlarzc_(char *, int *, int *, int *, dcomplex *, int *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *);
extern void pzlarzt_(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, dcomplex *, dcomplex *);
extern void pzlascl_(char *, double *, double *, int *, int *, dcomplex *,
                     int *, int *, int *, int *);
extern void pzlase2_(char *, int *, int *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, int *);
extern void pzlaset_(char *, int *, int *, dcomplex *, dcomplex *, dcomplex *,
                     int *, int *, int *);
extern void pzlasmsub_(dcomplex *, int *, int *, int *, int *, double *,
                       dcomplex *, int *);
extern void pzlassq_(int *, dcomplex *, int *, int *, int *, int *, double *,
                     double *);
extern void pzlaswp_(char *, char *, int *, dcomplex *, int *, int *, int *,
                     int *, int *, int *);
extern void pzlatrd_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     double *, double *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *);
extern void pzlatrs_(char *, char *, char *, char *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, int *);
extern void pzlatrz_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *);
extern void pzlattrs_(char *, char *, char *, char *, int *, dcomplex *, int *,
                      int *, int *, dcomplex *, int *, int *, int *, double *,
                      double *, int *);
extern void pzlauu2_(char *, int *, dcomplex *, int *, int *, int *);
extern void pzlauum_(char *, int *, dcomplex *, int *, int *, int *);
extern void pzlawil_(int *, int *, int *, dcomplex *, int *, dcomplex *,
                     dcomplex *, dcomplex *, dcomplex *);
extern void pzmax1_(int *, double *, int *, dcomplex *, int *, int *, int *,
                    int *);
extern void zcombamax1_(dcomplex *, dcomplex *);
extern void pzpbsv_(char *, int *, int *, int *, dcomplex *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void pzpbtrf_(char *, int *, int *, dcomplex *, int *, int *, dcomplex *,
                     int *, dcomplex *, int *, int *);
extern void pzpbtrs_(char *, int *, int *, int *, dcomplex *, int *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, dcomplex *,
                     int *, int *);
extern void pzpbtrsv_(char *, char *, int *, int *, int *, dcomplex *, int *,
                      int *, dcomplex *, int *, int *, dcomplex *, int *,
                      dcomplex *, int *, int *);
extern void pzpocon_(char *, int *, dcomplex *, int *, int *, int *, double *,
                     double *, dcomplex *, int *, double *, int *, int *);
extern void pzpoequ_(int *, dcomplex *, int *, int *, int *, double *, double *,
                     double *, double *, int *);
extern void pzporfs_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, double *, double *,
                     dcomplex *, int *, double *, int *, int *);
extern void pzposv_(char *, int *, int *, dcomplex *, int *, int *, int *,
                    dcomplex *, int *, int *, int *, int *);
extern void pzposvx_(char *, char *, int *, int *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *, int *, char *, dcomplex *,
                     dcomplex *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, double *, double *, double *,
                     dcomplex *, int *, double *, int *, int *);
extern void pzpotf2_(char *, int *, dcomplex *, int *, int *, int *, int *);
extern void pzpotrf_(char *, int *, dcomplex *, int *, int *, int *, int *);
extern void pzpotri_(char *, int *, dcomplex *, int *, int *, int *, int *);
extern void pzpotrs_(char *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *, int *, int *);
extern void pzptsv_(char *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                    dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void pzpttrf_(int *, dcomplex *, dcomplex *, int *, int *, dcomplex *,
                     int *, dcomplex *, int *, int *);
extern void pzpttrs_(char *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, dcomplex *,
                     int *, int *);
extern void pzpttrsv_(char *, char *, int *, int *, dcomplex *, dcomplex *,
                      int *, int *, dcomplex *, int *, int *, dcomplex *, int *,
                      dcomplex *, int *, int *);
extern void pzstein_(int *, double *, double *, int *, double *, int *, int *,
                     double *, dcomplex *, int *, int *, int *, double *, int *,
                     int *, int *, int *, int *, double *, int *);
extern void pztrcon_(char *, char *, char *, int *, dcomplex *, int *, int *,
                     int *, double *, dcomplex *, int *, double *, int *,
                     int *);
extern void pztrevc_(char *, char *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, double *, int *);
extern void pztrrfs_(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, double *, double *, dcomplex *, int *,
                     double *, int *, int *);
extern void pztrti2_(char *, char *, int *, dcomplex *, int *, int *, int *,
                     int *);
extern void pztrtri_(char *, char *, int *, dcomplex *, int *, int *, int *,
                     int *);
extern void pztrtrs_(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, int *, int *, int *, int *);
extern void pztzrzf_(int *, int *, dcomplex *, int *, int *, int *, dcomplex *,
                     dcomplex *, int *, int *);
extern void pzung2l_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzung2r_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzungl2_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzunglq_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzungql_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzungqr_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzungr2_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzungrq_(int *, int *, int *, dcomplex *, int *, int *, int *,
                     dcomplex *, dcomplex *, int *, int *);
extern void pzunm2l_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunm2r_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmbr_(char *, char *, char *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void pzunmhr_(char *, char *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void pzunml2_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmlq_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmql_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmqr_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmr2_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmr3_(char *, char *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void pzunmrq_(char *, char *, int *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void pzunmrz_(char *, char *, int *, int *, int *, int *, dcomplex *,
                     int *, int *, int *, dcomplex *, dcomplex *, int *, int *,
                     int *, dcomplex *, int *, int *);
extern void pzunmtr_(char *, char *, char *, int *, int *, dcomplex *, int *,
                     int *, int *, dcomplex *, dcomplex *, int *, int *, int *,
                     dcomplex *, int *, int *);
extern void sdbtf2_(int *, int *, int *, int *, float *, int *, int *);
extern void sdbtrf_(int *, int *, int *, int *, float *, int *, int *);
extern void sdttrf_(int *, scomplex *, scomplex *, scomplex *, int *);
extern void sdttrsv_(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void slamsh_(float *, int *, int *, int *, float *, int *, int *,
                    float *);
extern void slapst_(char *, int *, float *, int *, int *);
extern void slaqr6_(char *, int *, int *, int *, int *, int *, int *, int *,
                    float *, float *, float *, int *, int *, int *, float *,
                    int *, float *, int *, float *, int *, int *, float *,
                    int *, int *, float *, int *);
extern void slar1va_(int *, int *, int *, float *, float *, float *, float *,
                     float *, float *, float *, float *, int *, int *, float *,
                     float *, int *, int *, float *, float *, float *, float *);
extern void slaref_(char *, float *, int *, int *, float *, int *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, float *,
                    float *, float *, float *, float *, float *);
extern void slarrb2_(int *, float *, float *, int *, int *, float *, float *,
                     int *, float *, float *, float *, float *, int *, float *,
                     float *, float *, int *, int *);
extern void slaneg2_(int *, float *, float *, float *, float *, int *);
extern void slaneg2a_(int *, float *, float *, float *, int *);
extern void slarrd2_(char *, char *, int *, float *, float *, int *, int *,
                     float *, float *, float *, float *, float *, float *,
                     int *, int *, int *, float *, float *, float *, float *,
                     int *, int *, float *, int *, int *, int *, int *);
extern void slarre2_(char *, int *, float *, float *, int *, int *, float *,
                     float *, float *, float *, float *, float *, int *, int *,
                     int *, int *, int *, float *, float *, float *, int *,
                     int *, float *, double *, float *, int *, int *);
extern void slarre2a_(char *, int *, float *, float *, int *, int *, float *,
                      float *, float *, float *, float *, float *, int *, int *,
                      int *, int *, int *, int *, int *, float *, float *,
                      float *, int *, int *, float *, float *, double *,
                      float *, int *, float *, int *);
extern void slarrf2_(int *, float *, float *, float *, int *, int *, int *,
                     int *, float *, float *, float *, int *, float *, float *,
                     float *, double *, float *, float *, float *, float *,
                     int *);
extern void slarrv2_(int *, float *, float *, float *, float *, double *, int *,
                     int *, int *, int *, int *, int *, float *, float *,
                     float *, float *, float *, float *, int *, int *, float *,
                     float *, float *, int *, int *, float *, int *, int *,
                     int *, int *, int *, int *, int *, int *);
extern void slasorte_(float *, int *, int *, float *, int *);
extern void slasrt2_(char *, int *, float *, int *, int *);
extern void spttrsv_(char *, int *, int *, float *, scomplex *, scomplex *,
                     int *, int *);
extern void sstegr2_(char *, char *, int *, float *, float *, float *, float *,
                     int *, int *, int *, float *, float *, int *, int *, int *,
                     float *, int *, int *, int *, int *, int *, int *, int *);
extern void sstegr2a_(char *, char *, int *, float *, float *, float *, float *,
                      int *, int *, int *, float *, float *, int *, int *,
                      float *, int *, int *, int *, int *, int *, int *, int *,
                      int *, int *, float *, float *, float *, float *, int *);
extern void sstegr2b_(char *, int *, float *, float *, int *, float *, float *,
                      int *, int *, int *, float *, int *, int *, int *, int *,
                      int *, int *, int *, float *, float *, float *, float *,
                      float *, int *, int *, int *, int *, int *, int *, int *);
extern void sstein2_(int *, float *, float *, int *, float *, int *, int *,
                     float *, float *, int *, float *, int *, int *, int *);
extern void ssteqr2_(char *, int *, float *, float *, float *, int *, int *,
                     float *, int *);
extern void strmvt_(char *, int *, float *, int *, float *, int *, float *,
                    int *, float *, int *, float *, int *);
extern void zdbtf2_(int *, int *, int *, int *, dcomplex *, int *, int *);
extern void zdbtrf_(int *, int *, int *, int *, float *, int *, int *);
extern void zdttrf_(int *, scomplex *, scomplex *, scomplex *, int *);
extern void zdttrsv_(char *, char *, int *, int *, scomplex *, scomplex *,
                     scomplex *, scomplex *, int *, int *);
extern void zlahqr2_(int *, int *, int *, int *, int *, dcomplex *, int *,
                     dcomplex *, int *, int *, dcomplex *, int *, int *);
extern void zlamsh_(dcomplex *, int *, int *, int *, dcomplex *, int *, int *,
                    double *);
extern void zlanv2_(dcomplex *, dcomplex *, dcomplex *, dcomplex *, dcomplex *,
                    dcomplex *, double *, dcomplex *);
extern void zlaref_(char *, dcomplex *, int *, int *, dcomplex *, int *, int *,
                    int *, int *, int *, int *, int *, int *, int *, int *,
                    dcomplex *, dcomplex *, dcomplex *, dcomplex *, dcomplex *,
                    dcomplex *);
extern void zpttrsv_(char *, char *, int *, int *, float *, scomplex *,
                     scomplex *, int *, int *);
extern void zsteqr2_(char *, int *, double *, double *, dcomplex *, int *,
                     int *, double *, int *);
extern void ztrmvt_(char *, int *, scomplex *, int *, scomplex *, int *,
                    scomplex *, int *, scomplex *, int *, scomplex *, int *);
