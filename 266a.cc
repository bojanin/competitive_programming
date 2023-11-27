#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char **argv) {

  std::string ns;
  std::getline(std::cin, ns);

  std::string stones;
  std::getline(std::cin, stones);
  char z = stones[0];
  int count{0};

  for (int i = 1; i < stones.size(); ++i) {
    if (z == stones[i]) {
      count++;
    }
    z = stones[i];
  }
  printf("%i\n", count);
  return 0;
}
