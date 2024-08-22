// pattern 13: fibonacci number right triangle
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

int nthFib(int n) {
  int prev {0}, cur {1};
  for (int i {0}; i < n; i++) {
    int tmp {cur};
    cur += prev;
    prev = tmp;
  }
  return prev;
}

int main() {
  int n {Me::input<int>("Enter n")};
  int lastNum {nthFib(n*(n+1)/2 - 1)};
  int digits {static_cast<int>(std::floor(std::log(lastNum)/std::log(10))+1)};

  int prev {0}, cur {1};
  for (int i {1}; i <= n; i++) {
    for (int j {1}; j <= i; j++) {
      std::cout << std::setfill('0') << std::setw(digits) << prev << " ";
      int tmp {cur};
      cur = prev + cur;
      prev = tmp;
    }
    std::cout << std::endl;
  }
  return 0;
}
