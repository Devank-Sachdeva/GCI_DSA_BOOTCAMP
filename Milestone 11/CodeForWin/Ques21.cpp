// Write a C program to left rotate an array.

#include <iostream>
using namespace std;
void rotatearr(int arr[],int len);
int main(){
    int num,rotate;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    cout << "Enter number of time to rotate :" << ' ';
    cin >> rotate;
    for (int i = 0; i < rotate; i++) {
        rotatearr(arr,num);
    }
    cout << "Array after rotation :" << '\n';
    for (int i = 0; i < num; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
void 88rotatearr(int arr[],int len){
    int first = arr[0];
    for (int i = 0; i < len-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[len-1] = first;
}
