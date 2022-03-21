/*Write a C program to check whether a number is Armstrong number or not.*/

#include <iostream>

int main() {
    int num,sum=0,last,temp;
    std::cout << "Enter Number :";
    std::cin >> num;
    temp = num;
    while (temp != 0){
        last = temp % 10;
        sum += last*last*last;
        temp /=10;
    }
    if (sum == num) std::cout << num<< " is Armstrong Number " << '\n';
    else std::cout << num << " is not an Armstrong Number" << '\n';
    return 0;
}
