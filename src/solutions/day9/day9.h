/**
 * @author      : martinzhang
 * @created     : Wednesday Jan 12, 2022 20:43:35 PST
 */

#ifndef DAY9_H
#define DAY9_H

#include "solution.h"
#include "utils.h"

namespace aoc {

class Day9 : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
  void Part1();
  void Part2();
  // GetBasin returns size of basin starting from low point i, j.
  int GetBasin(int i, int j);
  // IsLowPoint checks if location i,j in the height map is a low point.
  bool IsLowPoint(int i, int j);
  // Represents a topographical map.
  Matrix height_map;
  std::vector<int> basins;
};

} // namespace aoc

#endif /* DAY9_H */
