#include <iostream>

int main () {
    int n = 0;
    std::cin >> n;
    int max = 0;
    std::cin >> max;
    
    for (int i = 1; i < n; i += 1) {
        int x = 0;
        std::cin >> x;
        if (x > max) {
            max = x;
            
        }
    }
    std::cout << max << "\n";
}
