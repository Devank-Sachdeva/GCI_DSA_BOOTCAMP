// Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

#include <iostream>
using namespace std;

string prime(int num);
string arm(int num);
string perfect(int num);
int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << num << " is " << prime(num) << arm(num) << perfect(num);
    return 0;
}

string prime(int num){
    int count=0;
    for (int i =2; i <=(num/2); i++) {
        if (num%i==0) count++;
    }
    if (count == 0) return " Prime ";
    else return " ";
}
string arm(int num){
    int sum=0,last,temp;
    int size = trunc(log10(num)) + 1;
    temp = num;
    while (temp != 0){
        last = temp % 10;
        sum += pow(last,size);
        temp /=10;
    }
    if (sum == num) return " Armstrong ";
    else return " ";
}
string perfect(int num){
    int sum= 0;
    for(int i=1; i<num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num) return " Perfect ";
    else return " ";
}
