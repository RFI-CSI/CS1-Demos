#include <iostream>
using namespace std;

int main()
{
	int length1, width1, length2, width2, area1, area2;

	cout << "Enter the length and width of the first rectangle: ";
	cin >> length1 >> width1;
	cout << "Enter the length and width of the second rectangle: ";
	cin >> length2 >> width2;

	area1 = length1 * width1;
	area2 = length2 * width2;

	cout << "Rectangle 1 Area: " << area1 << endl;
	cout << "Rectangle 2 Area: " << area2 << endl;

	if (area1 > area2)
	{
		cout << "Rectangle 1 is larger than Rectangle 2" << endl;
	}

	if (area1 < area2)
	{
		cout << "Rectangle 2 is larger than Rectangle 1" << endl;
	}

	if (area1 == area2)
	{
		cout << "Rectangle 1 has the same area as Rectangle 2" << endl;
	}
}
