/*Write a C program to calculate product of digits of a number.*/

#include <iostream>

int main() {
    int temp,num,prod=1;
    std::cout << "Enter Number :";
    std::cin >> num;
    temp = num;
    while (temp !=0) {
        prod *=(temp%10);
        temp/=10;
    }
    std::cout << "Product is :" << prod << '\n';
    return 0;
}
