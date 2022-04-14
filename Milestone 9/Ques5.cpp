// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = rows; i >0; i--) {
        for (int j = i; j >0; j--) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
