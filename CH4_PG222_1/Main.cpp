#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Enter two numbers: ";
	cin >> x >> y;

	if (x > y)
	{
		//TRUE
		cout << "X > Y" << endl;
	}
	else
	{
		if (x == y)
		{
			cout << "X = Y" << endl;
		}
		else
		{
			cout << "Y > X" << endl;
		}
	}

}
