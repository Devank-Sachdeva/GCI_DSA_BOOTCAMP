/*Write a C program to convert Octal to Hexadecimal number system.*/

#include <iostream>
#include <cmath>
#include <cstring>

int main() {
    char hexList[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char hex[50];
    long long int bin,oct=0,decimal=0;
    int power=0,digit,index=0,rem;
    std::cout << "Enter Octal Number :";
    std::cin >> bin;

    while (bin!=0){
        digit = bin % 10;
        decimal += digit*(std::pow(8,power++));
        bin /= 10;
    }

    while(decimal !=0){
        rem = decimal % 16;
        hex[index] = hexList[rem];
        decimal /= 16;
        index++;
    }
    hex[index] = '\0';
    strrev(hex);
    std::cout << "Hexadecimal Value :" << hex << '\n';
    return 0;
    }
