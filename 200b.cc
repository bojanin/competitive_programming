#include <iostream>
#include <sstream>
#include <stdio.h>

int main(int argc, char **argv) {
  double denominator = 0;
  double numerator = 0;

  std::string in;
  std::getline(std::cin, in);
  std::getline(std::cin, in);

  std::istringstream iss(in);

  double num;
  while (iss >> num) {
    numerator += num;
    denominator += 100.0;
  }

  printf("%f\n", (numerator / denominator) * 100.0);
}
