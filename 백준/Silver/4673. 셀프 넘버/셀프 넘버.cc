#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v;
    for (int i = 1; i <= 10000; i++) { // 생성자가 있는 숫자를 벡터 v에 집어넣기
        // i가 한 자릿수인 경우, 1 + 1 = 2
        if (i / 10 < 1) {
            v.push_back(i + i);
        }
        else if (i / 100 < 1) { // i가 두 자릿수인 경우, 10 + 1 + 0 = 11
            v.push_back(i + i / 10 + i % 10);
        }
        else if (i / 1000 < 1) { // i가 세 자릿수인 경우, i = 320, 320 + 3 + 2 + 0 = 325
            v.push_back(i + i / 100 + (i % 100) / 10 + i % 10);
        }
        else if (i / 10000 < 1) { // i가 네 자릿수인 경우, i = 2418, 2418 + 2 + 4 + 1 + 8 = 2433
            v.push_back(i + i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + i % 10);
        }
        else if (i == 10000) {
            v.push_back(10000 + 1);
        }
    }
    // 벡터 v에 숫자가 없으면 그 숫자는 셀프 넘버
    for (int i = 1; i <= 10000; i++) {
        if (std::find(v.begin(), v.end(), i) == v.end()) {
            std::cout << i << '\n';
        }
    }
}