#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#ifdef _WIN32
#include <string.h>
#define SCMP(s1, s2) ::_stricmp(s1, s2)
#else
#define SCMP(s1, s2) strcasecmp(s1, s2)
#include <strings.h>
#endif

template <typename... T> void Read(T &...args) { ((std::cin >> args), ...); }
template <typename... T> void Write(T &&...args) {
  ((std::cout << args << " "), ...);
}
#define deb(x) std::cout << #x << " " << x << std::endl;
int arr[100'001];

int main(int argc, char **argv) {
  // MEANS YOU CANT USE scanf/printf
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  // n:idx
  int n;
  Read(n);
  int x;
  for (int i = 0; i < n; i++) {
    Read(x);
    arr[x] = i + 1;
  }

  int lookups;
  Read(lookups);

  int curr;
  uint64_t v = 0, p = 0;
  while (lookups > 0) {
    Read(curr);
    v += arr[curr];
    p += n - arr[curr] + 1;
    lookups--;
  }
  printf("%llu %llu\n", v, p);

  return 0;
}
