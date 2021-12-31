#ifndef DAY_4_H_
#define DAY_4_H_

#include "solution.h"

namespace aoc {

struct Tile {
  int number;
  bool marked;
  Tile() : number(0), marked(false) {};
  Tile(int number) : number(number), marked(false){};
};

class Board {
public:
  Board();
  Board(std::vector<std::string> &board_as_strings);
  void Mark(int number);
  void CalculateScore(int last_number);
  void PrintBoard();
  bool HasWon();

protected:
  std::vector<std::vector<Tile>> board_;
};

class Day4: public Solution {
public:
	void Solve() override;

protected: 
	void ParseFile() override;
	void Part1();
	void Part2();
	std::vector<Board> boards_;
	std::vector<int> numbers_;

};
} // namespace aoc

#endif // DAY_4_H_
