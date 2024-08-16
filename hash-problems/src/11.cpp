// rotating a number by "k" digits
// o(k)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")}, k {Me::input<int>("Enter k")};
  int rotated {0};
  const int digits {static_cast<int>(std::floor(std::log(n)/std::log(10)))};
  
  for (int i {k}; i > 0; i--) {
    rotated += (n%10) * std::pow(10, digits - i + 1);
    n /= 10;
  }
  rotated += n;
  std::cout << rotated << std::endl;
  return 0;
}
