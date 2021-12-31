#ifndef DAY2_H
#define DAY2_H

#include "solution.h"

namespace aoc {
struct Position {
  int x;
  int y;
  int z;
  Position() : x(0), y(0), z(0){};
  Position &operator+=(const Position &other) {
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    return *this;
  }
};

class Day2 : public Solution {
public:
  void Solve() override;
protected:
  void ParseFile() override;
  Position p_ = Position();
  std::vector<Position> instructions_;
  int aim_;
};
} // namespace aoc

#endif // DAY2_H
