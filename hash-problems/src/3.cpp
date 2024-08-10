// count the number of primes
// o(nlog(logn))
/* 
 * At first, I used a brute force approach and got TLE.
 * Then I looked at the solutions and found out an algorithm named "Seive of Eratosthenes".
 */
#include <bits/stdc++.h>

int main() {
  int n {};
  std::cout << "Enter a number: ";
  std::cin >> n;
  std::vector<bool> nums(n, true);
  int count {0};
  for (std::size_t i {2}; i*i < n; i++) {
      if (nums[i]) {
          count++;
          for (std::size_t j {i*i}; j < n; j += i)
              nums[j] = false;
      }
  }
  std::cout << count << std::endl;
  return 0;
}
