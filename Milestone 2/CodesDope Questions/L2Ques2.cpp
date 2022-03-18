/*Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work in anywhere
if employee is male and age is in between 40 t0 60 then he will work in urban areas only.
And any other input of age should print "ERROR".*/
#include <iostream>

int main() {
    int age;
    char sex,marital;
    std::cout << "Enter age :";
    std::cin >> age;
    std::cout << "Enter sex (M or F) :";
    std::cin >> sex;
    std::cout << "Enter marital status (Y or N) :";
    std::cin >> marital;

    if (sex == 'F' || sex == 'f') {
        std::cout << '\n'<< "Can work in urban areas only" << '\n';
    } else if (sex == 'M' || sex == 'm'){
        if (age >=20 && age <=40){
            std::cout << '\n'<< "Can work Anywhere " << '\n';
        } else if (age >=40 && age <=60) {
            std::cout << '\n'<< "Can work in urban areas only " << '\n';
        } else {
            std::cout << '\n'<< "ERROR" << '\n';
        }
    } else {
        std::cout << '\n'<< "ERROR" << '\n';
    }
    return 0;
}
