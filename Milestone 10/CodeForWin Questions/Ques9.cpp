// Write a C program to print all perfect numbers between given interval using functions.

#include <iostream>
using namespace std;

void per(int,int);
int main(){
    int lower,upper;
    cout << "Enter upper limit :" ;
    cin >> upper;
    cout << "Enter lower limit :" ;
    cin >> lower;
    if (lower <=0) lower =1;
    per(upper,lower);
    return 0;
}

void per(int up,int low){
    for (int j = low; j <= up; j++) {
        int sum= 0;
        for(int i=1; i<j; i++){
            if(j % i == 0){
                sum += i;
            }
        }
        if(sum == j) cout << j << ' ';
    }
}
