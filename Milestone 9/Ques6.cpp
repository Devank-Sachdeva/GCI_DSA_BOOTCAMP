// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j >=i; j--) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
