#include <iostream>
#include <vector>

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

std::vector<int> prime(unsigned limit) {
    std::vector<int> primes = {};
    for (int i = 0; i <= limit; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    return primes;
}

void print_vector(std::vector<int> vector) {
        std::cout << "{";
        for (int i = 0; i < vector.size() - 1; i++) {
            std::cout << vector[i] << ", ";
        }
        std::cout << vector[vector.size() - 1] << "}\n";
}

int main() {
    print_vector(primes(11));
}