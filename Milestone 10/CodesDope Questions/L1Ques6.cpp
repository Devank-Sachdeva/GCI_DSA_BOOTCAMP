// A person is elligible to vote if his/her age is greater than or equal to 18.
// Define a function to find out if he/she is elligible to vote.

#include <iostream>
using namespace std;
string check (int a);
int main(){
    int a;
    cout << "Enter Age :";
    cin >> a;
    cout << check(a);
    return 0;
}
string check (int a){
    if (a>17) return "Eligible";
    else return "Not Eligible";
}
