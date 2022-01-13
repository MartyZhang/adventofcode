#include "day9.h"

#include <fstream>

namespace aoc {

void Day9::Solve() {
  ParseFile();
  Part1();
  Part2();
}

void Day9::Part1() {
  int risk_level = 0;
  for (int i = 0; i < height_map.size(); i++) {
    for (int j = 0; j < height_map[i].size(); j++) {
      if (IsLowPoint(i, j)) {
        risk_level += height_map[i][j] + 1;
      }
    }
  }
  std::cout << "Risk level is " << risk_level << std::endl;
}

void Day9::Part2() {
  int risk_level = 0;
  for (int i = 0; i < height_map.size(); i++) {
    for (int j = 0; j < height_map[i].size(); j++) {
      if (IsLowPoint(i, j)) {
        basins.push_back(GetBasin(i, j));
      }
    }
  }
  std::sort(basins.begin(), basins.end(), std::greater<int>());
  std::cout << "Largest basins multiplied is "
            << basins[0] * basins[1] * basins[2] << std::endl;
}

void Day9::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; getline(file, line);) {
    Row row;
    for (const char &c : line) {
      row.push_back(c - '0');
    }
    height_map.push_back(row);
  }
  file.close();
}

int Day9::GetBasin(int i, int j) {
  // Logic is the following:
  // If current location is a 9, this is a known high point and we should not
  // include it in our basin exploration. We return a 0 here as a base case.
  // Otherwise, we set size to 1, which counts the current location, and attempt
  // to add adjacent locations. We set our current location
  // to -1 to mark it as explored in order to prevent double counting.
  int current = height_map[i][j];
  if (current == 9) {
    return 0;
  }
  // mark current as explored;
  height_map[i][j] = -1;
  // Add current and all adjacents if applicable
  int size = 1;
  if (i != 0 && current < height_map[i - 1][j]) {
    size += GetBasin(i - 1, j);
  }
  if (i != height_map.size() - 1 && current < height_map[i + 1][j]) {
    size += GetBasin(i + 1, j);
  }

  if (j != 0 && current < height_map[i][j - 1]) {
    size += GetBasin(i, j - 1);
  }

  if (j != height_map[i].size() - 1 && current < height_map[i][j + 1]) {
    size += GetBasin(i, j + 1);
  }
  return size;
}

bool Day9::IsLowPoint(int i, int j) {
  int current = height_map[i][j];
  if (i != 0 && current >= height_map[i - 1][j]) {
    return false;
  }
  if (i != height_map.size() - 1 && current >= height_map[i + 1][j]) {
    return false;
  }

  if (j != 0 && current >= height_map[i][j - 1]) {
    return false;
  }

  if (j != height_map[i].size() - 1 && current >= height_map[i][j + 1]) {
    return false;
  }

  return true;
}
} // namespace aoc
