// Write a C program to delete all duplicate elements from an array.

#include <iostream>
using namespace std;

int main(){
	int i, j, k, size;
	cout << "Enter number of elements in an array  :";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }

	for (i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
    		if(arr[i] == arr[j]){
    			for(k = j; k < size; k++){
    				arr[k] = arr[k + 1];
				}
				size--;
				j--;
			}
		}
	}

 	cout << "After Deleteing Duplicate Array Elements is :" << '\n';
 	for (i = 0; i < size; i++){
 		cout << arr[i] << ' ';
  	}
 	return 0;
}
