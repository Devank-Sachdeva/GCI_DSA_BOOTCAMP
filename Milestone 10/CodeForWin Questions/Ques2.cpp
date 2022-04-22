// Write a C program to find diameter, circumference and area of circle using functions.

#include <iostream>
using namespace std;

double dia(double num);
double cir(double num);
double ar(double num);
int main(){
    double num;
    cout << "Enter Radius :";
    cin >> num;
    cout << "Diameter :" << dia(num) << '\n';
    cout << "Circumference :" << cir(num) << '\n';
    cout << "Area :" << ar(num);
    return 0;
}

double dia(double num){
    return 2*num;
}
double cir(double num){
    return (6.28*num);
}
double ar(double num){
    return (3.14*num*num);
}
