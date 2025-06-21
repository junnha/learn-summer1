#include <iostream>
#include <cstring>

bool isPalindrome(std::string s) {
    int i = 0;
    int j = (int)s.length() - 1;

    while (i < j) {
        if (s[i] != s[j]) return false;
        ++i;
        --j;
    }
    return true;
}

int main() {
    std::string input;
    while (1) {
        std::cin >> input;
        if (input == "0") break;

        if (isPalindrome(input)) {
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
    }
    return 0;
}