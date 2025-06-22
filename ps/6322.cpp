#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    double a, b, c;
    int t = 1;
    while (1) {
        std::cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        printf("Triangle #%d\n", t++);

        if (a == -1) {
            if (c <= b) {
                printf("Impossible.\n\n");
                continue;
            }
            a = std::sqrt(c * c - b * b);
            printf("a = %.3lf\n\n", a);
        }
        else if (b == -1) {
            if (c <= a) {
                printf("Impossible.\n\n");
                continue;
            }
            b = std::sqrt(c * c - a * a);
            printf("b = %.3lf\n\n", b);
        }
        else if (c == -1) {
            c = std::sqrt(a * a + b * b);
            printf("c = %.3lf\n\n", c);
        }
    }
    return 0;
}