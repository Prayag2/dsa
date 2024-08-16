// weird algorithm
// "it depends"
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  while (n != 1) {
    std::cout << n << " ";
    if (n%2 == 0) n /= 2;
    else n = n*3 + 1;
  }
  std::cout << 1 << std::endl;
  
  return 0;
}
