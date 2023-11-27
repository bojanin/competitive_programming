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
#define deb(x)                                                                 \
  std::cout << "#x:"                                                           \
            << " " << x << std::endl;

int main(int argc, char **argv) {

  int k, l, m, n, d;
  Read(k, l, m, n, d);

  int total = 0;
  for (int i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      total++;
      continue;
    }
  }
  printf("%d\n", total);
  return 0;
}
