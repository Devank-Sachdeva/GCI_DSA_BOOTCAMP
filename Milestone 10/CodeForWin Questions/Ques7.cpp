// Write a C program to print all strong numbers between given interval using functions.

#include <iostream>
using namespace std;

int fact(int);
void strong(int,int);
int main(){
    int lower,upper;
    cout << "Enter upper limit :" ;
    cin >> upper;
    cout << "Enter lower limit :" ;
    cin >> lower;
    if (lower <=0) lower =1;
    strong(upper,lower);
    return 0;
}

int fact(int num){
    long int fact =1;
    for (int i=1;i<=num;i++){
      fact*= i;
    }
    return fact;
}

void strong(int up,int low){
    for (int i = low; i <= up; i++) {
        int temp=i,last,sum=0;
        while (temp) {
            last = temp%10;
            sum+=fact(last);
            temp /=10;
        }
        if (sum == i) cout << i << " ";
    }
}
