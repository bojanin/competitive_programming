set -x
echo "building main.cc in $PWD"
clang++ $1 -std=c++20  -o a.out && ./a.out 
