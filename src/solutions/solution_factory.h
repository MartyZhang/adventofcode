#ifndef SOLUTION_FACTORY_H
#define SOLUTION_FACTORY_H

#include "solution.h"

#include <string>

namespace aoc {
class SolutionFactory {
public:
  Solution* CreateSolutionFor(int problem_day, std::string input_file);
};
} // namespace aoc

#endif // SOLUTION_FACTORY_H
