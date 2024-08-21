// pattern 5: diamond
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  if (n%2 == 0) {
    std::cerr << "ERORR: Odd numbers only" << std::endl;
    return 1;
  }

  int half = std::ceil(n/2);

  // the code might be hard to read, but it has less lines so I'll keep it for no reason
  for (int i {0}; i < n; i++) {
    for (int j {0}; i <= half ? j <= half + i : j <= half+n%i-1; j++) {
      if ((i <= half && j < half-i) || (i > half && j < i-half))
        std::cout << "  ";
      else
        std::cout << "* ";
    }
    std::cout << std::endl;
  }

  return 0;
}
