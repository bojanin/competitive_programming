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
  std::string queue_info;
  std::getline(std::cin, queue_info);
  int time = std::stoi(SplitStr(queue_info, ' ')[1]);

  std::string line;
  std::getline(std::cin, line);
  // printf("line: %s len: %lu time: %d\n", line.c_str(), line.size(), time);

  for (int t = 0; t < time; ++t) {
    for (int i = 0; i < line.size() - 1; ++i) {
      if (line[i] == 'B' && line[i + 1] == 'G') {
        std::swap(line[i], line[i + 1]);
        ++i;
      }
    }
  }

  printf("%s\n", line.c_str());
  return 0;
}
