/*Write a C program to print all alphabets from a to z. - using while loop*/

#include <iostream>

int main() {
    char character = 'a';
    while (1){
        std::cout << character << '\n';
        if (character++ == 'z') break;
    }
    return 0;
}
