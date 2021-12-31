#include "solution.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

namespace aoc {
void Solution::SetInputFilepath(const std::string input_file) {
	input_filepath_ = input_file;
}

void UnimplementedSolution::Solve() {}
void UnimplementedSolution::ParseFile() {}
} // namespace aoc
