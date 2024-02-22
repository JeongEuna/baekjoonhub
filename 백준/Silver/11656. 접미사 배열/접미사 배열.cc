#include <iostream>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;
    
    std::string arr[S.length()];
    
    for (int i = 0; i < S.length(); i++) {
        std::string sub = S.substr(i, S.length() - i);
        arr[i] = sub;
    }
    
    std::sort(arr, arr + S.length());
    
    for (int i = 0; i < S.length(); i++) {
        std::cout << arr[i] << '\n';
    }
}
