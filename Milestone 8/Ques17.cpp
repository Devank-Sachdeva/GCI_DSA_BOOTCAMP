// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
// * *           * *
// * * *       * * *
// * * * *   * * * *
// * * * * * * * * *

#include <iostream>
using namespace std;

int main(){
    int rows,ext=0;
    cout << "Enter number of rows :";
    cin >> rows;
    int mid =(rows+1)/2 ;
    for (int i = 1; i <= rows; i++) {
        i<=mid ? ext++:ext--;
        for (int j = 1; j <= rows; j++) {
            if (j<=mid-ext+1 || j >=mid+ext-1) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }
    return 0;
}
