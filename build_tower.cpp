#include <string>
#include <vector>

std::vector<std::string> towerBuilder(int floors) {
    std::vector<std::string> tower = {};
    for (int i = floors; i > 0; i--) tower.push_back(std::string (i - 1, ' ') + std::string (2 * (floors - i) + 1, '*') + std::string (i - 1, ' '));
    return tower;
}

int main() {
    std::vector<std::string> tower = towerBuilder(3);
}