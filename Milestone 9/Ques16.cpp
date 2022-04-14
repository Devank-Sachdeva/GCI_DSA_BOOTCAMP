// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    bool bol;
    for (int i = 1; i <= rows; i++) {
        i%2==1 ? bol =1 : bol =0;
        for (int j = 1; j <= i; j++) {
            cout << bol << ' ';
            bol = !bol;
        }
        cout << '\n';
    }
    return 0;
}
