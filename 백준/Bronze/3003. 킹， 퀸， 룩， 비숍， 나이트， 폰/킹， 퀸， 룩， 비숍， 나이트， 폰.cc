#include <iostream>

int main() {
    int king, queen, l, b, k, p;
    std::cin >> king >> queen >> l >> b >> k >> p;
    std::cout << 1 - king << " " << 1 - queen << " " << 2 - l << " " << 2 - b << " " << 2 - k << " " << 8 - p;
}

