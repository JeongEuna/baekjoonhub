#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    int num;
    std::vector<int> v;
    for (int i = 0; i < N; i++) {
        std::cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << '\n';
    }
}