// *
// * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows (odd number) :";
    cin >> rows;
    int average = (rows+1)/2;
    for (int i = 1; i <= average; i++) {
        for (int j = 0; j < i; j++) {
            cout << " *";
        }
        cout << '\n';
    }
    for (int i = average; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            cout << " *";
        }
        cout << '\n';
    }
    return 0;
}
