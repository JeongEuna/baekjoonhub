#include <iostream>
#include <string>
#include <queue>

int main() {
    int N;
    std::cin >> N;
    
    std::string order;
    int num;
    std::queue<int> q;
    
    for (int i = 0; i < N; i++) {
        std::cin >> order;
        if (order == "push") {
            std::cin >> num;
            q.push(num);
        }
        else if (order == "pop") {
            if (q.size() == 0) std::cout << -1 << '\n';
            else {
                std::cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (order == "size") {
            std::cout << q.size() << '\n';
        }
        else if (order == "empty") {
            std::cout << q.empty() << '\n';
        }
        else if (order == "front") {
            if (q.size() == 0) std::cout << -1 << '\n';
            else std::cout << q.front() << '\n';
        }
        else if (order == "back") {
            if (q.size() == 0) std::cout << -1 << '\n';
            else std::cout << q.back() << '\n';
        }
    }
}
