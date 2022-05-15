// Write a C program to sort array elements in ascending or descending order.

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
    for (int i = 0; i < num; i++) {
        for (int j = i+1; j < num; j++) {
            if (arr[i] >arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Array :" << '\n';
    for (int i = 0; i < num; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
