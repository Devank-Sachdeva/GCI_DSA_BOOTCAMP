// Write a program to find the sum and product of all elements of an array.

#include <iostream>
using namespace std;

int main(){
    int arr[10],sum=0,prd=1;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number :";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        sum+= arr[i];
        prd*= arr[i];
    }
    cout << "Sum :" << sum;
    cout << "Product" << prd;
    return 0;
}
