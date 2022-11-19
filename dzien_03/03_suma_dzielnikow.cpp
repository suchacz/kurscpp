#include <iostream>

int suma_dzielnikow (int a) {
    int suma = 0;
    int i = 0;
    for (i = 1; i < a; i += 1) {
        if (a % i == 0) {
            suma += i;
        }
    }
        return suma;
}

int main () {
    int a;
    std::cin >> a;
    std::cout << suma_dzielnikow (a) << "\n";
}
