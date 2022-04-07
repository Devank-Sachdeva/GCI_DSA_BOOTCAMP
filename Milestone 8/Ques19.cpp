//       A
//     A B A
//   A B C B A
// A B C D C B A

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int col = 2*rows-1;
    for (int i = 1; i <= rows; i++) {
        char chr ='A';
        for (int j = 1; j <= col; j++) {
            if (j >=rows-i+1 && j<=rows+i-1) {
                cout << chr << " ";
                j < rows ? chr++:chr--;
            }
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
