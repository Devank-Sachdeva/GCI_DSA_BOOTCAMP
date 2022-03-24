/*Write a C program to find two's complement of a binary number.*/

#include <iostream>

int main() {
    int carry=1,size;
    std::cout << "Enter number of digits in binary number :";
    std::cin >> size;
    char org[size],one[size],two[size];
    std::cout << "Enter Binary Number :";
    std::cin >> org;

    for (int i = 0; i < size; i++) {
        if (org[i] == '0') {
            one[i] = '1';
        } else if (org[i] == '1') {
            one[i] = '0';
        }
    }
    one[size] = '\0';
    for (int j = size-1; j >= 0; j--) {
        if (one[j] == '1' && carry == 1) {
            two[j] = '0';
        } else if (one[j] == '0' && carry == 1){
            two[j] = '1';
            carry = 0;
        } else {
            two[j] = one[j];
        }
    }
    two[size]= '\0';
    std::cout << "Twos complement :" << two << '\n';
    return 0;
}
