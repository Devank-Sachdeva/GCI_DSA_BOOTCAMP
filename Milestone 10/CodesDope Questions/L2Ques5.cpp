// Define a function to calculate power of a number raised to other i.e.
// ab using recursion where the numbers 'a' and 'b' are to be entered by the user

#include <iostream>
using namespace std;

int power(int base,int pow);
int main(){
    int a,b;
    cout << "Enter Base and Power :";
    cin >> a >>b;
    cout << "Result is :" << power(a,b);
    return 0;
}
int power(int base,int pow){
    if (pow==1) return base;
    else return(base*power(base,pow-1));
}
