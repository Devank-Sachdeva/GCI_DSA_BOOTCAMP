/*Write a C program to find HCF (GCD) of two numbers.*/

#include <iostream>

int main() {
    int num1,num2,temp;
    std::cout << "Enter First Number :";
    std::cin >> num1;
    std::cout << "Enter Second Number :";
    std::cin >> num2;

    for (int i = 1; i < num1; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            temp = i;
        }
    }
    std::cout << "HCF of "<< num1 << " & " << num2 << " is :" << temp << '\n';
    return 0;
}
