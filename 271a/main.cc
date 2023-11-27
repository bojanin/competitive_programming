#include <fstream>
#include <iostream>
#include <limits>
#include <stdio.h>
#include <string>
#include <unordered_set>

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

  std::string year_str;
  std::getline(std::cin, year_str);
  int year = std::stoi(year_str) + 1;

  // 2134 example year:
  std::unordered_set<int> s;
  for (int i = year; i <= std::numeric_limits<int>::max(); i++) {
    s.clear();
    s.insert(i / 1000);
    s.insert((i / 100) % 10);
    s.insert((i / 10) % 10);
    s.insert(i % 10);
    if (s.size() == 4) {
      printf("%i\n", i);
      return 0;
    }
  }
  return 0;
}
