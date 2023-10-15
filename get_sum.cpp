#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
int get_sum(int a, int b) {
    int rtrn = 0;
    int A = a;
    int B = b;
    if (a > b) {
        A = b;
        B = a;
    }
    for (int i = A; i <= B; i++) {
        rtrn += i;
    }
    return rtrn;
}

int main() {
    std::cout << get_sum(0, 3) << std::endl;
}