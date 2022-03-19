/*Write a C program to check whether a number is palindrome or not.*/

#include <iostream>
#include <cmath>

int main() {
    int num,rev=0,count=0;
    std::cout << "Enter Number :";
    std::cin >> num;
    int temp1 = num;
    int temp2 = num;

    while (temp2 !=0) {
        count++;
        temp2/=10;
    }
    int i = (count-1);
    while (temp1 !=0){
        rev += ((temp1 % 10) * pow(10,i--));
        temp1/=10;
    }
    if (num == rev) std::cout << num << " is palindrome" << '\n';
    else std::cout << num << " is not a palindrome" << '\n';

    return 0;
}
