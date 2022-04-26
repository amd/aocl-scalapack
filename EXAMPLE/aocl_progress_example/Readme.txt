Procedure to build and run the sample application with aocl progress feature:
=============================================================================

1) copy below AOCL libraries to the "<aocl-scalapack>/EXAMPLE/aocl_progress_example/" folder:
   1) libscalapack.a
   2) libflame.a
   3) blis-mt.a

2) Run the below command to build the 'pdgetrf' test application with 'aocl-progress' feature.
   mpicc -O0 -g pdgerf_example_app.c  libscalapack.a libflame.a  -fopenmp libblis-mt.a -lm -lgfortran -o test

3) Run the below commands to run the application:
   Ex: mpirun -np 4 ./test  32  8 2 2
       mpirun -np 8 ./test 1024 32 4 2
