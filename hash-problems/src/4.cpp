// print first n terms of fibonacci
// o(n)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};
  
  int previous {0}, current {1}, tmp {0};
  for (int i {0}; i < n; i++) {
    std::cout << previous << " ";

    tmp = previous;
    previous = current;
    current += tmp;
  }
  std::cout << std::endl;
  return 0;
}
