/*Write a C program to swap first and last digits of a number.*/

#include <iostream>
#include <cmath>

int main() {
    int num,temp1,temp2,temp3,first,last,new_num=0,count=0;
    std::cout << "Enter Number :";
    std::cin >> num;
    temp1 = num;
    temp2 = num;
    while (temp1 !=0) {
        count++;
        temp1/=10;
    }
    first = num/(pow(10,(count-1)));
    last = num%10;
    for (int i = 1; i <= count; i++) {
        if (i ==1){
            new_num += first;
            temp2 /= 10;
        } else if (i == count){
            new_num += last * (pow(10,count-1));
        } else {
            temp3 = temp2 % 10;      //it fetches last digit
            temp2 /= 10;
            new_num += temp3*(pow(10,i-1));
        }
    }
    std::cout << "Processed Number :" << new_num<< '\n';
    return 0;
}
