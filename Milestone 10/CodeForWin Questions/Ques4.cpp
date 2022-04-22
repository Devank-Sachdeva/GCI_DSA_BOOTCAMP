// Write a C program to check whether a number is even or odd using functions.

#include <iostream>
using namespace std;

string check(int num);
int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << num << " is " << check(num);
    return 0;
}
string check(int num){
    if (num%2==0) return "Even";
    else return "Odd";
}
