/*Write a C program to print all Perfect numbers between 1 to n.*/

#include <iostream>

int main() {
    int num,limit,sum=0;
    std::cout << "Enter Limit :";
    std::cin >> limit;
    std::cout << "Perfect Numbers :";
    for (int num = 1; num <= limit; num++) {
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum+= i;
            }
        }
        if (sum == num) std::cout << num << " ";
    }
    return 0;
}
