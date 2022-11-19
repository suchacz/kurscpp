#include <iostream>

int silnia (int n) {
    int iloczyn = 1;
    for (int a = 1; a <= n; a += 1) {
        iloczyn *= a;
    }
         
return iloczyn;
}


int main () {
    int n;
    std::cin >> n;
    std::cout << silnia (n) << "\n";
}
