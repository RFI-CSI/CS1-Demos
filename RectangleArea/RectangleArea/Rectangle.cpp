
#include <iostream>	// needed to perform C++ I/O
using namespace std;
#include <string>

int main()
{

	float Height;
	float Width;
	float Area;

	cout << "Enter the height of the rectangle: ";
	cin >> Height;
	cout << "Enter the width of the rectangle:  ";
	cin >> Width;
	Area = Height * Width;

	cout << "*************************************" << endl;
	cout << "The area of the rectangle is: " << Area << endl;
	cout << "*************************************" << endl;

	return 0;
}