/*Write a C program to find LCM of two numbers.*/

#include <iostream>
#include <cstdlib>

int main() {
    int num1,num2,final;
    std::cout << "Enter First Number :";
    std::cin >> num1;
    std::cout << "Enter Second Number :";
    std::cin >> num2;
    final = num1*num2;
    int temp1,temp2;

    for (int i = 1; i <= num2; i++) {
        for (int j = 1; j <= num1; j++) {
            temp1 = num1*i;
            temp2 = num2*j;
            if (temp1 == temp2) {
                std::cout << "LCM is :" << temp1 << '\n';
                exit(0);
            }
        }
    }
    return 0;
}
