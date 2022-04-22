// Define a function that returns the product of two numbers entered by user

#include <iostream>
using namespace std;

int prod(int a,int b);

int main(){
    int a,b,result;
    cout << "Enter Numbers to Multiply :";
    cin >> a >> b;
    result = prod(a,b);
    cout << "Result is :" << result;
    return 0;
}

int prod(int a,int b){
    return a*b;
}
