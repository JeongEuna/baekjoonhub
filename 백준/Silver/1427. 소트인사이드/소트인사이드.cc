#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    int a;
    std::vector<int> v;
    do {
        a = N % 10;
        v.push_back(a);
        N /= 10;
    } while (N != 0);
    
    std::sort(v.begin(), v.end());
    
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += pow(10, i) * v[i];
    }
    
    std::cout << sum << '\n';
}
