#include <iostream>

int main() {
    int x, y;
    std::cin >> x;
    std::cin >> y;
    
    if (x > 1000 || x < -1000 || y > 1000 || y < -1000) {
        std::cout << "Wrong input\n";
    }
    if (x > 0 && y > 0) {
        std::cout << "1\n";
    }
    else if (x < 0 && y > 0) {
        std::cout << "2\n";
    }
    else if (x < 0 && y < 0) {
        std::cout << "3\n";
    }
    else {
        std::cout << "4\n";
    }
}
