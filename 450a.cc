#include <algorithm>
#include <cctype>
#include <cmath>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#ifdef _WIN32
#include <string.h>
#define SCMP(s1, s2) ::_stricmp(s1, s2)
#else
#define SCMP(s1, s2) strcasecmp(s1, s2)
#include <strings.h>
#endif

template <typename... T> void Read(T &...args) { ((std::cin >> args), ...); }
template <typename... T> void Write(T &&...args) {
  ((std::cout << args << " "), ...);
}
#define deb(x) std::cout << #x << " " << x << std::endl;

int main(int argc, char **argv) {
  // MEANS YOU CANT USE scanf/printf
  // std::ios::sync_with_stdio(0);
  // std::cin.tie(0);
  // std::cout.tie(0);
  int n, m;
  Read(n, m);
  int max = 0;
  int max_i = n;
  int i = 1;
  while (n > 0) {
    int x;
    Read(x);
    int ceil = std::ceil((double)x / (double)m);
    if (x > m && ceil >= max) {
      max_i = i;
      max = ceil;
      // Write("==\n");
      // deb(max);
      // deb(max_i);
    }
    i++;
    n--;
  }
  printf("%i\n", max_i);

  return 0;
}
