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
  int words;
  Read(words);
  while (words > 0) {
    std::string s;
    Read(s);
    if (s.size() > 10) {
      printf("%c%lu%c\n", s[0], s.size() - 2, s[s.size() - 1]);
    } else {
      printf("%s\n", s.c_str());
    }
    words--;
  }
  return 0;
}
