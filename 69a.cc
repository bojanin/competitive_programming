#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string_view>

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

int main(int argc, char **argv) {
  std::string fake_string;
  std::getline(std::cin, fake_string);
  const int vecs = std::stoi(fake_string);

  int x = 0, y = 0, z = 0;
  for (int i = 0; i < vecs; ++i) {
    std::string row;
    std::getline(std::cin, row);
    const auto &elems = SplitStr(row, ' ');
    x += std::stoi(elems[0]);
    y += std::stoi(elems[1]);
    z += std::stoi(elems[2]);
  }

  if (x == 0 && y == 0 && z == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
