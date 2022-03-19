/*Write a C program to find frequency of each digit in a given integer.*/

#include <iostream>

int main() {
    long long int num;
    int c;
    int count1=0,count2=0,count3=0,count4=0,count5=0;
    int count6=0,count7=0,count8=0,count9=0,count0=0;
    std::cout << "Enter number :";
    std::cin >> num;
    long long int temp = num;
    while (temp !=0){
        c = temp %10;
        temp /= 10;
        switch (c) {
            case 1:
	           count1++;
	           break;
            case 2:
            	count2++;
            	break;
            case 3:
            	count3++;
            	break;
            case 4:
            	count4++;
            	break;
            case 5:
            	count5++;
            	break;
            case 6:
            	count6++;
            	break;
            case 7:
            	count7++;
            	break;
            case 8:
            	count8++;
            	break;
            case 9:
            	count9++;
            	break;
            case 0:
            	count0++;
            	break;
        }
    }
    std::cout << "Frequency of 0: " << count0 << '\n';
    std::cout << "Frequency of 1: " << count1 << '\n';
    std::cout << "Frequency of 2: " << count2 << '\n';
    std::cout << "Frequency of 3: " << count3 << '\n';
    std::cout << "Frequency of 4: " << count4 << '\n';
    std::cout << "Frequency of 5: " << count5 << '\n';
    std::cout << "Frequency of 6: " << count6 << '\n';
    std::cout << "Frequency of 7: " << count7 << '\n';
    std::cout << "Frequency of 8: " << count8 << '\n';
    std::cout << "Frequency of 9: " << count9 << '\n';
    return 0;
}
