//         * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int col = 2*rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= col; j++) {
            if (j>rows-i && j<col-i+1) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
