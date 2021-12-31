#include "day2.h"

#include <fstream>
#include <sstream>

namespace aoc {

void Day2::Solve() {
  ParseFile();
  for (Position instruction : instructions_) {
    p_ += instruction;
  }
  std::cout << "Horizontal shift is " << p_.x << " Depth is " << p_.z
            << std::endl;
  std::cout << "Depth times horizontal shift is " << p_.x * p_.z << std::endl;
}

void Day2::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; std::getline(file, line);) {
    std::istringstream is(line);
    Position shift = Position();
    std::string command;
    std::string val;
    getline(is, command, ' ');
    getline(is, val, ' ');
    if (command == "forward") {
      shift.x += stoi(val);
	  shift.z += (stoi(val) * aim_);
      instructions_.push_back(shift);
    } else if (command == "up") {
		aim_ -= stoi(val);
    } else if (command == "down") {
		aim_ += stoi(val);
    }
  }
  file.close();
}
} // namespace aoc
