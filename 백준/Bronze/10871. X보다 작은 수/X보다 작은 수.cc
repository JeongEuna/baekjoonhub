#include <iostream>
#include <vector>

int main() {
    int N, X, a;
    std::vector<int> v;
    std::cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        std::cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < X)
            std::cout << v[i] << " ";
    }
    std::cout << '\n';
}
