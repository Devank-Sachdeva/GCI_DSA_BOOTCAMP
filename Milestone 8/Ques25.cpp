//           0
//         1 2 1
//       2 3 4 3 2
//     3 4 5 6 5 4 3
//   4 5 6 7 8 7 6 5 4
// 5 6 7 8 9 0 9 8 7 6 5
//   4 5 6 7 8 7 6 5 4
//     3 4 5 6 5 4 3
//       2 3 4 3 2
//         1 2 1
//           0

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        int temp=i-2;
        for (int j = 1; j <= (2*rows)-1; j++) {
            if (j >= rows-i+1 && j<= rows+i-1) {
                if (j <= rows) {
                    ++temp;
                    if (temp >9) cout << temp%10 << " ";
                    else cout << temp << ' ';
                }
                else {
                    --temp;
                    if (temp >9) cout << temp%10 << " ";
                    else cout << temp << ' ';
                }
            }
            else cout << "  " ;
        }
        cout << '\n';
    }
    for (int i = rows-1; i >=0; i--) {
        int temp=i-2;
        for (int j = 1; j <= (2*rows)-1; j++) {
            if (j >= rows-i+1 && j<= rows+i-1) {
                if (j <= rows) {
                    ++temp;
                    if (temp >9) cout << temp%10 << " ";
                    else cout << temp << ' ';
                }
                else {
                    --temp;
                    if (temp >9) cout << temp%10 << " ";
                    else cout << temp << ' ';
                }
            }
            else cout << "  " ;
        }
        cout << '\n';
    }
    return 0;
}
