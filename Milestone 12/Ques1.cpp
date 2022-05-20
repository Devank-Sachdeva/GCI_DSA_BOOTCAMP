// Write a menu driven C++ program to do following operation on two dimensional array A of size m x n.
// You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. The options are:
// To input elements into matrix of size m x n
// To display elements of matrix of size m x n
// Sum of all elements of matrix of size m x n
// To display row-wise sum of matrix of size m x n
// To display column-wise sum of matrix of size m x n
// // To create transpose of matrix B of size n x m

#include <iostream>
using namespace std;
void inputarray(int*,int, int);
void displayarray(int*,int,int);
int sumarray(int*,int,int);
void rowwise(int*,int,int);
void colwise(int*,int,int);
void transpose(int*,int*,int,int);

int main(){
    int choice,m,n;
    cout << "Enter number of rows :";
    cin >> m;
    cout << "Enter number of columns :";
    cin >> n;
    cout <<"*******Matrix program*******" << '\n';
    cout <<"Menu" << '\n';
    cout << "1. To input elements into matrix of size m x n" << '\n';
    cout << "2. To display elements of matrix of size m x n" << '\n';
    cout << "3. Sum of all elements of matrix of size m x n" << '\n';
    cout << "4. To display row-wise sum of matrix of size m x n" << '\n';
    cout << "5. To display column-wise sum of matrix of size m x n" << '\n';
    cout << "6. To create transpose of matrix B of size n x m" << '\n';

    cout << '\n' << "Enter your choice :" ;
    cin >> choice;

    switch (choice) {
        case 1:
            inputarray((int*)arr,m,n);
            break;
        case 2:
            displayarray((int*)arr,m,n);
            break;
        case 3:
            cout << "Sum of array :"<< sumarray((int*)arr,m,n);
            break;
        case 4:
            rowwise((int *)arr,m,n);
            break;
        case 5:
            colwise((int *)arr,m,n);
            break;
        case 6:
            int arr2[n][m]={0};
            transpose((int *)arr,(int *)arr2,m,n);
            break;
        default :
            cout << "Wrong number entered !" << endl;
    }

    return 0;
}

void inputarray(int * arr,int rows,int cols){
    for (int i= 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element ["<< i<<"]["<<j<<"] :";
            cin >> *(arr+i*cols+j);
        }
    }
}
void displayarray(int * arr,int rows,int cols){
    for (int i= 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(arr+i*cols+j) << ' ';
        }
        cout << '\n';
    }
}
int sumarray(int * arr,int rows,int cols){
    int sum=0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum+=*(arr+i*cols+j);
        }
    }
    return sum;
}
void rowwise(int * arr,int rows,int cols){
    for (int i = 0; i < rows; i++) {
        int sum=0;
        for (int j = 0; j < cols; j++) {
            sum+=*(arr+i*cols+j);
        }
        cout << "Sum of row " << i+1 <<": "<< sum << '\n';
    }
}
void colwise(int * arr,int rows,int cols){
    for (int i = 0; i < rows; i++) {
        int sum=0;
        for (int j = 0; j < cols; j++) {
            sum+=*(arr+j*cols+i);
        }
        cout << "Sum of row " << i+1 <<": "<< sum << '\n';
    }
}
void transpose(int * arr,int * arr2,int rows,int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(arr2+j*rows+i) = *(arr+i*cols+j);
        }
    }
}
