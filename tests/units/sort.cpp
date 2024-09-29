#include <sort.hpp>

#include <ranges>

#include <gtest/gtest.h>

namespace {

TEST(sort, just_works) {
  std::vector<int> v{5, 4, 3, 2, 1};
  auto std_sorted = v;
  std::ranges::sort(std_sorted);

  auto algo_sorted = v;
  algo::Sort(algo_sorted);
  EXPECT_EQ(std_sorted, algo_sorted);
}

}  // namespace