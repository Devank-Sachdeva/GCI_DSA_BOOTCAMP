/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

#include <iostream>

int main() {
    float years,salary;

    std::cout << "Enter number of years of service :";
    std::cin >> years;

    std::cout << "Enter salary :";
    std::cin >> salary;

    if (years>5) {
        std::cout << "\n" << "Bonus applicable" << "\n";
        std::cout << "Net Salary :" << (salary*105/100);
    } else {
        std::cout << "\n" << "No Bonus applicable" << "\n";
        std::cout << "Net Salary :" << (salary);
    }
    return 0;
}
