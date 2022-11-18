#include <iostream>

int main () {
    int a;
    std::cout << "Podaj liczbe\n";
    std::cin >> a;
    
    if (a > 0) {
        std::cout << "Wieksza 0\n";
    }
    else if (a < 0) {
        std::cout << "Mniejsza od 0\n";
    }
    
    else {
        std::cout << "Rowna 0\n";
    }
}
