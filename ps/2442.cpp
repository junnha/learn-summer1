#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n-i; j++) {
            std::cout << " ";
        }   for(int k=1;k<2*i;k++) {
                std::cout << "*";
            }
        std::cout << '\n';
    }
}