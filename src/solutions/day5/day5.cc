#include "day5.h"

#include <fstream>
#include <sstream>

namespace aoc {

Day5::Day5() { field_ = Field(); }

void Day5::Solve() {
  ParseFile();
  std::cout << "Number of overlaps " << field_.overlaps_ << std::endl;
}

void Day5::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; getline(file, line);) {
    std::vector<std::string> coordinates = StrSplit(line, " -> ");
    field_.AddLine(Line(coordinates[0], coordinates[1]));
  }
  file.close();
}

Line::Line(Coordinate start, Coordinate end) : start_(start), end_(end){};

bool Line::IsDiagonal() { return start_.x != end_.x && start_.y != end_.y; }
bool Line::IsHorizontal() { return start_.y == end_.y; }
bool Line::IsVertical() { return start_.x == end_.x; }

std::vector<Coordinate> Line::GetAllPoints() {
  std::vector<Coordinate> result;
  if (IsDiagonal()) {
    int begin_x = start_.x;
    int begin_y = start_.y;
    int delta_x = start_.x < end_.x ? 1 : -1;
    int delta_y = start_.y < end_.y ? 1 : -1;
    while (begin_x != end_.x) {
      result.push_back(Coordinate(begin_x, begin_y));
      begin_x += delta_x;
      begin_y += delta_y;
    }
    result.push_back(Coordinate(begin_x, begin_y));
    return result;
  }

  if (IsHorizontal()) {
    int begin = std::min(start_.x, end_.x);
    int end = std::max(start_.x, end_.x);
    while (begin <= end) {
      result.push_back(Coordinate(begin, start_.y));
      begin++;
    }
    return result;
  }

  if (IsVertical()) {
    int begin = std::min(start_.y, end_.y);
    int end = std::max(start_.y, end_.y);
    while (begin <= end) {
      result.push_back(Coordinate(start_.x, begin));
      begin++;
    }
    return result;
  }
  return result;
}

void Field::AddLine(Line line) {
  for (Coordinate p : line.GetAllPoints()) {
    if (field_.count(p)) {
      int count = field_.find(p)->second++;
      if (count == 1) {
        overlaps_++;
      }
    } else {
      field_.insert(std::make_pair(p, 1));
    }
  }
}

} // namespace aoc
