#include "day3.h"

#include <fstream>
#include <cmath>

namespace aoc {

void Day3::Solve() {
  ParseFile();
  int gamma = 0;
  int epsilon = 0;
  // Start at LSB
  int base = 0;
  for (int i = bit_count_.size() - 1; i >= 0; i--) {
    if (line_count_ < bit_count_.at(i) * 2) {
      gamma += std::pow(2, base);
    } else {
      epsilon += std::pow(2, base);
    }
    base++;
  }
  std::cout << "Gamma is: " << gamma << std::endl;
  std::cout << "Epsilon is: " << epsilon << std::endl;
  std::cout << "Gamma X Epsilon " << gamma * epsilon << std::endl;
}

void Day3::ReadLineFromReport(const std::string line) {
  // Resize if necessary
  if (line.size() >= bit_count_.size()) {
    bit_count_.resize(line.size());
  }
  int i = 0;
  for (char c : line) {
    if (c == '1') {
      bit_count_[i]++;
    }
    i++;
  }
}

void Day3::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; std::getline(file, line);) {
	ReadLineFromReport(line);
    line_count_++;
  }
  file.close();
}
} // namespace aoc
