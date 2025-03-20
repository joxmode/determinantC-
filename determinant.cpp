#include <iostream>
using namespace std;




/*1. creating basic UI
  2. assigning numbers
  3. simple calculator
  4. cin>>
  5.print
  */

int main() {
    cout << "enter determinant numbers (maximum 4 and enter with space): ";
    int num1, num2, num3, num4;
    cin>> num1 >> num2 >> num3 >> num4;
    cout << "The determinant is:" << (num1*num4)-(num2*num3) << endl;

 // Wait for user input before closing
 cout<< "press any key to exist...";
 cin.ignore();
 cin.get();

    return 0;
}