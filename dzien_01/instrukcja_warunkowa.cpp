#include <iostream> 

int main() {
// boll - prawda/falsz (true/false)    
     bool prawda = true;
     bool falsz= false;
     
     // operatry logiczne 
     int a = 3; 
     int b = 5;
    std::cout << a << " < " << b << " = " << (a < b) << "\n";
    std::cout << a << " <= " << b << " = " << (a <= b) << "\n";
    std::cout << a << " > " << b << " = " << (a > b) << "\n";
    std::cout << a << " >= " << b << " = " << (a >= b) << "\n";
    std::cout << a << " == " << b << " = " << (a == b) << "\n";
    std::cout << a << " != " << b << " = " << (a != b) << "\n";
    // std::cout << (5 < 7) << "\n";
 
 //   if (warunek) {
 // to sie wykona jesli warunke jest true  
//}
    // else {
  // to sie wykona jezeli warunek jest false   
    
//}
    
    if (true) {
        std::cout << "Zawsze\n";
    }
    
    if (false) {
        std::cout << "Nigdy\n";
    }
    
    if (a < b) {
        std::cout << "a jest mniejsze od b\n";
    }
    
    else {
        std::cout << "a nie jest mniejsze od b\n";
    }
    
}
