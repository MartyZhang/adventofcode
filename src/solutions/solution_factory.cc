#include "solution_factory.h"
#include "day1.h"
#include "day2.h"
#include "day3.h"

namespace aoc {
Solution *SolutionFactory::CreateSolutionFor(int problem_day,
                                             std::string input_file) {
  Solution *solution;
  switch (problem_day) {
  case 1:
    solution = new Day1();
    break;
  case 2:
    solution = new Day2();
    break;
  case 3:
    solution = new Day3();
    break;
  default:
    solution = new UnimplementedSolution();
    break;
  }
  solution->SetInputFilepath(input_file);
  return solution;
}
} // namespace aoc
