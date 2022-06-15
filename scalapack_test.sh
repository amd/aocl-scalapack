#!/usr/bin/env bash

echo " "
echo " Scalapack Testing Started "

cd TESTING
echo "SCALAPACK Test suite:"  >>../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt

echo " xcbrd "  >>../ScalaPack_TestResults.txt

mpirun  --bind-to core --nooversubscribe xcbrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcdblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcdblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcdtlu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcdtlu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcevc	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcevc      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcgblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcgblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcgsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcgsep     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcheevr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcheevr    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xchrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xchrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcinv	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcinv      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcllt      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcls	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcls       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xclu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xclu       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcnep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcnep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcpbllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcpbllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcptllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcptllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcqr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcqr       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xcsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xcsep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xctrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xctrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdbrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdbrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xddblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xddblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xddtlu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xddtlu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdgblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdgblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdgsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdgsep     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdhrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdhrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdhseqr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdhseqr    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdinv	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdinv      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdllt      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdls	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdls       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdlu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdlu       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdnep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdnep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdpbllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdpbllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdptllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdptllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdqr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdqr       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdsep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdsvd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdsvd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdsyevr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdsyevr    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xdtrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xdtrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsbrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsbrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsdblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsdblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsdtlu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsdtlu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsgblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsgblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsgsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsgsep     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xshrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xshrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xshseqr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xshseqr    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsinv	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsinv      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsllt      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsls	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsls       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xslu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xslu       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsnep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsnep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xspbllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xspbllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsptllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsptllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xsqr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xsqr       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xssep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xssep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xssvd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xssvd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xssyevr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xssyevr    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xstrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xstrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzbrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzbrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzdblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzdblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzdtlu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzdtlu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzevc	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzevc      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzgblu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzgblu     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzgsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzgsep     >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzheevr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzheevr    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzhrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzhrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzinv	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzinv      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzllt      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzls	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzls       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzlu	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzlu       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xznep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xznep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzpbllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzpbllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzptllt	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzptllt    >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzqr	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzqr       >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xzsep	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xzsep      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt
echo "	xztrd	"	 >> ../ScalaPack_TestResults.txt	

mpirun  --bind-to core --nooversubscribe xztrd      >> ../ScalaPack_TestResults.txt
sleep 3
echo "---------------------------------------------------------"   >> ../ScalaPack_TestResults.txt
echo " "   >> ../ScalaPack_TestResults.txt

