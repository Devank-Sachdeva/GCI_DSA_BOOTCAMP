// 1 2 3 4 5
// 4 3 2 1
// 1 2 3
// 2 1
// 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int k;
    for (int i = rows; i >0; i--) {
        if (i % 2==1) k=1;
        else k=i;
        for (int j = 1; j <= i; j++) {
            cout << k << ' ';
            i%2==1 ? k++ :k--;
        }
        cout << '\n';
    }
    return 0;
}
