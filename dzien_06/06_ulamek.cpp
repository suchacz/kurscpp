#include <iostream>

struct Ulamek {
private:
    int licznik;
    int mianownik;

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
    

    Ulamek mnoz (const Ulamek& b) const {
    Ulamek c{licznik * b.licznik, mianownik * b.mianownik};
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
    
};

int main () {
    Ulamek a{2, 0};
//     a.mianownik = 0;
    a.wypisz();
    std::cout << "Mianownik = " << a.getMianownik() <<'\n';
    a.setMianownik(5);
    a.wypisz();
   
}
