#include "day8.h"
#include "utils.h"

#include <cmath>
#include <fstream>
#include <vector>

namespace aoc {
void Day8::Solve() { ParseFile(); }

bool Day8::Contains(const std::string &a, const std::string &b) {
  for (const char &x : b) {
    if (a.find(x) == std::string::npos) {
      return false;
    }
  }
  return true;
}

int Day8::Decode(const std::vector<std::string> &signals,
                 const std::vector<std::string> &decoded_signals) {
  int val = 0;
  int base = signals.size() - 1;
  for (std::string signal : signals) {
    std::sort(signal.begin(), signal.end());
    auto it = std::find(decoded_signals.begin(), decoded_signals.end(), signal);
    int digit = it - decoded_signals.begin();
    val += std::pow(10, base) * digit;
    base--;
  }
  return val;
}

std::vector<std::string>
Day8::DecodeSignals(const std::vector<std::string> &signals) {
  std::vector<std::string> decoded_signals(10);
  std::vector<std::string> size_five_signals;
  std::vector<std::string> size_six_signals;
  for (std::string signal : signals) {
    std::sort(signal.begin(), signal.end());
    switch (signal.size()) {
    case 2:
      decoded_signals[1] = signal;
      break;
    case 3:
      decoded_signals[7] = signal;
      break;
    case 4:
      decoded_signals[4] = signal;
      break;
    case 5:
      size_five_signals.push_back(signal);
      break;
    case 6:
      size_six_signals.push_back(signal);
      break;
    case 7:
      decoded_signals[8] = signal;
      break;
    }
  }

  for (std::string signal : size_six_signals) {
    if (Contains(signal, decoded_signals[4])) {
      decoded_signals[9] = signal;
    } else if (Contains(signal, decoded_signals[1])) {
      decoded_signals[0] = signal;
    } else {
      decoded_signals[6] = signal;
    }
  }

  for (std::string signal : size_five_signals) {
    if (Contains(signal, decoded_signals[1])) {
      decoded_signals[3] = signal;
    } else if (Contains(decoded_signals[6], signal)) {
      decoded_signals[5] = signal;
    } else {
      decoded_signals[2] = signal;
    }
  }

  return decoded_signals;
}

void Day8::ParseFile() {
  std::fstream file;
  file.open(input_filepath_);
  int total = 0;
  for (std::string line; getline(file, line);) {
    std::vector<std::string> signals_and_output = StrSplit(line, " | ");
    std::vector<std::string> signals = StrSplit(signals_and_output[0], " ");
    std::vector<std::string> output_digits =
        StrSplit(signals_and_output[1], " ");
    total += Decode(output_digits, DecodeSignals(signals));
  }
  std::cout << total << std::endl;
}

bool Day8::IsUniqueSegLength(const std::string &digit) {
  switch (digit.size()) {
  // 1
  case 2:
  // 7
  case 3:
  // 4
  case 4:
  // 8
  case 7:
    return true;
  default:
    return false;
  }
}
} // namespace aoc
