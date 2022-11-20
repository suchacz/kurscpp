#include <iostream>

int main () {
    const int rozmiar = 10;
    int tab[rozmiar];
    
    for (int i = 0; i < rozmiar; i += 1) {
        std::cin >> tab[i];
    }
    
    for (int i = rozmiar - 1; i >= 0; i-=1) {
        std::cout << tab[i] << " ";
    }
    std::cout << "\n";
}
