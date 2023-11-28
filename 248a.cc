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
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  int n;
  Read(n);
  int lc = 0;
  int rc = 0;

  int total = n;

  while (total > 0) {
    int l, r;
    Read(l, r);
    lc += l;
    rc += r;
    total--;
  }
  int res = 0;

  // case where the
  // deb(lc); // 2
  // deb(rc); // 4
  // deb(n);  // 5

  if (n - lc > n / 2) {
    res += lc;
  } else {
    res += n - lc;
  }

  if (n - rc > n / 2) {
    res += rc;
  } else {
    res += n - rc;
  }

  printf("%i\n", res);

  return 0;
}
