/*Write a C program to find sum of all odd numbers between 1 to n.*/

#include <iostream>

int main() {
    int number,sum,i=1;
    std::cout << "Enter value :";
    std::cin >> number;

    while (i<=number) {
        if (i%2==1) {
            sum+=i;
        }
        i++;
    }
    std::cout << "Sum is :" << sum <<'\n';
    return 0;
}
