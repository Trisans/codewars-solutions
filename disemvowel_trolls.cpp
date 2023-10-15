#include <string>
#include <algorithm>

using namespace std;

std::string disemvowel(const std::string& str) {
  std::string newStr;
  std::string vowels = "aAeEiIoOuU";
  bool isVowel;
  for (int i = 0; i < str.length(); i++) {
    isVowel = false;
    for (int j = 0; j < vowels.length(); j++) {
      if (isVowel) {
        continue;
      }
      
      if (str[i] == vowels[j]) {
        isVowel = true;
      }
    }
    if (!isVowel) {
    newStr += str[i];
    }
  }
  return newStr;
}