#include <iostream> 

int main () {
 int a =0;
 std::cout << "Podaj a:";
 std::cin >> a;
 std::cout << "Reszta z dzielenia przez 3:" << a % 3 << "\n";
  std::cout << "Podniesiona do potegi:" << a * a << "\n";
  std::cout << "Cyfra jednosci:" << a % 10  << "\n";
  std::cout << "Cyfra dziesiatek:" << a / 10 % 10 << "\n";
}
