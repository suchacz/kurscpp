//1. Napisz funkcje
//      int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2)
//ktora zwroci informacje ile rozwiazan ma rownanie postaci
//      0 = a * x^2 + b * x + c
//Jesli rozwiazan jest 1 lub 2 to powinny one zostac zapisane pod adresami rozw1 i rozw2 (analogicznie do //przerabianej na zajeciach funkcji rownanie_liniowe).
//Do policzenia pierwiastka sluzy funkcja std::sqrt() dostepna w naglowku <cmath>.

// x

#include <iostream>
#include <cmath>

int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2) {
    int sqrt = std::sqrt
    if (a != 0.0) {
        *rozw1 = - ((std::sqrt(b * b - 4 * a * c) + b) / 2 * a);
        *rozw2 = (std::sqrt(b * b - 4 * a * c) - b) / 2 * a;
        return 2;
    }

    else if (a == 0 && b != 0) {
        *rozw1 = -(c / b);
        *rozw2 = 0;
        return 1;
    }

    else
        return 0;
}


int main () {

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double x = 0.0;
    double y = 0.0;

    int ile = rownanie_kwadratowe(a, b, c, &x, &y);

    if (ile == 2) {
        std::cout << "Rozwiazanie 1 = " << x << "\n" << "Rozwiazanie 2 = " << y << "\n";
    }
    else if (ile == 0) {
        std::cout << "Brak rozwiazan \n";
    }
    else if (ile == 1) {
        std::cout << "Rozwiazanie 1 = " << x << "\n";
    }

}

