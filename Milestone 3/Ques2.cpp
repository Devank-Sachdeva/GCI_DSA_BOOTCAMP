/*Write a C program to find sum of first and last digit of a number.*/

#include <iostream>

int main() {
    int num,first,last;
    std::cout << "Enter Number :";
    std::cin >> num;
    last = num %10;
    while(num != 0){
        first = num %10;
        num /=10;
    }
    std::cout << "First digit :" << first << '\n';
    std::cout << "Last digit :" << last << '\n';
    std::cout << "Sum :" <<first+last<< '\n';
    return 0;
}
