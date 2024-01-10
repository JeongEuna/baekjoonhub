#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    if (A > 23 || A < 0 || B > 59 || B < 0) {
        std::cout << "Wrong input\n";
    }
    
    int C;
    std::cin >> C;
    if (C > 1000) {
        std::cout << "Wrong input\n";
    }
    
    int current, finish;
    current = A * 60 + B;
    finish = current + C;
    
    if (finish / 60 >= 24) {
        std::cout << finish / 60 - 24 << " " << finish - (finish / 60) * 60 << '\n';
    }
    else {
        std::cout << finish / 60 << " " << finish - (finish / 60) * 60 << '\n';
    }
}
