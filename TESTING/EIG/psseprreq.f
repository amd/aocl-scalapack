      SUBROUTINE PSSEPRREQ( HETERO, NIN, MEM, MEMSIZE, NOUT, ISEED,
     $                     NTESTS, NSKIPPED, NNOCHECK, NPASSED, INFO )
*
*  -- ScaLAPACK routine (@(MODE)version *TBA*) --
*     University of California, Berkeley and
*     University of Tennessee, Knoxville. 
*     October 21, 2006
*     Modifications Copyright (c) 2024 Advanced Micro Devices, Inc.
*     All rights reserved.
*
      IMPLICIT NONE
*
*     .. Scalar Arguments ..
      CHARACTER          HETERO
      INTEGER            INFO, MEMSIZE, NIN, NNOCHECK, NOUT, NPASSED,
     $                   NSKIPPED, NTESTS
*     ..
*     .. Array Arguments ..
      INTEGER            ISEED( 4 )
      REAL               MEM( MEMSIZE )     
*
*  Purpose
*  =======
*
*  PSSEPRREQ performs one request from the input file 'SEPR.dat'
*  A request is the cross product of the specifications in the
*  input file. It prints one line per test.
*
*  Arguments
*  =========
*
*  NIN      (local input) INTEGER
*           The unit number for the input file 'SEPR.dat'
*
*  MEM      (local input ) REAL             ARRAY, dimension MEMSIZE
*           Array encompassing the available single precision memory
*
*  MEMSIZE  (local input)  INTEGER
*           Size of MEM array
*
*  NOUT     (local input) INTEGER
*           The unit number for output file.
*           NOUT = 6, output to screen,
*           NOUT = 0, output to stderr.
*           NOUT = 13, output to file, divide thresh by 10
*           NOUT = 14, output to file, divide thresh by 20
*           Only used on node 0.
*           NOUT = 13, 14 allow the threshold to be tighter for our
*           internal testing which means that when a user reports
*           a threshold error, it is more likely to be significant.
*
*  ISEED    (global input/output) INTEGER array, dimension 4
*           Random number generator seed
*
*  NTESTS   (global input/output) INTEGER
*           NTESTS = NTESTS + tests requested
*
*  NSKIPPED (global input/output) INTEGER
*           NSKIPPED = NSKIPPED + tests skipped
*
*  NNOCHECK (global input/output) INTEGER
*           NNOCHECK = NNOCHECK + tests completed but not checked
*
*  NPASSED  (global input/output) INTEGER
*           NPASSED = NPASSED + tests which passed all checks
*
*  INFO     (global output) INTEGER
*           0 = test request ran
*          -1 = end of file
*          -2 = incorrect .dat file
*
*     .. Parameters ..
*
      INTEGER            DLEN_
      PARAMETER          ( DLEN_ = 9 )
      INTEGER            REALSZ, INTGSZ
#ifdef ENABLE_ILP64
      PARAMETER          ( INTGSZ = 8 )
#else
      PARAMETER          ( INTGSZ = 4 )
#endif
      PARAMETER          ( REALSZ = 4 )
      INTEGER            MAXSETSIZE
      PARAMETER          ( MAXSETSIZE = 50 )
*     ..
*     .. Local Scalars ..
      CHARACTER          SUBTESTS
      INTEGER            CONTEXT, IAM, IMIDPAD, INITCON, IPOSTPAD,
     $                   IPREPAD, ISIZESUBTST, ISIZEEVR, ISIZETST,
     $                   LDA, LLWORK, MATSIZE, MATTYPE, MYCOL, MYROW, N,
     $                   NB, NMATSIZES, NMATTYPES, NNODES, NP, NPCOL,
     $                   NPCONFIGS, NPROW, NQ, NUPLOS, ORDER, PCONFIG,
     $                   PTRA, PTRCOPYA, PTRGAP, PTRICLUS, PTRIFAIL,
     $                   PTRIWRK, PTRW, PTRW2, PTRWORK, PTRZ, RES,
     $                   SIZECHK, SIZEMQRLEFT, SIZEMQRRIGHT, SIZEQRF,
     $                   SIZEQTQ, SIZESUBTST, SIZEEVR,
     $                   SIZETMS, SIZETST, UPLO
#ifdef ENABLE_ILP64
      INTEGER            ILP64_TEMP
#endif
*
      REAL               ABSTOL, THRESH
*     ..
*     .. Local Arrays ..
      CHARACTER          UPLOS( 2 )
      INTEGER            DESCA( DLEN_ ), MATSIZES( MAXSETSIZE ),
     $                   MATTYPES( MAXSETSIZE ), NBS( MAXSETSIZE ),
     $                   NPCOLS( MAXSETSIZE ), NPROWS( MAXSETSIZE )
*     ..
*     .. External Functions ..
      INTEGER            ICEIL, NUMROC
      EXTERNAL           ICEIL, NUMROC
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_ABORT, BLACS_GET, BLACS_GRIDEXIT, 
     $                   BLACS_GRIDINFO, BLACS_GRIDINIT, BLACS_PINFO, 
     $                   DESCINIT, PSLASIZESEPR, PSSEPINFO, PSSEPRTST
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          MAX
*     ..
*     .. Executable Statements ..
*
      CALL BLACS_PINFO( IAM, NNODES )
      CALL BLACS_GET( -1, 0, INITCON )
      CALL BLACS_GRIDINIT( INITCON, 'R', 1, NNODES )
*
      CALL PSSEPINFO( INITCON, IAM, NIN, NOUT, MAXSETSIZE, NMATSIZES,
     $                MATSIZES, NUPLOS, UPLOS, NPCONFIGS, NPROWS,
     $                NPCOLS, NBS, NMATTYPES, MATTYPES, 22, SUBTESTS,
     $                THRESH, ORDER, ABSTOL, INFO )
*
      CALL BLACS_GRIDEXIT( INITCON )
*
      IF( INFO.EQ.0 ) THEN
*
         DO 40 MATSIZE = 1, NMATSIZES
*
            DO 30 PCONFIG = 1, NPCONFIGS
*
               DO 20 MATTYPE = 1, NMATTYPES
*
                  DO 10 UPLO = 1, NUPLOS
*
                     N = MATSIZES( MATSIZE )
                     ORDER = N
*
                     NPROW = NPROWS( PCONFIG )
                     NPCOL = NPCOLS( PCONFIG )
                     NB = NBS( PCONFIG )
*
                     NP = NUMROC( N, NB, 0, 0, NPROW )
                     NQ = NUMROC( N, NB, 0, 0, NPCOL )
                     IPREPAD = MAX( NB, NP )
                     IMIDPAD = NB
                     IPOSTPAD = MAX( NB, NQ )
*
                     LDA = MAX( NP, 1 ) + IMIDPAD
*
                     CALL BLACS_GET( -1, 0, CONTEXT )
                     CALL BLACS_GRIDINIT( CONTEXT, 'R', NPROW, NPCOL )
                     CALL BLACS_GRIDINFO( CONTEXT, NPROW, NPCOL, MYROW,
     $                                    MYCOL )
*
                     IF( MYROW.GE.0 ) THEN
*        If N < 0 in SEPR.dat file then DESCINIT API sets INFO = -2
                        CALL DESCINIT( DESCA, N, N, NB, NB, 0, 0,
     $                                 CONTEXT, LDA, INFO )
*        If DESCINIT is returning correct error code then
*        do nothing
                        IF( N.LT.0 .AND. INFO.EQ.-2 ) THEN
                           WRITE( NOUT, FMT = 9999 ) 'N'
                        ELSE IF( INFO.LT.0 ) THEN
                           WRITE( NOUT, FMT = 9998 ) 'descriptor'
                           GO TO 40
                        END IF
                        CALL PSLASIZESEPR( DESCA, IPREPAD, IPOSTPAD,
     $                                     SIZEMQRLEFT, SIZEMQRRIGHT,
     $                                     SIZEQRF, SIZETMS, SIZEQTQ,
     $                                     SIZECHK, SIZEEVR, ISIZEEVR,
     $                                     SIZESUBTST, ISIZESUBTST,
     $                                     SIZETST, ISIZETST )
*
                        PTRA = 1
                        PTRZ = PTRA + LDA*NQ + IPREPAD + IPOSTPAD
                        PTRCOPYA = PTRZ + LDA*NQ + IPREPAD + IPOSTPAD
                        PTRW = PTRCOPYA + LDA*NQ + IPREPAD + IPOSTPAD
                        PTRW2 = PTRW + MAX( N, 1 ) + IPREPAD + IPOSTPAD
                        PTRGAP = PTRW2 + MAX( N, 1 ) + IPREPAD +
     $                           IPOSTPAD
                        PTRIFAIL = PTRGAP + NPROW*NPCOL + IPREPAD +
     $                             IPOSTPAD
#ifdef ENABLE_ILP64
                        ILP64_TEMP = ICEIL( N+IPREPAD+IPOSTPAD, 1)
                        PTRICLUS = PTRIFAIL + 2*ILP64_TEMP
*
                        PTRIWRK = PTRICLUS + 2*ICEIL( 2*NPROW*NPCOL+
     $                            IPREPAD+IPOSTPAD, REALSZ / 4 )
                        PTRWORK = PTRIWRK + 2*ICEIL( ISIZETST+IPREPAD+
     $                            IPOSTPAD, REALSZ / 4 )
#else
                        PTRICLUS = PTRIFAIL + ICEIL( N+IPREPAD+IPOSTPAD,
     $                             REALSZ / INTGSZ )
                        PTRIWRK = PTRICLUS + ICEIL( 2*NPROW*NPCOL+
     $                            IPREPAD+IPOSTPAD, REALSZ / INTGSZ )
                        PTRWORK = PTRIWRK + ICEIL( ISIZETST+IPREPAD+
     $                            IPOSTPAD, REALSZ / INTGSZ )
#endif
                        LLWORK = MEMSIZE - PTRWORK + 1

                        NTESTS = NTESTS + 1
                        IF( LLWORK.LT.SIZETST ) THEN
                           NSKIPPED = NSKIPPED + 1
                        ELSE
                           CALL PSSEPRTST( DESCA, UPLOS( UPLO ), N,
     $                                    MATTYPES( MATTYPE ), SUBTESTS,
     $                                    THRESH, N, ABSTOL, ISEED,
     $                                    MEM( PTRA ), MEM( PTRCOPYA ),
     $                                    MEM( PTRZ ), LDA, MEM( PTRW ),
     $                                    MEM( PTRW2 ), MEM( PTRIFAIL ),
     $                                    MEM( PTRICLUS ),
     $                                    MEM( PTRGAP ), IPREPAD,
     $                                    IPOSTPAD, MEM( PTRWORK ),
     $                                    LLWORK, MEM( PTRIWRK ),
     $                                    ISIZETST, HETERO, NOUT, RES )
*
                           IF( RES.EQ.0 ) THEN
                              NPASSED = NPASSED + 1
                           ELSE IF( RES.EQ.2 ) THEN
                              NNOCHECK = NNOCHECK + 1
                           ELSE IF( RES.EQ.3 ) THEN
                              NSKIPPED = NSKIPPED + 1
                              WRITE( NOUT, FMT = * )' PSSEPRREQ failed'
                              CALL BLACS_ABORT( CONTEXT, -1 )
                           END IF
                        END IF
                        CALL BLACS_GRIDEXIT( CONTEXT )
                     END IF
   10             CONTINUE
   20          CONTINUE
   30       CONTINUE
   40    CONTINUE
      END IF
*
      RETURN
 9999 FORMAT(  A, ' < 0 case detected (Negative Test). ',
     $        'Instead of driver file, This case will be handled',
     $        'by the ScaLAPACK API.')
 9998 FORMAT( 'Bad ', A10, ' parameters: going on to next test case.' )
*
*     End of PSSEPRREQ
*
      END
