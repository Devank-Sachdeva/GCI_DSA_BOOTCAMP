// Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input as well as the current date,
// in same format, and calculates your age in years, months and days.
// You must check for leap years also. Write a separate function to check for leap year.

#include <iostream>
using namespace std;

void ageCalculator(int curr_date,int curr_mon,int curr_year,int bir_date,int bir_mon,int bir_year);
int leapCheck(int curr_year,int bir_year);
int main(){
    int curr_date,curr_mon,curr_year;
    int bir_date,bir_mon,bir_year;
    cout << "Enter your birth date :";
    cin >> bir_year >> bir_mon >> bir_date;
    cout << "Enter current date :";
    cin >> curr_year >> curr_mon >> curr_date;
    ageCalculator(curr_date,curr_mon,curr_year,bir_date,bir_mon,bir_year);
    return 0;
}
void ageCalculator(int curr_date,int curr_mon,int curr_year,int bir_date,int bir_mon,int bir_year){
    int age_date,age_mon,age_year;
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int extra_days = leapCheck(curr_year,bir_year);
    if (curr_date < bir_date) {
        curr_date += months[bir_mon-1];
        curr_mon -=1;
    }
    if (curr_mon < bir_mon) {
        curr_mon += 12;
        curr_year -=1;
    }
    age_date = curr_date - bir_date;
    age_mon = curr_mon - bir_mon;
    age_year = curr_year - bir_year;
    cout << "Age :" << age_year <<" Years " <<age_mon << " Months "<< age_date << " Days \n";
    cout << "Extra days (due to leap year) :" << extra_days;
}
int leapCheck(int curr_year,int bir_year){
    int counter =0;
    for (int i=bir_year;i<=curr_year;i++){
        if (i%4==0 && i%100!=0) counter+=1;
        else if (i%400==0) counter+=1;
    }
    return counter;
}
