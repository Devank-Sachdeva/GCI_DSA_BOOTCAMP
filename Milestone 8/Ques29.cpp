//         A
//       C B
//     F E D
//   J I H G
// O N M L K

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows :";
    cin >> rows;
    int temp =65;
    for (int i = 1; i <= rows; i++) {
        for (int k = 1; k <= rows; k++) {
            if (k >rows-i && k<=rows) cout << char(temp--) << ' ';
            else cout << "  ";
        }
        temp += (2*i+1);
        cout << '\n';
    }
    return 0;
}
