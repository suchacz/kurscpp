#include <iostream>

int bezwzgledna (int x) {
//     if (x < 0) 
//       return -x;
//   return x;
// operator trojargumnentowy: warunek ? wartosc_jesli_prawda : wartosc_jesli_falsz
    return x < 0 ? -x : x;
}

int maks(int a, int b) {
//   if (a > b) {
//        return a;
//    }
//    else {
//        return b;
//    }
    return a > b ? a : b;
}

int main () {
    std::cout << bezwzgledna (-10) << "\n";
    std::cout << maks (10,15) << "\n";
    
}
