// *       *
//   *   *
//     *
//   *   *
// *       *

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j==i || j==rows-i+1) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
