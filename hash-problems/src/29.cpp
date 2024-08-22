// pattern 15: printing tables 
// o(n)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  for (int i {1}; i <= 10; i++) {
    std::cout << n << " * " << i << " = " << n*i << std::endl;
  }
  return 0;
}
