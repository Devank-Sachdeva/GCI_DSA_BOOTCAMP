/*Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter number :";
    std::cin >> n;
    if (n<0) {
        std::cout << "Absolute value :" << (-1*n);
    } else {
        std::cout << "Absolute Value :" << n;
    }
    return 0;
}
