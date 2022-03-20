/*Write a C program to calculate factorial of a number.*/

#include <iostream>

int main() {
    int num;
    unsigned long long fact=1;
    std::cout << "Enter Number :";
    std::cin >> num;

    if (num <0){
        std::cout << "Factorial of " << num << " Does not exists!"<<'\n';
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        std::cout << "Factorial of "<< num << " :" << fact << '\n';
    }
    return 0;
}
