#include <iostream>
#include <string>

void pokemonizer(std::string& s) {
    
    for (int i = 1; i < s.length(); i += 2) {
        
        if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 'a' - 'A';
        }
        
        if (i % 2 != 0 && s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
    }
}
    
    



int main() {
    std::string  s;
    std::cin >> s;
    std::cout << s << '\n';
    std::cout << s << '\n';
    for (int i = 0; i < s.length(); i ++) {
        std::cout << s[i] << ' ';
    }
    std::cout << '\n';
    
    std::cout << s << '\n';
    
    pokemonizer(s);
    std::cout << s << '\n';
}
