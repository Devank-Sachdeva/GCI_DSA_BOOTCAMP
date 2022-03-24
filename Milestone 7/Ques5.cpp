/*C program to convert binary to hexadecimal number system*/

#include <iostream>
#include <cstring>
int main(){
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
    1001, 1010, 1011, 1100, 1101, 1110, 1111};
    long long int binary, temp;
    char hex[20];
    int index=0, i, digit;

    std::cout << "Enter binary number :";
    std::cin >> binary;
    temp = binary;

    while(temp!=0){
        digit = temp % 10000;
        for(i=0; i<16; i++){
            if(hexConstant[i] == digit){
                if(i<10){
                    hex[index] = (char)(i + 48);
                } else{
                    hex[index] = (char)((i-10) + 65);
                }
                index++;
                break;
            }
        }
        temp /= 10000;
    }
    hex[index] = '\0';
    strrev(hex);
    printf("Binary number = %lld\n", binary);
    printf("Hexadecimal number = %s", hex);
    return 0;
}
