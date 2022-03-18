/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

#include <iostream>

int main() {
    float held,attended;
    std::cout << "Enter number of classes attended :";
    std::cin >> attended;
    std::cout << "Enter number of classes held :";
    std::cin >> held;
    std::cout << "\n"<< "Percentage of classes attended :" << ((attended/held)*100)<< "\n";
    if (attended/held >=0.75) {
        std::cout << "Allowed to sit in exams " << '\n';
    } else {
        std::cout << "Not allowed to sit in exams" << '\n';
    }
    return 0;
}
