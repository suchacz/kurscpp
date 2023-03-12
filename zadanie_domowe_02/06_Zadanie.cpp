// 6. Napisz funkcje swap(), ktora zamieni wartosci 2 zmiennych miejscami. Przykladowe uzycie:
// 	int a = 5, b = 10;
// 	swap(&a, &b);
// 	std::cout << a << std::endl; //powinno wypisac 10
// 	std::cout << b << std::endl; //powinno wypisac 5

#include <iostream>

void swap(int* a, int* b){
    this-> a = b;
    this-> b = a;
}

int main () {

    int a = 5;
    int b = 10;

    swap(&a, &b);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
