// Write a C program to search an element in an array.

#include <iostream>
using namespace std;
int main(){
    int num,target;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    cout << "Enter element to find :";
    cin >> target;
    cout << '\n';
    for (int i = 0; i < num; i++) {
        if (arr[i]==target) {
            cout << "Element found at Index :" << i;
            return 0;
        }
    }
    cout << "Element not found in array" << '\n';
    return 0;
}
