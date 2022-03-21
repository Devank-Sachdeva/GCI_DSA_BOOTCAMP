/*Write a C program to find sum of all prime numbers between 1 to n.*/

#include <iostream>

int main() {
    int limit,sum=0,temp=1;
    std::cout << "Enter Number limit :";
    std::cin >> limit;
    for (int j = 2; j < limit; j++) {
        for (int i = 1; i < j; i++) {
            if (j% i == 0){
                temp = i;
            }
        }
        if (temp == 1) sum+=j;
    }
    std::cout << "Sum of Primes :" << sum << '\n';
    return 0;
}
