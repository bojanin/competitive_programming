#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <vector>

template <typename... T> void Read(T &...args) { ((std::cin >> args), ...); }
template <typename... T> void Write(T &&...args) {
  ((std::cout << args << " "), ...);
}
#define deb(x) std::cout << #x << " " << x << std::endl;

int main(int argc, char **argv) {
  // MEANS YOU CANT USE scanf/printf
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  int n;
  Read(n);
  int max = 0;
  int passengers = 0;

  while (n > 0) {
    int exit, enter;
    Read(exit, enter);
    passengers -= exit;
    passengers += enter;
    max = std::max(max, passengers);
    n--;
  }
  printf("%i\n", max);
  return 0;
}
