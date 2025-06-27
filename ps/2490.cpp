#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int t = 0; t < 3; t++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int one = 0;
        int arr[4] = {a, b, c, d};

        for (int i = 0; i < 4; i++) {
            if (arr[i] == 1) one++;
        }
        
        if (one == 0) cout << "D\n";
        else if (one == 1) cout << "C\n";
        else if (one == 2) cout << "B\n";
        else if (one == 3) cout << "A\n";
        else if (one == 4) cout << "E\n";
    }
}

// 개수 세기 문제는 count++를 떠올리기
// 값(변수) 초기화 꼭 신경쓰고
// 이 문제는 모든 연산이 고정된 횟수만큼만 이루어지므로 시간복잡도는 O(1)인가