// * * * * * * *
// *           *
// *   * * *   *
// *   *   *   *
// *   * * *   *
// *           *
// * * * * * * *

#include <iostream>
using namespace std;

int main(){
    cout << "number of rows : 7" << "\n\n";
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i==1 || i==7 || j==1 || j==7) cout << "* ";
            else if ((i<=5 && i>=3 && j>=3 && j<=5 ) && (i==3 || i==5 || j==3 || j==5)) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
