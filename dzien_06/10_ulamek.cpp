#include <iostream>

struct Ulamek {


public:    
    void wypisz() const {
        std::cout << licznik << '/' << mianownik << '\n';
    }
    
    Ulamek(int a, int b) {
        licznik = a;
        mianownik = b;
        if (mianownik == 0)
            mianownik = 1;
    }
    

    Ulamek operator*(const Ulamek& b) const {
        std::cout << "operator*(Ulamek)\n";
    Ulamek c{licznik * b.licznik, mianownik * b.mianownik};
    return c;
    }
    
    Ulamek operator*(int x) const {
        std::cout << "operator*(int)\n";
    Ulamek c{licznik * x, mianownik};
    return c;
    }
    
    //getter
    int getMianownik() const {
        return mianownik;
    }
    
    //setter
    void setMianownik(int x) {
        if (x == 0)
            x = 1;
        mianownik = x;
    }
    
    void operator += (const Ulamek& x) {
        licznik = licznik * x.mianownik + x.licznik * mianownik;
        mianownik *= x.mianownik;
    }
    
    bool operator<(const Ulamek& x) const {
        return licznik * x.mianownik < x.licznik * mianownik;
    }
    
    bool operator>(const Ulamek& x) const {
        return x < *this;
    }
    
private:
    int licznik;
    int mianownik;
    
};

Ulamek operator*(int a, const Ulamek& b) {
    return b * a;
}

int main () {
    Ulamek a{1, 2};
    Ulamek b{2, 3};
    Ulamek c = a * b;
    c.wypisz();
    Ulamek d = a * 5;
    d.wypisz();
    Ulamek e = 3 * c;
    e.wypisz();
    
    if (a < b) {
        std::cout << "a jest mniejsze\n";
    }
    
    a += b;
    a.wypisz();
}
   
