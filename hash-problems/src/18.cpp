// pattern 3: upward right inverted triangle
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};
  for (int i {0}; i < n; i++) {
    for (int j {0}; j < n; j++) {
      if (j < i)
        std::cout << "  ";
      else
        std::cout << "* ";
    }
    std::cout << std::endl;
  }
  return 0;
}
