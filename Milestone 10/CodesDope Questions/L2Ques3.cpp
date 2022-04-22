// Using recursion, define a function to know nth term of a Fibonacci series.
// Nth term of Fibonacci series is
// F(n) = F(n-1)+F(n-2)
// F(0) = 0
// F(1) = 1
// F(2) = F(1)+F(0) = 1+0 = 1
// F(3) = F(2)+F(1) = 1+1 = 2
// F(4) = F(3)+F(2) = 2+1 = 3

#include <iostream>
using namespace std;
int fibo(int num);
int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << num << "th term is :" << fibo(num);
    return 0;
}

int fibo(int num){
    if (num==0) return 0;
    else if (num==1) return 1;
    else return (fibo(num-1)+fibo(num-2));
}
