#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[9];
    vector<int> res;
    int sum = 0;

    for(int i=0;i<9;i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int j=0;j<9;j++) {
        for(int k=1;k<9;k++) {
            if (j==k) continue;
            if (sum - arr[j] - arr[k] == 100){
                for (int p = 0; p < 9; p++) {
                if (p == j || p == k) continue;
                res.push_back(arr[p]);
            }
            sort(res.begin(), res.end());
            for (int x : res) cout << x << '\n';
            return 0;
            }
        }

    }
}

// 일단 배열에 9개 입력받음
// 그다음 배열 9개 중 합이 100이 되는 7개를 골라서 '오름차순' 출력해야함
// 나는 이렇게 생각함 다 더해서 2개를 빼는데 그게 100이 되어야 해
// j,k 가 0,1 이면 이거 빼고 배열을 출력하고 싶어
