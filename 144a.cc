#include <algorithm>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

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
  std::string asdf;
  std::getline(std::cin, asdf);

  std::string line;
  std::getline(std::cin, line);

  std::vector<int> nums;
  int num;
  std::istringstream iss(line);
  while (iss >> num) {
    nums.push_back(num);
  }
  // for (int i : nums) {
  //   std::cout << i << " ";
  // }
  // std::cout << std::endl;

  const auto max_idx = std::max_element(nums.cbegin(), nums.cend());
  const auto min_idx = std::min_element(nums.crbegin(), nums.crend());
  // printf("max: %i, min: %i\n", *max_idx, *min_idx);

  const int mxdist = std::abs(std::distance(max_idx, nums.cbegin()));
  const int mndist = std::abs(std::distance(min_idx, nums.crbegin()));
  int total = mxdist + mndist;
  // printf("mxdist: %i, mndist: %i tot: %i\n", mxdist, mndist, total);

  if (max_idx >= min_idx.base()) {
    printf("%i\n", total - 1);
    return 0;
  }
  printf("%i\n", total);
  return 0;
}
