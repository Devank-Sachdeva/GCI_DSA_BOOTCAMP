// Write a program to check if elements of an array are same or not it read from front or back. E.g.-
// 2	3	15	15	3	2

#include <iostream>
using namespace std;

int main(){
    int num,count=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    for (int j = 0; j < num; j++) {
        if (arr[j] == arr[num-j-1]) count++;
    }
    if (count == num) cout << "Array Satisfies" << '\n';
    else cout << "Doesn't Satisfies " << '\n';
    return 0;
}
