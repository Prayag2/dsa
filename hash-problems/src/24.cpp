// pattern 9: cross
// o(n^2)
#include <bits/stdc++.h>
#include <inp.h>

// this functions just prints a string "count" times
void printMany(std::string_view s, int count) {
  if (count < 0)
    return;

  for (int j {0}; j < count; j++)
    std::cout << s;
}

int main() {
  int n {Me::input<int>("Enter n")};

  if (n%2 == 0) {
    std::cerr << "ERROR: Odd numbers only" << std::endl;
    return 1;
  }

  int firstSpaces {0};
  int middleSpaces {n-2};

  for (int i {0}; i < n; i++) {
    printMany(" ", firstSpaces);
    std::cout << "*";
    printMany(" ", middleSpaces);
    if (i != std::floor(n/2))
      std::cout << "*";

    if (i < n/2) {
      firstSpaces++;
      middleSpaces -= 2;
    } else {
      firstSpaces--;
      middleSpaces += 2;
    }

    std::cout << std::endl;
  }
  return 0;
}
