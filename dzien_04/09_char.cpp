#include <iostream>

bool czy_mala_litera(char c) {
    return c > 'a' && c <= 'z';
}

int main () {
    char znak = 'a';
    std::cout << znak << '\n';
    char c = 65;
    std::cout << c << '\n';
    std::cout << "sizeof(char) = " << sizeof(char) << '\n';
    char tab[6] = {'a', 'b', 'c', 'd', 'e', 0};
    std::cout << tab << '\n';
    char tab[] = "abcde";
}
