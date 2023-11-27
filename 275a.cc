#include <array>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

std::array<std::array<int, 3>, 3> res = {
    1, 1, 1, //
    1, 1, 1, //
    1, 1, 1  //
};

std::array<std::array<int, 3>, 3> in = {
    1, 1, 1, //
    1, 1, 1, //
    1, 1, 1  //
};

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

void Toggle(int &light) { light = light == 0 ? 1 : 0; }

void Solve() {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      while (in[i][j] > 0) {
        Toggle(res[i][j]);
        if (i + 1 < 3) {
          Toggle(res[i + 1][j]);
        }
        if (i - 1 >= 0) {
          Toggle(res[i - 1][j]);
        }
        if (j + 1 < 3) {
          Toggle(res[i][j + 1]);
        }
        if (j - 1 >= 0) {
          Toggle(res[i][j - 1]);
        }
        in[i][j]--;
      }
    }
  }
}

int main(int argc, char **argv) {
  std::string row1;
  std::string row2;
  std::string row3;
  std::getline(std::cin, row1);
  std::getline(std::cin, row2);
  std::getline(std::cin, row3);
  const auto row1_v = SplitStr(row1, ' ');
  const auto row2_v = SplitStr(row2, ' ');
  const auto row3_v = SplitStr(row3, ' ');
  in[0][0] = std::stoi(row1_v[0]);
  in[0][1] = std::stoi(row1_v[1]);
  in[0][2] = std::stoi(row1_v[2]);
  in[1][0] = std::stoi(row2_v[0]);
  in[1][1] = std::stoi(row2_v[1]);
  in[1][2] = std::stoi(row2_v[2]);
  in[2][0] = std::stoi(row3_v[0]);
  in[2][1] = std::stoi(row3_v[1]);
  in[2][2] = std::stoi(row3_v[2]);

  Solve();

  printf("%i%i%i\n", res[0][0], res[0][1], res[0][2]);
  printf("%i%i%i\n", res[1][0], res[1][1], res[1][2]);
  printf("%i%i%i\n", res[2][0], res[2][1], res[2][2]);
}
