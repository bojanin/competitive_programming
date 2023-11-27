set -x
echo "building $1 in $PWD"
clang++ $1 -std=c++20  -o a.out && ./a.out 
