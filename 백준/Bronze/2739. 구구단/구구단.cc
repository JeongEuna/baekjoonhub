#include <iostream>

int main() {
    int N;
    do {
        std::cin >> N;
    } while (N < 1 || N > 9);
    for (int i = 1; i <= 9; i++) {
        std::cout << N << " * " << i << " = " << N * i;
        std::cout << std::endl;
    }
}
