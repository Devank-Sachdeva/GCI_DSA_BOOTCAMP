// Write a program to print sum, average of all numbers, smallest and largest element of an array.

#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    int small = arr[0],large = arr[0];
    for (int i = 0; i < num; i++) {
        sum += arr[i];
        if (arr[i] > large) large = arr[i];
        if (arr[i] < small) small = arr[i];
    }
    double avg = double(sum)/num;
    cout << "Sum :" << sum << '\n';
    cout << "Average :" << avg << '\n';
    cout << "Largest element :" << large << '\n';
    cout << "Smallest element :" << small << '\n';
}
