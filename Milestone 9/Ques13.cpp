// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = rows; i >0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
