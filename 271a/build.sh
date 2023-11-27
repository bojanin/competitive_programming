set -x
echo "building main.cc in $PWD"
clang++ main.cc -std=c++20  -o a.out && ./a.out 
