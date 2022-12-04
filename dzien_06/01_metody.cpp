#include <iostream>

struct Punkt {
    int x;
    int y;
    
    void metoda() {
        std::cout << "metody to funkcje umieszczone wew struktur. \n";
        std::cout << "metoda ma zawsze dostep do obiektu, na ktorym zostala wywolana. \n";
        std::cout << "x= " << x << '\n';
        wypisz();
    }
    
    void wypisz() {
        std::cout << x << "," << y << '\n';
    }
};

int main() {
    Punkt p;
    p.x = 10;
    p.metoda();
}

