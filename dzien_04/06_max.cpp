#include <iostream>

int max_element (int* tab, int n) {
    int max = tab[0];
    for (int i = 1; i < n; i+=1) {
        max = tab[0];
        if (tab[i] > 0)
            max = tab[i];
    }
    return max;
}

int main () {
    const int rozmiar = 5;
    int tab[rozmiar] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i += 1)
        std::cout >> tab[i];
    
    std::cout << max_element(tab, rozmiar) << "\n";
}
