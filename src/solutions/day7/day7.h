/**
 * @author      : martinzhang
 * @created     : Sunday Jan 02, 2022 10:21:35 EST
 */

#ifndef DAY7_H
#define DAY7_H

#include "solution.h"
#include "utils.h"

#include <map>

namespace aoc {
class Day7 : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
  std::vector<int64_t> crabs_;
};
} // namespace aoc
#endif /* DAY7_H */
