#include <iostream>

int main () {
    int kot = 6; 
    std::cout << "kot = " << kot << "\n";
    std::cout << "adres zmiennej 'kot' = " << &kot << "\n";
    int* adres_kota = &kot;
    std::cout << "adres_kota = " << adres_kota << "\n";
    std::cout << "*adres_kota = " << *adres_kota << "\n";
    *adres_kota = 17;
    std::cout << "kot = " << kot << "\n";
    
    int* nic = nullptr;
    
    
}
