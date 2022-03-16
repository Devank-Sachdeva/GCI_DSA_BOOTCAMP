/*Write a program to check whether a number is even or odd?*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number to check :";
    cin >> n;
    cout << '\n';
    if (n%2==0) {
        cout <<n << " is even" << '\n';
    } else {
        cout <<n << " is odd" << '\n';
    }
    return 0;
}
