// This program displays a menu and asks the user to make a
// selection. An if/else if statement determines which item
// the user has chosen.
#include <iostream>
#include <iomanip>
using namespace std;

int main2()
{
	//int choice;       // To hold a menu choice
	char choice;
	int months;       // To hold the number of months
	double charges;   // To hold the monthly charges

	// Constants for membership rates
	const double ADULT = 40.0,
		SENIOR = 30.0,
		CHILD = 20.0;

	//// Constants for menu choices
	//const int ADULT_CHOICE = 'A',
	//	CHILD_CHOICE = 'C',
	//	SENIOR_CHOICE = 'S',
	//	QUIT_CHOICE = 'Q';

	// Display the menu and get a choice.
	cout << "\t\tHealth Club Membership Menu\n\n";
	cout << "A. Standard Adult Membership\n";
	cout << "C. Child Membership\n";
	cout << "S. Senior Citizen Membership\n";
	cout << "Q. Quit the Program\n\n";
	cout << "Enter your choice: ";
	//cin >> choice;
    cin.get(choice);

	// Set the numeric ouput formatting.
	cout << fixed << showpoint << setprecision(2);

	// Respond to the user's menu selection.
	if (choice == 'A')
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * ADULT;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 'C')
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * CHILD;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 'S')
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * SENIOR;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 'Q')
	{
		cout << "Program ending.\n";
	}
	else
	{
		cout << "The valid choices are A, C, S or Q. Run the\n";
		cout << "program again and select one of those.\n";
	}
	return 0;
}