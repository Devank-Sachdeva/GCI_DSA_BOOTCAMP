/*Take two int values from user and print greatest among them.*/

#include <iostream>

int main() {
    int a,b;
    std::cout << "Enter First Number :";
    std::cin >> a;
    std::cout << "Enter Second Number :";
    std::cin >> b;
    std::cout << '\n';
    if (a>b) {
        std::cout << "Bigger number :" << a << '\n';
    } else if (b>a) {
        std::cout << "Bigger number :" << b << '\n';
    } else {
        std::cout << "Numbers are equal";
    }
    return 0;
}
