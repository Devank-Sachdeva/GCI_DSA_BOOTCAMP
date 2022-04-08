// A
// B A
// C B A
// D C B A


#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 65; i < 65+rows; i++) {
        for (int j = i; j >=65; j--) {
            cout << char(j) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
