/*Write a C program to print all odd number between 1 to 100.*/

#include <iostream>

int main() {
    int i=0;
    while (i++<=99) {
        if (i %2 ==1){
            std::cout << i << '\n';
        }
    }
    return 0;
}
