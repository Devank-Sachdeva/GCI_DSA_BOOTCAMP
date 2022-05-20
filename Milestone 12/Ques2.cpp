// Write user defined functions for square matrix to calculate :
// Left diagonal sum
// Right diagonal sum

#include <iostream>
using namespace std;
int leftsum(int*,int);
int rightsum(int*,int);
int main(){
    int choice,m;
    cout << "Enter number of rows and columns :";
    cin >> m;
    int arr[m][m]={0};
    for (int i= 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> arr[i][j];
        }
    }
    cout <<"*******Matrix program*******" << '\n';
    cout <<"Menu" << '\n';
    cout << "1. Left diagonal sum" << '\n';
    cout << "2. Right diagonal sum" << '\n';
    cout << '\n' << "Enter your choice :" ;
    cin >> choice;


    switch (choice) {
        case 1:
            cout << "Left Sum = "<<leftsum((int*)arr,m);
            break;
        case 2:
            cout << "Right sum = "<<rightsum((int*)arr,m);
            break;
        default:
            cout << "Wrong number entered !" << endl;
    }
    return 0;
}
int leftsum(int * arr,int rows){
    int sum=0;
    for (int i = 0; i < rows; i++) {
        sum+= *(arr+i*rows+i);
    }
    return sum;
}
int rightsum(int * arr,int rows){
    int sum=0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i+j==rows-1) sum+= *(arr+i*rows+j);
        }
    }
    return sum;
}
