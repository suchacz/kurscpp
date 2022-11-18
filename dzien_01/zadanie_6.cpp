#include <iostream>

int main () {
    int rok = 0;
    std::cout << "podaj rok:\n";
    std::cin >> rok;
    if (((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0)){
        std::cout << "to jest rok przestepny\n";
    }
    else {
        std::cout << "to nie jest rok przestepny\n"; 
    }
}
