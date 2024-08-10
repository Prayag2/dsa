// check if a number is prime or not
// o(sqrt(n))
#include <bits/stdc++.h>

bool isPrime(int num) {
  for (int i {2}; i <= sqrt(num); i++) {
    if (num%i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int num {};
  std::cout << "Enter a number: ";
  std::cin >> num;

  if (isPrime(num) && num > 1)
    std::cout << "Prime" << std::endl;
  else
    std::cout << "Not Prime" << std::endl;

  return 0;
}
