#include "utils.h"

std::string getString(char ch) {
    std::string str(1, ch);
    return str;
}

std::string sum_strings(const std::string& a, const std::string& b) {
    std::string ra = a;
    std::string rb = b;
    std::reverse(ra.begin(), ra.end());
    std::reverse(rb.begin(), rb.end());

    if (ra.length() > rb.length()) {
        while (rb.length() != ra.length()) {
            rb.push_back('0');
        }
    } else if (rb.length() > ra.length()) {
        while (rb.length() != ra.length()) {
            ra.push_back('0');
        }
    }
    std::string result = "";
    int carry = 0;
    for (int i = 0; i < ra.length(); i++) {
        int digit_sum = std::stoi(getString(ra[i])) + std::stoi(getString(rb[i]));
        
        digit_sum += carry;
        digit_sum > 9 ? carry = 1 : carry = 0;
        result += std::to_string(digit_sum % 10);
    }
    if (carry == 1) result += std::to_string(carry);
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::cout << sum_strings("99", "2") << std::endl;
}