#include <iostream>
#include <string_view>

namespace Me {
  template <typename T>
  T input(std::string_view msg) {
    T x {};
    std::cout << msg << ": ";
    std::cin >> x;
    return x;
  }
}
