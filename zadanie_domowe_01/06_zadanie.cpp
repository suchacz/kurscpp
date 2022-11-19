#include <iostream>

int main    () {
    int n = 0;
    std::cin >> n;
    while (n > 10) {
        std::cout << n % 10 << ",";
        n /=10 
    }
    std::cout << n << "\n";
}
