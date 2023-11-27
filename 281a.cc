#include <algorithm>
#include <cctype>
#include <iostream>
#include <stdio.h>
#include <string>
int main(int argc, char **argv) {
  std::string word;
  std::getline(std::cin, word);

  word[0] = std::toupper(word[0]);

  printf("%s\n", word.c_str());
}
