#include <iostream>

int main() {
    int h,m;

    std::cin >> h >> m;
    int new_m;
    int new_h;

    if(m >= 45) {
        new_m = m - 45;
        new_h = h;
    } else if (m < 45) {
        new_m = m + 15;
        if(h==0) {
            new_h = 23;
        } else {
            new_h = h-1;
        }
    }

    if (new_m == 60) {
        new_m = 0;
    }

    std::cout << new_h << " " << new_m;

    return 0;
}