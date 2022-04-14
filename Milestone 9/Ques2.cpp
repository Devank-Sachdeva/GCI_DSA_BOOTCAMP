// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = rows; i >=1; i--) {
        for (int j = rows; j >=i; j--) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
