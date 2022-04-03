//     *
//   * * *
// * * * * *

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    rows= ((rows*2)-1);
    for (int i =1; i <=rows; i++) {
        if (i%2==1) {
            for (int j = 0; j < (rows-i)/2; j++) {
                cout << "  ";
            }
            for (int k = 0; k < i; k++) {
                cout << "* ";
            }
            cout << '\n';
        }
    }
    return 0;
}
