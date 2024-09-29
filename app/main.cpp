#include <sort.hpp>

#include <iostream>
#include <ranges>
#include <vector>

int main() {
  std::cout << "Enter vector size: ";
  std::size_t n = 0;
  std::cin >> n;
  std::vector<int> v;
  v.reserve(n);
  for (std::size_t i = 0; i < n; ++i) {
    int value;
    std::cin >> value;
    v.emplace_back(value);
  }
  algo::Sort(v);
  std::cout << "Sort result: ";
  for (int element : v) {
    std::cout << element << " ";
  }
  std::cout << std::endl;
  return 0;
}