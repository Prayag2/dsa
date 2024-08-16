// lcm and gcd of "a" and "b" (brute force)
// o(min(a,b)) for gcd
#include <bits/stdc++.h>
#include <inp.h>

int getLCM (int a, int b) {
  // used basic prime factorization
  // used sieve of erastothenes to get primes
  // I could've used the formula lcm = (a*b)/gcd but 
  // I wanted to experiment a little
  int product {1};
  int currentPrime {2};
  int max {std::max(a, b)};

  // sieve
  std::vector <bool> isPrime (max, true);
  for (int i {2}; i <= max; i++) {
    if (!isPrime[i])
      continue;

    // marking non primes
    for (int j {i*i}; j <= max; j += i)
      isPrime[j] = false;

    // just like we do it by hand
    // we keep on dividing until we can't divide it
    while (a%i == 0 || b%i == 0) {
      product *= i;
      if (a%i == 0)
        a /= i;
      if (b%i == 0)
        b /= i;
    }
  }
  return product;
}

int getGCD (int a, int b) {
  int gcd {1};
  int min {std::min(a, b)};
  for (int i {2}; i < min; i++) {
    if (a%i == 0 && b%i == 0)
      gcd = i;
  }
  return gcd;
}

int main() {
  int a {Me::input<int>("Enter a")}, b {Me::input<int>("Enter b")};
  std::cout << "LCM: " << getLCM(a, b) << std::endl;
  std::cout << "GCD: " << getGCD(a, b) << std::endl;
  return 0;
}
