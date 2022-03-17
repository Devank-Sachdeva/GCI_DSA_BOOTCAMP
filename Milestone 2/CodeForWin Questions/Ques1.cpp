/*Write a C program to print all natural numbers from 1 to n*/

#include <iostream>

int main() {
    int n,i=1;
    std::cout << "Enter number :";
    std::cin >> n;

    while (i<=n) {
        std::cout << i++ << '\n';
    }

    return 0;
}
