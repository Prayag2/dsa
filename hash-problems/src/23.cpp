// pattern 8: inverted diagonal
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

// this functions just prints a string "count" times
void printMany(std::string_view s, int count) {
  for (int j {0}; j < count; j++)
    std::cout << s;
}

int main() {
  int n {Me::input<int>("Enter n")};

  for (int i {0}; i < n; i++) {
    printMany(" ", n-i);
    std::cout << "*" << std::endl;
  }
  return 0;
}
