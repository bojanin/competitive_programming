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
  std::unordered_set<char> s;
  std::string name;
  Read(name);
  for (int i = 0; i < name.size(); ++i) {
    s.insert(name[i]);
  }

  if (s.size() % 2 == 0) {
    printf("CHAT WITH HER!\n");
  } else {
    printf("IGNORE HIM!\n");
  }
  return 0;
}
