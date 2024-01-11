#include <iostream>
#include <vector>

int main() {
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    std::cout << sum << '\n';
}
