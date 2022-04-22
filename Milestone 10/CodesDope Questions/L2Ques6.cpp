// Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator()
// to calculate your tax. The taxCalculator() function takes as parameters the gross salary 
// as well as the total savings amount. The tax is calculated as follows:
// (a) The savings is deducted from the gross income to calculate the taxable income.
// Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
// (b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax is
// 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000
// the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2);
// if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.

#include <iostream>
using namespace std;

float taxCalculator(int salary,int savings);
int main(){
    int sal,save;
    cout << "Enter Salary :";
    cin >> sal;
    cout << "Enter Savings :";
    cin >> save;
    cout << "Tax to be paid :" << taxCalculator(sal,save);
    return 0;
}
float taxCalculator(int salary,int savings){
    int taxable;
    if (savings>=100000) taxable = salary-100000;
    else taxable = salary - savings;

    if (taxable <=100000) return 0;
    else if (taxable>100000 && taxable <=200000) return ((0.1)*(taxable-100000));
    else if (taxable>200000 && taxable <=500000) return (((0.1)*(taxable-100000))+((0.2)*(taxable-200000)));
    else return (((0.1)*(taxable-100000))+((0.2)*(taxable-200000))+((0.3)*(taxable-500000)));
}
