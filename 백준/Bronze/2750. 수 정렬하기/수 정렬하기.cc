#include <iostream>
#include <array>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    
    std::sort(arr, arr + N);
    
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << '\n';
    }
}
