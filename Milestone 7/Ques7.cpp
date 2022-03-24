/*Write a C program to convert Octal to Decimal number system.*/

#include <iostream>
#include <cmath>

int main() {
    long long int bin,oct=0,final=0;
    int power=0,digit;
    std::cout << "Enter Octal Number :";
    std::cin >> bin;

    while (bin!=0){
        digit = bin % 10;
        final += digit*(std::pow(8,power++));
        bin /= 10;
    }
    std::cout << "Decimal Number :" << final << '\n';
    return 0;
}
