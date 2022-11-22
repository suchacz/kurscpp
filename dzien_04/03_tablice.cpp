#include <iostream>

int main () {
    const int rozmiar = 10;
    int tab[rozmiar];
    std::cin >> tab[0] >> tab[1];
    
    for (int i = 2; i <rozmiar; i += 1) {
        std::cin >> tab[i];
    }
    
    for (int i = 0; i < rozmiar; i += 1) {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}
