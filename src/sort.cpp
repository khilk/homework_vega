#include <sort.hpp>

#include <vector>

namespace algo {

/**
 * \brief Sort integers.
 *
 * This function takes vector of integer numbers and sorts it inplace.
 * 
 * \param v Vector of integers for sort.
 */
void Sort(std::vector<int>& v) {
  int n = v.size();

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (v[j] > v[j + 1])
        std::swap(v[j], v[j + 1]);
    }
  }
}

}  // namespace algo