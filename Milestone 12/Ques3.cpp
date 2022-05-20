// Write a user-defined function in C++ to display the multiplication of
// row element of two-dimensional array A[4][6] containing integer.

#include <iostream>
using namespace std;

int main(){
    int arr[4][6]={0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr[i][j];
        }
    }
    int multi[4]={1,1,1,1};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            multi[i]*=arr[i][j];
        }
        cout << "Product of row" << i+1 << multi[i] << '\n';
    }

    return 0;
}
