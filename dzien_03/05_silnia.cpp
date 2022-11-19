#include <iostream>

int silnia (int n) {
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}
         


int main () {
    int n;
    std::cin >> n;
    std::cout << silnia (n) << "\n";
}
