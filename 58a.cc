#include <algorithm>
#include <cctype>
#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char **argv) {
  std::string word;
  std::getline(std::cin, word);
  int lowercase = 0;
  for (const char &c : word) {
    if (std::islower(c)) {
      lowercase++;
    }
  }
  int upper = word.size() - lowercase;

  if (lowercase >= upper) {
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);
  } else {
    std::transform(word.begin(), word.end(), word.begin(), ::toupper);
  }
  printf("%s\n", word.c_str());
}
