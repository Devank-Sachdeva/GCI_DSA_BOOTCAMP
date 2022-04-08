//    1
//   A B
//  1 2 3
// A B C D

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        int num=1;
        int chr=65;
        if (i%2==1){
            for (int j = 0; j < (rows-i); j++) {
                cout << " ";
            }
            for (int k = 0; k < i; k++) {
                cout << num++ <<" ";
            }
        }
        else {
            for (int j = 0; j < (rows-i); j++) {
                cout << " ";
            }
            for (int k = 0; k < i; k++) {
                cout << char(chr++) <<" ";
            }
        }
        cout << '\n';
    }
    return 0;
}
