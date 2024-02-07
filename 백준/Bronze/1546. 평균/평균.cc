#include <iostream>
#include <vector>

int main() {
    double N, score, max = 0, score2;
    std::vector<int> v, v2;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cin >> score;
        if (score >= max) max = score;
        v.push_back(score);
    }
    // std::cout << max << '\n';
    
    double sum = 0;
    for (int i = 0; i < v.size(); i++) {
        score2 = v[i] / max * 100.;
        sum += score2;
        v2.push_back(score2);
        //std::cout << score2 << " ";
    }
    
    std::cout << sum / N << '\n';
}
