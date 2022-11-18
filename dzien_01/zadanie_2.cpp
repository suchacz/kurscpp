//Przyjmij 3 liczby: a, b i c gdzie: 
// a i b oznaczaja odpowiednio godzine i minute obecnie wyswietlana na zegarze elektornicznym 
//Wypisz godzine i minute jaka bedzie wyswietlana na zegarze po uplywie c minut 

#include <iostream> 
int main () {
    
int a = 0;
int b = 0;
int c = 0;
   
    std::cin >> a >> b >> c; 
    std::cout << "obecnie jest godzina " << a << ":" << b <<  "\n";

    
    int suma_minut = b + c; 
    int nowe_minuty = suma_minut % 60;
    int nowe_godziny = a + suma_minut / 60;
    nowe_godziny = nowe_godziny % 24;
    
    std::cout << "Po uplywie" << c << "minut bedzie godzina " << nowe_godziny << ":" << nowe_minuty << "\n";
}
