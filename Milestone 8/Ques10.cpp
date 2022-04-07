//     *
//   * * *
// * * * * *
//   * * *
//     *

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows (odd number) :";
    cin >> rows;
    int average = (rows+1)/2;
    for (int i = 0; i < rows; i++) {
        if (i < average) {
            for (int j = 1; j <= rows; j++) {
                if (j >= average-i && j <= average+i) cout << " *";
                else cout << "  ";
            }
        }
        else {
            for (int k =1; k <=rows; k++) {
                if (k <= (average+rows-i-1) && k >=(average-rows+i+1))  cout << " *";
                else cout << "  ";
            }
        }
        cout << '\n';
    }
    return 0;
}
