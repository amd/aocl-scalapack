#!/bin/bash

lcov --rc lcov_branch_coverage=1 --capture --directory . --output-file coverage.info;
lcov --remove --rc lcov_branch_coverage=1 coverage.info '/usr/*' '*TESTING*' '*AOCL_DTL*' -o filtered_coverage.info

genhtml --rc genhtml_branch_coverage=1 --title "SCALAPACK COVERAGE REPORT" filtered_coverage.info --prefix $PWD --function-coverage --branch-coverage --legend --output-directory out;
cd out; pushd &lt;index.html;  python3 -m http.server 9999; popd;
