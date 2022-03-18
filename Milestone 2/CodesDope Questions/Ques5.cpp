/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/

#include <iostream>

int main() {
    int marks;
    std::cout << "Enter marks :";
    std::cin >> marks;
    if (marks>80) {
        std::cout << "Grade : A" << '\n';
    } else if (marks<=80 && marks>60) {
        std::cout << "Grade : B" << '\n';
    } else if (marks<=60 && marks>50) {
        std::cout << "Grade : C" << '\n';
    } else if (marks<=50 && marks>45) {
        std::cout << "Grade : D" << '\n';
    } else if (marks<=45 && marks>25) {
        std::cout << "Grade : E" << '\n';
    } else {
        std::cout << "Grade : F" << '\n';
    }
    return 0;
}
