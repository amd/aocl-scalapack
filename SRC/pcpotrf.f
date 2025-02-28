*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*  -- ScaLAPACK routine --
*     June 20, 2022
*
#include "SL_Context_fortran_include.h"
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PCPOTRF( UPLO, N, A, IA, JA, DESCA, INFO )
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
      CHARACTER          UPLO
      INTEGER            IA, INFO, JA, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      COMPLEX            A( * )
*     ..
*
*  Purpose
*  =======
*
*  PCPOTRF computes the Cholesky factorization of an N-by-N complex
*  hermitian positive definite distributed matrix sub( A ) denoting
*  A(IA:IA+N-1, JA:JA+N-1).
*
*  The factorization has the form
*
*            sub( A ) = U' * U ,  if UPLO = 'U', or
*
*            sub( A ) = L  * L',  if UPLO = 'L',
*
*  where U is an upper triangular matrix and L is lower triangular.
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
*  This routine requires square block decomposition ( MB_A = NB_A ).
*
*  Arguments
*  =========
*
*  UPLO    (global input) CHARACTER
*          = 'U':  Upper triangle of sub( A ) is stored;
*          = 'L':  Lower triangle of sub( A ) is stored.
*
*  N       (global input) INTEGER
*          The number of rows and columns to be operated on, i.e. the
*          order of the distributed submatrix sub( A ). N >= 0.
*
*  A       (local input/local output) COMPLEX pointer into the
*          local memory to an array of dimension (LLD_A, LOCc(JA+N-1)).
*          On entry, this array contains the local pieces of the
*          N-by-N Hermitian distributed matrix sub( A ) to be factored.
*          If UPLO = 'U', the leading N-by-N upper triangular part of
*          sub( A ) contains the upper triangular part of the matrix,
*          and its strictly lower triangular part is not referenced.
*          If UPLO = 'L', the leading N-by-N lower triangular part of
*          sub( A ) contains the lower triangular part of the distribu-
*          ted matrix, and its strictly upper triangular part is not
*          referenced. On exit, if UPLO = 'U', the upper triangular
*          part of the distributed matrix contains the Cholesky factor
*          U, if UPLO = 'L', the lower triangular part of the distribu-
*          ted matrix contains the Cholesky factor L.
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
*  INFO    (global output) INTEGER
*          = 0:  successful exit
*          < 0:  If the i-th argument is an array and the j-entry had
*                an illegal value, then INFO = -(i*100+j), if the i-th
*                argument is a scalar and had an illegal value, then
*                INFO = -i.
*          > 0:  If INFO = K, the leading minor of order K,
*                A(IA:IA+K-1,JA:JA+K-1) is not positive definite, and
*                the factorization could not be completed.
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      REAL               ONE
      PARAMETER          ( ONE = 1.0E+0 )
      COMPLEX            CONE
      PARAMETER          ( CONE = ( 1.0E+0, 0.0E+0 ) )
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
      LOGICAL            UPPER
      CHARACTER          COLBTOP, ROWBTOP
      INTEGER            I, ICOFF, ICTXT, IROFF, J, JB, JN, MYCOL,
     $                   MYROW, NPCOL, NPROW
*     ..
*     .. Local Arrays ..
      INTEGER            IDUM1( 1 ), IDUM2( 1 )
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, CHK1MAT, PCHK1MAT, PB_TOPGET,
     $                   PB_TOPSET, PCPOTF2, PCHERK, PCTRSM,
     $                   PXERBLA
*     ..
*     .. External Functions ..
      LOGICAL            LSAME
      INTEGER            ICEIL
      EXTERNAL           ICEIL, LSAME
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ICHAR, MIN, MOD
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
         WRITE(LOG_BUF,102)  UPLO, IA, INFO, JA, N, NPROW,
     $            NPCOL, MYROW, MYCOL, eos_str
 102     FORMAT('PCPOTRF inputs: ,UPLO:',A5,', IA:',I9,
     $           ', INFO:',I9,', JA:',I9,', N:',I9,',  NPROW: ', I9,
     $           ', NPCOL: ', I9 ,', MYROW: ', I9,
     $           ', MYCOL: ', I9, A1)
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
*     Test the input parameters
*
      INFO = 0
      IF( NPROW.EQ.-1 ) THEN
         INFO = -(600+CTXT_)
      ELSE
         CALL CHK1MAT( N, 2, N, 2, IA, JA, DESCA, 6, INFO )
         UPPER = LSAME( UPLO, 'U' )
         IF( INFO.EQ.0 ) THEN
            IROFF = MOD( IA-1, DESCA( MB_ ) )
            ICOFF = MOD( JA-1, DESCA( NB_ ) )
            IF ( .NOT.UPPER .AND. .NOT.LSAME( UPLO, 'L' ) ) THEN
               INFO = -1
            ELSE IF( IROFF.NE.0 ) THEN
               INFO = -4
            ELSE IF( ICOFF.NE.0 ) THEN
               INFO = -5
            ELSE IF( DESCA( MB_ ).NE.DESCA( NB_ ) ) THEN
               INFO = -(600+NB_)
            END IF
         END IF
         IF( UPPER ) THEN
            IDUM1( 1 ) = ICHAR( 'U' )
         ELSE
            IDUM1( 1 ) = ICHAR( 'L' )
         END IF
         IDUM2( 1 ) = 1
         CALL PCHK1MAT( N, 2, N, 2, IA, JA, DESCA, 6, 1, IDUM1, IDUM2,
     $                  INFO )
      END IF
*
      IF( INFO.NE.0 ) THEN
         CALL PXERBLA( ICTXT, 'PCPOTRF', -INFO )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*     Quick return if possible
*
      IF( N.EQ.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
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
      IF( UPPER ) THEN
*
*        Split-ring topology for the communication along process
*        columns, 1-tree topology along process rows.
*
         CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', ' ' )
         CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', 'S-ring' )
*
*
*        A is upper triangular, compute Cholesky factorization A = U'*U.
*
*        Handle the first block of columns separately
*
         JN = MIN( ICEIL( JA, DESCA( NB_ ) )*DESCA(NB_), JA+N-1 )
         JB = JN - JA + 1
*
*        Perform unblocked Cholesky factorization on JB block
*
         CALL PCPOTF2( UPLO, JB, A, IA, JA, DESCA, INFO )
         IF( INFO.NE.0 )
     $      GO TO 30
*
         IF( JB+1.LE.N ) THEN
*
*           Form the row panel of U using the triangular solver
*
            CALL PCTRSM( 'Left', UPLO, 'Conjugate transpose',
     $                   'Non-Unit', JB, N-JB, CONE, A, IA, JA, DESCA,
     $                   A, IA, JA+JB, DESCA )
*
*           Update the trailing matrix, A = A - U'*U
*
            CALL PCHERK( UPLO, 'Conjugate transpose', N-JB, JB, -ONE, A,
     $                   IA, JA+JB, DESCA, ONE, A, IA+JB, JA+JB, DESCA )
         END IF
*
*        Loop over remaining block of columns
*
         DO 10 J = JN+1, JA+N-1, DESCA( NB_ )
            JB = MIN( N-J+JA, DESCA( NB_ ) )
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
*           Perform unblocked Cholesky factorization on JB block
*
            CALL PCPOTF2( UPLO, JB, A, I, J, DESCA, INFO )
            IF( INFO.NE.0 ) THEN
               INFO = INFO + J - JA
               GO TO 30
            END IF
*
            IF( J-JA+JB+1.LE.N ) THEN
*
*              Form the row panel of U using the triangular solver
*
               CALL PCTRSM( 'Left', UPLO, 'Conjugate transpose',
     $                      'Non-Unit', JB, N-J-JB+JA, CONE, A, I, J,
     $                      DESCA, A, I, J+JB, DESCA )
*
*              Update the trailing matrix, A = A - U'*U
*
               CALL PCHERK( UPLO, 'Conjugate transpose', N-J-JB+JA, JB,
     $                      -ONE, A, I, J+JB, DESCA, ONE, A, I+JB,
     $                      J+JB, DESCA )
            END IF
   10    CONTINUE
*
      ELSE
*
*        1-tree topology for the communication along process columns,
*        Split-ring topology along process rows.
*
         CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', 'S-ring' )
         CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', ' ' )
*
*        A is lower triangular, compute Cholesky factorization A = L*L'
*        (right-looking)
*
*        Handle the first block of columns separately
*
         JN = MIN( ICEIL( JA, DESCA( NB_ ) )*DESCA( NB_ ), JA+N-1 )
         JB = JN - JA + 1
*
*        Perform unblocked Cholesky factorization on JB block
*
         CALL PCPOTF2( UPLO, JB, A, IA, JA, DESCA, INFO )
         IF( INFO.NE.0 )
     $      GO TO 30
*
         IF( JB+1.LE.N ) THEN
*
*           Form the column panel of L using the triangular solver
*
            CALL PCTRSM( 'Right', UPLO, 'Conjugate transpose',
     $                   'Non-Unit', N-JB, JB, CONE, A, IA, JA, DESCA,
     $                   A, IA+JB, JA, DESCA )
*
*           Update the trailing matrix, A = A - L*L'
*
            CALL PCHERK( UPLO, 'No Transpose', N-JB, JB, -ONE, A, IA+JB,
     $                   JA, DESCA, ONE, A, IA+JB, JA+JB, DESCA )
*
         END IF
*
         DO 20 J = JN+1, JA+N-1, DESCA( NB_ )
            JB = MIN( N-J+JA, DESCA( NB_ ) )
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
*           Perform unblocked Cholesky factorization on JB block
*
            CALL PCPOTF2( UPLO, JB, A, I, J, DESCA, INFO )
            IF( INFO.NE.0 ) THEN
               INFO = INFO + J - JA
               GO TO 30
            END IF
*
            IF( J-JA+JB+1.LE.N ) THEN
*
*              Form the column panel of L using the triangular solver
*
               CALL PCTRSM( 'Right', UPLO, 'Conjugate transpose',
     $                      'Non-Unit', N-J-JB+JA, JB, CONE, A, I, J,
     $                      DESCA, A, I+JB, J, DESCA )
*
*              Update the trailing matrix, A = A - L*L'
*
               CALL PCHERK( UPLO, 'No Transpose', N-J-JB+JA, JB, -ONE,
     $                      A, I+JB, J, DESCA, ONE, A, I+JB, J+JB,
     $                      DESCA )
*
            END IF
   20    CONTINUE
*
      END IF
*
   30 CONTINUE
*
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PCPOTRF
*
      END
