// Initialize and print all elements of a 2D array.

#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout << "Enter number of rows :";
    cin >> row;
    cout << "Enter number of columns :";
    cin >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter Elemeent [" << i <<"][" << j << "] :";
            cin >> arr[i][j];
        }
    }
    cout << '\n' <<"Array :" << '\n';
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
