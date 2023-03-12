// 4/*. Napisz funkcję ile wiekszych(), która przyjmie jako argumenty tablicę liczb całkowitych, jej rozmiar i liczbę n, po czym zwróci informację ile elementów w tablicy jest większych od n.*/

#include <iostream>

int ile_wiekszych (int* tab, int rozmiar, int n) {
    int ile_wiekszych = 0;
    for (int i = 0; i < rozmiar; i ++) {
        if (tab[i] > n)
            ile_wiekszych += 1;
    }
    return ile_wiekszych;

}

int main () {
    int tab[5] = {5, 10, 4, 6, 12};
    int n = 0;

    std::cout << "podaj n:" << '\n';
    std::cin >> n;

    std::cout << ile_wiekszych(tab, 5, n);
}
