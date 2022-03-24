/*Write a C program to convert Hexadecimal to Binary number system.*/

#include <iostream>
#include <cstdlib>

int main(){
    int i=0;
    char hex[10];
    std::cout << "Enter the Hexadecimal Number :";
    std::cin >> hex;
    std::cout << "Binary Value :";
    while(hex[i]){
        switch(hex[i]){
            case '0':
                std::cout<<"0000";
                break;
            case '1':
                std::cout<<"0001";
                break;
            case '2':
                std::cout<<"0010";
                break;
            case '3':
                std::cout<<"0011";
                break;
            case '4':
                std::cout<<"0100";
                break;
            case '5':
                std::cout<<"0101";
                break;
            case '6':
                std::cout<<"0110";
                break;
            case '7':
                std::cout<<"0111";
                break;
            case '8':
                std::cout<<"1000";
                break;
            case '9':
                std::cout<<"1001";
                break;
            case 'A':
            case 'a':
                std::cout<<"1010";
                break;
            case 'B':
            case 'b':
                std::cout<<"1011";
                break;
            case 'C':
            case 'c':
                std::cout<<"1100";
                break;
            case 'D':
            case 'd':
                std::cout<<"1101";
                break;
            case 'E':
            case 'e':
                std::cout<<"1110";
                break;
            case 'F':
            case 'f':
                std::cout<<"1111";
                break;
            default:
                system("cls");
                std::cout<<"Invalid Hex digit found";
                return 0;
        }
        i++;
    }
    std::cout<<'\n';
    return 0;
}
