#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;
    
    std::vector<std::string> v;
    
    for (int i = 0; i < S.length(); i++) {
        std::string sub = S.substr(i, S.length() - i);
        v.push_back(sub);
    }
    
    std::sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << '\n';
    }
}