#include <iostream>

int main() {

    int x,y;
    std::cin >> x;
    long long factorial = 1;

    for(int i = 1; i<=x; i++) {
        factorial = factorial * i;
    }
    std::cout << factorial;

    return 0;
}

/*팩토리얼은 결국 재귀인 것인데..*/