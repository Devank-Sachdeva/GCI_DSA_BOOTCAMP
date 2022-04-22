// Write a C program to print all Armstrong numbers between given interval using functions.

#include <iostream>
#include <cmath>
using namespace std;

void arm(int,int);
int main(){
    int lower,upper;
    cout << "Enter upper limit :" ;
    cin >> upper;
    cout << "Enter lower limit :" ;
    cin >> lower;
    if (lower <=0) lower =1;
    arm(upper,lower);
    return 0;
}
void arm(int up,int low){
    for (int i = low; i <= up; i++) {
        int size = trunc(log10(i)) + 1;
        int sum=0,last,temp;
        temp = i;
        while (temp != 0){
            last = temp % 10;
            sum += pow(last,size);
            temp /=10;
        }
        if (sum == i) cout << i << ' ';
    }
}
