//       1
//     1 2 A
//   1 2 3 A B
// 1 2 3 4 A B C

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int col = 2*rows-1;
    for (int i = 1; i <= rows; i++) {
        int num = 1;
        char chr = 'A';
        for (int j = 1; j <= col; j++) {
            if (j<=rows && j >= rows-i+1) cout << num++ << " ";
            else if (j>=rows && j<=rows+i-1) cout << chr++ << " ";
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
