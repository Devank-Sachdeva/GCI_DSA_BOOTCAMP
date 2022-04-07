//       A 1
//     A B 1 2
//   A B C 1 2 3
// A B C D 1 2 3 4

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int col = 2*rows;
    for (int i = 1; i <= rows; i++) {
        char chr ='A';
        int num = 1;
        for (int j = 1; j <= col; j++) {
            if (j >=rows-i+1 && j<=rows) cout << chr++ << " ";
            else if (j>=rows+1 && j<=rows+i) cout << num++ << " ";
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
