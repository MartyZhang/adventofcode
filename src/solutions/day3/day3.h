#ifndef DAY3_H
#define DAY3_H

#include "solution.h"

#include <vector>
#include <set>

namespace aoc {
enum Criteria { MAJORITY, MINORITY };
class Day3 : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
  void Part1();
  void Part2();
  int BinaryStringToInt(std::string binary_string);
  std::string GetElementForBitCriteria(Criteria criteria,
                                       std::set<std::string> elements);
  void ReadLineFromReport(std::string line);
  int CalculateMajorityBit(const std::set<std::string>& inputs, int position);
  void RemoveAllNonMatchingItems(std::set<std::string> &items, int matching_bit,
                                 int position);
  std::set<std::string> lines_;
  int line_count_ = 0;
  int max_string_length_ = 0;
};
} // namespace aoc

#endif // DAY3_H
