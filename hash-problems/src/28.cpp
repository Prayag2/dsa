// pattern 14: combinations right triangle
// o(n^2)
// I absolutely could not figure out this pattern
// had to look up the solution to understand that it was 
// a pattern involving nCr
// i forgor school meth T_T
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  int prev {0}, cur {1};
  for (int i {0}; i < n; i++) {
    int val {1};
    for (int j {0}; j <= i; j++) {
      std::cout << val << "\t";
      val = (val*(i-j))/(j+1);
    }
    std::cout << std::endl;
  }
  return 0;
}
