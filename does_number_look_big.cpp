#include <string>
#include <vector>
#include <cmath>
#include <iostream>
bool is_narcissistic(int num) {
    std::string str_num = std::to_string(num);
    int num_digits = str_num.length();
    int total = 0;
    for (int i = 0; i < str_num.length(); i++) {
        std::string digit(1, str_num[i]);
        total += pow(std::stoi(digit), num_digits);
    }
    return total == num ? true : false;
}

int main() {
    int num = 153;
    std::cout << num << std::endl;
    std::cout << is_narcissistic(num) << std::endl;
}