/**
 * @author      : martinzhang
 * @created     : Thursday Jan 13, 2022 19:07:54 PST
 */

#ifndef DAY10_H
#define DAY10_H

#include "solution.h"

#include <vector>

namespace aoc {
class Day10 : public Solution {
public:
  void Solve() override;

protected:
  void ParseFile() override;
  void Part1();
  void Part2();

  // CalculateScore takes in a string of opening and closing brackets and
  // calculates a score based on the number of mismatched brackets in the
  // string
  int CalculateScore(const std::string &input);
  // CalculateMissingBracketScore takes in a string of opening and closing
  // brackets and calculates a score based on the brackets needed to
  // complete the string
  long CalculateMissingBracketScore(const std::string &input);
  // CompleteMissingBrackets returns a string representation that would
  // complete the input brackets.
  std::string CompleteMissingBrackets(const std::string &input);
  // IsOpeningBracket returns true if bracket is an opening bracket.
  bool IsOpeningBracket(const char &bracket);
  // IsMatching returns true if opening and closing bracket are matching.
  bool IsMatchingBracket(const char &opening, const char &closing);
  // GetMatchingBracket returns the bracket which matches the input char.
  char GetMatchingBracket(const char &bracket);
  // GetValue returns the point value of the mismatched bracket.
  int GetValue(const char &bracket);
  // GetValueForCompletion returns the point value of the missing bracket.
  int GetValueForCompletion(const char &bracket);
  std::vector<std::string> lines_;
};
} // namespace aoc

#endif /* DAY10_H */
