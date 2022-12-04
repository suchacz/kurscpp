#include <iostream>

struct Ulamek {
    int licznik;
    int mianownik;
    
    void wypisz() {
        std::cout << licznik << '/' << mianownik << '\n';
    }
    
    void inicjalizuj (int a, int b) {
        licznik = a;
        mianownik = b;
    }
    
    
    Ulamek mnoz (const Ulamek& a, const Ulamek& b) {
    Ulamek c;
    c.inicjalizuj(a.licznik * b.licznik, a.mianownik * b.mianownik);
    return c;
    }




    Ulamek mnoz (const Ulamek& b) {
    Ulamek c;
    c.inicjalizuj(licznik * b.licznik, mianownik * b.mianownik);
    return c;
    }
};

int main () {
    Ulamek a;
    a.inicjalizuj(1, 2);
    Ulamek b;
    b.inicjalizuj(2, 3);
    a.wypisz();
    b.wypisz();
    
    Ulamek c = a.mnoz(b);
    c.wypisz();
}
