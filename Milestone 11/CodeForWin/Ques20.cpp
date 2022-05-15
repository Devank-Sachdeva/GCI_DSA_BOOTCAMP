// Write a C program to sort even and odd elements of array separately.

#include <iostream>
using namespace std;
void arrange(int arr[],int len);
int main(){
    int num,ot=0,et=0,counto=0,counte=0;
    cout << "Enter number of elements :";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        if (arr[i]%2==1) counto++;
        else counte++;
    }
    int odd[counto],even[counte];
    for (int i = 0; i < num; i++) {
        if (arr[i]%2==1) odd[ot++] =arr[i];
        else even[et++] = arr[i];
    }
    arrange(odd,sizeof(odd)/sizeof(int));
    arrange(even,sizeof(even)/sizeof(int));
    int arranged[num];
    for (int i = 0; i < num; i++) {
        if (i < ot) arranged[i] = odd[i];
        else arranged[i] = even[i-ot];
    }
    cout << '\n' <<"Arranged array :" << '\n';
    for (int i = 0; i < num; i++) {
        cout << arranged[i] << ' ';
    }
    return 0;
}
void arrange(int arr[],int len){
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (arr[i] >arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
