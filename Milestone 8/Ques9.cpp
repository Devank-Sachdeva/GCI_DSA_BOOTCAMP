// A B C D C B A
// A B C   C B A
// A B       B A
// A           A

#include <iostream>
using namespace std;

int main(){
    int rows,space=1;
    cout << "Enter number of rows :";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int chr=65;
        for (int j = 0; j < (rows-i); j++) {
            if (j==(rows-1)) continue;
            cout << char(chr++) << " ";
        }
        for (int m = 0; m < space; m++) {
            if (i==0) cout << char(chr) << " ";
            else cout << "  ";
        }
        space += (i!=0) ? 2 : 0;
        for (int k = 0; k < (rows-i); k++) {
            if (k==(rows-1)) continue;
            cout << char(--chr) << " ";
        }
        cout << '\n';
    }
    return 0;
}
