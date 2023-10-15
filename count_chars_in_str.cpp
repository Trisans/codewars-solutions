#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
  std::map<char, unsigned> counted = {};
  for (int i = 0; i < string.length(); i++) {
    if (counted.count(string[i]) == 0) {
      counted.insert(std::pair<char, unsigned>(string[i], 1));
    } else {
      counted[string[i]]++;
    }
  }
  return counted;
}