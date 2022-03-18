/*Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include <iostream>

int main() {
    int person1,person2,person3;
    std::cout << "Enter first person's age :";
    std::cin >> person1;
    std::cout << "Enter second person's age :";
    std::cin >> person2;
    std::cout << "Enter third person's age :";
    std::cin >> person3;
    std::cout << '\n';
    if (person1>person2 && person1>person3) {
        std::cout << "Person 1 is the oldest" << '\n';
    } else if (person2>person1 && person2>person3) {
        std::cout << "Person 2 is the oldest" << '\n';
    } else {
        std::cout << "Person 3 is the oldest" << '\n';
    }
    std::cout << '\n';
    if (person1<person2 && person1<person3) {
        std::cout << "Person 1 is the youngest" << '\n';
    } else if (person2<person1 && person2<person3) {
        std::cout << "Person 2 is the youngest" << '\n';
    } else {
        std::cout << "Person 3 is the youngest" << '\n';
    }
    return 0;
}
