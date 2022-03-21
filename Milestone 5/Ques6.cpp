/*Write a C program to print all Armstrong numbers between 1 to n.*/

#include <iostream>

int main() {
    int num,sum,last,temp,limit;
    std::cout << "Enter Limit :";
    std::cin >> limit;
    std::cout << "Armstrong Numbers :";

    for (int num = 0; num <= limit; num++) {
        temp = num;
        sum = 0;
        while (temp != 0){
            last = temp % 10;
            sum += last*last*last;
            temp /=10;
        }
        if (sum == num) std::cout << num << " ";
    }
    return 0;
}
