#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> moved = {};
  std::vector<int> zeroes = {};
  for (int i = 0; i < input.size(); i++) {
    if (input[i] == 0) {
      zeroes.push_back(0);
    } else {
      moved.push_back(input[i]);
    }
  }
  moved.insert(moved.end(), zeroes.begin(), zeroes.end());
  return moved;
}