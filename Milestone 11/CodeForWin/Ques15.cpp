// Write a C program to merge two array to third array.

#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter number of elements of array 1 :";
    cin >> num1;
    int arr1[num1];
    for (int i = 0; i < num1; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr1[i];
    }
    cout << "Enter number of elements of array 2 :";
    cin >> num2;
    int arr2[num2];
    for (int i = 0; i < num2; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr2[i];
    }
    int merge = num1+num2;
    int mergeArr[merge];
    for (int i = 0; i < merge; i++) {
        if (i <num1) mergeArr[i] = arr1[i];
        else mergeArr[i] = arr2[i-num1];
    }
    cout << '\n' << "Final Array :" << '\n';
    for (int i = 0; i < merge; i++) {
        cout << mergeArr[i] << ' ';
    }
    return 0;
}
