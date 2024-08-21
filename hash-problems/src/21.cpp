// pattern 6: inverted diamond
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

  int spaces {1};
  int stars {n/2 + 1};

  for (int i {0}; i < n; i++) {
    printMany("*", stars);
    printMany(" ", spaces);
    printMany("*", stars);

    if (i < n/2) {
      spaces += 2;
      stars--;
    } else {
      spaces -= 2;
      stars++;
    }
    std::cout << std::endl;
  }
  return 0;
}
