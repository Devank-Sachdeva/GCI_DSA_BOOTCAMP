// Write a C program to delete an element from an array at specified position.

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
    cout << "Enter Index of element to delete :";
    cin >> target;
    target -=1;
    for (int i = target; i < num; i++) {
        if (i == num-1) arr[i] = '\0';
        else {
            arr[i] = arr[i+1];
        }
    }
    cout << "Array :" << '\n';
    for (int i = 0; i < num-1; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
