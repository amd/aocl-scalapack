/* ---------------------------------------------------------------------
*
*  -- PBLAS routine (version 2.0) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     April 1, 1998
*
*  ---------------------------------------------------------------------
*/
/*
*  Include files
*/
#include "pblas.h"
#include "PBpblas.h"
#include "PBtools.h"
#include "PBblacs.h"
#include "PBblas.h"

#ifdef __STDC__
void pcatrmv_( F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int * N,
               float * ALPHA,
               float * A, Int * IA, Int * JA, Int * DESCA,
               float * X, Int * IX, Int * JX, Int * DESCX,
               Int * INCX, float * BETA,
               float * Y, Int * IY, Int * JY, Int * DESCY,
               Int * INCY )
#else
void pcatrmv_( UPLO, TRANS, DIAG, N, ALPHA, A, IA, JA, DESCA, X, IX,
               JX, DESCX, INCX, BETA, Y, IY, JY, DESCY, INCY )
/*
*  .. Scalar Arguments ..
*/
   F_CHAR_T       DIAG, TRANS, UPLO;
   Int            * IA, * INCX, * INCY, * IX, * IY, * JA, * JX, * JY,
                  * N;
   float          * ALPHA, * BETA;
/*
*  .. Array Arguments ..
*/
   Int            * DESCA, * DESCX, * DESCY;
   float          * A, * X, * Y;
#endif
{
/*
*  Purpose
*  =======
*
*  PCATRMV  performs one of the matrix-vector operations
*
*     sub( Y ) := abs( alpha )*abs( sub( A ) )*abs( sub( X ) ) +
*                 abs( beta*sub( Y ) ),
*     or
*
*     sub( Y ) := abs( alpha )*abs( sub( A )' )*abs( sub( X ) ) +
*                 abs( beta*sub( Y ) ),
*     or
*
*     sub( Y ) := abs( alpha )*abs( conjg( sub( A )' ) )*abs( sub( X ) )
*                 + abs( beta*sub( Y ) ),
*
*  where
*
*     sub( A ) denotes A(IA:IA+N-1,JA:JA+N-1),
*
*     sub( X ) denotes X(IX:IX,JX:JX+N-1), if INCX = M_X,
*                      X(IX:IX+N-1,JX:JX), if INCX = 1 and INCX <> M_X,
*     and,
*
*     sub( Y ) denotes Y(IY:IY,JY:JY+N-1), if INCY = M_Y,
*                      Y(IY:IY+N-1,JY:JY), if INCY = 1 and INCY <> M_Y.
*
*  Alpha  and  beta  are  real  scalars,  sub( Y )  is a real subvector,
*  sub( X ) is a subvector and sub( A ) is an n by n  triangular  subma-
*  trix.
*
*  Notes
*  =====
*
*  A description  vector  is associated with each 2D block-cyclicly dis-
*  tributed matrix.  This  vector  stores  the  information  required to
*  establish the  mapping  between a  matrix entry and its corresponding
*  process and memory location.
*
*  In  the  following  comments,   the character _  should  be  read  as
*  "of  the  distributed  matrix".  Let  A  be a generic term for any 2D
*  block cyclicly distributed matrix.  Its description vector is DESC_A:
*
*  NOTATION         STORED IN       EXPLANATION
*  ---------------- --------------- ------------------------------------
*  DTYPE_A (global) DESCA[ DTYPE_ ] The descriptor type.
*  CTXT_A  (global) DESCA[ CTXT_  ] The BLACS context handle, indicating
*                                   the NPROW x NPCOL BLACS process grid
*                                   A  is  distributed over. The context
*                                   itself  is  global,  but  the handle
*                                   (the integer value) may vary.
*  M_A     (global) DESCA[ M_     ] The  number of rows in the distribu-
*                                   ted matrix A, M_A >= 0.
*  N_A     (global) DESCA[ N_     ] The number of columns in the distri-
*                                   buted matrix A, N_A >= 0.
*  IMB_A   (global) DESCA[ IMB_   ] The number of rows of the upper left
*                                   block of the matrix A, IMB_A > 0.
*  INB_A   (global) DESCA[ INB_   ] The  number  of columns of the upper
*                                   left   block   of   the  matrix   A,
*                                   INB_A > 0.
*  MB_A    (global) DESCA[ MB_    ] The blocking factor used to  distri-
*                                   bute the last  M_A-IMB_A  rows of A,
*                                   MB_A > 0.
*  NB_A    (global) DESCA[ NB_    ] The blocking factor used to  distri-
*                                   bute the last  N_A-INB_A  columns of
*                                   A, NB_A > 0.
*  RSRC_A  (global) DESCA[ RSRC_  ] The process row over which the first
*                                   row of the matrix  A is distributed,
*                                   NPROW > RSRC_A >= 0.
*  CSRC_A  (global) DESCA[ CSRC_  ] The  process column  over  which the
*                                   first column of  A  is  distributed.
*                                   NPCOL > CSRC_A >= 0.
*  LLD_A   (local)  DESCA[ LLD_   ] The  leading dimension  of the local
*                                   array  storing  the  local blocks of
*                                   the distributed matrix A,
*                                   IF( Lc( 1, N_A ) > 0 )
*                                      LLD_A >= MAX( 1, Lr( 1, M_A ) )
*                                   ELSE
*                                      LLD_A >= 1.
*
*  Let K be the number of  rows of a matrix A starting at the global in-
*  dex IA,i.e, A( IA:IA+K-1, : ). Lr( IA, K ) denotes the number of rows
*  that the process of row coordinate MYROW ( 0 <= MYROW < NPROW ) would
*  receive if these K rows were distributed over NPROW processes.  If  K
*  is the number of columns of a matrix  A  starting at the global index
*  JA, i.e, A( :, JA:JA+K-1, : ), Lc( JA, K ) denotes the number  of co-
*  lumns that the process MYCOL ( 0 <= MYCOL < NPCOL ) would  receive if
*  these K columns were distributed over NPCOL processes.
*
*  The values of Lr() and Lc() may be determined via a call to the func-
*  tion PB_Cnumroc:
*  Lr( IA, K ) = PB_Cnumroc( K, IA, IMB_A, MB_A, MYROW, RSRC_A, NPROW )
*  Lc( JA, K ) = PB_Cnumroc( K, JA, INB_A, NB_A, MYCOL, CSRC_A, NPCOL )
*
*  Arguments
*  =========
*
*  UPLO    (global input) CHARACTER*1
*          On entry,  UPLO  specifies whether the submatrix  sub( A ) is
*          an upper or lower triangular submatrix as follows:
*
*             UPLO = 'U' or 'u'   sub( A ) is an upper triangular
*                                 submatrix,
*
*             UPLO = 'L' or 'l'   sub( A ) is a  lower triangular
*                                 submatrix.
*
*  TRANS   (global input) CHARACTER*1
*          On entry,  TRANS  specifies the  operation to be performed as
*          follows:
*
*             TRANS = 'N' or 'n'
*                sub( Y ) := |alpha|*|sub( A )|*|sub( X )| +
*                                                       |beta*sub( Y )|.
*
*             TRANS = 'T' or 't'
*                sub( Y ) := |alpha|*|sub( A )'|*|sub( X )| +
*                                                       |beta*sub( Y )|.
*
*             TRANS = 'C' or 'c'
*                sub( Y ) := |alpha|*|conjg( sub( A )' )|*|sub( X )| +
*                                                       |beta*sub( Y )|.
*
*  DIAG    (global input) CHARACTER*1
*          On entry,  DIAG  specifies  whether or not  sub( A )  is unit
*          triangular as follows:
*
*             DIAG = 'U' or 'u'  sub( A )  is  assumed to be unit trian-
*                                gular,
*
*             DIAG = 'N' or 'n'  sub( A ) is not assumed to be unit tri-
*                                angular.
*
*  N       (global input) INTEGER
*          On entry,  N specifies the order of the  submatrix  sub( A ).
*          N must be at least zero.
*
*  ALPHA   (global input) REAL
*          On entry, ALPHA specifies the scalar alpha.   When  ALPHA  is
*          supplied  as  zero  then  the  local entries of the arrays  A
*          and X corresponding to the entries of the submatrix  sub( A )
*          and the subvector sub( X ) need not be set on input.
*
*  A       (local input) COMPLEX array
*          On entry, A is an array of dimension (LLD_A, Ka), where Ka is
*          at least Lc( 1, JA+N-1 ).  Before  entry, this array contains
*          the local entries of the matrix A.
*          Before entry with  UPLO = 'U' or 'u', this array contains the
*          local entries corresponding to  the entries of the upper tri-
*          angular submatrix  sub( A ), and the local entries correspon-
*          ding to the entries of the  strictly lower triangular part of
*          the submatrix  sub( A )  are not referenced.
*          Before entry with  UPLO = 'L' or 'l', this array contains the
*          local entries corresponding to  the entries of the lower tri-
*          angular submatrix  sub( A ), and the local entries correspon-
*          ding to the entries of the  strictly upper triangular part of
*          the submatrix  sub( A )  are not referenced.
*          Note  that  when DIAG = 'U' or 'u', the local entries corres-
*          ponding to  the diagonal elements  of the submatrix  sub( A )
*          are not referenced either, but are assumed to be unity.
*
*  IA      (global input) INTEGER
*          On entry, IA  specifies A's global row index, which points to
*          the beginning of the submatrix sub( A ).
*
*  JA      (global input) INTEGER
*          On entry, JA  specifies A's global column index, which points
*          to the beginning of the submatrix sub( A ).
*
*  DESCA   (global and local input) INTEGER array
*          On entry, DESCA  is an integer array of dimension DLEN_. This
*          is the array descriptor for the matrix A.
*
*  X       (local input) COMPLEX array
*          On entry, X is an array of dimension (LLD_X, Kx), where LLD_X
*          is   at  least  MAX( 1, Lr( 1, IX ) )  when  INCX = M_X   and
*          MAX( 1, Lr( 1, IX+Lx-1 ) )  otherwise, and,  Kx  is  at least
*          Lc( 1, JX+Lx-1 ) when  INCX = M_X  and Lc( 1, JX ) otherwise.
*          Lx  is  N when TRANS = 'N' or 'n' and M otherwise. Before en-
*          try, this array contains the local entries of the matrix X.
*
*  IX      (global input) INTEGER
*          On entry, IX  specifies X's global row index, which points to
*          the beginning of the submatrix sub( X ).
*
*  JX      (global input) INTEGER
*          On entry, JX  specifies X's global column index, which points
*          to the beginning of the submatrix sub( X ).
*
*  DESCX   (global and local input) INTEGER array
*          On entry, DESCX  is an integer array of dimension DLEN_. This
*          is the array descriptor for the matrix X.
*
*  INCX    (global input) INTEGER
*          On entry,  INCX   specifies  the  global  increment  for  the
*          elements of  X.  Only two values of  INCX   are  supported in
*          this version, namely 1 and M_X. INCX  must not be zero.
*
*  BETA    (global input) REAL
*          On entry,  BETA  specifies the scalar  beta.   When  BETA  is
*          supplied  as  zero  then  the  local entries of  the array  Y
*          corresponding to the entries of the subvector  sub( Y )  need
*          not be set on input.
*
*  Y       (local input/local output) REAL array
*          On entry, Y is an array of dimension (LLD_Y, Ky), where LLD_Y
*          is   at  least  MAX( 1, Lr( 1, IY ) )  when  INCY = M_Y   and
*          MAX( 1, Lr( 1, IY+Ly-1 ) )  otherwise, and,  Ky  is  at least
*          Lc( 1, JY+Ly-1 ) when  INCY = M_Y  and Lc( 1, JY ) otherwise.
*          Ly is M when TRANS = 'N' or 'n' and  N  otherwise. Before en-
*          try, this array  contains the local  entries of the matrix Y.
*          On exit, sub( Y ) is overwritten by the updated subvector.
*
*  IY      (global input) INTEGER
*          On entry, IY  specifies Y's global row index, which points to
*          the beginning of the submatrix sub( Y ).
*
*  JY      (global input) INTEGER
*          On entry, JY  specifies Y's global column index, which points
*          to the beginning of the submatrix sub( Y ).
*
*  DESCY   (global and local input) INTEGER array
*          On entry, DESCY  is an integer array of dimension DLEN_. This
*          is the array descriptor for the matrix Y.
*
*  INCY    (global input) INTEGER
*          On entry,  INCY   specifies  the  global  increment  for  the
*          elements of  Y.  Only two values of  INCY   are  supported in
*          this version, namely 1 and M_Y. INCY  must not be zero.
*
*  -- Written on April 1, 1998 by
*     Antoine Petitet, University of Tennessee, Knoxville 37996, USA.
*
*  ---------------------------------------------------------------------
*/
/*
*  .. Local Scalars ..
*/
   char           DiagA, TranOp, UploA, Yroc, * one, top;
   Int            Acol, Ai, Aii, Aimb1, Ainb1, Aj, Ajj, Akp, Akq, Ald, Amb,
                  Amp, Amp0, Anb, Anq, Anq0, Arow, XAfr, XAld, Xi, Xj, YAfr,
                  YAld, YApbY, YAsum, Ycol, Yi, Yii, Yj, Yjj, Yld, Ynp, Ynq,
                  Yrow, ctxt, info, ione=1, k, kb, ktmp, mycol, myrow, nb,
                  notran, nounit, npcol, nprow, size, upper, usiz;
   float          * tbeta;
   PBTYP_T        * type, * utyp;
/*
*  .. Local Arrays ..
*/
   Int            Ad [DLEN_], Ad0[DLEN_], XAd[DLEN_], Xd[DLEN_], YAd[DLEN_],
                  Yd [DLEN_];
   char           * Aptr = NULL, * XA = NULL, * YA = NULL;
/* ..
*  .. Executable Statements ..
*
*/
   upper  = ( ( UploA  = Mupcase( F2C_CHAR( UPLO  )[0] ) ) ==  CUPPER );
   notran = ( ( TranOp = Mupcase( F2C_CHAR( TRANS )[0] ) ) == CNOTRAN );
   nounit = ( ( DiagA  = Mupcase( F2C_CHAR( DIAG  )[0] ) ) == CNOUNIT );
   PB_CargFtoC( *IA, *JA, DESCA, &Ai, &Aj, Ad );
   PB_CargFtoC( *IX, *JX, DESCX, &Xi, &Xj, Xd );
   PB_CargFtoC( *IY, *JY, DESCY, &Yi, &Yj, Yd );
#ifndef NO_ARGCHK
/*
*  Test the input parameters
*/
   Cblacs_gridinfo( ( ctxt = Ad[CTXT_] ), &nprow, &npcol, &myrow, &mycol );
   if( !( info = ( ( nprow == -1 ) ? -( 801 + CTXT_ ) : 0 ) ) )
   {
      if( ( !upper ) && ( UploA != CLOWER ) )
      {
         PB_Cwarn( ctxt, __LINE__, "PCATRMV", "Illegal UPLO = %c\n", UploA );
         info = -1;
      }
      else if( ( !notran ) && ( TranOp != CTRAN ) && ( TranOp != CCOTRAN ) )
      {
         PB_Cwarn( ctxt, __LINE__, "PCATRMV", "Illegal TRANS = %c\n", TranOp );
         info = -2;
      }
      else if( ( !nounit ) && ( DiagA != CUNIT ) )
      {
         PB_Cwarn( ctxt, __LINE__, "PCATRMV", "Illegal DIAG = %c\n", DiagA );
         info = -3;
      }
      PB_Cchkmat( ctxt, "PCATRMV", "A", *N, 4, *N, 4, Ai, Aj, Ad,  9, &info );
      PB_Cchkvec( ctxt, "PCATRMV", "X", *N, 4, Xi, Xj, Xd, *INCX, 13, &info );
      PB_Cchkvec( ctxt, "PCATRMV", "Y", *N, 4, Yi, Yj, Yd, *INCY, 19, &info );
   }
   if( info ) { PB_Cabort( ctxt, "PCATRMV", info ); return; }
#endif
/*
*  Quick return if possible
*/
   if( ( *N == 0 ) || ( ( ALPHA[REAL_PART] == ZERO ) &&
                        ( BETA [REAL_PART] == ONE  ) ) ) return;
/*
*  Retrieve process grid information
*/
#ifdef NO_ARGCHK
   Cblacs_gridinfo( ( ctxt = Ad[CTXT_] ), &nprow, &npcol, &myrow, &mycol );
#endif
/*
*  Get type structure
*/
   type = PB_Cctypeset(); size = type->size;
   utyp = PB_Cstypeset(); usiz = type->usiz;
/*
*  and when alpha is zero
*/
   if( ALPHA[REAL_PART] == ZERO )
   {
/*
*  Retrieve sub( Y )'s local information: Yii, Yjj, Yrow, Ycol
*/
      PB_Cinfog2l( Yi, Yj, Yd, nprow, npcol, myrow, mycol, &Yii, &Yjj,
                   &Yrow, &Ycol );

      if( *INCY == Yd[M_] )
      {
/*
*  sub( Y ) resides in (a) process row(s)
*/
         if( ( myrow == Yrow ) || ( Yrow < 0 ) )
         {
/*
*  Make sure I own some data and scale sub( Y )
*/
            Ynq = PB_Cnumroc( *N, Yj, Yd[INB_], Yd[NB_], mycol, Yd[CSRC_],
                              npcol );
            if( Ynq > 0 )
            {
               Yld = Yd[LLD_];
               sascal_( &Ynq, ((char *) BETA), Mptr( ((char *) Y), Yii,
                        Yjj, Yld, usiz ), &Yld );
            }
         }
      }
      else
      {
/*
*  sub( Y ) resides in (a) process column(s)
*/
         if( ( mycol == Ycol ) || ( Ycol < 0 ) )
         {
/*
*  Make sure I own some data and scale sub( Y )
*/
            Ynp = PB_Cnumroc( *N, Yi, Yd[IMB_], Yd[MB_], myrow, Yd[RSRC_],
                              nprow );
            if( Ynp > 0 )
            {
               sascal_( &Ynp, ((char *) BETA), Mptr( ((char *) Y), Yii,
                        Yjj, Yd[LLD_], usiz ), INCY );
            }
         }
      }
      return;
   }
/*
*  Compute descriptor Ad0 for sub( A )
*/
   PB_Cdescribe( *N, *N, Ai, Aj, Ad, nprow, npcol, myrow, mycol, &Aii, &Ajj,
                 &Ald, &Aimb1, &Ainb1, &Amb, &Anb, &Arow, &Acol, Ad0 );

   Yroc = ( *INCY == Yd[M_] ? CROW : CCOLUMN );

   if( notran )
   {
/*
*  Reuse sub( Y ) and/or create vector YA in process columns spanned by sub( A )
*/
      PB_CInOutV( utyp, COLUMN, *N, *N, Ad0, 1, ((char *) BETA), ((char *) Y),
                  Yi, Yj, Yd, &Yroc, ((char**)(&tbeta)), &YA, YAd, &YAfr,
                  &YAsum, &YApbY );
/*
*  Replicate sub( X ) in process rows spanned by sub( A ) -> XA
*/
      PB_CInV( type, NOCONJG, ROW,    *N, *N, Ad0, 1, ((char *) X), Xi, Xj, Xd,
               ( *INCX == Xd[M_] ? ROW : COLUMN ), &XA, XAd, &XAfr );
   }
   else
   {
/*
*  Reuse sub( Y ) and/or create vector YA in process rows spanned by sub( A )
*/
      PB_CInOutV( utyp, ROW,    *N, *N, Ad0, 1, ((char *) BETA), ((char *) Y),
                  Yi, Yj, Yd, &Yroc, ((char**)(&tbeta)), &YA, YAd, &YAfr,
                  &YAsum, &YApbY );
/*
*  Replicate sub( X ) in process columns spanned by sub( A ) -> XA
*/
      PB_CInV( type, NOCONJG, COLUMN, *N, *N, Ad0, 1, ((char *) X), Xi, Xj, Xd,
               ( *INCX == Xd[M_] ? ROW : COLUMN ), &XA, XAd, &XAfr );
   }

   one   = type->one;
/*
*  Local matrix-vector multiply iff I own some data
*/
   Aimb1 = Ad0[IMB_ ]; Ainb1 = Ad0[INB_ ]; Amb = Ad0[MB_]; Anb = Ad0[NB_];
   Acol  = Ad0[CSRC_]; Arow  = Ad0[RSRC_];
   Amp = PB_Cnumroc( *N, 0, Aimb1, Amb, myrow, Arow, nprow );
   Anq = PB_Cnumroc( *N, 0, Ainb1, Anb, mycol, Acol, npcol );

   if( ( Amp > 0 ) && ( Anq > 0 ) )
   {
      Aptr = Mptr( ((char *) A), Aii, Ajj, Ald, size );

      XAld = XAd[LLD_]; YAld = YAd[LLD_];
/*
*  Scale YA in the case sub( Y ) has been reused
*/
      if( notran && !( YApbY ) )
      {
/*
*  YA resides in (a) process column(s)
*/
         if( ( mycol == YAd[CSRC_] ) || ( YAd[CSRC_] < 0 ) )
         {
/*
*  Make sure I own some data and scale YA
*/
            if( Amp > 0 )
               sascal_( &Amp, ((char *) tbeta), YA, &ione );
         }
      }
      else if( !( notran ) && !( YApbY ) )
      {
/*
*  YA resides in (a) process row(s)
*/
         if( ( myrow == YAd[RSRC_] ) || ( YAd[RSRC_] < 0 ) )
         {
/*
*  Make sure I own some data and scale YA
*/
            if( Anq > 0 )
               sascal_( &Anq, ((char *) tbeta), YA, &YAld );
         }
      }
/*
*  Computational partitioning size is computed as the product of the logical
*  value returned by pilaenv_ and 2 * lcm( nprow, npcol )
*/
      nb = 2 * pilaenv_( &ctxt, C2F_CHAR( &utyp->type ) ) *
           PB_Clcm( ( Arow >= 0 ? nprow : 1 ), ( Acol >= 0 ? npcol : 1 ) );

      if( upper )
      {
         if( notran )
         {
            for( k = 0; k < *N; k += nb )
            {
               kb   = *N - k; kb = MIN( kb, nb );
               Akp  = PB_Cnumroc( k,  0, Aimb1, Amb, myrow, Arow, nprow );
               Akq  = PB_Cnumroc( k,  0, Ainb1, Anb, mycol, Acol, npcol );
               Anq0 = PB_Cnumroc( kb, k, Ainb1, Anb, mycol, Acol, npcol );
               if( Akp > 0 && Anq0 > 0 )
               {
                  cagemv_( TRANS, &Akp, &Anq0, ((char *) ALPHA),
                           Mptr( Aptr, 0, Akq,  Ald, size ), &Ald,
                           Mptr( XA,   0, Akq, XAld, size ), &XAld, one,
                           YA, &ione );
               }
               PB_Cptrm( type, utyp, LEFT, UPPER, &TranOp, &DiagA, kb, 1,
                         ((char *) ALPHA), Aptr, k, k, Ad0,
                         Mptr( XA, 0, Akq, XAld, size ), XAld,
                         Mptr( YA, Akp, 0, YAld, usiz ), YAld, PB_Ctzatrmv );
            }
         }
         else
         {
            for( k = 0; k < *N; k += nb )
            {
               kb   = *N - k; kb = MIN( kb, nb );
               Akp  = PB_Cnumroc( k,  0, Aimb1, Amb, myrow, Arow, nprow );
               Akq  = PB_Cnumroc( k,  0, Ainb1, Anb, mycol, Acol, npcol );
               Anq0 = PB_Cnumroc( kb, k, Ainb1, Anb, mycol, Acol, npcol );
               if( Akp > 0 && Anq0 > 0 )
               {
                  cagemv_( TRANS, &Akp, &Anq0, ((char *) ALPHA),
                           Mptr( Aptr, 0, Akq, Ald, size ), &Ald, XA, &ione,
                           one, Mptr( YA, 0, Akq, YAld, usiz ), &YAld );
               }
               PB_Cptrm( type, utyp, LEFT, UPPER, &TranOp, &DiagA, kb, 1,
                         ((char *) ALPHA), Aptr, k, k, Ad0,
                         Mptr( XA, Akp, 0, XAld, size ), XAld,
                         Mptr( YA, 0, Akq, YAld, usiz ), YAld, PB_Ctzatrmv );
            }
         }
      }
      else
      {
         if( notran )
         {
            for( k = 0; k < *N; k += nb )
            {
               kb  = *N - k; ktmp = k + ( kb = MIN( kb, nb ) );
               Akp = PB_Cnumroc( k, 0, Aimb1, Amb, myrow, Arow, nprow );
               Akq = PB_Cnumroc( k, 0, Ainb1, Anb, mycol, Acol, npcol );
               PB_Cptrm( type, utyp, LEFT, LOWER, &TranOp, &DiagA, kb, 1,
                         ((char *) ALPHA), Aptr, k, k, Ad0,
                         Mptr( XA, 0, Akq, XAld, size ), XAld,
                         Mptr( YA, Akp, 0, YAld, usiz ), YAld, PB_Ctzatrmv );
               Akp  = PB_Cnumroc( ktmp, 0, Aimb1, Amb, myrow, Arow, nprow );
               Amp0 = Amp - Akp;
               Anq0 = PB_Cnumroc( kb,   k, Ainb1, Anb, mycol, Acol, npcol );
               if( Amp0 > 0 && Anq0 > 0 )
               {
                  cagemv_( TRANS, &Amp0, &Anq0, ((char *) ALPHA),
                           Mptr( Aptr, Akp, Akq,  Ald, size ), &Ald,
                           Mptr( XA,     0, Akq, XAld, size ), &XAld, one,
                           Mptr( YA,   Akp,   0, YAld, usiz ), &ione );
               }
            }
         }
         else
         {
            for( k = 0; k < *N; k += nb )
            {
               kb  = *N - k; ktmp = k + ( kb = MIN( kb, nb ) );
               Akp = PB_Cnumroc( k, 0, Aimb1, Amb, myrow, Arow, nprow );
               Akq = PB_Cnumroc( k, 0, Ainb1, Anb, mycol, Acol, npcol );
               PB_Cptrm( type, utyp, LEFT, LOWER, &TranOp, &DiagA, kb, 1,
                         ((char *) ALPHA), Aptr, k, k, Ad0,
                         Mptr( XA, Akp, 0, XAld, size ), XAld,
                         Mptr( YA, 0, Akq, YAld, usiz ), YAld, PB_Ctzatrmv );
               Akp  = PB_Cnumroc( ktmp, 0, Aimb1, Amb, myrow, Arow, nprow );
               Amp0 = Amp - Akp;
               Anq0 = PB_Cnumroc( kb,   k, Ainb1, Anb, mycol, Acol, npcol );
               if( Amp0 > 0 && Anq0 > 0 )
               {
                  cagemv_( TRANS, &Amp0, &Anq0, one,
                           Mptr( Aptr, Akp, Akq,  Ald, size ), &Ald,
                           Mptr( XA,   Akp,   0, XAld, size ), &ione, one,
                           Mptr( YA,     0, Akq, YAld, usiz ), &YAld );
               }
            }
         }
      }
   }
   if( XAfr ) free( XA );

   if( notran )
   {
/*
*  Combine the partial column results into YA
*/
      if( YAsum && ( Amp > 0 ) )
      {
         top = *PB_Ctop( &ctxt, COMBINE, ROW, TOP_GET );
         Csgsum2d( ctxt, ROW, &top, Amp, 1, YA, YAd[LLD_], myrow,
                   YAd[CSRC_] );
      }
   }
   else
   {
/*
*  Combine the partial row results into YA
*/
      if( YAsum && ( Anq > 0 ) )
      {
         top = *PB_Ctop( &ctxt, COMBINE, COLUMN, TOP_GET );
         Csgsum2d( ctxt, COLUMN, &top, 1, Anq, YA, YAd[LLD_], YAd[RSRC_],
                   mycol );
      }
   }
/*
*  sub( Y ) := beta * sub( Y ) + YA (if necessary)
*/
   if( YApbY )
   {
/*
*  Retrieve sub( Y )'s local information: Yii, Yjj, Yrow, Ycol
*/
      PB_Cinfog2l( Yi, Yj, Yd, nprow, npcol, myrow, mycol, &Yii, &Yjj, &Yrow,
                   &Ycol );

      if( *INCY == Yd[M_] )
      {
/*
*  sub( Y ) resides in (a) process row(s)
*/
         if( ( myrow == Yrow ) || ( Yrow < 0 ) )
         {
/*
*  Make sure I own some data and scale sub( Y )
*/
            Ynq = PB_Cnumroc( *N, Yj, Yd[INB_], Yd[NB_], mycol, Yd[CSRC_],
                              npcol );
            if( Ynq > 0 )
            {
               Yld = Yd[LLD_];
               sascal_( &Ynq, ((char *) BETA), Mptr( ((char *) Y), Yii,
                        Yjj, Yld, usiz ), &Yld );
            }
         }
      }
      else
      {
/*
*  sub( Y ) resides in (a) process column(s)
*/
         if( ( mycol == Ycol ) || ( Ycol < 0 ) )
         {
/*
*  Make sure I own some data and scale sub( Y )
*/
            Ynp = PB_Cnumroc( *N, Yi, Yd[IMB_], Yd[MB_], myrow, Yd[RSRC_],
                              nprow );
            if( Ynp > 0 )
            {
               sascal_( &Ynp, ((char *) BETA), Mptr( ((char *) Y), Yii,
                        Yjj, Yd[LLD_], usiz ), INCY );
            }
         }
      }

      if( notran )
      {
         PB_Cpaxpby( utyp, NOCONJG, *N, 1, one, YA, 0, 0, YAd, COLUMN, one,
                     ((char *) Y), Yi, Yj, Yd, &Yroc );
      }
      else
      {
         PB_Cpaxpby( utyp, NOCONJG, 1, *N, one, YA, 0, 0, YAd, ROW,    one,
                     ((char *) Y), Yi, Yj, Yd, &Yroc );
      }
   }
   if( YAfr ) free( YA );
/*
*  End of PCATRMV
*/
}
