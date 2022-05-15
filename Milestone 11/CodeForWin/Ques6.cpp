// Write a C program to count total number of even and odd elements in an array.

#include <iostream>
using namespace std;
int main(){
    int num,counte=0,counto=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        if (arr[i] %2==0) counte+=1;
        else counto+=1;
    }
    cout << "Number of odd numbers :" << counto <<'\n';
    cout << "Number of even numbers :" << counte <<'\n';

    return 0;
}
