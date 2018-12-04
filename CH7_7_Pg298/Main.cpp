#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int days;
	cout << "Enter the number of days (>0): ";
	cin >> days;
	while (days <= 0)
	{
		cout << "Enter the number of days (>0): ";
		cin >> days;
	}

	float totalPay = .01;

	setprecision(20);
	for (int i = 1; i <= days; i++)
	{
		totalPay = totalPay * 2;
		cout << "Day " << i << " Total Pay: $" << setw(2) << fixed << totalPay << endl;


		
	}

}
