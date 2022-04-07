// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        bool bl=1;
        for (int j = 1; j <= i; j++) {
            cout << bl <<" ";
            bl = !bl;
        }
        cout << '\n';
    }
    return 0;
}
