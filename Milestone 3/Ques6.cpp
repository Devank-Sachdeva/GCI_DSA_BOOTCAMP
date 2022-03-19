/*Write a C program to enter a number and print its reverse.*/

#include <iostream>

int main() {
    int temp,num,rev;
    std::cout << "Enter Number :";
    std::cin >> num;
    temp = num;
    std::cout << "Reverse is :";
    while (temp !=0) {
        rev = temp%10;
        temp/=10;
        std::cout << rev;
    }
    return 0;
}
