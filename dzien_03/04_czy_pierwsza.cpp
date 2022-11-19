#include <iostream>

bool czy_pierwsza (int a) {
    if (a == 1)
        return false;
    
    for (int i = 2; i < a; i += 1) {
        if (a % i == 0) {
            return false;
        }
    }
     return true;
}


int main () {
    int a; 
    std::cin >> a;
    std::cout << czy_pierwsza(a) << "\n";
}
