


#include <iostream>
#include <string>
using namespace std;

const int length = 10;
int main()
{
	bool foundIt = false;
	int beg = 0;
	int end = length;
	int mid = 0;
	string searchTerm = "h";
	int itemLocation = 0;

	string names[length] =
	{ "a","b", "c", "d", "e","f","g", "h", "i", "j" };

	mid = (end - beg)/2;

	while (!foundIt)
	{
		if (names[mid] == searchTerm)
		{
			foundIt = true;
			itemLocation = mid;
		}
		else if (searchTerm < names[mid])
		{
			end = mid - 1;
			mid = (end - beg) / 2 + 1;
		}
		else
		{
			beg = mid + 1;
			mid = (end - beg) / 2 + beg;
		}
	}
	cout << "Location: " << mid << endl;
	int x;
	cin >> x;
}