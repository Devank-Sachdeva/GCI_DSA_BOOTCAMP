// Write a C program to find sum of all array elements.

#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
        sum+= arr[i];
    }
    cout << "Sum :" << sum;
    return 0;
}
