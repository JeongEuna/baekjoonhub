#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    int i;
    std::cin >> i;
    
    std::string target;
    for (int j = 0; j < S.length(); j++) {
        if (i - 1 == j) target = S[j];
    }
    
    std::cout << target << '\n';
}