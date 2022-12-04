#include <iostream>

// w klasach wszystkie pola sa domyslnie prywatne
class MojaKlasa {
    int a;
};

// w strukturach wszystkie pola sa domyslnie publiczne

struct MojaStruktura {
    int a;
};

int main() {
//     MojaKlasa k;
//     std::cin >> k.a;
    
    MojaStruktura s;
    std::cin >> s.a;
}
