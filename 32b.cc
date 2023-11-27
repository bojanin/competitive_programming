#include <fstream>
#include <iostream>
#include <sstream>
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

  std::string ss;
  std::stringstream ret;
  std::getline(std::cin, ss);
  // printf("%lu\n", ss.size());

  for (int i = 0; i < ss.size(); ++i) {
    // 0
    // printf("i: %d, remaining: %s, 2 in front: %s\n", i, ss.substr(i).c_str(),
    //       ss.substr(i, 2).c_str());
    if (ss.substr(i, 1) == ".") {
      ret << "0";
    } else if (i + 2 <= ss.size() && ss.substr(i, 2) == "-.") {
      ++i;
      ret << "1";
      // 1
    } else {
      ++i;
      ret << "2";
      // gotta be a 2
    }
  }
  printf("%s\n", ret.str().c_str());

  return 0;
}
