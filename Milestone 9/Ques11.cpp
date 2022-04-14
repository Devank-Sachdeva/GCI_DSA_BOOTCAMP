// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7
// 1 2 3 4 5
// 1 2 3
// 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 2*rows-1; i >0; i-=2) {
        for (int j = 1; j <= i; j++) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
