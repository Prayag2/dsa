// count digits of a number
// o(1)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  std::cout << "Number of digits is " << std::ceil(std::log(n)/std::log(10)) << std::endl;
  return 0;
}
