/*Write a C program to print all ASCII character with their values.*/

#include <iostream>

int main() {
    char c=-128;
    while (1){
        int a = c;
        std::cout << "ASCII value of "<< c << " is :"<< a << '\n';
        c++;
        if (a==127) break;
    }
    return 0;
}
