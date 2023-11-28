#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <unordered_map>
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
  std::string h;
  std::string g;
  std::string f;
  Read(h, g, f);

  std::unordered_map<char, int> m;
  for (int i = 0; i < h.size(); i++) {
    m[h[i]]++;
  }
  for (int i = 0; i < g.size(); i++) {
    m[g[i]]++;
  }

  for (int i = 0; i < f.size(); i++) {
    m[f[i]]--;
  }
  for (const auto &p : m) {
    // deb(p.first);
    // deb(p.second);
    if (p.second != 0) {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}
