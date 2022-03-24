/*Write a C program to convert Binary to Octal number system.*/

#include <iostream>
#include <cmath>

int main() {
    long long int bin,oct=0;
    int place=0,pow=0,digit;
    std::cout << "Enter Binary Number :";
    std::cin >> bin;

    while (bin!=0){
        digit = bin % 1000;
        int power =0,final=0;
        while (digit !=0){
            place = digit % 10;
            final += place*(std::pow(2,power));
            power++;
            digit /= 10;
        }
        bin /= 1000;
        oct += final * std::pow(10,pow);
        pow++;
    }
    std::cout << "Octal Number :" << oct << '\n';


    return 0;
}
