// 1 3 5 7 9
// 3 5 7 9
// 5 7 9
// 7 9
// 9

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = 1; i <= 2*rows-1; i+=2) {
        for (int j = i; j <= 2*rows-1; j+=2) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
