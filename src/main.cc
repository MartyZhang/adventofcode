#include "solution_factory.h"
#include "solution/solution.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>


int main(int argc, char* argv[]) {
  if (argc < 3) {
	std::cout << "Usage: " << argv[0] << " /path/to/data/file day_of_advent";
	return 1;
  }
  const std::string fileName = argv[1];
  int day =  std::stoi(argv[2]);
  aoc::SolutionFactory factory = aoc::SolutionFactory();
  aoc::Solution *solution = factory.CreateSolutionFor(day, fileName);
  solution->Solve();
  return 0;
}
