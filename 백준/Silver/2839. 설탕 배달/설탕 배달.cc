#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int f = 10000, t = 10000, min = 10000;
    
    if (N % 5 == 0) {
        f = N / 5;
        if (min > f) min = f;
    }
    else if (N % 3 == 0) {
        t = N / 3;
        if (min > t) min = t;
    }
        int a, b; // N = 18
        for (int i = 1; i <= N / 5; i++) { // i = 5kg 봉지 개수
            a = N - 5 * i; // a = 3, i = 3
            if (a % 3 == 0) { // true
                b = a / 3; // b = 3kg 봉지 개수, b = 1
                if (min > i + b) min = i + b; // min = 4
            }
            else {
                if (min != 10000) {} // min = 6
                else min = 10000;
            }
        }
    
    if (min == 10000) min = -1;
    std::cout << min << '\n';
}
