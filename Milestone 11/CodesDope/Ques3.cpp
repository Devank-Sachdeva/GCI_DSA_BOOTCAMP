// Take 20 integer inputs from user and print the following:
// number of positive numbers
// number of negative numbers
// number of odd numbers
// number of even numbers
// number of 0


#include <iostream>
using namespace std;

int main(){
    int arr[20];
    int countp=0,count0=0,counte=0,counto=0,countn=0;
    for (int i = 0; i < 20; i++) {
        cout << "Enter number :";
        cin >> arr[i];
    }

    for (int i = 0; i < 20; i++) {
        if (arr[i] >0) countp++;
        else if (arr[i] <0) countn++;
        else if (arr[i] == 0) count0++;

        if (arr[i] %2==0) counte++;
        else if (arr[i] %2 == 1) counto++;
    }
    cout << "Number of Positive Numbers :" << countp << '\n';
    cout << "Number of Negetive Numbers :" << countn << '\n';
    cout << "Number of Odd Numbers :" << counto << '\n';
    cout << "Number of Even Numbers :" << counte << '\n';
    cout << "Number of 0s :" << count0 << '\n';
    return 0;
}
