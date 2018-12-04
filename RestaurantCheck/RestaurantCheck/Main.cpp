#include <iostream>
using namespace std;

int main()
{
	//Data Definition (declare variables)
	float origAmount = 0;
	float taxRate = 0;
	float tipRate = 0;
	float taxAmount = 0;
	float tipAmount = 0;
	//float totalAmount = 0;

	//Acquire the Data
	cout << "Enter the original check amount: ";
	cin >> origAmount;

	cout << "Enter the Tax Rate as a percentage: ";
	cin >> taxRate;

	cout << "Enter the Tip Rate as a percentage: ";
	cin >> tipRate;

	//Make calculations
	taxAmount = origAmount * (taxRate / 100);
	tipAmount = origAmount * (tipRate / 100);
	//float totalAmount = origAmount + taxAmount + tipAmount;

	//Display the results
	cout << endl << endl;
	cout << "****************************************************" << endl;
	cout << "The original check amount is: $" << origAmount << endl;
	cout << "The tax amount is: $" << taxAmount << " (" << taxRate << "%)" << endl;
	cout << "The tip amount is: $" << tipAmount << " (" << tipRate << "%)" << endl;
	cout << "The total amount is: $" << origAmount + taxAmount + tipAmount << endl;
	cout << "****************************************************" << endl;




}