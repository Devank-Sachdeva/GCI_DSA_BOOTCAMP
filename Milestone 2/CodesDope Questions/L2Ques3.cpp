/*A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895*/

#include <iostream>

int main() {
    int first,second,third,fourth,number,reverse;
    std::cout << "Enter a four digit number :";
    std::cin >> number;

    fourth = (number % 10);
    third = ((number/10) % 10);
    second = ((number/100) % 10);
    first = ((number/1000) % 10);
    reverse = (fourth*1000) + (third*100) + (second*10) + (first);
    std::cout << "Reversed :" << reverse << '\n';
    return 0;
}
