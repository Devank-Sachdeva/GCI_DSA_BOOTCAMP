// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = rows; i >=1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
