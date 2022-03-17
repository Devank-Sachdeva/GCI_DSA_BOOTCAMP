/*Write a C program to print multiplication table of any number.*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter number :";
    std::cin >> n;
    for (int i = 1; i < 11; i++) {
        std::cout << n << " X " << i << " = " << (n*i) <<'\n';
    }
    return 0;
}
