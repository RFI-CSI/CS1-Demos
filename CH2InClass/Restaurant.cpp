/*
Calculate total check values for a restaurant bill
Includes Tax, Tip and Total
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double origAmount = 0;
	double taxAmount = 0;
	double taxPercent = 0;
	double tipAmount = 0;
	double tipPercent = 0;
	double totalAmount = 0;

	cout << "Welcome to Check Calculator" << endl;

	cout << "Enter the original check amount: ";
	cin >> origAmount;

	cout << "Enter the tax as a percentage: ";
	cin >> taxPercent;

	cout << "Enter the tip as a percentage: ";
	cin >> tipPercent;

	taxAmount = origAmount * (taxPercent / 100);
	tipAmount = origAmount * (tipPercent / 100);
	totalAmount = origAmount + taxAmount + tipAmount;

	cout << "*******************************************" << endl;
	cout << "*******************************************" << endl;

	cout << setprecision(2) << fixed;  //defines precision for $$ and no E numbers
	cout << "Original Check Amount: $" << origAmount << endl;
	cout << "Tax Amount(" << taxPercent << "%): $" << taxAmount << endl;
	cout << "Tip Amount(" << tipPercent << "%): $" << tipAmount << endl;
	cout << "Total Amount: $" << totalAmount << endl;

	cout << "*******************************************" << endl;
	cout << "*******************************************" << endl;

}