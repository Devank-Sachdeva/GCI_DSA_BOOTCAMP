/*Take values of length and breadth of a rectangle from user and check if it is square or not.*/

#include <iostream>

int main() {
    float length,breadth;
    std::cout << "Enter Length :";
    std::cin >> length;
    std::cout << "Enter Breadth :";
    std::cin >> breadth;

    if (length == breadth) {
        std::cout << "It is a square" << '\n';
    }else{
        std::cout << "It is a rectangle" << '\n';
    }
    return 0;
}
