#ifndef DAY1_H
#define DAY1_H

#include "solution.h"

#include <vector>

namespace aoc {
class Day1 : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
  // Calculate number of increments that occur for a given
  // sliding window size
  void CalculateIncrements(const int window_size);
  std::vector<int> depth_readings_;
};

} // namespace aoc

#endif // DAY1_H
