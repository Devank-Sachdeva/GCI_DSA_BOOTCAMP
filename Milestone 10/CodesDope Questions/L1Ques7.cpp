// Define a function to find out if number is prime or not

#include <iostream>
using namespace std;
string check (int a);
int main(){
    int a;
    cout << "Enter Number :";
    cin >> a;
    cout << check(a);
    return 0;
}
string check (int a){
    for (int i = 2; i < a; i++) {
        if (a%i==0) return "False";
    }
    return "True";
}
