#include "day7.h"

#include <cmath>
#include <fstream>
namespace aoc {

void Day7::Solve() {
  ParseFile();
  // Part 1
  // Derivative of
  // for i = 1 to i = n
  // of |k-x| is sign|k-n| which is 0
  // when k is the median.
  if (crabs_.size() == 0) {
    std::cout << "No Crabs." << std::endl;
    return;
  }

  std::sort(crabs_.begin(), crabs_.end());
  int midpoint = crabs_.size() / 2;
  int median = 0;
  if (crabs_.size() % 2 == 0) {
    median = (crabs_[midpoint] + crabs_[midpoint - 1]) / 2;
  } else {
    median = crabs_[midpoint];
  }

  int total_fuel = 0;
  double total = 0;
  for (int crab : crabs_) {
    total_fuel += std::abs(crab - median);
    total += crab;
  }
  std::cout << "Median is " << median << std::endl;
  std::cout << "Minimum Fuel needed for crabs to align is" << total_fuel
            << std::endl;
  // Part 2
  // Taking derivative again,
  // we see that K is bounded between mean - 1/2 and mean + 1/2
  double mean = total / double(crabs_.size());
  int k1 = std::floor(mean);
  int k2 = std::ceil(mean);
  long total_fuel_k1 = 0;
  long total_fuel_k2 = 0;
  int (*QuickSummation)(int){[](int a) {
    // Summation series formula
    return int(std::pow(a, 2) / 2 + double(a) / 2);
  }};
  for (int crab : crabs_) {
    total_fuel_k1 += QuickSummation(std::abs(crab - k1));
    total_fuel_k2 += QuickSummation(std::abs(crab - k2));
  }
  std::cout << "Minimum fuel needed for crabs to align is "
            << std::min(total_fuel_k1, total_fuel_k2) << std::endl;
}

void Day7::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; getline(file, line);) {
    std::vector<std::string> crabs = StrSplit(line, ",");
    for (const std::string &crab : crabs) {
      crabs_.push_back(stoi(crab));
    }
  }
  file.close();
}

} // namespace aoc
