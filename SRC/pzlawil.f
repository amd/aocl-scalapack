*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PZLAWIL( II, JJ, M, A, DESCA, H44, H33, H43H34, V )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     July 31, 2001
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            II, JJ, M
      COMPLEX*16         H33, H43H34, H44
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      COMPLEX*16         A( * ), V( * )
*     ..
*
*  Purpose
*  =======
*
*  PZLAWIL gets the transform given by H44,H33, & H43H34 into V
*     starting at row M.
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
*  II      (global input) INTEGER
*          Row owner of H(M+2,M+2)
*
*  JJ      (global input) INTEGER
*          Column owner of H(M+2,M+2)
*
*  M       (global input) INTEGER
*          On entry, this is where the transform starts (row M.)
*          Unchanged on exit.
*
*  A       (global input) COMPLEX*16 array, dimension
*          (DESCA(LLD_),*)
*          On entry, the Hessenberg matrix.
*          Unchanged on exit.
*
*  DESCA   (global and local input) INTEGER array of dimension DLEN_.
*          The array descriptor for the distributed matrix A.
*          Unchanged on exit.
*
*  H44
*  H33
*  H43H34  (global input) COMPLEX*16
*          These three values are for the double shift QR iteration.
*          Unchanged on exit.
*
*  V       (global output) COMPLEX*16 array of size 3.
*          Contains the transform on ouput.
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
*     ..
*     .. Local Scalars ..
      INTEGER            CONTXT, DOWN, HBL, ICOL, IROW, JSRC, LDA, LEFT,
     $                   MODKM1, MYCOL, MYROW, NPCOL, NPROW, NUM, RIGHT,
     $                   RSRC, UP
      DOUBLE PRECISION   S
      COMPLEX*16         CDUM, H22, H33S, H44S, V1, V2
*     ..
*     .. Local Arrays ..
      COMPLEX*16         BUF( 4 ), H11( 1 ), H12( 1 ), H21( 1 ), V3( 1 )
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, INFOG2L, ZGERV2D, ZGESD2D
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ABS, DBLE, DIMAG, MOD
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
      CALL BLACS_GRIDINFO( CONTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  II, JJ, M, H33, H43H34, H44,
     $            NPROW, NPCOL, MYROW, MYCOL, eos_str
 102     FORMAT('PZLAWIL inputs: ,II:',I9,', JJ:',I9,', M:',I9,
     $           ', H33:',A, F9.4,', H43H34:',A, F9.4,
     $           ', H44:',A, F9.4,
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
*     On node (II,JJ) collect all DIA,SUP,SUB info from M, M+1
*
      MODKM1 = MOD( M+1, HBL )
      IF( MODKM1.EQ.0 ) THEN
         IF( ( MYROW.EQ.II ) .AND. ( RIGHT.EQ.JJ ) .AND.
     $       ( NPCOL.GT.1 ) ) THEN
            CALL INFOG2L( M+2, M+1, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                    IROW, ICOL, RSRC, JSRC )
            BUF( 1 ) = A( ( ICOL-1 )*LDA+IROW )
            CALL ZGESD2D( CONTXT, 1, 1, BUF, 1, II, JJ )
         END IF
         IF( ( DOWN.EQ.II ) .AND. ( RIGHT.EQ.JJ ) .AND. ( NUM.GT.1 ) )
     $        THEN
            CALL INFOG2L( M, M, DESCA, NPROW, NPCOL, MYROW, MYCOL, IROW,
     $                    ICOL, RSRC, JSRC )
            BUF( 1 ) = A( ( ICOL-1 )*LDA+IROW )
            BUF( 2 ) = A( ( ICOL-1 )*LDA+IROW+1 )
            BUF( 3 ) = A( ICOL*LDA+IROW )
            BUF( 4 ) = A( ICOL*LDA+IROW+1 )
            CALL ZGESD2D( CONTXT, 4, 1, BUF, 4, II, JJ )
         END IF
         IF( ( MYROW.EQ.II ) .AND. ( MYCOL.EQ.JJ ) ) THEN
            CALL INFOG2L( M+2, M+2, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                    IROW, ICOL, RSRC, JSRC )
            IF( NPCOL.GT.1 ) THEN
               CALL ZGERV2D( CONTXT, 1, 1, V3, 1, MYROW, LEFT )
            ELSE
               V3( 1 ) = A( ( ICOL-2 )*LDA+IROW )
            END IF
            IF( NUM.GT.1 ) THEN
               CALL ZGERV2D( CONTXT, 4, 1, BUF, 4, UP, LEFT )
               H11( 1 ) = BUF( 1 )
               H21( 1 ) = BUF( 2 )
               H12( 1 ) = BUF( 3 )
               H22 = BUF( 4 )
            ELSE
               H11( 1 ) = A( ( ICOL-3 )*LDA+IROW-2 )
               H21( 1 ) = A( ( ICOL-3 )*LDA+IROW-1 )
               H12( 1 ) = A( ( ICOL-2 )*LDA+IROW-2 )
               H22 = A( ( ICOL-2 )*LDA+IROW-1 )
            END IF
         END IF
      END IF
      IF( MODKM1.EQ.1 ) THEN
         IF( ( DOWN.EQ.II ) .AND. ( RIGHT.EQ.JJ ) .AND. ( NUM.GT.1 ) )
     $        THEN
            CALL INFOG2L( M, M, DESCA, NPROW, NPCOL, MYROW, MYCOL, IROW,
     $                    ICOL, RSRC, JSRC )
            CALL ZGESD2D( CONTXT, 1, 1, A( ( ICOL-1 )*LDA+IROW ), 1, II,
     $                    JJ )
         END IF
         IF( ( DOWN.EQ.II ) .AND. ( MYCOL.EQ.JJ ) .AND. ( NPROW.GT.1 ) )
     $        THEN
            CALL INFOG2L( M, M+1, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                    IROW, ICOL, RSRC, JSRC )
            CALL ZGESD2D( CONTXT, 1, 1, A( ( ICOL-1 )*LDA+IROW ), 1, II,
     $                    JJ )
         END IF
         IF( ( MYROW.EQ.II ) .AND. ( RIGHT.EQ.JJ ) .AND.
     $       ( NPCOL.GT.1 ) ) THEN
            CALL INFOG2L( M+1, M, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                    IROW, ICOL, RSRC, JSRC )
            CALL ZGESD2D( CONTXT, 1, 1, A( ( ICOL-1 )*LDA+IROW ), 1, II,
     $                    JJ )
         END IF
         IF( ( MYROW.EQ.II ) .AND. ( MYCOL.EQ.JJ ) ) THEN
            CALL INFOG2L( M+2, M+2, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                    IROW, ICOL, RSRC, JSRC )
            IF( NUM.GT.1 ) THEN
               CALL ZGERV2D( CONTXT, 1, 1, H11, 1, UP, LEFT )
            ELSE
               H11( 1 ) = A( ( ICOL-3 )*LDA+IROW-2 )
            END IF
            IF( NPROW.GT.1 ) THEN
               CALL ZGERV2D( CONTXT, 1, 1, H12, 1, UP, MYCOL )
            ELSE
               H12( 1 ) = A( ( ICOL-2 )*LDA+IROW-2 )
            END IF
            IF( NPCOL.GT.1 ) THEN
               CALL ZGERV2D( CONTXT, 1, 1, H21, 1, MYROW, LEFT )
            ELSE
               H21( 1 ) = A( ( ICOL-3 )*LDA+IROW-1 )
            END IF
            H22 = A( ( ICOL-2 )*LDA+IROW-1 )
            V3( 1 ) = A( ( ICOL-2 )*LDA+IROW )
         END IF
      END IF
      IF( ( MYROW.NE.II ) .OR. ( MYCOL.NE.JJ ) ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      IF( MODKM1.GT.1 ) THEN
         CALL INFOG2L( M+2, M+2, DESCA, NPROW, NPCOL, MYROW, MYCOL,
     $                 IROW, ICOL, RSRC, JSRC )
         H11( 1 ) = A( ( ICOL-3 )*LDA+IROW-2 )
         H21( 1 ) = A( ( ICOL-3 )*LDA+IROW-1 )
         H12( 1 ) = A( ( ICOL-2 )*LDA+IROW-2 )
         H22 = A( ( ICOL-2 )*LDA+IROW-1 )
         V3( 1 ) = A( ( ICOL-2 )*LDA+IROW )
      END IF
*
      H44S = H44 - H11( 1 )
      H33S = H33 - H11( 1 )
      V1 = ( H33S*H44S-H43H34 ) / H21( 1 ) + H12( 1 )
      V2 = H22 - H11( 1 ) - H33S - H44S
      S = CABS1( V1 ) + CABS1( V2 ) + CABS1( V3( 1 ) )
      V1 = V1 / S
      V2 = V2 / S
      V3( 1 ) = V3( 1 ) / S
      V( 1 ) = V1
      V( 2 ) = V2
      V( 3 ) = V3( 1 )
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PZLAWIL
*
      END
