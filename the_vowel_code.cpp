#include <string>

std::string encode(const std::string &str) {
  std::string encoded;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < str.length(); i++) {
        bool hasVowel = false;
        for (int j = 0; j < 5; j++) {
            if (str[i] == vowels[j]) {
                hasVowel = true;
                encoded += std::to_string(j + 1);
            }
        }
        if (!hasVowel) {
            encoded += str[i];
        }
    }
    return encoded;
}

std::string decode(const std::string &str_) {
    std::string str = str_;
    std::string decoded;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char numbers[5] = {'1', '2', '3', '4', '5'};
    
    for (int i = 0; i < str.length(); i++) {
        bool hasNumber = false;
        for (int j = 0; j < 5; j++) {
            if (str[i] == numbers[j]) {
                hasNumber = true;
                str[i] = vowels[j];
            }
        }
    }
    return str;
}