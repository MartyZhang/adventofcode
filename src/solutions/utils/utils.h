/**
 * @author      : martinzhang
 * @created     : Saturday Jan 01, 2022 16:39:12 EST
 */
#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include <string>

// StrSplit takes in an input string and a delimiter.
// It splits the input string by the delimiter and returns a vector which
// contains all the tokens.
namespace aoc {
std::vector<std::string> StrSplit(std::string input, std::string delim);
} // namespace aoc
#endif /* UTILS_H */