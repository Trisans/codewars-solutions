#include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n) {
  std::vector<std::vector<int>> table = {};
    for (int i = 1; i <= n; i++) {
        std::vector<int> row = {};
        for (int j = 1; j <= n; j++) {
            row.push_back(i * j);
        }
        table.push_back(row);
    }
    return table;
}