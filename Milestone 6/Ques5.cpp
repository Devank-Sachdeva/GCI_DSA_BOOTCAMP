/*Write a C program to print Fibonacci series up to n terms.*/

#include <iostream>

int main() {
    int limit,a=0,b=1,c;
    std::cout << "Enter limit :";
    std::cin >> limit;
    std::cout << "Fibonacci Series :" << a << ' '<< b << ' ';
    for (int i = 1; i < limit-1; i++) {
        c=a+b;
        a=b;
        b=c;
        std::cout << c << " ";
    }
    return 0;
}
