// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    rows= ((rows*2)-1);
    for (int a = 0; a < rows; a++) {
        cout << "* ";
    }
    cout << '\n';
    for (int i =0; i <=rows; i++) {
        if (i%2==1) {
            for (int j = 0; j < (rows-i)/2; j++) {
                cout << "* ";
            }
            for (int k = 0; k < i; k++) {
                cout << "  ";
            }
            for (int l = (rows-i)/2; l >0 ; l--) {
                cout << "* ";
            }
            cout << '\n';
        }
    }
    return 0;
}
