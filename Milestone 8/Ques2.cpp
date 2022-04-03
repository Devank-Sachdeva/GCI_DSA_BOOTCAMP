 //         *
 //       * *
 //     * * *
 //   * * * *
 // * * * * *

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;

    for (int i =1; i <=rows; i++) {
        for (int j = 0; j < (rows-i); j++) {
            cout << "  ";
        }
        for (int k = 0; k < i; k++) {
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}
