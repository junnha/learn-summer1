#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> count(10, 0);

    for (char c : s) {
        count[c - '0']++;
    }

    // 6과 9는 함께 계산
    count[6] = (count[6] + count[9] + 1) / 2;

    // 최댓값 출력
    cout << *max_element(count.begin(), count.end()) << "\n";
    return 0;
}

//좀더공부해볼필요가있다.