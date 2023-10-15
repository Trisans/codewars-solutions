#include <iostream>

long zeros(long n) {
  int total = 0;
  for (int i = 5; i <= n; i *= 5) {
    total += n / i;
  }
  return total;
}

int main() {
  while (true) {
    long n;
    std::cin >> n;
    std::cout << zeros(n) << std::endl;
  }
}