// Take 10 integer inputs from user and store them in an array and print them on screen.

#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter number :";
        cin >> arr[i];
    }
    cout << "Array :";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
