#include <string>
#include <iterator>

std::string group_by_commas(int n) {
  std::string N = std::to_string(n);
  std::string grouped = "";
  int count = 0;
  for (int i = N.length() - 1; i >= 0; i--) {
    if (count == 3) {
      grouped.insert(grouped.begin(), ',');
      grouped.insert(grouped.begin(), N[i]);
    } else {
      grouped.insert(grouped.begin(), N[i]);
    }
    count %= 3;
    count++;
  }
  return grouped;
}