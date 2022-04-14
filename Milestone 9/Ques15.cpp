// 5 5 5 5 5
// 4 5 5 5 5
// 3 4 5 5 5
// 2 3 4 5 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    for (int i = rows; i >0; i--) {
        int k=i;
        for (int j = 1; j <= rows; j++) {
            if (k<=rows) cout << k++ << ' ';
            else cout << rows << ' ';
        }
        cout << '\n';
    }
    return 0;
}
