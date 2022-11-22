#include <iostream>

bool czy_male_litery (const char* napis) {
    
    for (int i = 0; napis[i] != 0; i += 1) {
        if (napis[i] < 'a' || napis[i] > 'z')
            return false;
    }
    return true;
}

int main () {
    std::cout << czy_male_litery("abc") << "\n";
    std::cout << czy_male_litery("ABc") << "\n"; 
}
