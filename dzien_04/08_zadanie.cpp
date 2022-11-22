#include <iostream>

bool porownanie (const int* tab_a, int a,const int* tab_b, int b) {
    if (a != b)
        return false;
    for (int i = 1; i < a; i += 1) {
        if (tab_a[i] != tab_b[i])
            return false;
       }
      
        return true;
}

int main () {
    int a;
    int b;
    int tab_a[5] = {1, 2, 3, 4, 5};
    int tab_b[5] = {1, 2, 3, 4, 5};
    
    std::cout << "Podaj rozmiar tablicy a: ";
    std::cin >> a;  
    std::cout << "Podaj rozmiar tablicy b: ";
    std::cin >> b;
    
    int czy_takie_same = porownanie(tab_a, a, tab_b, b);
    
    if (czy_takie_same == true)
        std::cout << "Tablice takie same" << "\n";
    
    else
        std::cout << "Tablice rozne" << "\n";
}
