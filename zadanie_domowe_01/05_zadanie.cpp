#include <iostream>

int main () {
    for (int i = 1; i <= 100; i += 1) {
        bool czy_cos_wypisalismy = false;
        if (i % 3 == 0) {
            std::cout << "Hopsasa";
            czy_cos_wypisalismy = true;
        }
        if (i % 5 == 0) {
            std::cout << "Tralala"; 
            czy_cos_wypisalismy = true;
        }
        if (!czy_cos_wypisalismy) // czy_cos_wypisalismy == false*
        {
            std::cout << i;
        }
        std::cout << "\n";
    }
    
}
