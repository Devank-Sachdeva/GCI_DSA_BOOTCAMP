/*Write a C program to find all prime factors of a number.*/

#include <iostream>

int main() {
    int num,count=0;
    std::cout << "Enter Number :";
    std::cin >> num;
    std::cout << "Prime Factors :" ;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            for (int j = 1; j <=i; j++) {
                if (i % j == 0) count++;
            }
            if (count < 3) std::cout << i << " ";
        }
        count=0;
    }
    return 0;
}
