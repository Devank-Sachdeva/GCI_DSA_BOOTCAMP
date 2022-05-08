// Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
// INITIAL array :
// 58	24	13	15	63	9	8	81	1	78
//
// After spliting :
// 58	24	13	15	63
// 9	8	81	1	78

#include <iostream>
using namespace std;

int main(){
    int arr[10],arr1[5],arr2[5];
    for (int i = 0; i < 10; i++) {
        cout << "Enter Element " << i+1 << " :";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (i<5) arr1[i]=arr[i];
        else arr2[i-5]=arr[i];
    }
    cout << '\n' << "Array 1 :" << '\n';
    for (int i = 0; i < 10; i++) {
        if (i<5) {
            cout << arr1[i] << ' ';
            continue;
        }
        if (i==5)cout <<'\n' << "Array 2 :" << '\n';
        cout << arr2[i-5] << ' ';
    }
    return 0;
}
