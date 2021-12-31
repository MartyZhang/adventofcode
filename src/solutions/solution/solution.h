#ifndef SOLUTION_H_
#define SOLUTION_H_
#include <string>
#include <vector>
#include <iostream>

namespace aoc {

class Solution {
public:
  // Solve problem, solution implemented by dervied class(es).
  virtual void Solve() = 0;
  // Set the filepath for the problem's data file.
  void SetInputFilepath(const std::string input_file);

protected:
  // Parse data file for the solution, parsing logic to be
  // implemented by derived class.
  virtual void ParseFile() = 0;
  std::string input_filepath_;
};

class UnimplementedSolution : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
};
} // namespace aoc
#endif // SOLUTION_H_
