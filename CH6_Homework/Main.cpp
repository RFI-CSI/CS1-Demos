// Chapter 6, Programming Challenge 2

#include "Functions.h"
#include "DisplayFunctions.h"

int main()
{
	double length,			// The rectangle's length
		width,				// The rectangle's width
		area,				// The rectangle's area
		perimeter;			// The rectangle's perimeter

	// Get the rectangle's length.
	length = getLength();

	// Get the rectangle's width.
	width = getWidth();

	// Get the rectangle's area.
	area = getArea(length, width);

	// Get the rectangle's circumference.
	perimeter = getPerimeter(length, width);

	// Display the rectangle's data.
	displayData(length, width, area, perimeter);

	//double perim = getArea(12.05);

	return 0;
}

