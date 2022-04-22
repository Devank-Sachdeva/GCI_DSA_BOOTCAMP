// Define a program to find out whether a given number is even or odd.

#include <iostream>
using namespace std;
string check (int a);
int main(){
    int a;
    cout << "Enter Number :";
    cin >> a;
    cout << a << " is " << check(a);
    return 0;
}
string check (int a){
    if (a%2==0) return "even";
    else return "odd";
}
