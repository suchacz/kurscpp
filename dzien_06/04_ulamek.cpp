#include <iostream>

struct Ulamek {
    int licznik;
    int mianownik;
    
    void wypisz() const {
        std::cout << licznik << '/' << mianownik << '\n';
    }
    
    Ulamek(int a, int b) {
        licznik = a;
        mianownik = b;
        if (mianownik == 0)
            mianownik = 1;
    }
    

    Ulamek mnoz (const Ulamek& b) const {
    Ulamek c;{licznik * b.licznik, mianownik * b.mianownik};
    return c;
    }
};

int main () {
    Ulamek a{2, 0};
    
    Ulamek b{2, 3};

    Ulamek c = a.mnoz(b);
    a.wypisz();
    b.wypisz();
    c.wypisz();
}
