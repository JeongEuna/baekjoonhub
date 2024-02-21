#include <iostream>
#include <vector>

int main() {
    int K, num;
    std::cin >> K;
    
    std::vector<int> v;
    for (int i = 0; i < K; i++) {
        std::cin >> num;
        v.push_back(num);
        if (num == 0) {
            v.pop_back();
            v.pop_back();
        }
    }
    
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    
    std::cout << sum << '\n';
}
