//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int k=0;
    bool star =1;
    for (int i =1; i <=(2*rows-1); i++) {
        if (i<rows-k) cout << " ";
        else {
            if (star) cout << "*";
            else cout << " ";
            star = !star;
        }
        if (i==rows+k){
            cout << '\n';
            k++;
            if (i==2*rows-1) break;
            i=0;
            star = !star;
        }
    }
    return 0;
}
