#include <iostream>

int main() {
    int score = 0;
    std::cin >> score;
    if (score > 100 || score < 0) {
        std::cout << "Wrong input\n";
    }
    else if (score >= 90 && score <= 100) {
        std::cout << "A\n";
    }
    else if (score >= 80) {
        std::cout << "B\n";
    }
    else if (score >= 70) {
        std::cout << "C\n";
    }
    else if (score >= 60) {
        std::cout << "D\n";
    }
    else {
        std::cout << "F\n";
    }
}
