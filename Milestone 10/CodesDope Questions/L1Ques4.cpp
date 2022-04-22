// Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.

#include <iostream>
using namespace std;
int max(int a,int b,int c);
int min(int a,int b,int c);
int main(){
    int a,b,c;
    cout << "Enter Numbers :";
    cin >> a >> b >> c;
    cout << "Maximum Number :" << max(a,b,c) << '\n';
    cout << "Minimum Number :" << min(a,b,c) << '\n';
    return 0;
}

int max(int a,int b,int c){
    if ((a>b) && (a>c)) return a;
    else if ((b>a) && (b>c)) return b;
    else return c;
}

int min(int a,int b,int c){
    if ((a<b) && (a<c)) return a;
    else if ((b<a) && (b<c)) return b;
    else return c;
}
