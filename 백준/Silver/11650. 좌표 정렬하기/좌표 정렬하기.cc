#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    int x, y;
    std::vector<std::vector<int>> v;
    for (int i = 0; i < N; i++) {
        std::cin >> x >> y;
        v.push_back({x, y});
    }
    
    std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i][0] << " " << v[i][1] << '\n';
    }
}
