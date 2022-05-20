// Write a program to multiply array A and B of order NxL and LxM

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int rows1,cols1,rows2,cols2;
    cout << "Enter number of rows of first array:";
    cin >> rows1;
    cout << "Enter number of colums of first array:";
    cin >> cols1;
    cout << "Enter number of rows of second array:";
    cin >> rows2;
    cout << "Enter number of colums of second array:";
    cin >> cols2;
    if (cols1!=rows2) {
        cout << "condition for multiplication didn't match" << '\n';
        return(1);
    }
    int arr1[rows1][cols1],arr2[rows2][cols2];
    cout << "Enter elements of first array " << '\n';
    for (int i= 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements of second array " << '\n';
    for (int i= 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr2[i][j];
        }
    }

    int mul[rows1][cols2];
    cout << "Resultant Matrix " << '\n';
    for(int i= 0;i < rows1;i++){
        for(int j= 0;j < cols2;j++){
            mul[i][j]=0;
            for(int k= 0;k< cols1;k++){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        cout << mul[i][j] << ' ';
        }
    cout  << '\n';
    }
    return 0;
}
