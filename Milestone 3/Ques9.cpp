/*Write a C program to enter a number and print it in words.*/

#include <iostream>
#include <cmath>

int main() {
    long long int num;
    std::cout << "Enter number :";
    std::cin >> num;
    std::cout  << '\n';
    int temp1,c,count=0;;
    long long int temp2 = num;

    while (temp2 !=0) {
        count++;
        temp2/=10;
    }
    int i = (count-1);
    while (i>=0){
        temp2 = num / (pow(10,i--));
        c = temp2%10;
        switch (c) {
            case 1:
               std::cout << "one ";
               break;
            case 2:
                std::cout << "two ";
                break;
            case 3:
                std::cout << "three ";
                break;
            case 4:
                std::cout << "four ";
                break;
            case 5:
                std::cout << "five ";
                break;
            case 6:
                std::cout << "six ";
                break;
            case 7:
                std::cout << "seven ";
                break;
            case 8:
                std::cout << "eight ";
                break;
            case 9:
                std::cout << "nine ";
                break;
            default:
                std::cout << "zero ";
                break;
        }
    }
    return 0;
}
