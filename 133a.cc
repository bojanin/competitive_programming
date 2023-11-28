#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#ifdef _WIN32
#include <string.h>
#else
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
  std::string program;
  Read(program);

  for (int i = 0; i < program.size(); i++) {
    if (program[i] == 'H' || program[i] == 'Q' || program[i] == '9') {
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}
