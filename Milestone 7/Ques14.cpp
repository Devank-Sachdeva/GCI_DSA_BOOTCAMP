/*Write a C program to convert Hexadecimal to Decimal number system.*/

#include <iostream>
#include <cmath>

int main() {
    char hex[20];
    long long unsigned int decimal=0;
    int len=0,i=0,power=0,num;
    std::cout << "Enter Hexadecimal Number :";
    std::cin >> hex;

    while (hex[i++]) {
        len++;
    }
    for (int j = len-1; j >=0; j--) {
        if (hex[j] <= '9' && hex[j] >= '0'){
            num = ((int)hex[j]-48);
            decimal += num*std::pow(16,power++);
        } else if (hex[j] >= 'A' && hex[j] <= 'F'){
            num = ((int)hex[j]-55);
            decimal += num*std::pow(16,power++);
        } else if (hex[j] >= 'a' && hex[j] <= 'f') {
            num = ((int)hex[j]-87);
            decimal += num*std::pow(16,power++);
        }
    }
    std::cout << "Decimal Value :"<< decimal << '\n';
    return 0;
}
