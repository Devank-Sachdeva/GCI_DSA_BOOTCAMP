// Write a C program to find second largest element in an array.

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
    int large=arr[0],large2=arr[0];
    for (int i = 0; i < num; i++) {
        if (arr[i] > large) large = arr[i];
    }
    for (int i = 0; i < num; i++) {
        if (arr[i] == large) continue;
        else if (arr[i] >large2) large2 = arr[i];
    }
    cout << '\n' <<"2nd Largest Number :" << large2;
    return 0;
}
