/*Write a C program to convert Decimal to Octal number system.*/

#include <iostream>
#include <cstring>

int main() {
    char oct[20];
    int decimal,rem,index=0;
    std::cout << "Enter Decimal Number :";
    std::cin >> decimal;

    while(decimal !=0){
        rem = decimal % 8;
        oct[index] = (char)(rem+48);
        decimal /= 8;
        index++;
    }
    oct[index] = '\0';
    strrev(oct);
    std::cout << "Octadecimal Value :" << oct << '\n';
    return 0;
}
