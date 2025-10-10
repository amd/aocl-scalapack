      SUBROUTINE PSHSEQRINFO( SUMMRY, NOUT, NMAT, NVAL, LDNVAL,
     $                        NNB, NBVAL, LDNBVAL, NGRIDS, PVAL, LDPVAL,
     $                        QVAL, LDQVAL, THRESH, IAM, NPROCS )
*
*  Purpose
*  =======
*  PSHSEQRINFO reads EQR.dat (single precision Schur / Hessenberg driver
*  input), broadcasts all test parameters to every process, and (on
*  rank 0) writes a short preamble to the output file.
*
*  Expected EQR.dat format (example):
*    'ScaLAPACK, Orthogonal factorizations input file'
*    'MPI machine'
*    'EQR.out'
*    6
*    <NMAT>
*    <NVAL list>
*    <NNB>
*    <NBVAL list>
*    <NGRIDS>
*    <PVAL list>
*    <QVAL list>
*    <THRESH>
*
      IMPLICIT NONE
*  Arguments
      CHARACTER*(*) SUMMRY
      INTEGER       NOUT, NMAT, LDNVAL, NVAL(LDNVAL)
      INTEGER       NNB, LDNBVAL, NBVAL(LDNBVAL)
      INTEGER       NGRIDS, LDPVAL, PVAL(LDPVAL), LDQVAL, QVAL(LDQVAL)
      REAL          THRESH
      INTEGER       IAM, NPROCS
*
*  Locals
      INTEGER       NIN, I, ICTXT, INFOI
      PARAMETER   ( NIN = 21 )
      CHARACTER*79 USRINFO
      INTEGER       WORKLEN
*  Workspace to pack integer arrays (allocate dynamically for safety)
      INTEGER, ALLOCATABLE :: IWORK(:)
      REAL          EPS
*
      EXTERNAL BLACS_GET, BLACS_GRIDINIT, BLACS_GRIDINFO,
     $        BLACS_GRIDEXIT, SGEBS2D, SGEBR2D,
     $        IGEBS2D, IGEBR2D, PDLAMCH
      DOUBLE PRECISION PDLAMCH
*
      IF( IAM.EQ.0 ) THEN
*
*       Read file
*
         OPEN( UNIT=NIN, FILE='EQR.dat', STATUS='OLD', IOSTAT=INFOI )
         IF( INFOI.NE.0 ) THEN
            WRITE(*,*) 'Cannot open EQR.dat'
            THRESH = 0.0
            NMAT = 0
            NNB = 0
            NGRIDS = 0
            GO TO 900
         END IF
         READ( NIN, * ) SUMMRY
         SUMMRY = ' '
         READ( NIN, * ) USRINFO
         READ( NIN, * ) SUMMRY
         READ( NIN, * ) NOUT
         IF( NOUT.NE.0 .AND. NOUT.NE.6 )
     $      OPEN( UNIT=NOUT, FILE=SUMMRY, STATUS='UNKNOWN' )
*
         READ( NIN, * ) NMAT
         IF( NMAT.LT.1 .OR. NMAT.GT.LDNVAL ) THEN
            WRITE(*,*) 'Invalid NMAT in EQR.dat'
            NMAT = 0
         END IF
         IF( NMAT.GT.0 ) READ( NIN, * ) ( NVAL(I), I=1,NMAT )
*
         READ( NIN, * ) NNB
         IF( NNB.LT.1 .OR. NNB.GT.LDNBVAL ) THEN
            WRITE(*,*) 'Invalid NNB in EQR.dat'
            NNB = 0
         END IF
         IF( NNB.GT.0 ) READ( NIN, * ) ( NBVAL(I), I=1,NNB )
*
         READ( NIN, * ) NGRIDS
         IF( NGRIDS.LT.1 .OR. NGRIDS.GT.LDPVAL .OR.
     $       NGRIDS.GT.LDQVAL ) THEN
            WRITE(*,*) 'Invalid NGRIDS in EQR.dat'
            NGRIDS = 0
         END IF
         IF( NGRIDS.GT.0 ) READ( NIN, * ) ( PVAL(I), I=1,NGRIDS )
         IF( NGRIDS.GT.0 ) READ( NIN, * ) ( QVAL(I), I=1,NGRIDS )
*
         READ( NIN, * ) THRESH
         CLOSE( NIN )
*
      END IF
*
*     Temporary 1 x NPROCS grid for broadcast
*
      CALL BLACS_GET( -1, 0, ICTXT )
      CALL BLACS_GRIDINIT( ICTXT, 'Row-major', 1, MAX(1,NPROCS) )
*
*     Compute epsilon (single) via double routine PDLAMCH
*
      EPS = REAL( PDLAMCH( ICTXT, 'e' ) )
*
*     Broadcast scalar real THRESH
      IF( IAM.EQ.0 ) THEN
         CALL SGEBS2D( ICTXT, 'All', ' ', 1, 1, THRESH, 1 )
      ELSE
         CALL SGEBR2D( ICTXT, 'All', ' ', 1, 1, THRESH, 1, 0, 0 )
      END IF
*
*     Pack integer counts + arrays into one buffer (like PDBRDINFO)
*
      IF( IAM.EQ.0 ) THEN
         WORKLEN = 3 + NMAT + NNB + 2*NGRIDS
      END IF
      IF( IAM.EQ.0 ) THEN
         CALL IGEBS2D( ICTXT, 'All', ' ', 1, 1, WORKLEN, 1 )
      ELSE
         CALL IGEBR2D( ICTXT, 'All', ' ', 1, 1, WORKLEN, 1, 0, 0 )
      END IF
      IF( WORKLEN.LT.3 ) WORKLEN = 3
      ALLOCATE( IWORK(WORKLEN) )
*
      IF( IAM.EQ.0 ) THEN
         IWORK(1) = NMAT
         IWORK(2) = NNB
         IWORK(3) = NGRIDS
         I = 4
         IF( NMAT.GT.0 ) THEN
            CALL ICOPY( NMAT, NVAL, 1, IWORK(I), 1 )
            I = I + NMAT
         END IF
         IF( NNB.GT.0 ) THEN
            CALL ICOPY( NNB, NBVAL, 1, IWORK(I), 1 )
            I = I + NNB
         END IF
         IF( NGRIDS.GT.0 ) THEN
            CALL ICOPY( NGRIDS, PVAL, 1, IWORK(I), 1 )
            I = I + NGRIDS
            CALL ICOPY( NGRIDS, QVAL, 1, IWORK(I), 1 )
            I = I + NGRIDS
         END IF
         CALL IGEBS2D( ICTXT, 'All', ' ', WORKLEN, 1, IWORK, WORKLEN )
      ELSE
         CALL IGEBR2D( ICTXT, 'All', ' ', WORKLEN, 1, IWORK, WORKLEN,
     $                 0, 0 )
         NMAT   = IWORK(1)
         NNB    = IWORK(2)
         NGRIDS = IWORK(3)
         I = 4
         IF( NMAT.GT.0 ) THEN
            CALL ICOPY( NMAT, IWORK(I), 1, NVAL, 1 )
            I = I + NMAT
         END IF
         IF( NNB.GT.0 ) THEN
            CALL ICOPY( NNB, IWORK(I), 1, NBVAL, 1 )
            I = I + NNB
         END IF
         IF( NGRIDS.GT.0 ) THEN
            CALL ICOPY( NGRIDS, IWORK(I), 1, PVAL, 1 )
            I = I + NGRIDS
            CALL ICOPY( NGRIDS, IWORK(I), 1, QVAL, 1 )
            I = I + NGRIDS
         END IF
      END IF
*
      CALL BLACS_GRIDEXIT( ICTXT )
      DEALLOCATE( IWORK )
*
*     Minimal banner (leave detailed prints to driver if desired)
      IF( IAM.EQ.0 .AND. NOUT.NE.0 ) THEN
         WRITE( NOUT, * )
         WRITE( NOUT, * ) 'PSHSEQR test configuration:'
         WRITE( NOUT, * ) '  NMAT   =', NMAT
         WRITE( NOUT, * ) '  NNB    =', NNB
         WRITE( NOUT, * ) '  NGRIDS =', NGRIDS
         WRITE( NOUT, * ) '  THRESH =', THRESH
         WRITE( NOUT, * ) '  EPS    =', EPS
         WRITE( NOUT, * )
      END IF
*
 900  CONTINUE
      RETURN
      END