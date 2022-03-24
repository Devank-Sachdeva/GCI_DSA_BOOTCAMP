/*Write a C program to convert Decimal to Binary number system.*/

#include <iostream>
#include <cstring>

int main() {
    char bin[20];
    int decimal,rem,index=0;
    std::cout << "Enter Decimal Number :";
    std::cin >> decimal;

    while(decimal !=0){
        rem = decimal % 2;
        bin[index] = (char)(rem+48);
        decimal /= 2;
        index++;
    }
    bin[index] = '\0';
    strrev(bin);
    std::cout << "Binary Value :" << bin << '\n';
    return 0;
}
