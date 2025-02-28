*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PZLASMSUB( A, DESCA, I, L, K, SMLNUM, BUF, LWORK )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     July 31, 2001
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            I, K, L, LWORK
      DOUBLE PRECISION   SMLNUM
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      COMPLEX*16         A( * ), BUF( * )
*     ..
*
*  Purpose
*  =======
*
*  PZLASMSUB looks for a small subdiagonal element from the bottom
*     of the matrix that it can safely set to zero.
*
*  Notes
*  =====
*
*  Each global data object is described by an associated description
*  vector.  This vector stores the information required to establish
*  the mapping between an object element and its corresponding process
*  and memory location.
*
*  Let A be a generic term for any 2D block cyclicly distributed array.
*  Such a global array has an associated description vector DESCA.
*  In the following comments, the character _ should be read as
*  "of the global array".
*
*  NOTATION        STORED IN      EXPLANATION
*  --------------- -------------- --------------------------------------
*  DTYPE_A(global) DESCA( DTYPE_ )The descriptor type.  In this case,
*                                 DTYPE_A = 1.
*  CTXT_A (global) DESCA( CTXT_ ) The BLACS context handle, indicating
*                                 the BLACS process grid A is distribu-
*                                 ted over. The context itself is glo-
*                                 bal, but the handle (the integer
*                                 value) may vary.
*  M_A    (global) DESCA( M_ )    The number of rows in the global
*                                 array A.
*  N_A    (global) DESCA( N_ )    The number of columns in the global
*                                 array A.
*  MB_A   (global) DESCA( MB_ )   The blocking factor used to distribute
*                                 the rows of the array.
*  NB_A   (global) DESCA( NB_ )   The blocking factor used to distribute
*                                 the columns of the array.
*  RSRC_A (global) DESCA( RSRC_ ) The process row over which the first
*                                 row of the array A is distributed.
*  CSRC_A (global) DESCA( CSRC_ ) The process column over which the
*                                 first column of the array A is
*                                 distributed.
*  LLD_A  (local)  DESCA( LLD_ )  The leading dimension of the local
*                                 array.  LLD_A >= MAX(1,LOCr(M_A)).
*
*  Let K be the number of rows or columns of a distributed matrix,
*  and assume that its process grid has dimension p x q.
*  LOCr( K ) denotes the number of elements of K that a process
*  would receive if K were distributed over the p processes of its
*  process column.
*  Similarly, LOCc( K ) denotes the number of elements of K that a
*  process would receive if K were distributed over the q processes of
*  its process row.
*  The values of LOCr() and LOCc() may be determined via a call to the
*  ScaLAPACK tool function, NUMROC:
*          LOCr( M ) = NUMROC( M, MB_A, MYROW, RSRC_A, NPROW ),
*          LOCc( N ) = NUMROC( N, NB_A, MYCOL, CSRC_A, NPCOL ).
*  An upper bound for these quantities may be computed by:
*          LOCr( M ) <= ceil( ceil(M/MB_A)/NPROW )*MB_A
*          LOCc( N ) <= ceil( ceil(N/NB_A)/NPCOL )*NB_A
*
*  Arguments
*  =========
*
*  A       (global input) COMPLEX*16 array, dimension (DESCA(LLD_),*)
*          On entry, the Hessenberg matrix whose tridiagonal part is
*          being scanned.
*          Unchanged on exit.
*
*  DESCA   (global and local input) INTEGER array of dimension DLEN_.
*          The array descriptor for the distributed matrix A.
*
*  I       (global input) INTEGER
*          The global location of the bottom of the unreduced
*          submatrix of A.
*          Unchanged on exit.
*
*  L       (global input) INTEGER
*          The global location of the top of the unreduced submatrix
*          of A.
*          Unchanged on exit.
*
*  K       (global output) INTEGER
*          On exit, this yields the bottom portion of the unreduced
*          submatrix.  This will satisfy: L <= M  <= I-1.
*
*  SMLNUM  (global input) DOUBLE PRECISION
*          On entry, a "small number" for the given matrix.
*          Unchanged on exit.
*
*  BUF     (local output) COMPLEX*16 array of size LWORK.
*
*  LWORK   (global input) INTEGER
*          On exit, LWORK is the size of the work buffer.
*          This must be at least 2*Ceil( Ceil( (I-L)/HBL ) /
*                                        LCM(NPROW,NPCOL) )
*          Here LCM is least common multiple, and NPROWxNPCOL is the
*          logical grid size.
*
*   Notes:
*
*     This routine does a global maximum and must be called by all
*     processes.
*
*     This code is basically a parallelization of the following snip
*     of LAPACK code from ZLAHQR:
*
*        Look for a single small subdiagonal element.
*
*        DO 20 K = I, L + 1, -1
*           TST1 = CABS1( H( K-1, K-1 ) ) + CABS1( H( K, K ) )
*           IF( TST1.EQ.ZERO )
*    $         TST1 = ZLANHS( '1', I-L+1, H( L, L ), LDH, WORK )
*           IF( CABS1( H( K, K-1 ) ).LE.MAX( ULP*TST1, SMLNUM ) )
*    $         GO TO 30
*  20    CONTINUE
*  30    CONTINUE
*
*  Further Details
*  ===============
*
*  Implemented by:  M. Fahey, May 28, 1999
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      DOUBLE PRECISION   ZERO
      PARAMETER          ( ZERO = 0.0D+0 )
*     ..
*     .. Local Scalars ..
      INTEGER            CONTXT, DOWN, HBL, IBUF1, IBUF2, ICOL1, ICOL2,
     $                   II, III, IRCV1, IRCV2, IROW1, IROW2, ISRC,
     $                   ISTR1, ISTR2, ITMP1, ITMP2, JJ, JJJ, JSRC, LDA,
     $                   LEFT, MODKM1, MYCOL, MYROW, NPCOL, NPROW, NUM,
     $                   RIGHT, UP
      DOUBLE PRECISION   TST1, ULP
      COMPLEX*16         CDUM, H10, H11, H22
*     ..
*     .. External Functions ..
      INTEGER            ILCM, NUMROC
      DOUBLE PRECISION   PDLAMCH
      EXTERNAL           ILCM, NUMROC, PDLAMCH
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, IGAMX2D, INFOG1L, INFOG2L,
     $                   ZGERV2D, ZGESD2D
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ABS, DBLE, DIMAG, MAX, MOD
*     ..
*     .. Statement Functions ..
      DOUBLE PRECISION   CABS1
*     ..
*     .. Statement Function definitions ..
      CABS1( CDUM ) = ABS( DBLE( CDUM ) ) + ABS( DIMAG( CDUM ) )
*     ..
*     .. Executable Statements ..
*
*     Initialize framework context structure if not initialized
*
*
      CALL AOCL_SCALAPACK_INIT( )
*
*
*     Capture the subroutine entry in the trace file
*
      AOCL_DTL_TRACE_ENTRY_F
*
      HBL = DESCA( MB_ )
      CONTXT = DESCA( CTXT_ )
      LDA = DESCA( LLD_ )
      ULP = PDLAMCH( CONTXT, 'PRECISION' )
      CALL BLACS_GRIDINFO( CONTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  I, K, L, LWORK, SMLNUM, NPROW,
     $            NPCOL, MYROW, MYCOL, eos_str
 102     FORMAT('PZLASMSUB inputs: ,I:',I9,', K:',I9,', L:',I9,
     $           ', LWORK:',I9,', SMLNUM:',F9.4,
     $           ',  NPROW: ', I9,', NPCOL: ', I9 ,
     $           ', MYROW: ', I9,', MYCOL: ', I9, A1)
         AOCL_DTL_LOG_ENTRY_F
      END IF
      LEFT = MOD( MYCOL+NPCOL-1, NPCOL )
      RIGHT = MOD( MYCOL+1, NPCOL )
      UP = MOD( MYROW+NPROW-1, NPROW )
      DOWN = MOD( MYROW+1, NPROW )
      NUM = NPROW*NPCOL
*
*     BUFFER1 STARTS AT BUF(ISTR1+1) AND WILL CONTAINS IBUF1 ELEMENTS
*     BUFFER2 STARTS AT BUF(ISTR2+1) AND WILL CONTAINS IBUF2 ELEMENTS
*
      ISTR1 = 0
      ISTR2 = ( ( I-L ) / HBL )
      IF( ISTR2*HBL.LT.( I-L ) )
     $   ISTR2 = ISTR2 + 1
      II = ISTR2 / ILCM( NPROW, NPCOL )
      IF( II*ILCM( NPROW, NPCOL ).LT.ISTR2 ) THEN
         ISTR2 = II + 1
      ELSE
         ISTR2 = II
      END IF
      IF( LWORK.LT.2*ISTR2 ) THEN
*
*        Error!
*
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
      CALL INFOG2L( I, I, DESCA, NPROW, NPCOL, MYROW, MYCOL, IROW1,
     $              ICOL1, II, JJ )
      MODKM1 = MOD( I-1+HBL, HBL )
*
*     COPY OUR RELEVANT PIECES OF TRIADIAGONAL THAT WE OWE INTO
*     2 BUFFERS TO SEND TO WHOMEVER OWNS H(K,K) AS K MOVES DIAGONALLY
*     UP THE TRIDIAGONAL
*
      IBUF1 = 0
      IBUF2 = 0
      IRCV1 = 0
      IRCV2 = 0
      DO 10 K = I, L + 1, -1
         IF( ( MODKM1.EQ.0 ) .AND. ( DOWN.EQ.II ) .AND.
     $       ( RIGHT.EQ.JJ ) ) THEN
*
*           WE MUST PACK H(K-1,K-1) AND SEND IT DIAGONAL DOWN
*
            IF( ( DOWN.NE.MYROW ) .OR. ( RIGHT.NE.MYCOL ) ) THEN
               CALL INFOG2L( K-1, K-1, DESCA, NPROW, NPCOL, MYROW,
     $                       MYCOL, IROW1, ICOL1, ISRC, JSRC )
               IBUF1 = IBUF1 + 1
               BUF( ISTR1+IBUF1 ) = A( ( ICOL1-1 )*LDA+IROW1 )
            END IF
         END IF
         IF( ( MODKM1.EQ.0 ) .AND. ( MYROW.EQ.II ) .AND.
     $       ( RIGHT.EQ.JJ ) ) THEN
*
*           WE MUST PACK H(K  ,K-1) AND SEND IT RIGHT
*
            IF( NPCOL.GT.1 ) THEN
               CALL INFOG2L( K, K-1, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                       IROW1, ICOL1, ISRC, JSRC )
               IBUF2 = IBUF2 + 1
               BUF( ISTR2+IBUF2 ) = A( ( ICOL1-1 )*LDA+IROW1 )
            END IF
         END IF
*
*        ADD UP THE RECEIVES
*
         IF( ( MYROW.EQ.II ) .AND. ( MYCOL.EQ.JJ ) ) THEN
            IF( ( MODKM1.EQ.0 ) .AND. ( ( NPROW.GT.1 ) .OR. ( NPCOL.GT.
     $          1 ) ) ) THEN
*
*              WE MUST RECEIVE H(K-1,K-1) FROM DIAGONAL UP
*
               IRCV1 = IRCV1 + 1
            END IF
            IF( ( MODKM1.EQ.0 ) .AND. ( NPCOL.GT.1 ) ) THEN
*
*              WE MUST RECEIVE H(K  ,K-1) FROM LEFT
*
               IRCV2 = IRCV2 + 1
            END IF
         END IF
*
*        POSSIBLY CHANGE OWNERS (OCCURS ONLY WHEN MOD(K-1,HBL) = 0)
*
         IF( MODKM1.EQ.0 ) THEN
            II = II - 1
            JJ = JJ - 1
            IF( II.LT.0 )
     $         II = NPROW - 1
            IF( JJ.LT.0 )
     $         JJ = NPCOL - 1
         END IF
         MODKM1 = MODKM1 - 1
         IF( MODKM1.LT.0 )
     $      MODKM1 = HBL - 1
   10 CONTINUE
*
*     SEND DATA ON TO THE APPROPRIATE NODE IF THERE IS ANY DATA TO SEND
*
      IF( IBUF1.GT.0 ) THEN
         CALL ZGESD2D( CONTXT, IBUF1, 1, BUF( ISTR1+1 ), IBUF1, DOWN,
     $                 RIGHT )
      END IF
      IF( IBUF2.GT.0 ) THEN
         CALL ZGESD2D( CONTXT, IBUF2, 1, BUF( ISTR2+1 ), IBUF2, MYROW,
     $                 RIGHT )
      END IF
*
*     RECEIVE APPROPRIATE DATA IF THERE IS ANY
*
      IF( IRCV1.GT.0 ) THEN
         CALL ZGERV2D( CONTXT, IRCV1, 1, BUF( ISTR1+1 ), IRCV1, UP,
     $                 LEFT )
      END IF
      IF( IRCV2.GT.0 ) THEN
         CALL ZGERV2D( CONTXT, IRCV2, 1, BUF( ISTR2+1 ), IRCV2, MYROW,
     $                 LEFT )
      END IF
*
*     START MAIN LOOP
*
      IBUF1 = 0
      IBUF2 = 0
      CALL INFOG2L( I, I, DESCA, NPROW, NPCOL, MYROW, MYCOL, IROW1,
     $              ICOL1, II, JJ )
      MODKM1 = MOD( I-1+HBL, HBL )
*
*        LOOK FOR A SINGLE SMALL SUBDIAGONAL ELEMENT.
*
*        Start loop for subdiagonal search
*
      DO 40 K = I, L + 1, -1
         IF( ( MYROW.EQ.II ) .AND. ( MYCOL.EQ.JJ ) ) THEN
            IF( MODKM1.EQ.0 ) THEN
*
*                 Grab information from WORK array
*
               IF( NUM.GT.1 ) THEN
                  IBUF1 = IBUF1 + 1
                  H11 = BUF( ISTR1+IBUF1 )
               ELSE
                  H11 = A( ( ICOL1-2 )*LDA+IROW1-1 )
               END IF
               IF( NPCOL.GT.1 ) THEN
                  IBUF2 = IBUF2 + 1
                  H10 = BUF( ISTR2+IBUF2 )
               ELSE
                  H10 = A( ( ICOL1-2 )*LDA+IROW1 )
               END IF
            ELSE
*
*                 Information is local
*
               H11 = A( ( ICOL1-2 )*LDA+IROW1-1 )
               H10 = A( ( ICOL1-2 )*LDA+IROW1 )
            END IF
            H22 = A( ( ICOL1-1 )*LDA+IROW1 )
            TST1 = CABS1( H11 ) + CABS1( H22 )
            IF( TST1.EQ.ZERO ) THEN
*
*                 FIND SOME NORM OF THE LOCAL H(L:I,L:I)
*
               CALL INFOG1L( L, HBL, NPROW, MYROW, 0, ITMP1, III )
               IROW2 = NUMROC( I, HBL, MYROW, 0, NPROW )
               CALL INFOG1L( L, HBL, NPCOL, MYCOL, 0, ITMP2, III )
               ICOL2 = NUMROC( I, HBL, MYCOL, 0, NPCOL )
               DO 30 III = ITMP1, IROW2
                  DO 20 JJJ = ITMP2, ICOL2
                     TST1 = TST1 + CABS1( A( ( JJJ-1 )*LDA+III ) )
   20             CONTINUE
   30          CONTINUE
            END IF
            IF( CABS1( H10 ).LE.MAX( ULP*TST1, SMLNUM ) )
     $         GO TO 50
            IROW1 = IROW1 - 1
            ICOL1 = ICOL1 - 1
         END IF
         MODKM1 = MODKM1 - 1
         IF( MODKM1.LT.0 )
     $      MODKM1 = HBL - 1
         IF( ( MODKM1.EQ.HBL-1 ) .AND. ( K.GT.2 ) ) THEN
            II = MOD( II+NPROW-1, NPROW )
            JJ = MOD( JJ+NPCOL-1, NPCOL )
            CALL INFOG2L( K-1, K-1, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                    IROW1, ICOL1, ITMP1, ITMP2 )
         END IF
   40 CONTINUE
   50 CONTINUE
      CALL IGAMX2D( CONTXT, 'ALL', ' ', 1, 1, K, 1, ITMP1, ITMP2, -1,
     $              -1, -1 )
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PZLASMSUB
*
      END
