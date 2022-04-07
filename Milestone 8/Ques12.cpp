// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    rows= ((rows*2)-1);
    for (int i =rows; i >=0; i--) {
        if (i%2==1) {
            for (int k = 0; k < (rows-i); k++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << '\n';
        }
    }
    return 0;
}
