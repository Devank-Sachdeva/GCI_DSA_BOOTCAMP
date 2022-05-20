// Write a user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array.
//
// e.g.,
// 2 3 1 5 0                               2 3 1 5 0
// 7 1 5 3 1                                 1 5 3 1
// 2 5 7 8 1   Output will be:                 1 7 8
// 0 1 5 0 1                                     0 1
// 3 4 9 1 5                                       5


#include <iostream>
using namespace std;
void upperhalf(int*,int,int);
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
    upperhalf((int*)arr,rows,cols);
    return 0;
}
void upperhalf(int * arr,int rows,int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j<i) cout << ' ' << ' ';
            else cout << *(arr+i*cols+j) << ' ';
        }
        cout << '\n';
    }
}
