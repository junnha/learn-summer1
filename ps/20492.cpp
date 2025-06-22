#include<iostream>

int main() {
    long long x,a,b,c,d;
    std::cin >> x;
    a = x - (x * 22 / 100);
    b = x * 20 / 100;
    c = b * 22 / 100;
    d = x - c;
    std::cout << a << " " << d;
}