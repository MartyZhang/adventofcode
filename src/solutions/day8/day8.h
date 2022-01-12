/**
 * @author      : martinzhang
 * @created     : Wednesday Jan 12, 2022 09:52:45 PST
 */

#ifndef DAY8_H
#define DAY8_H

#include "solution.h"

#include <map>
namespace aoc {
class Day8 : public Solution {
public:
  void Solve() override;

protected:
  // returns true if a has all the characters of b
  bool Contains(const std::string &a, const std::string &b);
  // Decode translates a vector of encoded signals into an integer by
  // referencing the provided decoded signals. assumes signals is a base 10 int
  // where iterating from index 0 is in order of MSB -> LSB.
  int Decode(const std::vector<std::string> &signals,
             const std::vector<std::string> &decoded_signals);
  // Decode signals takes in 10 signals and outputs a vector
  // which associates a digit with each signal, the digit is the index of the
  // vector
  std::vector<std::string>
  DecodeSignals(const std::vector<std::string> &signals);
  bool IsUniqueSegLength(const std::string &digit);
  void ParseFile() override;
};
} // namespace aoc

#endif /* DAY8_H */
