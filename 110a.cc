#include <iostream>
#include <stdio.h>

int main(int argc, char **argv) {
  int64_t num;
  std::cin >> num;
  int ld = 0;

  while (num != 0) {
    if (num % 10 == 4 || num % 10 == 7) {
      ld++;
    }
    num /= 10;
  }

  if (ld == 4 || ld == 7) {
    printf("YES\n");
    return 0;
  }
  printf("NO\n");

  return 0;
}
