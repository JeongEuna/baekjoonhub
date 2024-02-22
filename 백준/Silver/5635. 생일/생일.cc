#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::string name;
    std::vector<std::vector<int>> v;
    std::vector<std::string> na;
    int day, month, year;
    for (int i = 0; i < n; i++) {
        std::cin >> name >> day >> month >> year;
        v.push_back({year, month, day, i});
        na.push_back(name);
    }
    std::sort(v.begin(), v.end());
    
    
    std::cout << na[v[v.size() - 1][3]] << '\n';
    std::cout << na[v[0][3]] << '\n';
}