#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    int arr[10000];

    for (int i = 0; i < m; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        if (arr[i] < n) {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}