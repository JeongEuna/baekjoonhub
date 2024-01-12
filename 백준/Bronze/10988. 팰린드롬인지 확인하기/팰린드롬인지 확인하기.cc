#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;
    int result = 1;
    
    for (int i = 0; i < word.length() / 2; i++) {
        if (word[i] != word[word.length() - 1 - i]) {
            result = 0;
        }
    }
    if (result == 0) std::cout << 0 << '\n';
    else std::cout << 1 << '\n';
}
