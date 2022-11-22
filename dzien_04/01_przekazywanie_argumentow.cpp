#include <iostream>

void f(int x) {
    x = 20;
}
void g(int* b) {
    *b = 30;
}

void dajWspolrzedne(double* x, double* y) {
        *x = 44.575
        *u = 13.654
    }

int main() {
    int x = 10;
    f(x);
    std::cout << x << "\n";
    
    g(&x);
    std::cout << x << "\n";
    
    double a = 0.0
    double b = 0.0
    dajWspolrzedne(&a, &b);
    std::cout << a << " " << b << "\n";
    
}
