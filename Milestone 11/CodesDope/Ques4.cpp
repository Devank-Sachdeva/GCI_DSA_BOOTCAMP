// Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

#include <iostream>
using namespace std;

int main(){
    int arr[10],dup[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter number :";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        dup[i] = arr[9-i];
    }
    for (int i = 0; i < 10; i++) {
        cout << dup[i] << ' ';
    }
    return 0;
}
