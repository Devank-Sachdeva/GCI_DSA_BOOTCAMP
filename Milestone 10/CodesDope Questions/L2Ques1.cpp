// Print the multiplication table of 15 using recursion

#include <iostream>
using namespace std;
int table(int a);
int main(){
    table(1);
    return 0;
}
int table(int a){
    if (a <11){
        cout << "15 X "<< a << " = "<< 15*a << '\n';
        return table(a+1);
    }
    else return 0;
}
