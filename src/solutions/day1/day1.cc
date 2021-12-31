#include "day1.h"

#include <iostream>
#include <fstream>

namespace aoc {
void Day1::Solve() {
	ParseFile();
 	// Part 1
	CalculateIncrements(1);
 	// Part 2
	CalculateIncrements(3);
}

void Day1::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for(std::string line; std::getline(file, line);) {
	int line_as_int = stoi(line);
    depth_readings_.push_back(line_as_int);
  }
  file.close();
}

void Day1::CalculateIncrements(const int window_size) {
  if (depth_readings_.size() <= window_size) {
	return;
  }

  int initial_val = 0;
  for (int i = 0; i < window_size; i++) {
    initial_val += depth_readings_[i];
  }

  int prev = initial_val;
  int increments = 0;
  for (int i = 1; i < depth_readings_.size() - (window_size - 1); i++) {
    int current = 0;
    for (int j = i; j < i + window_size; j++) {
      current += depth_readings_[j];
    }
    if (current > prev) {
      increments++;
    }
    prev = current;
  }
  std::cout << "Number of increments for window size " << window_size << " :"
            << increments << std::endl;
}
} // namespace aoc
