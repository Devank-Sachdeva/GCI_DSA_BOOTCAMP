/*Write a C program to convert Octal to Binary number system.*/

#include <iostream>

int main() {
    long long unsigned int bin=0;
    int octal,place=1,last;
    int binList[]={0,1,10,11,100,101,110,111};
    std::cout << "Enter Octal Number :";
    std::cin >> octal;
    while (octal !=0) {
        last = octal % 10;
        std::cout << binList[last] << '\n';
        bin += binList[last]*place;
        place *= 1000;
        octal /=10;
        std::cout << bin << '\n';
    }
    std::cout << "Binary value :" << bin;
    return 0;
}
