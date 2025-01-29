      SUBROUTINE PXGESVINFO( SUMMRY, NOUT, NMAT, NNB, NGRIDS, NBVAL,
     $                       NVAL, MVAL, PVAL, QVAL, NPROW, NPCOL,
     $                       WORK, IAM, NPROCS )
*
*
*
*     Modifications Copyright (c) 2025 Advanced Micro Devices, Inc. All rights reserved.

*
*     .. Scalar Arguments ..
      CHARACTER          UPLO
      INTEGER            IAM, LDNBVAL, LDNVAL, LDPVAL, LDQVAL,
     $                   NGRIDS, NMAT, NNB, NPROCS, NOUT
      REAL               THRESH
*     ..
*     .. Array Arguments ..
      CHARACTER*( * )    SUMMRY*(*)
      INTEGER            NBVAL( 10 ), NVAL( 10 ),
     $                   PVAL( 10 ), QVAL( 10 ), WORK( * )
*     ..
*  Purpose
*  =======
*
*
*    PXGESVINFO gets needed startup information for p_X_gesvdriver
*    and transmits it to all processes.
*
*  Arguments
*  =========
*
*  SUMMRY   (global output) CHARACTER*(*)
*           Name of output (summary) file (if any). Only defined for
*           process 0.
*
*  NOUT     (global output) INTEGER
*           The unit number for output file. NOUT = 6, ouput to screen,
*           NOUT = 0, output to stderr.  Only defined for process 0.
*
*  NMAT     (global output) INTEGER
*           The number of different values that can be used for N.
*
*  NVAL     (global output) INTEGER array, dimension (LDNVAL)
*           The values of N (the order of the matrix) to run the code
*           with.
*
*  LDNVAL   (global input) INTEGER
*           The maximum number of different values that can be used for
*           N, LDNVAL > =  NMAT.
*
*  NNB      (global output) INTEGER
*           The number of different values that can be used for NB.
*
*  NBVAL    (global output) INTEGER array, dimension (LDNBVAL)
*           The values of NB (blocksize) to run the code with.
*
*  LDNBVAL  (global input) INTEGER
*           The maximum number of different values that can be used for
*           NB, LDNBVAL >= NNB.
*
*  NGRIDS   (global output) INTEGER
*           The number of different values that can be used for P & Q.
*
*  PVAL     (global output) INTEGER array, dimension (LDPVAL)
*           The values of P (number of process rows) to run the code
*           with.
*
*  LDPVAL   (global input) INTEGER
*           The maximum number of different values that can be used for
*           P, LDPVAL >= NGRIDS.
*
*  QVAL     (global output) INTEGER array, dimension (LDQVAL)
*           The values of Q (number of process columns) to run the code
*           with.
*
*  LDQVAL   (global input) INTEGER
*           The maximum number of different values that can be used for
*           Q, LDQVAL >= NGRIDS.
*
*  THRESH   (global output) REAL
*           Indicates what error checks shall be run and printed out:
*           < 0 : Perform no error checking
*           > 0 : report all residuals greater than THRESH
*
*  WORK     (local workspace) INTEGER array of dimension >=
*           MAX( 3, LDNVAL+LDNBVAL+LDPVAL+LDQVAL ), used to pack all
*           input arrays in order to send info in one message.
*
*  IAM      (local input) INTEGER
*           My process number.
*
*  NPROCS   (global input) INTEGER
*           The total number of processes.
*
*
      INTEGER            N, NRHS, NB, NPCOL, NPROW
*     ..
*     ..
*
* ======================================================================
*
*     .. Parameters ..
      INTEGER            NIN
      PARAMETER          ( NIN = 11 )
*     ..
*     .. Local Scalars ..
      CHARACTER*79       USRINFO
      INTEGER            ICTXT
      REAL               EPS
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_ABORT, BLACS_GET, BLACS_GRIDEXIT,
     $                   BLACS_GRIDINIT, BLACS_SETUP, IGEBR2D, IGEBS2D
*     ..
*     .. Executable Statements ..
*
*     Process 0 reads the input data, broadcasts to other processes and
*     writes needed information to NOUT
*
      IF( IAM.EQ.0 ) THEN
*
*        Open file and skip data file header
*
         OPEN( NIN, FILE='GESV.dat', STATUS='OLD' )
         READ( NIN, FMT = * ) SUMMRY
         SUMMRY = ' '
*
*        Read in user-supplied info about machine type, compiler, etc.
*
         READ( NIN, FMT = 9999 ) USRINFO
*
*        Read name and unit number for summary output file
*
         READ( NIN, FMT = * ) SUMMRY
         READ( NIN, FMT = * ) NOUT
         IF( NOUT.NE.0 .AND. NOUT.NE.6 )
     $      OPEN( NOUT, FILE = SUMMRY, STATUS = 'UNKNOWN' )
*
*        Read and check the parameter values for the tests.
*
*        Get number of matrices and their dimensions
*
         READ( NIN, FMT = * ) NMAT
         READ( NIN, FMT = * ) ( NVAL( I ), I = 1, NMAT )
*
*        Get values of NB
*
         READ( NIN, FMT = * ) NNB
         READ( NIN, FMT = * ) ( NBVAL( I ), I = 1, NNB )
*
*        Get number of grids
*
         READ( NIN, FMT = * ) NGRIDS
*
*        Get values of P and Q
*
         READ( NIN, FMT = * ) ( PVAL( I ), I = 1, NGRIDS )
         READ( NIN, FMT = * ) ( QVAL( I ), I = 1, NGRIDS )
*
*        Get grid shape

*
*        Close input file
*
         CLOSE( NIN )

*
*        For pvm only: if virtual machine not set up, allocate it and
*        spawn the correct number of processes.
*
         IF( NPROCS.LT.1 ) THEN
            NPROCS = 0
            DO 10 I = 1, NGRIDS
               NPROCS = MAX( NPROCS, PVAL( I )*QVAL( I ) )
   10       CONTINUE
            CALL BLACS_SETUP( IAM, NPROCS )
         END IF
*
*        Temporarily define blacs grid to include all processes so
*        information can be broadcast to all processes
*
         CALL BLACS_GET( -1, 0, ICTXT )
         CALL BLACS_GRIDINIT( ICTXT, 'Row-major', 1, NPROCS )
*
*
*        Compute machine epsilon
*
         EPS = PSLAMCH( ICTXT, 'eps' )
*
*        Pack information arrays and broadcast
*
*         CALL SGEBS2D( ICTXT, 'All', ' ', 1, 1, THRESH, 1 )
         I = 1
         WORK( I ) = NMAT
         I = I+1
         WORK( I ) = NNB
         I = I+1
         WORK( I ) = NGRIDS
         I = I+1
*        Send number of elements to be sent
         CALL IGEBS2D( ICTXT, 'All', ' ', 1, 1, I-1, 1 )
*        Send elements
         CALL IGEBS2D( ICTXT, 'All', ' ', I-1, 1, WORK, I-1 )
*
         I = 1
         CALL ICOPY( NMAT, NVAL, 1, WORK( I ), 1 )
         I = I + NMAT
         CALL ICOPY( NNB, NBVAL, 1, WORK( I ), 1 )
         I = I + NNB
         CALL ICOPY( NGRIDS, PVAL, 1, WORK( I ), 1 )
         I = I + NGRIDS
         CALL ICOPY( NGRIDS, QVAL, 1, WORK( I ), 1 )
         I = I + NGRIDS
         CALL IGEBS2D( ICTXT, 'All', ' ', I-1, 1, WORK, I-1 )
*
*        regurgitate input
*
         WRITE( NOUT, FMT = 9999 )
     $               'SCALAPACK example driver.'
         WRITE( NOUT, FMT = 9999 ) USRINFO
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9999 )
     $               'The matrices A and B are read from '//
     $               'a file.'
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9999 )
     $               'An explanation of the input/output '//
     $               'parameters follows:'
*
         WRITE( NOUT, FMT = 9999 )
     $               'N       : The order of the matrix A.'
         WRITE( NOUT, FMT = 9999 )
     $               'NRHS    : The number of right and sides.'
         WRITE( NOUT, FMT = 9999 )
     $               'NB      : The size of the square blocks the'//
     $               ' matrices A and B are split into.'
         WRITE( NOUT, FMT = 9999 )
     $               'P       : The number of process rows.'
         WRITE( NOUT, FMT = 9999 )
     $               'Q       : The number of process columns.'
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9999 )
     $               'The following parameter values will be used:'
         WRITE( NOUT, FMT = 9998 ) 'N    ', N
         WRITE( NOUT, FMT = 9998 ) 'NRHS ', NRHS
         WRITE( NOUT, FMT = 9998 ) 'NB   ', NB
         WRITE( NOUT, FMT = 9998 ) 'P    ', NPROW
         WRITE( NOUT, FMT = 9998 ) 'Q    ', NPCOL
         WRITE( NOUT, FMT = * )
*
      ELSE
*
*        If in pvm, must participate setting up virtual machine
*
         IF( NPROCS.LT.1 )
     $      CALL BLACS_SETUP( IAM, NPROCS )
*
*        Temporarily define blacs grid to include all processes so
*        all processes have needed startup information
*
         CALL BLACS_GET( -1, 0, ICTXT )
         CALL BLACS_GRIDINIT( ICTXT, 'Row-major', 1, NPROCS )
*
*        Compute machine epsilon

*
         EPS = PSLAMCH( ICTXT, 'eps' )
*
         CALL IGEBR2D( ICTXT, 'All', ' ', 1, 1, I, 1, 0, 0 )
         CALL IGEBR2D( ICTXT, 'All', ' ', I, 1, WORK, I, 0, 0 )
         I = 1
         NMAT = WORK( I )
         I = I+1
         NNB = WORK( I )
         I = I+1
         NGRIDS = WORK( I )
         I = I+1
*
         I = NMAT  + NNB + 2*NGRIDS
*
         CALL IGEBR2D( ICTXT, 'All', ' ', 1, I, WORK, 1, 0, 0 )
         I = 1
         CALL ICOPY( NMAT, WORK( I ), 1, NVAL, 1 )
         I = I + NMAT
         CALL ICOPY( NNB, WORK( I ), 1, NBVAL, 1 )
         I = I + NNB
         CALL ICOPY( NGRIDS, WORK( I ), 1, PVAL, 1 )
         I = I + NGRIDS
         CALL ICOPY( NGRIDS, WORK( I ), 1, QVAL, 1 )
*
      END IF
*
      CALL BLACS_GRIDEXIT( ICTXT )
*
      RETURN
*
   20 WRITE( NOUT, FMT = 9993 )
      CLOSE( NIN )
      IF( NOUT.NE.6 .AND. NOUT.NE.0 )
     $   CLOSE( NOUT )
      CALL BLACS_ABORT( ICTXT, 1 )
*
      STOP
*
 9999 FORMAT( A )
 9998 FORMAT( 2X, A5, '   :        ', I6 )
 9997 FORMAT( '              ', 10I6 )
 9996 FORMAT( 2X, A5, '  :    ', 10I6 )
 9995 FORMAT( 'Relative machine precision (eps) is taken to be ',
     $        E18.6 )
 9994 FORMAT( ' Number of values of ',5A, ' is less than 1 or greater ',
     $        'than ', I2 )
 9993 FORMAT( ' Illegal input in file ',40A,'.  Aborting run.' )
*
*     End of PXGESVINFO
*
      END
