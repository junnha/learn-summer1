#include <bits/stdc++.h>
using namespace std;

int a[1000001]={};
// 각 자연수의 존재 여부를 저장하는 배열, 아래에서 x-a[i]가 1000000보다 큰 경우를 예외처리하기 싫어서 그냥 배열을 최대 200만으로 잡음
bool occur[2000001];
int n, x;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> x;

  for (int i = 0; i < n; i++) {
    // x-a[i]가 존재하는지 확인
    if(x-a[i] > 0 && occur[x-a[i]]) ans++;
    occur[a[i]] = true;
  }
  cout << ans;
}

//x-a[i]접근방식자체는괜찮았는데 너무 어렵게 생가한듯
//배열 범위를 설정해줫어야햇는데 그냥 vector쓰면 설정안해도된다는그런왜곡된사고를고쳐야햇어