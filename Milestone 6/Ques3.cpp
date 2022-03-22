/*Write a C program to check whether a number is Strong number or not.*/

#include <iostream>

int fact(int number);
int main() {
    int num,sum=0,last;
    std::cout << "Enter Number :";
    std::cin >> num;
    int temp = num;
    while (temp !=0){
        last = temp%10;
        sum += fact(last);
        temp /=10;
    }
    if (num == sum) std::cout << num << " is a Strong Number" << '\n';
    else std::cout << num << " is not a Strong Number" << '\n';
    return 0;
}

int fact(int number){
    int prod=1;
    for (int i = 1; i <= number; i++) {
        prod*= i;
    }
    return prod;
}
