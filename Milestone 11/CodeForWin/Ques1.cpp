// Write a C program to read and print elements of array.

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
    cout << "Array :" << '\n';
    for (int i = 0; i < num; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
