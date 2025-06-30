#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        int H, W, N;
        cin >> H >> W >> N;
        int floor, room;
        if(N % H == 0) {
            floor = H;
            room = N / H;
        } else {
            floor = N % H;
            room = N / H + 1;
        }
        // room이 1~9면 앞에 0을 붙여 출력
        if(room < 10) cout << floor << 0 << room << '\n';
        else cout << floor << room << '\n';
    }
}

// 수학적으로 접근해야겟다는 건 생각했는데 그 다음 구체적으로 조건 맞춰서 식 세우는 것을 연습하기