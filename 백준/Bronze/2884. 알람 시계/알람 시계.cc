#include <iostream>

int main() {
    int H, M;
    std::cin >> H >> M;
    
    if (H > 23 || H < 0 || M > 59 || M < 0) {
        std::cout << "Wrong input\n";
    }
    else {
        int alarmForMin;
        alarmForMin = H * 60 + M;
        int newAlarm;
        newAlarm = alarmForMin - 45;
        
        int Hnew, Mnew;
        Hnew = newAlarm / 60;
        Mnew = newAlarm - Hnew * 60;
        
        if (Mnew < 0) {
            std::cout << 23 << " " << 60 + Mnew << '\n';
        }
        else {
            std::cout << Hnew << " " << Mnew << '\n';
        }
    }
}