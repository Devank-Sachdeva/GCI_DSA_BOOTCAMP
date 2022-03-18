/*Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).*/

#include <iostream>

int main() {
    char character;
    std::cout << "Enter character :";
    std::cin >> character;

    if (character >= 'A' && character <= 'Z' ) {
        std::cout << character << " is uppercase" << '\n';
    } else if (character >= 'a' && character <= 'z' ) {
        std::cout << character << " is lowercase" << '\n';
    } else {
        std::cout << "Invalid input" << '\n';
    }
    return 0;
}
