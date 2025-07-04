#include <bits/stdc++.h>
using namespace std;

int main () {
    string s; 
    cin >> s; // 문자열 입력

    list<char> L; // 리스트 생성

    for(char a:s) {
        L.push_back(a); // pushback으로 리스트에 넣기
    }

    auto cursor = L.end(); // 커서를 마지막 문자 뒤에 넣기

    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        char q;
        cin >> q;
        if(q=='L') {
            if(cursor !=L.begin()) {
                cursor--;
            }
        } else if (q=='D') {
            if(cursor !=L.end()) {
                cursor++;
            }
        } else if (q=='B') {
            if(cursor !=L.begin()) {
                cursor--;
                cursor =L.erase(cursor);
            }
        }
    }
}