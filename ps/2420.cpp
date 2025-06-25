#include <iostream>

int main() {
    long long x,y;
    std::cin >> x >> y;
    long long sum;
    sum = x - y;
    
    if(sum < 0) {
        sum = -sum;
    }
    std::cout << sum;
}