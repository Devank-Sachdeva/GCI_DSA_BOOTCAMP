// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter number of rows :";
   cin >> rows;

   for (int i =1; i <=rows; i++) {
       for (int k = 1; k < i; k++) {
           cout << "  ";
       }
       for (int j = 0; j <= (rows-i); j++) {
           cout << "* ";
       }
       cout << '\n';
   }
   return 0;
}
