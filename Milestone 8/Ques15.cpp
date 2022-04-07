// 1
// 1 2
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows (odd number):";
    cin >> rows;
    int mid = (rows+1)/2;
    for (int i = 1; i <= rows; i++) {
        int temp = 0;
        int temp2 = 0;
        for (int j = 1; j <= mid; j++) {
            if (i > mid) break;
            else if (j >=mid-i+1) cout << ++temp << " ";
            else cout << "  ";
        }
        for (int k = 1; k <= mid; k++) {
            if (i < mid+1) break;
            else if (k <i-mid+1) cout << "  ";
            else cout << ++temp2 << " ";
        }
        cout << '\n';
    }
    return 0;
}
