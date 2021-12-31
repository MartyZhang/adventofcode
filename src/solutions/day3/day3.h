#ifndef DAY3_H
#define DAY3_H

#include "solution.h"

#include <vector>

namespace aoc {
class Day3 : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
  void ReadLineFromReport(std::string line);
  // Represents the number of one bits in each column
  // of the diagnostic report. The position in the vector
  // represents the column number. 
  std::vector<int> bit_count_; 
  int line_count_ = 0;
                               
};
} // namespace aoc

#endif // DAY3_H
