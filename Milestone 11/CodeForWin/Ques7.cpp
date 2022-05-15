// Write a C program to count total number of negative elements in an array.

#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
        if (arr[i] <0) count+=1;
    }
    cout << "Number of negetive numbers :" << count;
    return 0;
}
