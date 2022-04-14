// 1
// 2 4
// 1 3 5
// 2 4 6 8
// 1 3 5 7 9

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int k;
    for (int i = 1; i <= rows; i++) {
        i%2==1 ? k =1 : k =2;
        for (int j = 1; j <= i; j++) {
            cout << k << ' ';
            k+=2;
        }
        cout << '\n';
    }
    return 0;
}
