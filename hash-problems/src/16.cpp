// pattern 1: upward right triangle
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};
  for (int i {0}; i < n; i++) {
    for (int j {0}; j <= i; j++)
      std::cout << "* ";
    std::cout << std::endl;
  }
  return 0;
}