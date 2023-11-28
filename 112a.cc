#include <algorithm>
#include <cctype>
#include <cstdio>
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
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  std::string str1;
  std::string str2;
  Read(str1, str2);
  int res = SCMP(str1.c_str(), str2.c_str());
  if (res > 0) {
    printf("1\n");
  } else if (res < 0) {
    printf("-1\n");
  } else {
    printf("0\n");
  }
  return 0;
}
