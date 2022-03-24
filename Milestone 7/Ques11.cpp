/*Write a C program to convert Decimal to Hexadecimal number system.*/

#include <iostream>
#include <cstring>

int main() {
    char oct[20];
    int decimal,rem,index=0;
    char alpha[]={'A','B','C','D','E','F'};
    std::cout << "Enter Decimal Number :";
    std::cin >> decimal;

    while(decimal !=0){
        rem = decimal % 16;
        if (rem <=9) {
            oct[index] = (char)(rem+48);
        } else if (rem>9){
            oct[index] = alpha[rem-10];
        }
        decimal /= 16;
        index++;
    }
    oct[index] = '\0';
    strrev(oct);
    std::cout << "Octadecimal Value :" << oct << '\n';
    return 0;
}
