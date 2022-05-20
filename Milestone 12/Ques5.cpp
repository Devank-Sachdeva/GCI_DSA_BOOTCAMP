// Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]
// Example, if the array contents is
//
// 3  5  4
// 7  6  9
// 2  1  8
//
// Output through the function should be :
// Middle Row : 7 6 9
// Middle column : 5 6 1


#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout << "Enter number of rows :";
    cin >> rows;
    cout << "Enter number of colums :";
    cin >> cols;
    int arr[rows][cols]={0};
    for (int i= 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr[i][j];
        }
    }
    cout << "Middle Row :" << '\n';
    if (rows%2==0){
        for (int i = 0; i < 2*cols; i++) {
            if (i<cols) cout << arr[rows/2][i] << ' ';
            else cout << arr[rows/2+1][i-cols] << ' ';
        }
    }
    else {
        for (int i = 0; i < cols; i++) {
            cout << arr[rows/2][i] << ' ';
        }
    }
    cout << '\n' <<"Middle Columns :" << '\n';
    if (cols%2==0){
        for (int i = 0; i < 2*rows; i++) {
            if (i<rows) cout << arr[i][cols/2] << ' ';
            else cout << arr[i-rows][cols/2+1] << ' ';
        }
    }
    else {
        for (int i = 0; i < rows; i++) {
            cout << arr[i][cols/2] << ' ';
        }
    }
    return 0;
}
