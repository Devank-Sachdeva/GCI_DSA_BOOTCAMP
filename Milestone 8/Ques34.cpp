// 1
// 62
// 1073
// 131184
// 15141295

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int cols[50];
    for (int i = 1; i <= rows; i++) {
        cols[i] = i;
    }

    for (int j = 1; j <= rows; j++) {
        for (int k = 1; k <= j; k++) {
            cout << cols[k];
            cols[k] +=(rows-j+k);
        }
        cout << '\n';
    }
    return 0;
}
