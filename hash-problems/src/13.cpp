// lcm and gcd of "a" and "b" (euclidean algo)
// o(log(min(a,b)))
#include <bits/stdc++.h>
#include <inp.h>

/* example
 * 16 24
 * 24 = 16.1 + 8
 * 16 = 8.2 + 0
 * 8 is the gcd
 */

int getGCD (int a, int b) {
  int max {std::max(a, b)};
  int r {std::min(a, b)};
  int tmp{};

  while (r != 0) {
    tmp = max;
    max = r;
    r = tmp%r;
  }
  return max;
}

int getLCM(int a, int b) {
  return (a*b)/getGCD(a,b);
}

int main() {
  int a {Me::input<int>("Enter a")}, b {Me::input<int>("Enter b")};
  std::cout << "LCM: " << getLCM(a, b) << std::endl;
  std::cout << "GCD: " << getGCD(a, b) << std::endl;
  return 0;
}
