#include "utils.h"

std::vector<char> get_pin(std::string pin) {
    std::map<char, std::vector<char> > combinations = {
        {'1', {'1', '2', '4'}},
        {'2', {'1', '2', '3', '5'}},
        {'3', {'2', '3', '6'}},
        {'4', {'1', '4', '5', '7'}},
        {'5', {'2', '4', '5', '6', '8'}},
        {'6', {'3', '5', '6', '9'}},
        {'7', {'4', '7', '8'}},
        {'8', {'5', '7', '8', '9', '0'}},
        {'9', {'6', '8', '9'}},
        {'0', {'0', '8'}}
    };

    std::vector<std::vector<char> > possible = {};
    for (int i = 0; i < pin.length(); i++) {
        possible.push_back(combinations[pin[i]]);
    }
    
}

int main() {
    utils::print_vector(get_pin("1357"));
    // possible_combinations();
}


// std::vector<int> possible_combinations() {
//     // std::vector<std::string> all_combinations = {};
//     // std::string instance = "0000";
//     // all_combinations.push_back(instance);
//     // for (int i = 0; i < 4; i++) {
//     //     for (int j = 0; j <= 4; j++) {
//     //         instance[i] = j;
//     //         all_combinations.push_back(instance);
//     //     }
//     // }
//     std::vector<int> all_combinations = {};
//     int instance = 0000;
//     while (instance < 9999) {
//         instance++;
//         all_combinations.push_back(instance);
//     }
//     utils::print_vector(all_combinations);
//     std::cout << all_combinations.size() << std::endl;
//     return all_combinations;
// }


// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     Complex(double r = 0, double i = 0) {
//         this->real = r;
//         this->imag = i;
//     }

//     Complex operator+(const Complex& other) const {
//         return Complex(real + other.real, imag + other.imag);
//     }
// };