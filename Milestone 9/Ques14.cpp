// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j >=i; j--) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
