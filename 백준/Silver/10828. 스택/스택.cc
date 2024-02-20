#include <iostream>
#include <string>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::string order;
    int num;
    std::vector<int> v;
    
    for (int i = 0; i < N; i++) {
        std::cin >> order;
        if (order == "push") {
            std::cin >> num;
            v.push_back(num);
        }
        else if (order == "pop") {
            if (v.size() == 0) std::cout << -1 << '\n';
            else {
                std::cout << v.back() << '\n';
                v.pop_back();
            }
        }
        else if (order == "size") {
            std::cout << v.size() << '\n';
        }
        else if (order == "empty") {
            if (v.size() == 0) std::cout << 1 << '\n';
            else std::cout << 0 << '\n';
        }
        else if (order == "top") {
            if (v.size() == 0) std::cout << -1 << '\n';
            else std::cout << v.back() << '\n';
        }
    }
}