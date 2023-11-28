#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <unordered_set>
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
  int a, g, d, f;
  std::unordered_set<int> s;
  Read(a, g, d, f);

  s.insert(a);
  s.insert(g);
  s.insert(d);
  s.insert(f);

  printf("%i\n", 4 - (int)s.size());

  return 0;
}
