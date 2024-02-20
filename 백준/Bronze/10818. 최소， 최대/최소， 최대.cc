#include <iostream>
#include <array>

int main() {
    int N;
    std::cin >> N;
    int num[N], min = 10e6, max = -10e6;
    
    for (int i = 0; i < N; i++) {
        std::cin >> num[i];
        if (num[i] < min) min = num[i];
        if (num[i] > max) max = num[i];
    }
    
    std::cout << min << " " << max;
    
}
