#include<iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int N, K, ans=0;
    int s[2][7]={};

    std::cin >> N >> K;
    for(int i=0;i<N;i++) {
        int a,b;
        cin >> a >> b;
        s[a][b]++;
    }

  for (int i=0; i<2; i++) {
    for (int j=1; j<7; ++j) {
      ans += s[i][j] / K;
      if (s[i][j] % K) ++ans;
    }
  }
  cout << ans;
}

// 입력 값을 배열에 저장하고, 배열을 순회해서 개수세기
// 값을 인덱스로 자유자재로 바꿔서 생각하는 것 중요