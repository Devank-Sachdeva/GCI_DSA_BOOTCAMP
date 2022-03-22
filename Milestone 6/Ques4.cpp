/*Write a C program to print all Strong numbers between 1 to n.*/

#include <iostream>

int fact(int number);
int main() {
    int num,sum,last,limit;
    std::cout << "Enter Limit :";
    std::cin >> limit;
    std::cout << "Strong Numbers :";

    for (int num = 1; num <= limit; num++) {
        int temp = num;
        sum = 0;
        while (temp !=0){
            last = temp%10;
            sum += fact(last);
            temp /=10;
        }
        if (num == sum) std::cout << num << " ";
    }
    return 0;
}

int fact(int number){
    int prod=1;
    for (int i = 1; i <= number; i++) {
        prod*= i;
    }
    return prod;
}
