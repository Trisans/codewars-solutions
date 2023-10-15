#include <iostream>
#include <string>
#include "utils.h"

std::string format_duration(unsigned seconds) {
    if (seconds == 0) return "now";
    int years = seconds / 31536000;
    seconds %= 31536000;
    int days = seconds / 86400;
    seconds %= 86400;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    std::vector<std::string> converted_vector = {};

    if (years > 0) converted_vector.push_back(std::to_string(years) + " year" + (years != 1 ? "s" : ""));
    if (days > 0) converted_vector.push_back(std::to_string(days) + " day" + (days != 1 ? "s" : ""));
    if (hours > 0) converted_vector.push_back(std::to_string(hours) + " hour" + (hours != 1 ? "s" : ""));
    if (minutes > 0) converted_vector.push_back(std::to_string(minutes) + " minute" + (minutes != 1 ? "s" : ""));
    if (seconds > 0) converted_vector.push_back(std::to_string(seconds) + " second" + (seconds != 1 ? "s" : ""));
    std::string converted = "";
    int size = converted_vector.size();
    for (int i = 0; i < size; i++) {
        converted += converted_vector[i];
        if (i == size - 2) {
            converted += " and ";
            std::cout << "first" << std::endl;
        }
        else if (i < size - 2) {
            converted += ", ";
            // std::cout << converted_vector.size() << std::endl;
            std::cout << (i) << std::endl << size << std::endl;
            std::cout << "second" << std::endl;
        }
    }
    utils::print_vector(converted_vector);
    return converted;
}

int main() {
    // std::cout << format_duration(3662) << std::endl;
    std::cout << format_duration(1) << std::endl;
}