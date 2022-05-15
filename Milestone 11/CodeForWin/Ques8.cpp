// Write a C program to copy all elements from an array to another array.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num],arr1[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        arr1[i] = arr[i];
    }
    cout << "Copied Array :" << '\n';
    for (int i = 0; i < num; i++) {
        cout << arr1[i] << ' ';
    }
    return 0;
}
