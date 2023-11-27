#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>

template <typename... T> void Read(T &...args) { ((std::cin >> args), ...); }
template <typename... T> void Write(T &&...args) {
  ((std::cout << args << " "), ...);
}
#define deb(x)                                                                 \
  std::cout << "#x:"                                                           \
            << " " << x << std::endl;

int main(int argc, char **argv) { return 0; }
