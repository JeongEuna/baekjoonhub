#include <iostream>
#include <vector>

int main() {
    int T, A, B;
    std::vector<int> v;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> A >> B;
        v.push_back(A + B);
    }
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << '\n';
    }
    
}
