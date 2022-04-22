// Write a program to print the sum of two numbers entered by user by defining your own function.

#include <iostream>
using namespace std;

int add(int a,int b);

int main(){
    int a,b,result;
    cout << "Enter Numbers to add :";
    cin >> a >> b;
    result = add(a,b);
    cout << "Result is :" << result;
    return 0;
}

int add(int a,int b){
    return a+b;
}
