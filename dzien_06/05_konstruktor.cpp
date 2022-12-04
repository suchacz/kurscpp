#include <iostream>
#include <string>

struct Kot {
    std::string imie;
    
//     Kot() {
//         std::cout << "Tworze Kota\n";
//     }
    
    Kot(const std::string& a) {
        std::cout << "Tworze Kota o imieniu " << a << '\n';
        imie = a;
    }
    
    void miaucz() {
        if (!imie.empty())
            std::cout << imie << ": ";
        std::cout << "Miau!\n";
    }
};

int main() {
    Kot mruczek{"Mruczek"};
    mruczek.miaucz();
    
    Kot puszek{"Puszek"};
    puszek.miaucz();
    
    Kot{"Okruszek"}.miaucz();
}
