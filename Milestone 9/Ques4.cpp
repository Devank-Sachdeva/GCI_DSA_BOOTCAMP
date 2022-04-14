// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
