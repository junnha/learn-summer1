#include <iostream>
#include <algorithm>
using namespace std;

    int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    long long a, b;
    cin >> a >> b;
        if (a > b) swap(a,b);
        if (a == b || b - a == 1) cout << 0;
        else {
            cout << b - a - 1 << "\n";
        for(long long i = a+1; i < b; i++)
        cout << i << " ";
  }     
}

// 일단 x,y 입력받고,
// 사이에 있는 개수는 뭐 y-x-1 근데 if (a == b || b - a == 1) cout << 0; 이걸 안해서 틀린 듯
// 맞은 것 같은데 안됐던 문제