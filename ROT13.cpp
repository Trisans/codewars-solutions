#include <iostream>
#include <string>

#define LOGN(x) std::cout << x << std::endl
#define LOG(x) std::cout << x

int SHIFT = 13;

std::string ROT13(std::string sentence) {
    std::string l_alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string U_ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string encoded = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (l_alphabet.find(sentence[i]) != std::string::npos) {
            encoded += (l_alphabet[(l_alphabet.find(sentence[i]) + SHIFT) % l_alphabet.size()]);
        } else if (U_ALPHABET.find((sentence[i])) != std::string::npos) {
            encoded += (U_ALPHABET[(U_ALPHABET.find(sentence[i]) + SHIFT) % U_ALPHABET.size()]);
        } else {
            encoded += sentence[i];
        }
    }
    return encoded;
}

int main() {
    while (true) {
        LOG("Shift: ");
        std::cin >> SHIFT;
        LOG("Sentence: ");
        std::string sentence;
        std::cin.ignore(); 
        std::getline(std::cin, sentence);
        LOGN(ROT13(sentence));
        LOGN("-----");
    }
}