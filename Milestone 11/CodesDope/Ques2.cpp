// Take 10 integer inputs from user and store them in an array.
// Again ask user to give a number. Now, tell user whether that number is present in array or not.

#include <iostream>
using namespace std;

int main(){
    int arr[10],check;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number :";
        cin >> arr[i];
    }
    cout << '\n' << "Array Completed" << '\n';
    cout << "Enter Number to check :";
    cin >> check;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == check) {
            cout << check << " is present in array";
            return 0;
        }
    }
    cout << check << " is not present in array " << '\n';
    return 0;
}
