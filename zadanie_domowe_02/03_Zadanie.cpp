//3. Napisz funkcję srednia(), która przyjmie jako argumenty tablicę liczb całkowitych i jej rozmiar, po czym zwróci średnią arytmetyczną elementów w tej tablicy

#include <iostream>
int srednia (int* tab, int n) {
    int suma = 0;
    int dzielnik = 0;
    for (int i = 0; i < n; i += 1) {
        suma += tab[i];
        dzielnik += 1;
    }
    return suma/dzielnik;
}

int main () {
    
    int tab[5] = {1, 2, 3, 4, 5};
    
    std::cout << srednia (tab, 5) << "\n";
}
