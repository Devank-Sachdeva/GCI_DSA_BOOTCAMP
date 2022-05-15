// Write a C program to count total number of duplicate elements in an array.

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
    }
    for (int i = 0; i < num; i++) {
        for (int j = i+1; j < num; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    cout << "Total Number of duplicate numbers :" << count;
    return 0;
}
