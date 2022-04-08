// 1
// 3 * 2
// 4 * 5 * 6
// 10 * 9 * 8 * 7
// 11 * 12 * 13 * 14 * 15

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int temp =1;
    for (int i = 1; i <= rows; i++) {
        if (i%2==0){
            for (int j = 1; j <= (2*i-1); j++) {
                if (j%2==0) cout << "* ";
                else {
                    cout << temp-- << ' ';
                }
            }
            temp +=(i+1);
        }
        else {
            for (int k = 1; k <=(2*i-1); k++) {
                if (k%2==0) cout << "* ";
                else {
                    cout << temp++ << ' ';
                }
            }
            temp += (i);
        }
        cout << '\n';
    }
    return 0;
}
