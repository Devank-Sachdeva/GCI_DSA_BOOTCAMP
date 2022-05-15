// Write a C program to put even and odd elements of array in two separate array.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num],odd[num],even[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        if (arr[i] %2==0) even[i] = arr[i];
        else odd[i] = arr[i];
    }
    return 0;
}
