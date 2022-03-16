/*Write a program to print a maximum of two numbers?*/

#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cout << "Enter First Number :";
    cin >> n1;
    cout << "Enter Second Number :";
    cin >> n2;
    cout << '\n';
    if (n1>n2) {
        cout << "Bigger number :" << n1 << '\n';
    } else if (n2>n1) {
        cout << "Bigger number :" << n2 << '\n';
    } else {
        cout << "Numbers are equal";
    }
    return 0;
}
