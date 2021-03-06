#include "solution_factory.h"
#include "day1.h"
#include "day2.h"
#include "day3.h"
#include "day4.h"
#include "day5.h"
#include "day6.h"
#include "day7.h"
#include "day8.h"
#include "day9.h"
#include "day10.h"

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
  case 4:
    solution = new Day4();
    break;
  case 5:
    solution = new Day5();
    break;
  case 6:
    solution = new Day6();
    break;
  case 7:
    solution = new Day7();
    break;
  case 8:
    solution = new Day8();
    break;
  case 9:
    solution = new Day9();
    break;
  case 10:
    solution = new Day10();
    break;
  default:
    solution = new UnimplementedSolution();
    break;
  }
  solution->SetInputFilepath(input_file);
  return solution;
}
} // namespace aoc
