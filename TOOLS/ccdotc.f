      SUBROUTINE CCDOTC( N, DOTC, X, INCX, Y, INCY )
*
*  -- ScaLAPACK tools routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*
*     .. Scalar Arguments ..
      INTEGER            INCX, INCY, N
      COMPLEX            DOTC
*     ..
*     .. Array Arguments ..
      COMPLEX            X( * ), Y( * )
*     ..
*
*  Purpose
*  =======
*
*  CCDOTC is a simple FORTRAN wrapper around the BLAS function
*  CDOTC returning the result in the parameter list instead.
*
*  =====================================================================
*
*     .. External Functions ..
#ifndef F2C
      COMPLEX            CDOTC
#endif
      EXTERNAL           CDOTC
*     ..
*     .. Executable Statements ..
*
#ifdef F2C
      CALL CDOTC ( DOTC, N, X, INCX, Y, INCY )
#else
      DOTC = CDOTC( N, X, INCX, Y, INCY )
#endif
*
      RETURN
*
*     End of CCDOTC
*
      END
