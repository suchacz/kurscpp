#include <iostream>

bool pole_ok(in x, int y) {
    return x >= 0 && x <=7 && y >= 0 && y <= 7;
}



int ile_ruchow(int x, int y) {
    int suma = 0;
    if (pole_ok(x + 2, y + 1))
        suma +=1 ;
    if (pole_ok(x + 2, y - 1))
        suma +=1 ;
    if (pole_ok(x - 2, y + 1))
        suma +=1 ;
    if (pole_ok(x - 2, y - 1))
        suma +=1 ;
    if (pole_ok(x + 1, y + 2))
        suma +=1 ;
    if (pole_ok(x + 1, y - 2))
        suma +=1 ;
    if (pole_ok(x - 1, y + 2))
        suma +=1 ;
    if (pole_ok(x - 1, y - 2))
        suma +=1 ;
    
}

int main () {
    int x;
    int y;
    std::cin >> x >> y:
    std::cout << "Mozliwe ruchy:" << ile_ruchow(x, y) << "\n";
}
