// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    rows= ((rows*2)-1);
    int chr=65;
    for (int a = 0; a < rows; a++) {
        cout << char(chr++) << " ";
    }
    cout << '\n';
    for (int i =0; i <=rows; i++) {
        int chr=65;
        if (i%2==1) {
            for (int j = 0; j < (rows-i)/2; j++) {
                cout << char(chr++) << " ";
            }
            for (int k = 0; k < i; k++) {
                cout << "  ";
                chr++;
            }
            for (int l = (rows-i)/2; l >0 ; l--) {
                cout << char(chr++) << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
