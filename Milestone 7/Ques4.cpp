/*Write a C program to convert Binary to Decimal number system.*/

#include <iostream>
#include <cmath>

int main() {
    long long int bin,oct=0;
    int power=0,digit,final=0;
    std::cout << "Enter Binary Number :";
    std::cin >> bin;

    while (bin!=0){
        digit = bin % 10;
        final += digit*(std::pow(2,power++));
        bin /= 10;
    }
    std::cout << "Decimal Number :" << final << '\n';
    return 0;
}
