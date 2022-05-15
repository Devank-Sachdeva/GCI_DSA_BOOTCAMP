// Write a C program to insert an element in an array.

#include <iostream>
using namespace std;
int main(){
    int num,extra,pos;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num+1];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    cout << "Enter Number to be inserted :";
    cin >> extra;
    cout << "Enter position :";
    cin >> pos;
    pos -=1;
    for (int i = pos; i < num+1; i++) {
        int next = arr[i];
        arr[i] = extra;
        extra = next;
    }
    cout << "Array :" << '\n';
    for (int i = 0; i < num+1; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
