// Write a program to add two array A and B of size m x n.

#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout << "Enter number of rows :";
    cin >> rows;
    cout << "Enter number of colums :";
    cin >> cols;
    int arr1[rows][cols],arr2[rows][cols];
    cout << "Enter elements of first array " << '\n';
    for (int i= 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements of second array " << '\n';
    for (int i= 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr2[i][j];
        }
    }
    cout << "Resultant array :" << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr1[i][j]+arr2[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
int mul[n1][n2];
        printf("Resultant Matrix ->\n");
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                mul[i][j]=0;
                for(int k=0;k<n2;k++){
                    mul[i][j]+=arr1[i][k]*arr2[k][j];
                }
            printf("%d\t",mul[i][j]);
            }
        printf("\n");
