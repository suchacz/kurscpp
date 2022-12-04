#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    
    //std::cout << std::time(nullptr) << '\n';
    
    int x = std::rand() % 6 + 1;
    std::cout << std::rand() << '\n';
    std::cout << std::rand() << '\n';
    std::cout << std::rand() << '\n';
}
