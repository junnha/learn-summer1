#include <iostream>

int main() {
    int n;
    int arr[20];
    int sumy = 0;
    int summ = 0;
    std::cin >> n;
    for(int i=0;i<n;i++) {
        std::cin >> arr[i];
        sumy += ((arr[i] / 30)+1) * 10;
        summ += ((arr[i] / 60)+1) * 15;
        
    }
    if(sumy<summ) {
        std::cout << "Y" << " " << sumy;
    } else if (sumy>summ) {
        std::cout << "M" << " " << summ;
        } else if (sumy==summ) {
             std::cout << "Y" << " " << "M" << " " << summ;
        }
}

// 0-29초일 때 10원
// 30-59초일 때 20원
// 60-89초일 때 30원
// 90-119초일 때 40원
// 점화식 구하기? 일반항 구하는 수학문제랑 비슷한 듯
// 전체 반복횟수는 n이니 시간복잡도도 n