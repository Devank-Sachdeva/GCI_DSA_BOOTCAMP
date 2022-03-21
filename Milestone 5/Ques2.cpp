/*Write a C program to print all Prime numbers between 1 to n.*/

#include <iostream>

int main() {
    int temp=1,limit;
    std::cout << "Enter Number limit :";
    std::cin >> limit;
    std::cout << "Prime Numbers :";
    for (int j = 2; j < limit; j++) {
        for (int i = 1; i < j; i++) {
            if (j% i == 0){
                temp = i;
            }
        }
        if (temp == 1) std::cout << j << " ";
    }
    return 0;
}
