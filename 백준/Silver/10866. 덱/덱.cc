#include <iostream>
#include <string>
#include <deque>

int main() {
    int N;
    std::cin >> N;
    
    std::string order;
    int num;
    std::deque<int> d;
    
    for (int i = 0; i < N; i++) {
        std::cin >> order;
        if (order == "push_front") {
            std::cin >> num;
            d.push_front(num);
        }
        else if (order == "push_back") {
            std::cin >> num;
            d.push_back(num);
        }
        else if (order == "pop_front") {
            if (d.size() == 0) std::cout << -1 << '\n';
            else {
                std::cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (order == "pop_back") {
            if (d.size() == 0) std::cout << -1 << '\n';
            else {
                std::cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if (order == "size") {
            std::cout << d.size() << '\n';
        }
        else if (order == "empty") {
            std::cout << d.empty() << '\n';
        }
        else if (order == "front") {
            if (d.size() == 0) std::cout << -1 << '\n';
            else std::cout << d.front() << '\n';
        }
        else if (order == "back") {
            if (d.size() == 0) std::cout << -1 << '\n';
            else std::cout << d.back() << '\n';
        }
    }
}