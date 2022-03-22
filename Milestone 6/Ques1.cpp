/*Write a C program to check whether a number is Perfect number or not.*/

#include <iostream>

int main() {
    int num,sum=0;
    std::cout << "Enter Number :";
    std::cin >> num;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum+= i;
        }
    }
    if (sum == num) std::cout << num << " is a Perfect Number" << '\n';
    else std::cout << num << " is not a Perfect Number" << '\n';
    return 0;
}
