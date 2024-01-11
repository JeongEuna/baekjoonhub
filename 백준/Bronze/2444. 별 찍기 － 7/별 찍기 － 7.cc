#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            std::cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    for (int l = 1; l <= N - 1; l++) {
        for (int m = 0; m < l; m++) {
            std::cout << " ";
        }
        for (int n = 0; n < (N - l) * 2 - 1; n++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}
