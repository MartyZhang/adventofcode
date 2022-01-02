/**
 * @author      : martinzhang
 * @created     : Saturday Jan 01, 2022 15:25:37 EST
 */
#ifndef DAY5_H
#define DAY5_H
#include "solution.h"
#include "utils.h"

#include <map>

namespace aoc {
struct Coordinate {
  int x;
  int y;
  Coordinate(int x, int y) : x(x), y(y){};
  Coordinate(std::string coordinate_string) {
    std::vector<std::string> x_and_y = StrSplit(coordinate_string, ",");
    x = std::stoi(x_and_y[0]);
    y = std::stoi(x_and_y[1]);
  };
  bool operator<(const Coordinate &other) const {
    if (this->x == other.x) {
      return this->y < other.y;
    }
    return this->x < other.x;
  }
};

class Line {
public:
  Line(Coordinate start, Coordinate end);
  std::vector<Coordinate> GetAllPoints();
  bool IsDiagonal();
  bool IsHorizontal();
  bool IsVertical();
  Coordinate start_;
  Coordinate end_;
};

class Field {
public:
  void AddLine(Line line);
  std::map<Coordinate, int> field_;
  int overlaps_;
};

class Day5 : public Solution {
public:
  Day5();
  void Solve() override;

protected:
  void ParseFile() override;
  Field field_;
};
} // namespace aoc
#endif /* DAY5_H */
