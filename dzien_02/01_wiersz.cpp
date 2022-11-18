#include <iostream>

int main () {
    int N = 0;
    std::cin >> N;
    int liczba_znakow;
    while   (liczba_znakow < N - 1) {
        std::cout << "#";
        liczba_znakow += 1;
    }
    std::cout << "#\n";
}
