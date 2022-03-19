/*Write a C program to calculate sum of digits of a number.*/

#include <iostream>

int main() {
    int temp,num,sum=0;
    std::cout << "Enter Number :";
    std::cin >> num;
    temp = num;
    while (temp !=0) {
        sum +=(temp%10);
        temp/=10;
    }
    std::cout << "Sum is :" << sum << '\n';
    return 0;
}
