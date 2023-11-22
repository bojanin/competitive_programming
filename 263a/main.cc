#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>

std::vector<std::string> SplitStr(const std::string &s, const char delimiter) {
  size_t pos_start = 0, pos_end, delim_len = 1;
  std::string token;
  std::vector<std::string> res;

  while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
    token = s.substr(pos_start, pos_end - pos_start);
    pos_start = pos_end + delim_len;
    res.push_back(token);
  }

  res.push_back(s.substr(pos_start));
  return res;
}
//"0 0 0 0 0"
int main(int argc, char **argv) {

  int moves = 0;
  for (int i = 0; i < 5; ++i) {
    std::string row;
    std::getline(std::cin, row);

    int column = 0;
    for (const char &c : row) {

      if (c == '1') {
        moves = std::abs(column - 2) + std::abs(i - 2);
        goto finish;
      }
      if (c == '1' || c == '0') {
        column += 1;
      }
    }
  }
finish:
  printf("%d\n", moves);

  return 0;
}
