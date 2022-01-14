#include "day10.h"

#include <fstream>
namespace aoc {
void Day10::Solve() {
  ParseFile();
  Part1();
  Part2();
}

void Day10::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; getline(file, line);) {
    lines_.push_back(line);
  }
  file.close();
}

void Day10::Part1() {
  int running_score;
  for (auto it = lines_.begin(); it != lines_.end();) {
    int score = CalculateScore(*it);
    if (score > 0) {
      running_score += score;
	  it = lines_.erase(it);
	  continue;
    }
    ++it;
  }
  std::cout << "Total score for mismatched brackets is " << running_score
            << std::endl;
}

void Day10::Part2() {
  std::vector<long> scores;
  for (const std::string &line : lines_) {
    scores.push_back(
        CalculateMissingBracketScore(CompleteMissingBrackets(line)));
  }
  std::sort(scores.begin(), scores.end());
  std::cout << "Score for part 2 is " << scores.at(scores.size() / 2)
            << std::endl;
}

int Day10::CalculateScore(const std::string &input) {
  int total_score = 0;
  std::vector<char> opening_bracket_stack;
  for (const char &c : input) {
    if (IsOpeningBracket(c)) {
      opening_bracket_stack.push_back(c);
      continue;
    }
    if (!IsMatchingBracket(opening_bracket_stack.back(), c)) {
      total_score += GetValue(c);
    }
    opening_bracket_stack.pop_back();
  }
  return total_score;
}

long Day10::CalculateMissingBracketScore(const std::string &input) {
  long total_score = 0;
  for (const char &c : input) {
    total_score *= 5;
    total_score += GetValueForCompletion(c);
  }
  return total_score;
}

std::string Day10::CompleteMissingBrackets(const std::string &input) {
  std::string missing_brackets = "";
  std::vector<char> opening_bracket_stack;
  for (const char &c : input) {
    if (IsOpeningBracket(c)) {
      opening_bracket_stack.push_back(c);
      continue;
    }
    opening_bracket_stack.pop_back();
  }
  while (opening_bracket_stack.size() > 0) {
    missing_brackets += GetMatchingBracket(opening_bracket_stack.back());
    opening_bracket_stack.pop_back();
  }
  return missing_brackets;
}

bool Day10::IsOpeningBracket(const char &bracket) {
  switch (bracket) {
  case '(':
  case '[':
  case '{':
  case '<':
    return true;
  default:
    return false;
  }
}

bool Day10::IsMatchingBracket(const char &opening, const char &closing) {
  switch (opening) {
  case '(':
    return closing == ')';
  case '[':
    return closing == ']';
  case '{':
    return closing == '}';
  case '<':
    return closing == '>';
  }
  return false;
}

char Day10::GetMatchingBracket(const char &input) {
  switch (input) {
  case '(':
    return ')';
  case '[':
    return ']';
  case '{':
    return '}';
  case '<':
    return '>';
  default:
    return '0';
  }
}
int Day10::GetValue(const char &bracket) {
  switch (bracket) {
  case ')':
    return 3;
  case ']':
    return 57;
  case '}':
    return 1197;
  case '>':
    return 25137;
  default:
    return 0;
  }
}

int Day10::GetValueForCompletion(const char &bracket) {
  switch (bracket) {
  case ')':
    return 1;
  case ']':
    return 2;
  case '}':
    return 3;
  case '>':
    return 4;
  default:
    return 0;
  }
}
} // namespace aoc
