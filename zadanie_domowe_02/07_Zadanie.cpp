//7. Napisz funkcję idx_min(), ktora przyjmie tablicę i jej rozmiar, a następnie zwroci _indeks_ najmniejszego elementu w tej tablicy.

#include <iostream>

int idx_min (int* tab, int n) {
        int min = 0;
        int idx = 0;
        for (int i = 0; i < n; i +=1) {
            if (tab[i] > min) {
                min == tab[i];
                idx == i;
            }


        }
        return idx;
    }

int main() {

    int a[5] = {10, 20, 4, 1, 6};
    idx_min(a, 5);
    std::cout << idx_min(a, 5) << '\n';

}
