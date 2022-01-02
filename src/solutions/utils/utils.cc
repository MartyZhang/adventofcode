#include "utils.h"

namespace aoc {
std::vector<std::string> StrSplit(std::string input, std::string delim) {
  std::vector<std::string> tokens;
  int start = 0;
  int end = input.find(delim);
  while (end != -1) {
    tokens.push_back(input.substr(start, end - start));
	start = end + delim.size();
	end = input.find(delim, start);
  }
  tokens.push_back(input.substr(start, end - start));
  return tokens;
}
} // namespace aoc
