// 5 4 3 2 1 0
// 4 3 2 1 0
// 3 2 1 0
// 2 1 0
// 1 0
// 0

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    rows -=1;
    for (int i = rows; i >=0; i--) {
        for (int j = i; j >=0; j--){
            cout << j <<" ";
        }
        cout << '\n';
    }
    return 0;
}
