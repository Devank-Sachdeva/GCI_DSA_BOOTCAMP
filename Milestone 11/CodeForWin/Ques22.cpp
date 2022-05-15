// Write a C program to right rotate an array.

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
void rotatearr(int arr[],int len){
    int last = arr[len-1];
    for (int i = len-1; i >0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}
