#include "utils.h"

#include <iostream>
#include <vector>

std::vector<int> josephus(std::vector<int> numbers, int inc) {
    std::vector<int> solution = {};
    int i = 0;

    while (numbers.size() > 0) {
        i += inc - 1;
        i %= numbers.size();
        solution.push_back(numbers[i]);
        numbers.erase(numbers.begin() + i);
    }
    return solution;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    utils::print_vector(josephus(numbers, 3)); // Should be {3, 6, 2, 7, 5, 1, 4}
}