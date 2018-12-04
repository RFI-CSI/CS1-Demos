
//Modify this program to use a Switch statement instead of the multiple If statements.
//Make sure that the program responds correctly no matter what the user enters.

#include <iostream>
using namespace std;

int main()
{

	int selection;
	cout << "Which formula do you want to see?" << endl << endl;
	cout << "1. Area of a Circle" << endl;
	cout << "2. Area of a Rectangle" << endl;
	cout << "3. Area of a Cylinder" << endl;
	cout << "4. None of them! " << endl;
	cout << "Selection: ";
	cin >> selection;

	switch (selection)
	{
	case 1 :
		cout << "Pi times radius squared" << endl;
		break;
	case 2: 
		cout << "Length times Width" << endl;
		break;
	case 3:
		cout << "Pi times radius squared times height" << endl;
		break;
	case 4:
		cout << "Exiting Program" << endl;
		break;
	default: 
		cout << "Invalid Selection" << endl;
	}

	//****************
	//original code
	//****************
	//if (selection == 1)
	//	cout << "Pi times radius squared" << endl;

	//if (selection == 2)
	//	cout << "Length times Width" << endl;

	//if (selection == 3)
	//	cout << "Pi times radius squared times height" << endl;

	//if (selection == 4)
	//	cout << "Exiting Program" << endl;
	//else
	//	cout << "Invalid Selection" << endl;

	return 0;
}