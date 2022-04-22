// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

#include <iostream>
using namespace std;

double area(double r);
double cir(double r);

int main(){
    double radius,Area,Cir;
    cout << "Enter radius :" ;
    cin >> radius;
    Area = area(radius);
    Cir = cir(radius);
    cout << "Circumference is :" << Cir << '\n';
    cout << "Area is :" << Area << '\n';
    return 0;
}
double area(double r){
    return 3.14*r*r;
}
double cir(double r){
    return 6.28*r;
}
