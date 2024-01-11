#include <iostream>
#include <vector>

int main() {
    int X;
    int N;
    int a, b, price = 0;
    
    std::cin >> X; // 총 금액
    std::cin >> N; // 물건 종류 수
    for (int i = 1; i <= N; i++) {
        std::cin >> a >> b; // 가격, 개수
        price += a * b;
    }
    
    if (price == X) {
        std::cout << "Yes\n";
    }
    else {
        std::cout << "No\n";
    }
}