#include <string>
bool solution(std::string const &str, std::string const &ending) {
  for (int i = 0; i < ending.length(); i++) {
    if (str[str.length() - ending.length() + i] != ending[i]) return false;
  }
  return true;
}