*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
*  -- ScaLAPACK routine --
*     June 20, 2022
*
#include "SL_Context_fortran_include.h"
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PCGEQRF( M, N, A, IA, JA, DESCA, TAU, WORK, LWORK,
     $                    INFO )
*
      USE LINK_TO_C_GLOBALS
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 25, 2001
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            IA, INFO, JA, LWORK, M, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      COMPLEX            A( * ), TAU( * ), WORK( * )
*     ..
*
*  Purpose
*  =======
*
*  PCGEQRF computes a QR factorization of a complex distributed M-by-N
*  matrix sub( A ) = A(IA:IA+M-1,JA:JA+N-1) = Q * R.
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
*  M       (global input) INTEGER
*          The number of rows to be operated on, i.e. the number of rows
*          of the distributed submatrix sub( A ). M >= 0.
*
*  N       (global input) INTEGER
*          The number of columns to be operated on, i.e. the number of
*          columns of the distributed submatrix sub( A ). N >= 0.
*
*  A       (local input/local output) COMPLEX pointer into the
*          local memory to an array of dimension (LLD_A, LOCc(JA+N-1)).
*          On entry, the local pieces of the M-by-N distributed matrix
*          sub( A ) which is to be factored.  On exit, the elements on
*          and above the diagonal of sub( A ) contain the min(M,N) by N
*          upper trapezoidal matrix R (R is upper triangular if M >= N);
*          the elements below the diagonal, with the array TAU,
*          represent the unitary matrix Q as a product of elementary
*          reflectors (see Further Details).
*
*  IA      (global input) INTEGER
*          The row index in the global array A indicating the first
*          row of sub( A ).
*
*  JA      (global input) INTEGER
*          The column index in the global array A indicating the
*          first column of sub( A ).
*
*  DESCA   (global and local input) INTEGER array of dimension DLEN_.
*          The array descriptor for the distributed matrix A.
*
*  TAU     (local output) COMPLEX, array, dimension
*          LOCc(JA+MIN(M,N)-1). This array contains the scalar factors
*          TAU of the elementary reflectors. TAU is tied to the
*          distributed matrix A.
*
*  WORK    (local workspace/local output) COMPLEX array,
*                                                     dimension (LWORK)
*          On exit, WORK(1) returns the minimal and optimal LWORK.
*
*  LWORK   (local or global input) INTEGER
*          The dimension of the array WORK.
*          LWORK is local input and must be at least
*          LWORK >= NB_A * ( Mp0 + Nq0 + NB_A ), where
*
*          IROFF = MOD( IA-1, MB_A ), ICOFF = MOD( JA-1, NB_A ),
*          IAROW = INDXG2P( IA, MB_A, MYROW, RSRC_A, NPROW ),
*          IACOL = INDXG2P( JA, NB_A, MYCOL, CSRC_A, NPCOL ),
*          Mp0   = NUMROC( M+IROFF, MB_A, MYROW, IAROW, NPROW ),
*          Nq0   = NUMROC( N+ICOFF, NB_A, MYCOL, IACOL, NPCOL ),
*
*          and NUMROC, INDXG2P are ScaLAPACK tool functions;
*          MYROW, MYCOL, NPROW and NPCOL can be determined by calling
*          the subroutine BLACS_GRIDINFO.
*
*          If LWORK = -1, then LWORK is global input and a workspace
*          query is assumed; the routine only calculates the minimum
*          and optimal size for all work arrays. Each of these
*          values is returned in the first entry of the corresponding
*          work array, and no error message is issued by PXERBLA.
*
*  INFO    (global output) INTEGER
*          = 0:  successful exit
*          < 0:  If the i-th argument is an array and the j-entry had
*                an illegal value, then INFO = -(i*100+j), if the i-th
*                argument is a scalar and had an illegal value, then
*                INFO = -i.
*
*  Further Details
*  ===============
*
*  The matrix Q is represented as a product of elementary reflectors
*
*     Q = H(ja) H(ja+1) . . . H(ja+k-1), where k = min(m,n).
*
*  Each H(i) has the form
*
*     H(j) = I - tau * v * v'
*
*  where tau is a complex scalar, and v is a complex vector with
*  v(1:i-1) = 0 and v(i) = 1; v(i+1:m) is stored on exit in
*  A(ia+i:ia+m-1,ja+i-1), and tau in TAU(ja+i-1).
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
*
*     ..
#ifdef AOCL_PROGRESS
*     .. AOCL Progress variables ..
      INTEGER TOTAL_MPI_PROCESSES, CURRENT_RANK, PROGRESS
*
*     .. Declaring 'API NAME' and its length as const objects
*     .. API_NAME string terminated with 'NULL' character.
*
#include "SL_Context_fortran_include.h"
*
      CHARACTER*8, PARAMETER :: API_NAME = FUNCTION_NAME // C_NULL_CHAR
      INTEGER, PARAMETER :: LEN_API_NAME = 8
#endif
*     ..
*     ..
*     .. Local Scalars ..
      LOGICAL            LQUERY
      CHARACTER          COLBTOP, ROWBTOP
      INTEGER            I, IACOL, IAROW, ICOFF, ICTXT, IINFO, IPW, J,
     $                   JB, JN, K, LWMIN, MP0, MYCOL, MYROW, NPCOL,
     $                   NPROW, NQ0
*     ..
*     .. Local Arrays ..
      INTEGER            IDUM1( 1 ), IDUM2( 1 )
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, CHK1MAT, PCHK1MAT, PCGEQR2,
     $                   PCLARFB, PCLARFT, PB_TOPGET, PB_TOPSET, PXERBLA
*     ..
*     .. External Functions ..
      INTEGER            ICEIL, INDXG2P, NUMROC
      EXTERNAL           ICEIL, INDXG2P, NUMROC
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          CMPLX, MIN, MOD, REAL
*     ..
*
*     Initialize framework context structure if not initialized
*
*
      CALL AOCL_SCALAPACK_INIT( )
*
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
*     Get grid parameters
*
      ICTXT = DESCA( CTXT_ )
      CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  IA, INFO, JA, LWORK, M, N,
     $            NPROW, NPCOL, MYROW, MYCOL, eos_str
 102     FORMAT('PCGEQRF inputs: ,IA:',I5,', INFO:',I5,
     $           ', JA:',I5,', LWORK:',I5,', M:',I5,', N:',I5,
     $           ',  NPROW: ', I5,', NPCOL: ', I5 ,
     $           ', MYROW: ', I5,', MYCOL: ', I5, A1)
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
*     Test the input parameters
*
      INFO = 0
      IF( NPROW.EQ.-1 ) THEN
         INFO = -(600+CTXT_)
      ELSE
         CALL CHK1MAT( M, 1, N, 2, IA, JA, DESCA, 6, INFO )
         IF( INFO.EQ.0 ) THEN
            ICOFF = MOD( JA-1, DESCA( NB_ ) )
            IAROW = INDXG2P( IA, DESCA( MB_ ), MYROW, DESCA( RSRC_ ),
     $                       NPROW )
            IACOL = INDXG2P( JA, DESCA( NB_ ), MYCOL, DESCA( CSRC_ ),
     $                       NPCOL )
            MP0 = NUMROC( M+MOD( IA-1, DESCA( MB_ ) ), DESCA( MB_ ),
     $                    MYROW, IAROW, NPROW )
            NQ0 = NUMROC( N+ICOFF, DESCA( NB_ ), MYCOL, IACOL, NPCOL )
            LWMIN = DESCA( NB_ ) * ( MP0 + NQ0 + DESCA( NB_ ) )
*
            WORK( 1 ) = CMPLX( REAL( LWMIN ) )
            LQUERY = ( LWORK.EQ.-1 )
            IF( LWORK.LT.LWMIN .AND. .NOT.LQUERY )
     $         INFO = -9
         END IF
         IF( LWORK.EQ.-1 ) THEN
            IDUM1( 1 ) = -1
         ELSE
            IDUM1( 1 ) = 1
         END IF
         IDUM2( 1 ) = 9
         CALL PCHK1MAT( M, 1, N, 2, IA, JA, DESCA, 6, 1, IDUM1, IDUM2,
     $                  INFO )
      END IF
*
      IF( INFO.NE.0 ) THEN
         CALL PXERBLA( ICTXT, 'PCGEQRF', -INFO )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      ELSE IF( LQUERY ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*     Quick return if possible
*
      IF( M.EQ.0 .OR. N.EQ.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      K = MIN( M, N )
      IPW = DESCA( NB_ ) * DESCA( NB_ ) + 1
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', 'I-ring' )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', ' ' )
*
*     Handle the first block of columns separately
*
      JN = MIN( ICEIL( JA, DESCA( NB_ ) ) * DESCA( NB_ ), JA+K-1 )
      JB = JN - JA + 1
*
#ifdef AOCL_PROGRESS
*     Set the AOCL progress variables related to rank, processes
*
      IF( SCALAPACK_CONTEXT%IS_PROGRESS_ENABLED.EQ.1 ) THEN
         CURRENT_RANK = MYCOL+MYROW*NPCOL
         TOTAL_MPI_PROCESSES = NPROW*NPCOL
      END IF
#endif
*
*
*     Compute the QR factorization of the first block A(ia:ia+m-1,ja:jn)
*
      CALL PCGEQR2( M, JB, A, IA, JA, DESCA, TAU, WORK, LWORK, IINFO )
*
      IF( JA+JB.LE.JA+N-1 ) THEN
*
*        Form the triangular factor of the block reflector
*        H = H(ja) H(ja+1) . . . H(jn)
*
         CALL PCLARFT( 'Forward', 'Columnwise', M, JB, A, IA, JA, DESCA,
     $                 TAU, WORK, WORK( IPW ) )
*
*        Apply H' to A(ia:ia+m-1,ja+jb:ja+n-1) from the left
*
         CALL PCLARFB( 'Left', 'Conjugate transpose', 'Forward',
     $                 'Columnwise', M, N-JB, JB, A, IA, JA, DESCA,
     $                 WORK, A, IA, JA+JB, DESCA, WORK( IPW ) )
      END IF
*
*     Loop over the remaining blocks of columns
*
      DO 10 J = JN+1, JA+K-1, DESCA( NB_ )
         JB = MIN( K-J+JA, DESCA( NB_ ) )
         I = IA + J - JA
*
#ifdef AOCL_PROGRESS
*        Update the progress and callback if progress is enabled
*
         IF( SCALAPACK_CONTEXT%IS_PROGRESS_ENABLED.EQ.1 ) THEN
*
*           Capture the Loop count 'J' to a separate 'PROGRESS'
*           variable to avoid the corruption at application side.
*
            PROGRESS = J
            CALL AOCL_SCALAPACK_PROGRESS ( API_NAME, LEN_API_NAME,
     $                PROGRESS, CURRENT_RANK, TOTAL_MPI_PROCESSES )
         END IF
#endif
*
*        Compute the QR factorization of the current block
*        A(i:ia+m-1,j:j+jb-1)
*
         CALL PCGEQR2( M-J+JA, JB, A, I, J, DESCA, TAU, WORK, LWORK,
     $                 IINFO )
*
         IF( J+JB.LE.JA+N-1 ) THEN
*
*           Form the triangular factor of the block reflector
*           H = H(j) H(j+1) . . . H(j+jb-1)
*
            CALL PCLARFT( 'Forward', 'Columnwise', M-J+JA, JB, A, I, J,
     $                    DESCA, TAU, WORK, WORK( IPW ) )
*
*           Apply H' to A(i:ia+m-1,j+jb:ja+n-1) from the left
*
            CALL PCLARFB( 'Left', 'Conjugate transpose', 'Forward',
     $                     'Columnwise', M-J+JA, N-J-JB+JA, JB, A, I, J,
     $                     DESCA, WORK, A, I, J+JB, DESCA, WORK( IPW ) )
         END IF
*
   10 CONTINUE
*
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
*
      WORK( 1 ) = CMPLX( REAL( LWMIN ) )
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PCGEQRF
*
      END
