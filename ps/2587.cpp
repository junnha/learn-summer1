#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b,c,d,e;
    int sum=0;
    cin >> a >> b >> c >> d >> e;
    sum = a+b+c+d+e;
    int rev = sum / 5;

    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(a > d) swap(a, d);
    if(a > e) swap(a, e);

    if(b > c) swap(b, c);
    if(b > d) swap(b, d);
    if(b > e) swap(b, e);

    if(c > d) swap(c, d);
    if(c > e) swap(c, e);

    if(d > e) swap(d, e);

    cout << rev << "\n" << c;
    cout << c;
    }

// 답 코드에서는 배열을 사용했다. 왜 사용을 안했지 나는?
// 배열 선언 후 반복문을 통해 배열 입력받고 평균은 다 더한 후 /5
// 중앙값은 sort(num,num+5)를 통해 할 수 있다!

