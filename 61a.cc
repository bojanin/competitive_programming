#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char **argv) {
  std::string n1;
  std::string n2;

  std::getline(std::cin, n1);
  std::getline(std::cin, n2);

  std::string res = n1;

  for (int i = 0; i < n1.size(); ++i) {
    if (n1[i] != n2[i]) {
      res[i] = '1';
    } else {
      res[i] = '0';
    }
  }

  printf("%s\n", res.c_str());
}
