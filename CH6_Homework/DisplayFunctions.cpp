#include <iostream>
using namespace std;
#include "DisplayFunctions.h"

void printSeperator(char charX, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << charX;
	}
	cout << endl;
}

void displayData
(double length, double width, double area, double circumference)
{
	printSeperator('-', 30);
	cout << "Rectangle: " << endl;
	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
	cout << "Area: " << area << endl;
	cout << "Circumference: " << circumference << endl;
	printSeperator('-', 30);
}

