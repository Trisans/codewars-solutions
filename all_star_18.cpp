#include <string>

unsigned int strCount(const std::string& word, char letter){
  return std::count(word.begin(), word.end(), letter);
}