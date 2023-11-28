#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>

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

  int perfects = 0;
  int min = 0;
  Read(min);
  int max = min;
  n--;
  // deb(n);
  // deb(max);
  // deb(min);

  while (n > 0) {
    int m;
    Read(m);
    if (m > max) {
      max = m;
      perfects++;
    } else if (m < min) {
      min = m;
      perfects++;
    }
    n--;
  }
  printf("%i\n", perfects);

  return 0;
}
