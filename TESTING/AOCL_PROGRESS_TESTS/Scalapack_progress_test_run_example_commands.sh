echo "---------------------------------------------------------"
echo " ScalaPack AOCL Progress feature Test Results.txt "
echo "	"

echo "	Executing xap_pdpotrf  for 'pdpotrf' API "	
echo "	"
mpirun -np 4 ./xap_pdpotrf  512 64 2 2
echo "	"
echo "---------------------------------------------------------"

echo "	Executing xap_pspotrf  for 'pspotrf' API "	
echo "	"	
mpirun -np 4 ./xap_pspotrf  512 64 4 1
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pcpotrf  for 'pcpotrf' API "	
echo "	"	
mpirun -np 4 ./xap_pcpotrf  512 64 1 4
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pzpotrf  for 'pzpotrf' API "	
echo "	"	
mpirun -np 4 ./xap_pzpotrf  512 64 2 2
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pcgetrf  for 'pcgetrf' API "	
echo "	"	
mpirun -np 4 ./xap_pcgetrf  512 64 2 2
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pdgetrf  for 'pdgetrf' API "	
echo "	"	
mpirun -np 4 ./xap_pdgetrf  512 64 4 1
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_psgetrf  for 'psgetrf' API "	
echo "	"	
mpirun -np 4 ./xap_psgetrf  512 64 1 4
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pzgetrf  for 'pzgetrf' API "	
echo "	"	
mpirun -np 4 ./xap_pzgetrf  512 64 2 2
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pdgeqrf  for 'pdgeqrf' API "	
echo "	"	
mpirun -np 4 ./xap_pdgeqrf  128 128  32 32 2 2
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_psgeqrf  for 'psgeqrf' API "	
echo "	"	
mpirun -np 4 ./xap_psgeqrf  128 128  32 32 2 2
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pcgeqrf  for 'pcgeqrf' API "	
echo "	"	
mpirun -np 4 ./xap_pcgeqrf  128 128  32 32 4 1
echo "	"	
echo "---------------------------------------------------------"

echo "	Executing xap_pzgeqrf  for 'pzgeqrf' API "	
echo "	"	
mpirun -np 4 ./xap_pzgeqrf  128 128  16 16 1 4
echo "	"	
echo "---------------------------------------------------------"

