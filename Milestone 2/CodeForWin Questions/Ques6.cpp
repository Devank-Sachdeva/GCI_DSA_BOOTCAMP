/*Write a C program to find sum of all natural numbers between 1 to n.*/

#include <iostream>

int main() {
    int number,sum,i=1;
    std::cout << "Enter value :";
    std::cin >> number;

    while (i<=number) {
        sum+=i++;
    }
    std::cout << "Sum is :" << sum <<'\n';
    return 0;
}
