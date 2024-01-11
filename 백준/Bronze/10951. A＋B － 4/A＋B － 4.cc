#include <iostream>
#include <vector>

int main() {
    int A, B;
    std::vector<int> v;
    while (std::cin >> A >> B)
        v.push_back(A + B);
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << '\n';
    }
}