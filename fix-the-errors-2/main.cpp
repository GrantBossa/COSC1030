//
// Grant Bossa
// 6-3-2025
// Fix the Errors #2 Programming Project
// COSC 1030
//

// This program will take a number and divide it by 2.


#include <iostream>
using namespace std;

int main()
{

	float number;
	int divider;
	divider = 2;

	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin >> number;

	number = number / divider;

	cout << "Half of your number (" << number*divider << ") is " << number << endl;

	return 0;
}
