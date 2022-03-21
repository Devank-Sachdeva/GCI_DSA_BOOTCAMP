/*Write a C program to check whether a number is Prime number or not.*/

#include <iostream>

int main() {
    int num,temp=1;
    std::cout << "Enter Number :";
    std::cin >> num;
    for (int i = 1; i < num; i++) {
        if (num % i == 0){
            temp = i;
        }
    }
    if (temp == 1) std::cout << num << " is Prime" << '\n';
    else std::cout << num << " is not Prime" << '\n';
    return 0;
}
