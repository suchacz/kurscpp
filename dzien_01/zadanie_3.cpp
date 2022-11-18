#include <iostream>

int main () {
    int a = 0;
    std::cout << "Podaj liczbe:\n";
    std::cin >> a;
    
    if (a % 2 == 0) { 
        std::cout << "Podana liczba jest parzysta\n";
        
    }
    else {
        std::cout << "Podana liczba jest nieparzysta\n";
        
    }
}
