/**
 * @author      : martinzhang
 * @created     : Sunday Jan 02, 2022 10:21:35 EST
 */

#ifndef DAY6_H
#define DAY6_H

#include "solution.h"
#include "utils.h"

#include <map>
namespace aoc {

struct Fish {
  int days;
  int initial_spawn_time;
  Fish(int days, int initial_spawn_time)
      : days(days), initial_spawn_time(initial_spawn_time) {}
  bool operator<(const Fish &other) const {
    if (this->days == other.days) {
      return this->initial_spawn_time < other.initial_spawn_time;
    }
    return this->days < other.days;
  }
};

class Day6 : public Solution {
public:
  void Solve() override;
  int64_t SpawnFish(int days, int initial_delay);

protected:
  void ParseFile() override;
  std::map<Fish, int64_t> memory_;
  std::vector<int64_t> fish_;
};
} // namespace aoc
#endif /* DAY6_H */
