// Write a C program to find maximum and minimum between two numbers using functions.

#include <iostream>
using namespace std;

void check(int num1,int num2);
int main(){
    int num1,num2;
    cout << "Enter two number to check :";
    cin >> num1 >> num2;
    check(num1,num2);
    return 0;
}

void check(int num1,int num2){
    if(num1>num2) {
        cout << "Maximum :" << num1 << '\n';
        cout << "Minimum :" << num2;
    }
    else if (num2>num1){
        cout << "Maximum :" << num2 << '\n';
        cout << "Minimum :" << num1;
    }
    else cout << "Both are Equal" << '\n';
}
