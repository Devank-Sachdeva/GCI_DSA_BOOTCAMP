/*Write a C program to find one's complement of a binary number.*/

#include <iostream>

int main() {
    int size;
    std::cout << "Enter number of digits in binary number :";
    std::cin >> size;
    char bin[size];
    std::cout << "Enter Binary Number :";
    std::cin >> bin;
    std::cout << "One's Component : ";
    for (int i = 0; i < size; i++) {
        if (bin[i] == '1') std::cout << "0";
        else if (bin[i] == '0') std::cout << "1" ;
    }
    return 0;
}
