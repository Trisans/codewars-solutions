#ifndef UTILS

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <typeinfo>
#include <cstdint>

namespace utils {
    template <typename T>
    void print_2d_vector(std::vector<std::vector<T> > vector) {
        std::cout << std::endl;
        for (int i = 0; i < vector.size(); i++) {
            for (int j = 0; j < vector[i].size(); j++) {
                std::cout << vector[i][j] << "    ";
            }
            std::cout << std::endl << std::endl;
        }
    }
    template <typename T>
    void print_vector(std::vector<T> vector) {
        std::cout << "{";
        for (int i = 0; i < vector.size() - 1; i++) {
            std::cout << vector[i] << ", ";
        }
        std::cout << vector[vector.size() - 1] << "}\n";
    }

    std::map<std::string, char> MORSE_CODE = {
        {".-", 'A'},
        {"-...", 'B'},
        {"-.-.", 'C'},
        {"-..", 'D'},
        {".", 'E'},
        {"..-.", 'F'},
        {"--.", 'G'},
        {"....", 'H'},
        {"..", 'I'},
        {".---", 'J'},
        {"-.-", 'K'},
        {".-..", 'L'},
        {"--", 'M'},
        {"-.", 'N'},
        {"---", 'O'},
        {".--.", 'P'},
        {"--.-", 'Q'},
        {".-.", 'R'},
        {"...", 'S'},
        {"-", 'T'},
        {"..-", 'U'},
        {"...-", 'V'},
        {".--", 'W'},
        {"-..-", 'X'},
        {"-.--", 'Y'},
        {"--..", 'Z'},
    };

} // namespace utils
#endif