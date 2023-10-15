#include <iostream>
#include <cmath>

// int rectangle_rotation(int a, int b) {
//     int c = floor(a / sqrt(2));
//     if (c % 2 == 0) {
//         return floor(a / sqrt(2)) * floor(b / sqrt(2)) + (floor(a / sqrt(2)) + 1) * (floor(b / sqrt(2)) + 1);
//     } else {
//         return floor(a / sqrt(2)) * floor(b / sqrt(2)) + (floor(a / sqrt(2)) - 1) * (floor(b / sqrt(2)) - 1);
//     }
// }

int rectangle_rotation(int a, int b) {
    int c = floor(a / sqrt(2));
    int d = floor(b / sqrt(2));
    int count = floor(a / sqrt(2)) * floor(b / sqrt(2)) + ceil(a / sqrt(2)) * ceil(b / sqrt(2));
    if (c % 2 == 1 || d % 2 == 1)
        count -= 1;
    return count;
}


// int rectangle_rotation(int a, int b) {
//     int count = floor(a / sqrt(2)) * ceil(b / sqrt(2)) + ceil(a / sqrt(2)) * floor(b / sqrt(2));
//     return count;
// }


int main() { // Driver function
    while (true) {
        int a = 1;
        int b = 1;
        std::cout << "a: ";
        std::cin >> a;
        std::cout << "b: ";
        std::cin >> b;
        std::cout << "Answer: " << rectangle_rotation(a, b) << std::endl << "-----" << std::endl;
    }
}