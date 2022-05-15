// Write a C program to print all negative elements in an array.

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
    cout << "Negetive elements of array :" << '\n';
    for (int i = 0; i < num; i++) {
        if (arr[i] < 0) cout << arr[i] << ' ';
    }
    return 0;
}
