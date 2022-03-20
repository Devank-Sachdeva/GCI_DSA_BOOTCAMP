/*Write a C program to find all factors of a number.*/

#include <iostream>

int main() {
    int num;
    std::cout << "Enter Number :";
    std::cin >> num;
    std::cout << "Factors :" ;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            std::cout << i << " ";
        }
    }
    return 0;
}
