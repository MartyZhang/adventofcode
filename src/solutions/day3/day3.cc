#include "day3.h"

#include <cmath>
#include <fstream>

namespace aoc {

void Day3::Solve() {
  ParseFile();
  Part1();
  Part2();
}

void Day3::Part1() {
  int gamma = 0;
  int epsilon = 0;
  // Start at LSB
  int base = 0;
  for (int i = max_string_length_ - 1; i >= 0; i--) {
    int majority_bit = CalculateMajorityBit(lines_, i, MAJORITY);
    if (majority_bit) {
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

void Day3::Part2() {
  std::string majority_criteria =
      GetElementForBitCriteria(Criteria::MAJORITY, lines_);
  std::string minority_criteria =
      GetElementForBitCriteria(Criteria::MINORITY, lines_);
  int majority_as_int = BinaryStringToInt(majority_criteria);
  int minority_as_int = BinaryStringToInt(minority_criteria);
  std::cout << "Majority is: " << majority_criteria << " " << majority_as_int
            << std::endl;
  std::cout << "Minority is: " << minority_criteria << " " << minority_as_int
            << std::endl;
  std::cout << "Product is: " << majority_as_int * minority_as_int << std::endl;
}

std::string Day3::GetElementForBitCriteria(Criteria criteria,
                                           std::set<std::string> elements) {
  int i = 0;
  while (elements.size() > 1 && i < max_string_length_) {
    int mb = CalculateMajorityBit(elements, i, criteria);
    RemoveAllNonMatchingItems(elements, criteria == MAJORITY ? mb : !mb, i);
    i++;
  }
  return *elements.begin();
}

void Day3::RemoveAllNonMatchingItems(std::set<std::string> &items,
                                     int matching_bit, int position) {
  char matching_char = '0' + matching_bit;
  for (auto it = items.begin(); it != items.end();) {
    if (it->length() > position && it->at(position) != matching_char) {
      items.erase(it++);
    } else {
      ++it;
    }
  }
}

int Day3::CalculateMajorityBit(const std::set<std::string> &inputs,
                               int position, Criteria criteria) {
  int ones_count = 0;
  for (std::string input : inputs) {
    if (position < input.length() && input.at(position) == '1') {
      ones_count++;
    }
  }
  return ones_count * 2 >= inputs.size() ? 1 : 0;
}

int Day3::BinaryStringToInt(std::string binary_string) {
  // Start at LSB
  int sum = 0;
  int base = 0;
  for (int i = binary_string.length() - 1; i >= 0; i--) {
    if (binary_string.at(i) == '1') {
      sum += std::pow(2, base);
    }
    base++;
  }
  return sum;
}

void Day3::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; std::getline(file, line);) {
    if (line.length() > max_string_length_) {
      max_string_length_ = line.length();
    }
    lines_.insert(line);
    line_count_++;
  }
  file.close();
}

} // namespace aoc
