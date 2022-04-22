// Define a function to print the prime factors of a number.

#include <iostream>
using namespace std;
void prime(int num);
int main(){
    int num;
    cout << "Enter Number :";
    cin >> num;
    cout << "Prime Factors = ";
    prime(num);
    return 0;
}

void prime(int num){
    for (int i = 1; i <= num; i++) {
        bool counter =1;
        if (num%i==0){
            for (int j = 2; j < i; j++) {
                if (i%j==0) {
                    counter = !counter;
                    break;
                }
            }
            if (counter) cout << i << " ";
        }
    }
}
