// Write a program which will ask the user to enter his/her marks (out of 100).
// Define a function that will display grades according to the marks entered as below:
// Marks        Grade
// 91-100         AA
// 81-90          AB
// 71-80          BB
// 61-70          BC
// 51-60          CD
// 41-50          DD
// <=40          Fail

#include <iostream>
using namespace std;

string check(int a);
void main(){
    int marks;
    cout << "Enter Marks out of 100 :";
    cin >> marks;
    cout << "Grade :" << check(marks)<<'\n';
}
string check(int a){
    if (a >90 && a<101) return "AA";
    else if (a>80 && a<91) return "AB";
    else if (a>70 && a<81) return "BB";
    else if (a>60 && a<71) return "BC";
    else if (a>50 && a<61) return "CD";
    else if (a>40 && a<51) return "DD";
    else if (a<41) return "Fail";
    else return "Not Found";
}
