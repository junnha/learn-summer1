#include <iostream>
#include <algorithm>

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
    arr[i] = i + 1;
        }

    for (int t = 0; t < 10; t++) {
        int x, y;
        std::cin >> x >> y;
        int l = x - 1, r = y - 1;
        while (l < r) std::swap(arr[l++], arr[r--]);
    }
    for (int i = 0; i < 20; i++) {
        std::cout << arr[i] << ' ';
        }
}

// x=5,y=10
// a=5 ,b=10
// 10 9 8 7 6 5 가 나는 arr4 5 6 7 8 9에 들어가면 좋겟어
// i가 10 9 8 7 6 5 잖아? a = 5 b = 10 이야
// 한번 뒤집는 건 했는데 이걸 배열을 저장하고 10번 돌려야해
// 결국에 swap,reverse를 알아야되는 문제였네
// 내가 한 건 그냥 덮어쓰기엿군