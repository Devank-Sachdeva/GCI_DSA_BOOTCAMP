// If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60],
// your program should be able to find that the subarray lies between the indexes 3 and 8

#include <iostream>
using namespace std;

int main(){
    int num,start=0;
    cout << "Enter number of elements :";
    cin >> num;
    int end=num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    for (start = 0; start < num; start++) {
        if (arr[start]> arr[start+1]) break;
    }
    if (start == num) {
        cout << "Array is sorted" << '\n';
        return 0;
    }
    for (end = num; end > 0; end--) {
        if (arr[end] < arr[end-1]) break;
    }

    int max = arr[start], min = arr[start];
    for (int i = start+1; i <= end; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    for (int i = 0; i < start; i++) {
        if (arr[i] > min) {
            start = i;
            break;
        }
    }
    for (int i = num; i >= end+1; i--) {
        if (arr[i] < max) {
            end = i;
            break;
        }
    }
    cout << "The unsorted subarray which makes the given array sorted lies between the indices "<< start << " and " << end;
    return 0;
}
