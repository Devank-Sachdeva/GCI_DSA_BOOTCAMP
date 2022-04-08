//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        int pattern =1;
        for (int j = 0; j < (rows-1-i); j++) {
            cout << "  ";
        }
        for (int k = 0; k < i; k++) {
            cout << pattern++ << " ";
        }
        cout << i+1 << " ";
        for (int l = 0; l < i; l++) {
            cout << --pattern << " ";
        }
        cout << '\n';
    }
    return 0;
}
