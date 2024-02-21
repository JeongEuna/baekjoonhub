#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> v;
    int score;
    
    for (int i = 0; i < 8; i++) {
        std::cin >> score;
        v.push_back({score, i + 1});
    }
    
    std::sort(v.begin(), v.end());
    
    int sum = 0;
    std::vector<int> v1;
    for (int i = 3; i < 8; i++) {
        sum += v[i][0];
        v1.push_back(v[i][1]);
    }
    
    std::sort(v1.begin(), v1.end());
    
    std::cout << sum << '\n';
    for (int i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
}
