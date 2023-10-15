#include "utils.h"

std::vector<int> snail_sort(std::vector<std::vector<int>> unsorted) {
    std::vector<std::vector<int>> emp = {{}};
    if (unsorted == emp) return emp[0];
    std::vector<int> sorted = {};
    int beg = 0;
    for (int end = unsorted.size() - 1; end > beg; end--) {
        for (int xp = beg; xp < end; xp++) sorted.push_back(unsorted[beg][xp]);
        for (int yp = beg; yp < end; yp++) sorted.push_back(unsorted[yp][end]);
        for (int xm = end; xm > beg; xm--) sorted.push_back(unsorted[end][xm]);
        for (int ym = end; ym > beg; ym--) sorted.push_back(unsorted[ym][beg]);
        beg++;
    }
    if (unsorted.size() - 1 % 2 == 0) sorted.push_back(unsorted[beg][beg]);
    return sorted;
}

int main() {
    std::vector<std::vector<int>> test_1 = { 
        {}
    };
    std::vector<int> actual = snail_sort(test_1);
    utils::print_2d_vector(test_1);
    utils::print_vector(actual);

    std::vector<std::vector<int>> test_2 = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    actual = snail_sort(test_2);
    utils::print_vector(actual);
}