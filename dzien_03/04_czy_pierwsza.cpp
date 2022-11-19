#include <iostream>

bool czy_pierwsza (int a) {
    if (a == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    
    for (int i = 3; i < a; i += 2) {
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
