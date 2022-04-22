// Write a C program to find cube of any number using function.

#include <iostream>
using namespace std;

int cube(int num);
int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << "Cube Of " << num << " :" << cube(num);
    return 0;
}

int cube(int num){
    return num*num*num;
}
