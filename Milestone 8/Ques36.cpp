// 0
// 0 1
// 0 2 4
// 0 3 6 9
// 0 4 8 12 16

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int cols[50];
    for (int i = 0; i < rows; i++) {
        cols[i] = i*i;
    }
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << cols[j] << " ";
            cols[j] += j;
        }
        cout << '\n';
    }
    return 0;
}
