// Consider an integer array, the number of elements in which is determined by the user.
// The elements are also taken as input from the user. Write a program to find those pair
// of elements that has the maximum and minimum difference among all element pairs.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,max1,max2,max=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    int min = fabs(arr[0]-arr[1]);
    int min1 = arr[0];
    int min2 = arr[1];
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i==j) continue;
            else if (fabs(arr[i]-arr[j]) < min){
                min = fabs(arr[i]-arr[j]);
                min1 = arr[i];
                min2 = arr[j];
            }
        }
    }
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i==j) continue;
            else if (fabs(arr[i]-arr[j]) > max){
                max = fabs(arr[i]-arr[j]);
                max1 = arr[i];
                max2 = arr[j];
            }
        }
    }

    cout << "Minimum Difference :"<<min << " from the pair ("<< min1 << ","<< min2<< ")"<<'\n';
    cout << "Maximum Difference :"<<max << " from the pair ("<< max1 << ","<< max2<< ")"<<'\n';

    return 0;
}
