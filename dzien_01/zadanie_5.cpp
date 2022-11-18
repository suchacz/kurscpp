#include <iostream>

int main () {
    int a = 0;
    std::cin >> a;
    if (a >= 10 && a < 20) {
        std::cout << "W przedziale\n";
    }
 
    
    else {
        std::cout << "poza przedzialem\n";
    }
}
