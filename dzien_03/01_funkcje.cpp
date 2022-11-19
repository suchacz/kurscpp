#include <iostream>

void hello() {
    std::cout << "Hello!\n";
}

void argument(int a) {
    std::cout << "Argument = " << a << "\n";
}
void dwa_argumenty(int a, int b) {
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

int nastepnik(int x) {
    return x + 1;
}

int main() {
    hello();
    argument(10);
    dwa_argumenty(12, 34);
    int a = nastepnik(0);
    std::cout << a << "\n";
    std::cout << nastepnik(0) << "\n";
    std::cout << nastepnik(nastepnik(0)) << "\n";
}
