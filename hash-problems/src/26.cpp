// pattern 12: natural number right triangle
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};
  int digits {static_cast<int>(std::floor(std::log(n*(n+1)/2)/std::log(10))+1)};

  int num {1};
  for (int i {1}; i <= n; i++) {
    for (int j {1}; j <= i; j++) {
      std::cout << std::setfill('0') << std::setw(digits) << num << " ";
      num++;
    }
    std::cout << std::endl;
  }
  return 0;
}





