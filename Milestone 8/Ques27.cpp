//           1
//         2 1 2
//       3 2 1 2 3
//     4 3 2 1 2 3 4
//   5 4 3 2 1 2 3 4 5
// 6 5 4 3 2 1 2 3 4 5 6

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        int temp=i+1;
        for (int j = 1; j <= (2*rows)-1; j++) {
            if (j >= rows-i+1 && j<= rows+i-1) {
                if (j <= rows) cout << --temp << " ";
                else cout << ++temp << " ";
            }
            else cout << "  " ;
        }
        cout << '\n';
    }
    return 0;
}
