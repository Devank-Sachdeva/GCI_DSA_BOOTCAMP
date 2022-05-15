// Write a C program to count frequency of each element in an array.

#include <iostream>
using namespace std;
int main(){
    int num,ct=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num],uni[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    cout << '\n';
    for (int i = 0; i < num; i++) {
        bool end=0;
        for (int k = 0; k < num; k++) {
            if (arr[i] == uni[k]) end =1;
        }
        if (end == 1) {
            end = 0;
            continue;
        }
        uni[ct++] = arr[i];
        int count=0;
        for (int j = 0; j < num; j++) {
            if (arr[i] == arr[j]) count++;
        }
        cout << "Frequency of " << uni[ct-1] << " is :" << count << '\n';
    }
    return 0;
}
