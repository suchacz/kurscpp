#include <iostream>

int main () {
    const int stala = 17;
    int zmienna = 14;
    
    int* wsk = &zmienna;
    const int* c_wsk = &zmienna;
    int* const wsk_c = &zmienna;
    const int* const cwc = &zmienna;
}
