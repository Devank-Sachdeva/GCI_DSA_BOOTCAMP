// Write a C program to find reverse of an array.

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
    cout << "Reversed Array :" << '\n';
    for (int i = num; i >=0; i--) {
        cout << arr[i] << ' ';
    }
    return 0;
}
