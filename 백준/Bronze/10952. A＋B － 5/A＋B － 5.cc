#include <iostream>
#include <vector>

int main() {
    int A, B;
    std::vector<int> v;
    do {
        std::cin >> A >> B;
        v.push_back(A + B);
    } while (A != 0 && B != 0);
    v.pop_back();
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << '\n';
    }
}
