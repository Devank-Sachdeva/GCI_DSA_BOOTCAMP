// Write a program to print the factorial of a number by defining a function named 'Factorial'.
// Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
// 4! = 1*2*3*4 = 24
// 3! = 3*2*1 = 6
// 2! = 2*1 = 2
// Also,
// 1! = 1
// 0! = 0

#include <iostream>
using namespace std;

int fact(int num);
int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << num << "! = " << fact(num);
    return 0;
}
int fact(int num){
    if (num !=1) return (num *fact(num-1));
}
