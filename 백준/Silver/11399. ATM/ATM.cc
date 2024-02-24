#include <iostream>
#include <algorithm>
#include <vector>

int fn(std::vector<int> v, int n) {
    if (n == 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;
    int time;
    std::vector<int> v;
    for (int i = 0; i < N; i++) {
        std::cin >> time;
        v.push_back(time);
    }
    std::sort(v.begin(), v.end());
    
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += fn(v, i);
    }

    std::cout << sum << '\n';
}