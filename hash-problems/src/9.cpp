// reverse a number
// o(log(n))
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  int rev {0};
  while (n != 0) {
    rev += (n%10) * std::pow(10, std::floor(std::log(n)/std::log(10)));
    n /= 10;
  }
  std::cout << rev << std::endl;

  return 0;
}
