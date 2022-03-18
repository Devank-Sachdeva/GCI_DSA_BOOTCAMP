/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

Modify the above question to allow student to sit if he/she has medical cause.
Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.*/

#include <iostream>

int main() {
    float held,attended;
    char medical;
    std::cout << "Enter number of classes attended :";
    std::cin >> attended;
    std::cout << "Enter number of classes held :";
    std::cin >> held;
    std::cout << "\n"<< "Percentage of classes attended :" << ((attended/held)*100)<< "\n";
    if (attended/held >=0.75) {
        std::cout << "Allowed to sit in exams " << '\n';
    } else {
        std::cout << "Did you had a medical cause(Y or N) :";
        std::cin >> medical;
        if (medical == 'y' || medical == 'Y') {
            std::cout << '\n'<< "Allowed to sit in exams " << '\n';
        } else {
            std::cout <<'\n' << "Not allowed to sit in exams" << '\n';
        }

    }
    return 0;
}
