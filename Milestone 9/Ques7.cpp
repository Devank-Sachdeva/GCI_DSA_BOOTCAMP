// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >=1; j--) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
