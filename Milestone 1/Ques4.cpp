/*Write a program to check whether a number is negative, zero, positive?*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter number to check :";
    std::cin >> n;
    std::cout << '\n';
    if (n<0) {
        std::cout << n << " is negative" <<'\n';
    } else if (n==0) {
        std::cout << n << " is zero" << '\n';
    } else {
        std::cout << n << " is positive" << '\n';
    }
    return 0;
}
