#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int a;
    a = N / 4;
    
    for (int i = 1; i <= a; i++) {
        std::cout << "long ";
    }
    std::cout << "int\n";
}
