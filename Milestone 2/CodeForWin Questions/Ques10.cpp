/*Write a C program to count number of digits in a number.*/

#include <iostream>

int main() {
    int number,count=0;
    std::cout << "Enter number :";
    std::cin >> number;
    int temp =number;
    do {
        count++;
        temp /= 10;
    } while (temp !=0);
    std::cout << "Number of digits in "<<number<< " is : " << count<< '\n';
    return 0;
}
