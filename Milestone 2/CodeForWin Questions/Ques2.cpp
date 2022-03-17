/*Write a C program to print all natural numbers in reverse (from n to 1). */

#include <iostream>

int main() {
    int n;
    std::cout << "Enter number :";
    std::cin >> n;
    while (n>0) {
        std::cout << n-- << '\n';
    }

    return 0;
}
