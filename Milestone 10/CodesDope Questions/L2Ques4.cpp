// Define a function named 'perfect' that determines if parameter number is a perfect number.
// Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
// [An integer number is said to be "perfect number" if its factors,
// including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3].

#include <iostream>
using namespace std;

int perfect(int num);
int main(){
    for (int i = 1; i <=1000; i++) {
        if (perfect(i)) cout << i << " ";
        else continue;
    }
    return 0;
}
int perfect(int num){
    int sum=0;
    for(int i=1; i<num; i++){
        if(num % i == 0) sum += i;
    }
    if(sum == num) return 1;
    else return 0;
}
