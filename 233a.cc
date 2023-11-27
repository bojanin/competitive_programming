#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <unordered_set>
#include <vector>

int main() {
  int size;
  std::cin >> size;
  if (size % 2 == 1) {
    printf("-1\n");
    return 0;
  }

  for (int i = 1; i <= size; i++) {
    if (i != size && i != 1) {
      printf(" ");
    }
    printf("%i %i", i + 1, i);
    if (i == size) {
      printf("\n");
    }
    i++;
  }
}
