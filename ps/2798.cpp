#include <iostream>
#include <vector>

int main() {
    int n;
    double m;
    std::cin >> n >> m;

    std::vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        std::cin >> cards[i];
    }

    int max_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && sum > max_sum) {
                    max_sum = sum;
                }
            }
        }
    }

    std::cout << max_sum << std::endl;
    return 0;
}