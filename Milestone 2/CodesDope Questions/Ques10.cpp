/*If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10)*/

#include <iostream>

int main() {
    int x=2,y=5,z=0;
    std::cout << "x == 2 : " << (x ==2) << '\n';
    std::cout << "x !=5 : " << (x != 5)<< '\n';
    std::cout << "x != 5 && y >= 5 :" << (x != 5 && y >= 5) << '\n';
    std::cout << "z != 0 || x == 2 :" << ( z != 0 || x == 2) <<'\n';
    std::cout << "!(y < 10) :" << (!(y < 10)) << '\n';
    return 0;
}
