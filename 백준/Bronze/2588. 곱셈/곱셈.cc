#include <iostream>

int main() {
    int A, B;
    
    std::cin >> A;
    std::cin >> B;
    
    int third, fourth, fifth;
    
    third = A * (B % 10);
    fourth = A * (B / 10 - B / 100 * 10);
    fifth = A * (B / 100);
    
    std::cout << third << '\n';
    std::cout << fourth << '\n';
    std::cout << fifth << '\n';
    std::cout << third + 10 * fourth + 100 * fifth << '\n';
    
}