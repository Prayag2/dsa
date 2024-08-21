// prime factorization
// hard to find 
#include <bits/stdc++.h>
#include <inp.h>

constexpr size_t g_MAX_SIZE {static_cast<size_t>(1e7)};

/* I was trying to make it work for large numbers (sieve of erastothenes)
 * but I don't know why it won't work for numbers having 6 or more digits :/
 * I'm getting segmentation fault. I tried using bitset as it's more memory
 * efficient (1 bit instead of 8 for a boolean) but no luck :( */
void factorize (int n) {
  int original {n};
  std::bitset<g_MAX_SIZE> isPrime {};
  isPrime.set();

  for (int i {2}; i < original; i++) {
    if (!isPrime[i])
      continue;

    for (int j {i*i}; j < n; j += i)
      isPrime[j] = 0;

    while (n%i == 0) {
      std::cout << i << " ";
      n /= i;
    }
  }
  std::cout << std::endl;
}

int main() {
  int a {Me::input<int>("Enter a")};
  factorize(a);
  return 0;
}
