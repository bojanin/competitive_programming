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

  int ones = 0;
  int twos = 0;
  int threes = 0;

  std::string line;
  std::getline(std::cin, line);

  for (int i = 0; i < line.size(); ++i) {
    if (line[i] == '1') {
      ones++;
    } else if (line[i] == '2') {
      twos++;
    } else if (line[i] == '3') {
      threes++;
    }
  }
  int total = ones + twos + threes;
  std::stringstream ret;
  for (int i = 0; i < total; ++i) {
    if (ones > 0) {
      ret << "1";
      ones--;
    } else if (twos > 0) {
      ret << "2";
      twos--;
    } else if (threes > 0) {
      ret << "3";
      threes--;
    }
    if (i + 1 < total) {
      ret << "+";
    }
  }
  printf("%s\n", ret.str().c_str());

  return 0;
}
