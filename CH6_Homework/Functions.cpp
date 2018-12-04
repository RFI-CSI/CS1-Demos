#include <iostream>
#include "DisplayFunctions.h"
#include "Globals.h"
using namespace std;

//***************************************************
double getWidth()
{
	printSeperator('*', 30);
	cout << "Enter the width of the rectangle: ";
	double width;
	cin >> width;
	return width;
}

//***************************************************
double getLength()
{
	printSeperator('*', 30);
	cout << "Enter the length of the rectangle: ";
	double length;
	cin >> length;
	return length;
}

//***************************************************
double getArea(double width, double length)
{
	return length * width;
}

//***************************************************
double getPerimeter(double width, double length)
{
	return (length * 2) + (width * 2);
}

