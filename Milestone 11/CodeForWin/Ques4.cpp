// Write a C program to find maximum and minimum element in an array.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    int small = arr[0],large = arr[0];
    for (int i = 0; i < num; i++) {
        if (arr[i] > large) large = arr[i];
        if (arr[i] < small) small = arr[i];
    }
    cout << "Largest element :" << large << '\n';
    cout << "Smallest element :" << small << '\n';
    return 0;
}
