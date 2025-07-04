#include<iostream>

int main() {

    int arr[42] = {};
    int x;
    for (int i = 0; i < 10; i++) {
    std::cin >> x;
    arr[x % 42] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < 42; i++) {
        if (arr[i]) {
            cnt++;
        }
    }
    std::cout << cnt;
}