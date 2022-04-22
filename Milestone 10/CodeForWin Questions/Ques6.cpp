// Write a C program to find all prime numbers between given interval using functions.

#include <iostream>
using namespace std;

void prime(int,int);
int main(){
    int lower,upper;
    cout << "Enter upper limit :" ;
    cin >> upper;
    cout << "Enter lower limit :" ;
    cin >> lower;
    if (lower <=0) lower =1;
    prime(upper,lower);
    return 0;
}
void prime(int up,int low){
    for (int i = low; i <= up; i++) {
        int count=0;
        for (int j = 2; j < i; j++) {
            if (i%j==0) count++;
        }
        if (count ==0) cout << i << " ";
    }
}
