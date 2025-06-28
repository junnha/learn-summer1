#include <iostream>
#include <string>

int main() {
    int a,b,c;
    std::cin >> a >> b >> c;
    int x;
    x= a*b*c;
    std::string s = std::to_string(x);
    
    for(char n='0';n<='9';n++) {
        int cnt = 0;
            for(auto c:s){
                if(c==n) 
                cnt++;
            }
    std::cout << cnt << '\n';
    }
}

// 알파벳 개수 세는 것을 응용해보았다(10808번)
// 정수 x를 문자열로 바꾸고 문자로 0 9까지 반복
// 문자열 s안에 있는 문자들을 c로 꺼내서 n과 비교함 n==c 이면 cnt++