#include "day4.h"

#include <fstream>
#include <sstream>

namespace aoc {

void Day4::Solve() {
  ParseFile();
  Part1();
  Part2();
}

void Day4::Part1() {
  for (int number : numbers_) {
    for (Board &board : boards_) {
      board.Mark(number);
      if (board.HasWon()) {
        board.CalculateScore(number);
        return;
      }
    }
  }
}

void Day4::Part2() {
  Board last_winner;
  int last_number;
  for (int number : numbers_) {
    for (auto it = boards_.begin(); it != boards_.end();) {
      it->Mark(number);
      if (it->HasWon()) {
        last_winner = *it;
        last_number = number;
        it = boards_.erase(it);
      } else {
        ++it;
      }
    }
  }
  last_winner.CalculateScore(last_number);
}

void Day4::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);

  // Read first line and translate to vector of bingo numbers
  std::string first_line;
  std::getline(file, first_line);
  std::istringstream bingo_numbers(first_line);
  std::string current_num;
  while (getline(bingo_numbers, current_num, ',')) {
    numbers_.push_back(stoi(current_num));
  }

  // Read rest of the lines and translate to vector of bingo boards
  std::vector<std::string> current_board;
  for (std::string line; std::getline(file, line);) {
    if (line.empty()) {
      continue;
    }
    current_board.push_back(line);

    if (current_board.size() == 5) {
      boards_.push_back(Board(current_board));
      current_board.clear();
    }
  }

  file.close();
}

Board::Board() { board_.resize(5, std::vector<Tile>(5)); }

Board::Board(std::vector<std::string> &board_as_strings) {
  board_.resize(5, std::vector<Tile>(5));
  for (int i = 0; i < 5; i++) {
    std::istringstream is(board_as_strings[i]);
    for (int j = 0; j < 5; j++) {
      is >> std::ws;
      std::string val;
      getline(is, val, ' ');
      board_[i][j] = Tile(stoi(val));
    }
  }
}

void Board::PrintBoard() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (board_[i][j].marked) {
        std::cout << "x"
                  << " ";
      } else {
        std::cout << "0"
                  << " ";
      }
    }
    std::cout << std::endl;
  }
}

void Board::Mark(int number) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (board_[i][j].number == number) {
        board_[i][j].marked = true;
      }
    }
  }
}

void Board::CalculateScore(int last_number) {
  int sum_of_unmarked = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (!board_[i][j].marked) {
        sum_of_unmarked += board_[i][j].number;
      }
    }
  }
  std::cout << "Total score is " << sum_of_unmarked * last_number << std::endl;
}

bool Board::HasWon() {
  int num_marked_in_current_row = 0;
  int num_marked_in_current_column = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      Tile current_row_val = board_[i][j];
      if (current_row_val.marked) {
        num_marked_in_current_row++;
      }
      Tile current_column_val = board_[j][i];
      if (current_column_val.marked) {
        num_marked_in_current_column++;
      }
    }
    if (num_marked_in_current_row == 5 || num_marked_in_current_column == 5) {
      return true;
    }
    num_marked_in_current_row = 0;
    num_marked_in_current_column = 0;
  }
  return false;
}

} // namespace aoc
