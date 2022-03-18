/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user*/

#include <iostream>

int main() {
    int quantity;
    std::cout << "Enter Quantity :";
    std::cin >> quantity;

    if (quantity>10) {
        std::cout << "Discount applicable of 10%" << '\n';
        std::cout << "Amount to be paid :" << (quantity*90);
    } else {
        std::cout << "Discount not applicable" << '\n';
        std::cout << "Amount to be paid :" << (quantity*100);
    }
    return 0;
}
