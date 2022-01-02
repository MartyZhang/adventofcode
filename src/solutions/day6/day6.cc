#include "day6.h"

#include <fstream>
namespace aoc {

constexpr int birth_cycle = 7;
constexpr int birth_delay = 9;

void Day6::Solve() {
  ParseFile();
  // Part 1
  int64_t total_fish = 0;
  for (int64_t i : fish_) {
    total_fish += SpawnFish(80, i);
  }
  std::cout << "Total Fish after 80 days is: " << total_fish << std::endl;

  // Part 2
  total_fish = 0;
  for (int64_t i : fish_) {
    total_fish += SpawnFish(256, i);
  }
  std::cout << "Total Fish after 256 days is: " << total_fish << std::endl;
}

void Day6::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  for (std::string line; getline(file, line);) {
    std::vector<std::string> fishies = StrSplit(line, ",");
    for (const std::string &fish : fishies) {
      fish_.push_back(stoi(fish));
    }
  }
  file.close();
}

int64_t Day6::SpawnFish(int days, int initial_delay) {
  if (memory_.count(Fish(days, initial_delay))) {
    return memory_.find(Fish(days, initial_delay))->second;
  }
  int64_t total = 1;
  days -= initial_delay;
  while (days > 0) {
    if (memory_.count(Fish(days, birth_delay))) {
      total += memory_.find(Fish(days, birth_delay))->second;
    } else {
      int64_t m = SpawnFish(days, birth_delay);
      memory_.insert({Fish(days, birth_delay), m});
      total += m;
    }
    days -= birth_cycle;
  }
  memory_.insert({Fish(days, initial_delay), total});
  return total;
}

} // namespace aoc
