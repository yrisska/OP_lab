// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main()
{
	double y, x, x1, x2, h;
	cout << "Input x1,x2 and step" << endl;
	cin >> x1 >> x2 >> h;
	x = x1;
	do {
		y = sqrt(sin(x * M_PI / 180)) + pow(M_E, x) - 3;
		cout << setw(10) << x << setw(10) << y << endl;
		x += h;
	} while (x <= (x2 + h / 2));
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
