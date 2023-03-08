#!/bin/bash

# This script runs the scalapack testing programs against various mpi
# configurations. Test results will be saved in the folder
# $HOME/aocl_scalapack_testing_results
#
# The below default options will be used if it is run without any
# commandline arguments
#    a) MPI ranks => Maximum number of available cpu cores in the system
#    b) Test programs run => all, All the scalapack testing programs
#       present in the TESTING folder will be run
#    c) MPI flavour => It will look for the mpirun executable in the
#       PATH variable and corresponding MPI installation will be used.
#    d) MPI binding, mapping => The test will be performed only
#       with 'map-by core' and 'bind-to core'
#
# User can change this behaviour with the command line options
#
# Eg: To test only single precision cholesky transformation for all
#     the MPI mapping for ranks between 4 to 16 use
#     $ scalapack_test.sh -t xsllt -s 4 -i 1 -e 16 -c all
#
# Eg: To test all the programs with maximum avialable ranks
#     with MPI mapping "map-by l3cache"
#     $ scalapack_test.sh -t all -c map_l3cache
#
# To print all the supported options run it with the argument -h

#Default values for the test
num_sample_to_collect=1
test_execution_dir="./TESTING"
user_input_test="all"
test_description="scalapack_default_test"
mpi_mapping_binding="map_core_bind_core"

scalapack_test_list_fast=(
"xcdtlu"
"xcgblu"
"xcinv"
"xclu"
"xcnep"
"xcptllt"
"xcqr"
"xcsep"
"xdbrd"
"xddblu"
"xddtlu"
"xdhrd"
"xdlu"
"xdpbllt"
"xdptllt"
"xdsvd"
"xsbrd"
"xsgblu"
"xsgsep"
"xshrd"
"xspbllt"
"xsptllt"
"xzevc"
"xzinv"
"xznep"
"xzptllt"
)

scalapack_test_list_normal=(
"xcbrd"
"xcdblu"
"xcevc"
"xcgsep"
"xchrd"
"xcllt"
"xcls"
"xcpbllt"
"xctrd"
"xdgblu"
"xdgsep"
"xdhseqr"
"xdinv"
"xdllt"
"xdls"
"xdnep"
"xdqr"
"xdsep"
"xdtrd"
"xsdblu"
"xsdtlu"
"xshseqr"
"xsinv"
"xsllt"
"xsls"
"xslu"
"xsnep"
"xsqr"
"xssep"
"xssvd"
"xstrd"
"xzbrd"
"xzdblu"
"xzdtlu"
"xzgblu"
"xzgsep"
"xzhrd"
"xzllt"
"xzls"
"xzlu"
"xzpbllt"
"xzqr"
"xzsep"
"xztrd"
)

scalapack_test_list_slow=(
"xdsyevr"
"xssyevr"
"xcheevr"
"xzheevr"
)

scalapack_test_list_execute=()
scalapack_test_list_mpifail=()

mpi_map_bind_supported_list=(
"map_core_bind_core --map-by core --bind-to core"
"map_l3cache_bind_core --map-by l3cache --bind-to core"
"map_numa_bind_core --map-by numa --bind-to core"
"map_socket_bind_core --map-by socket --bind-to core"
"map_l3cache --map-by l3cache"
"map_numa --map-by numa"
"map_socket --map-by socket"
)

mpi_map_bind_testing_list=()

usage()
{
    echo -e "scalapack_test.sh -t <test_name or 'fast, normal, slow, all'>
               -m <mpi_install_path>
               -d <test description, used while forming the output folder>
               -f <scalapack testing folder path>
               -s <number of mpi ranks to start test loop>
               -i <number of mpi ranks to increment in test loop>
               -e <number of mpi ranks to end test loop>
               -x <comma separated list of tests to exclude>
               -n <number of times to repeat the test>
               -c <mpi mapping and binding to use. use 'all' to test agianst all supported options>
               -h <for help>"
}

num_mpi_ranks_step=$(nproc --all)
num_mpi_ranks_start=$(nproc --all)
num_mpi_ranks_end=$(nproc --all)

while getopts  "t:m:d:f:s:i:e:x:n:c:h" OPTION
do
    case $OPTION in
    h)
        usage
        exit 0
        ;;
    t)
        user_input_test="$OPTARG"
        ;;
    m)
        mpi_install_path="$OPTARG"
        ;;
    d)
        test_description="$OPTARG"
        ;;
    f)
        test_execution_dir="$OPTARG"
        ;;
    s)
        num_mpi_ranks_start="$OPTARG"
        ;;
    i)
        num_mpi_ranks_step="$OPTARG"
        ;;
    e)
        num_mpi_ranks_end="$OPTARG"
        ;;
    n)
        num_sample_to_collect="$OPTARG"
        ;;
    c)
        mpi_mapping_binding="$OPTARG"
        ;;
    x)
        for tst in ${OPTARG//,/ }
        do
            if [ "$tst" == "fast" ] ; then
                scalapack_test_list_exclude+=( ${scalapack_test_list_fast[@]} )
            elif [ "$tst" == "normal" ] ; then
                scalapack_test_list_exclude+=( ${scalapack_test_list_normal[@]} )
            elif [ "$tst" == "slow" ] ; then
                scalapack_test_list_exclude+=( ${scalapack_test_list_slow[@]} )
            else
                scalapack_test_list_exclude+=( $tst )
            fi
        done
        ;;
    ?)
        usage
        exit 1
        ;;
    esac
done

# Verify the user supplied mapping and binding option (-c)
# If the check is successful set map_bind_found to 1
map_bind_found=0
if [ "$mpi_mapping_binding" == "all" ] ; then
    mpi_map_bind_testing_list+=( "${mpi_map_bind_supported_list[@]}" )
    map_bind_found=1
else
    for mpi_map_bind in "${mpi_map_bind_supported_list[@]}"
    do
        map_name=$(echo $mpi_map_bind | cut -d' ' -f1)

        if [ "$map_name" == "$mpi_mapping_binding" ] ; then
            mpi_map_bind_testing_list+=( "$mpi_map_bind" )
            map_bind_found=1
        fi
    done
fi

if [ "$map_bind_found" -eq 0 ] ; then
    echo "The supplied $mpi_mapping_binding is wrong. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
fi

# Verify the user supplied test (-t)
# If the check is successful set test_found to 1
test_found=0
if [ -z "$user_input_test" ] ; then
    echo "No test input. Specify a test name or 'fast, normal, slow, all'. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
else
    if [ "$user_input_test" == "fast" ] || [ "$user_input_test" == "all" ]; then
        scalapack_test_list_execute+=( ${scalapack_test_list_fast[@]} )
        test_found=1
    fi

    if [ "$user_input_test" == "normal" ] || [ "$user_input_test" == "all" ]; then
        scalapack_test_list_execute+=( ${scalapack_test_list_normal[@]} )
        test_found=1
    fi

    if [ "$user_input_test" == "slow" ] || [ "$user_input_test" == "all" ]; then
        scalapack_test_list_execute+=( ${scalapack_test_list_slow[@]} )
        test_found=1
    fi

    if [ "$test_found" -eq 0 ] ; then
        for tst in ${scalapack_test_list_fast[@]}
        do
            if [ "$user_input_test" == "$tst" ] ; then
                scalapack_test_list_execute+=( $tst )
                test_found=1
            fi
        done

        for tst in ${scalapack_test_list_normal[@]}
        do
            if [ "$user_input_test" == "$tst" ] ; then
                scalapack_test_list_execute+=( $tst )
                test_found=1
            fi
        done

        for tst in ${scalapack_test_list_slow[@]}
        do
            if [ "$user_input_test" == "$tst" ] ; then
                scalapack_test_list_execute+=( $tst )
                test_found=1
            fi
        done
    fi
fi

if [ "$test_found" -eq 0 ] ; then
    echo "Wrong test input. Specify a valid test name or 'fast, normal, slow, all'. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
fi

# check for a valid mpirun in the default PATH if user did not supply any(-m)
if [ -z "$mpi_install_path" ] ; then
# Try to find mpirun in PATH variable
    mpirun_path=$(which mpirun)
    mpirun_path=$(echo $mpirun_path | rev | cut -d'/' -f3- | rev)

    if [ -z "$mpirun_path" ] ; then
        echo "Unable to find mpirun. Exiting !!!"
        exit 1
    fi

    mpi_install_path=$mpirun_path
fi

if [ -z "$mpi_install_path" ] ; then
    echo "Please specify mpi install path with -m, can't proceed without it. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
else
    if [ ! -f $mpi_install_path/bin/mpicc ] ; then
        echo "Unable to find mpicc @ $mpi_install_path/bin/mpicc"
        echo "Please specify a valid mpi install path with -m, can't proceed without it. Exiting !!!"
        echo -e "\n\nUsage is given below"
        usage
        exit 1
    fi
fi

# Check the scalapack test executables in user supplied/default folder
if [ -z "$test_execution_dir" ] ; then
    echo "Please specify the path to scalapack TESTING folder. can't proceed without it. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
else
    for scalapack_test in ${scalapack_test_list_execute[@]}
    do
        if [ ! -f $test_execution_dir/$scalapack_test ] ; then
            echo "Unable to find $scalapack_test exe in $test_execution_dir. can't proceed without it. Exiting !!!"
            echo -e "\n\nUsage is given below"
            usage
            exit 1
        fi
    done
fi

if [ -z "$test_description" ] ; then
    echo "Please specify a test description. can't proceed without it. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
fi

output_dir="$HOME/aocl_scalapack_testing_results/"
dir_str=$(date +%b_%d_%Y_%H_%M_%S | tr '[:upper:]' '[:lower:]')
test_description=$(echo $test_description | tr -s ' ' | tr ' ' '_')
result_folder="$test_description""_""$dir_str"

#set mpi binary and library path
PATH=$mpi_install_path/bin:$PATH; export PATH
LD_LIBRARY_PATH=$mpi_install_path/lib:$LD_LIBRARY_PATH; export LD_LIBRARY_PATH

test_execution_dir=$(readlink -f $test_execution_dir)

cd $test_execution_dir
if [ $? -ne 0  ]; then
    echo "Unable to change directory to path $test_execution_dir. Please specify a valid scalapack TESTING folder. Exiting !!!"
    echo -e "\n\nUsage is given below"
    usage
    exit 1
fi

mkdir -p $output_dir/$result_folder

test_log_file=$output_dir/$result_folder/test_log.txt
test_env_file=$output_dir/$result_folder/test_env.txt
echo -e "test_description:$test_description" > $test_env_file
echo -e "scalapack TESTING dir:$test_execution_dir" >> $test_env_file
echo -e "mpi path used for testing:$mpi_install_path" >> $test_env_file
echo -e "\nenv PATH:$PATH" >> $test_env_file
echo -e "\nenv LD_LIBRARY_PATH:$LD_LIBRARY_PATH" >> $test_env_file
echo -e "\nenv OMP_NUM_THREADS:$OMP_NUM_THREADS" >> $test_env_file
echo -e "\nenv LD_PRELOAD:$LD_PRELOAD" >> $test_env_file
echo -e "\nMPI configuration:" >> $test_env_file

if [ -f $mpi_install_path/bin/ompi_info ] ; then
    echo -e "$(ompi_info)" >> $test_env_file
elif [ -f $mpi_install_path/bin/impi_info ] ; then
    echo -e "$(mpirun --version)\n" >> $test_env_file
else
    echo -e "Unknown MPI installation" >> $test_env_file
fi

echo "--------------------------------------------------------" >> $test_log_file
echo "Main test loop started @ $(date)" >> $test_log_file
echo "--------------------------------------------------------" >> $test_log_file

##Loop over tests
for mpi_map_bind_var in "${mpi_map_bind_testing_list[@]}"
do
    test_name=$(echo $mpi_map_bind_var | cut -d' ' -f1)
    mpi_opt=$(echo $mpi_map_bind_var | cut -d' ' -f2-)
    folder1="$output_dir/$result_folder/$test_name"

    echo "$test_name started @ $(date)" >> $test_log_file

    mkdir "$folder1"
    for scalapack_test in ${scalapack_test_list_execute[@]}
    do
        for scalapack_exclude_test in ${scalapack_test_list_exclude[@]}
        do
            if [ "$scalapack_test" == "$scalapack_exclude_test" ] ; then
                continue 2
            fi
        done

        folder2="$folder1/$scalapack_test"
        mkdir "$folder2"

        for num_core in `seq $num_mpi_ranks_start $num_mpi_ranks_step $num_mpi_ranks_end`
        do
            folder3="$folder2/result_nproc_$num_core"
            mkdir "$folder3"

            echo "Executing $test_name:$scalapack_test with $num_core MPI ranks. @ $(date)"

            declare -i total_time=0
            declare -i start_time=0
            declare -i end_time=0

            for (( i = 0; i < $num_sample_to_collect; i++));
            do
                folder4="$folder3/sample_$i"
                mkdir "$folder4"

                # Execute the test
                start_time=$(date +%s%N)
                result_str=$(mpirun -np $num_core $mpi_opt ./$scalapack_test 2>&1)
                mpirun_exit_code=$?
                end_time=$(date +%s%N)
                total_time=$(( total_time + (end_time - start_time) ))

                echo "$result_str" > $folder4/result.txt

                if [ $mpirun_exit_code -ne 0 ] ; then
                    echo "mpirun failed for the test:$scalapack_test" | tee -a $test_log_file
                    scalapack_test_list_mpifail+=( $scalapack_test )
                fi
            done
            echo "#__test_runtime__:$test_name:$scalapack_test:$(( total_time / 1000000 )) ms:$num_core" >> $test_log_file
        done
    done
    echo "$test_name ended @ $(date)" >> $test_log_file
done

echo "--------------------------------------------------------" >> $test_log_file
echo "Main test loop ended @ $(date)" >> $test_log_file
echo "--------------------------------------------------------" >> $test_log_file

failed_file_list=$(find $output_dir/$result_folder -name result.txt | xargs grep -l FAILED)
if [ -z "$failed_file_list" ] ; then
    echo "Number of scalapack routines failed: 0" | tee -a $test_log_file
else
    echo "Some of the scalapack routines failed. Please find the result_files with failed routines" | tee -a $test_log_file
    for fail_result in $failed_file_list
    do
        echo $fail_result | tee -a $test_log_file
    done
fi

if [ ${#scalapack_test_list_mpifail[@]} -eq 0  ]; then
    echo "Number of mpirun failures: 0" | tee -a $test_log_file
else
    echo "Some of the scalapack test applications failed in mpirun. Please find it below" | tee -a $test_log_file
    for mpi_fail in "${scalapack_test_list_mpifail[@]}"
    do
        echo $mpi_fail | tee -a $test_log_file
    done
fi

scalapack_test_list_skipped=()
skip_file_check_list=$(find $output_dir/$result_folder -name result.txt)
for skip_check in $skip_file_check_list
do
    match=$(grep -a "tests skipped" $skip_check | awk '{print $1}')

    if [ ! -z $match ] ; then
        if [ "$match" -ne "0" ] ; then
            scalapack_test_list_skipped+=( $skip_check )
        fi
    fi
done

if [ ${#scalapack_test_list_skipped[@]} -eq 0  ]; then
    echo "Number of scalapack routines skipped: 0" | tee -a $test_log_file
else
    echo "Some of the scalapack routines skipped. Please find the result_files with skipped routines" | tee -a $test_log_file
    for mpi_skip in "${scalapack_test_list_skipped[@]}"
    do
        echo $mpi_skip | tee -a $test_log_file
    done
fi
