// bulb switcher
// o(1)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};
  std::cout << static_cast<int>(std::sqrt(n)) << std::endl;
  return 0;
}
