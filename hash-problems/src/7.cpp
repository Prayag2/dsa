// leetcode bank
// o(n)
#include <bits/stdc++.h>
#include <inp.h>

int main() {
  int n {Me::input<int>("Enter n")};

  int lastSum {28}, week {static_cast<int>(floor(n/7))};
  int total {n > 7 ? 28 : 0};
  for (int i {1}; i < week ; i++) {
    lastSum += 7; // originally: lastSum = lastSum - i + (i+6)
    total+=lastSum;
  }

  for (int i {0}, val {week+1}; i < n-week*7; i++, val++) total += val;

  std::cout << total << std::endl;

  return 0;
}
