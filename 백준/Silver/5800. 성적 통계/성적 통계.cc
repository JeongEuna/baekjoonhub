#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main() {
    int K;
    std::cin >> K;
    int N;
    int min, max, gap;
    std::vector<std::vector<int>> v, sc;
    for (int i = 0; i < K; i++) {
        min = 100;
        max = 0;
        gap = 0;
        std::cin >> N;
        int score[N];
        for (int j = 0; j < N; j++) {
            std::cin >> score[j];
            if (min > score[j]) min = score[j];
            if (max < score[j]) max = score[j];
        }
        std::sort(score, score + N);
        for (int k = 0; k < N - 1; k++) {
            int gap2;
            gap2 = score[k + 1] - score[k];
            if (gap < gap2) gap = gap2;
        }
        v.push_back({max, min, gap});
    }
    
    for (int i = 0; i < K; i++) {
        std::cout << "Class " << i + 1 << '\n';
        std::cout << "Max " << v[i][0] << ", " << "Min " << v[i][1] << ", " << "Largest gap " << v[i][2] << '\n';
    }
}