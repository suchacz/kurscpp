// 5. Napisz funkcje ile_wspolnych(), ktora przyjmie 2 tablice liczb calkowitych (wraz z niezbednymi do ich przetworzenia informacjami), po czym zwroci informacje ile elementow z pierwszej tablicy wystepuje w drugiej.

#include <iostream>

int ile_wspolnych(int* tab1, int rozmiar1, int* tab2, int rozmiar2) {
    int wspolne = 0;
    int counter = 0;

    while (counter < rozmiar1) {
        for (int i = 0; i < rozmiar2; i ++) {
            if (tab1[counter] == tab2[i])
                wspolne ++;
            if (i == rozmiar2 - 1)
                counter ++;
        }
    }
    return wspolne;
}
int main () {
    int rozmiar1 = 6;
    int rozmiar2 = 5;
    int tab1[rozmiar1] = {30, 20, 15, 10, 7, 4};
    int tab2[rozmiar2] = {5, 10, 15, 20, 30};

    std::cout << ile_wspolnych(tab1, rozmiar1, tab2, rozmiar2) << '\n';
}

