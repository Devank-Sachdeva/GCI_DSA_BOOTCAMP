/*Write a C program to find power of a number using for loop.*/

#include <iostream>

int main() {
    int num,pow,res1=1;
    double res2=1;
    std::cout << "Enter Number :";
    std::cin >> num;
    std::cout << "Enter power :";
    std::cin >> pow;

    if (pow >= 0){
        for (int i = 0; i < pow; i++) {
            res1 *= num;
        }
        std::cout << num << " raised to " << pow << " :" << res1 << '\n';
    } else if (pow <0) {
        pow *= (-1);
        for (int i = 0; i < pow; i++) {
            res2 /= num;
        }
        std::cout << num << " raised to " << (pow*(-1)) << " :" << res2 << '\n';
    }
    return 0;
}
