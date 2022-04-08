//         *
//       * *
//     * * *
//     | * *
// *   |   *
// * * |
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main(){
    int tgt;
    cout << "Enter number of | :";
    cin >> tgt;
    int cols = (2*tgt-1);
    for (int i = 1; i <= 3*tgt; i++) {
        if (i <= tgt ){
            for (int j = 1; j <= cols; j++) {
                if (j>cols-i && j<=cols) cout << "* ";
                else cout << "  ";
            }
        }
        else if (i<=2*tgt){
            for (int j = 1; j <= cols; j++) {
                if (j==tgt) cout << "| ";
                else if (j<=i-tgt-1) cout << "* ";
                else if (j >=i) cout << "* ";
                else cout << "  ";
            }
        }
        else {
            for (int j = 1; j <= cols; j++) {
                if (j<=3*tgt-i+1) cout << "* ";
                else cout << "  ";
            }
        }
        cout << '\n';
    }
    return 0;
}
