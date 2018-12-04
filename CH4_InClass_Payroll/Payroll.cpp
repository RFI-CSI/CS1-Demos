#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int empType = 0;
	float totSalary = 0;
	float hoursWorked = 0;
	float hourlyRate = 0;
	float regPay = 0;
	float otPay = 0;
	const float SSPercent = .06;
	const float fedTax = .18;
	const float retRate = .10;


	cout << "Enter the employee type (S or H): ";
	empType = getchar();

	switch (empType)
	{
	case 'S':
	case 's':
		cout << "Enter employee total weekly salary: ";
		cin >> totSalary;
		break;
	case 'H':
	case 'h':
		cout << "Enter number of hours worked: ";
		cin >> hoursWorked;
		cout << "Enter hourly rate: ";
		cin >> hourlyRate;
		if (hoursWorked > 40)
		{
			float otHours = hoursWorked - 40;
			otPay = otHours * hourlyRate * 1.5;
			regPay = hourlyRate * 40;
			totSalary = regPay + otPay;
		}
		else
		{
			totSalary = hoursWorked * hourlyRate;
		}
	default:
		cout << "Invalid selection" << endl;
	}

	float fedTaxWitholding = totSalary * fedTax;
	float retWithholding = totSalary * retRate;
	float SSWithholding = totSalary * SSPercent;

	cout << setw(8);
	cout << "Total Salary:            $" << setprecision(2) << fixed << totSalary << endl;
	if (otPay > 0)
	{
		cout << "Regular Pay:             $" << setprecision(2) << fixed << regPay << endl;
		cout << "Overtime Pay:            $" << setprecision(2) << fixed << otPay << endl;
	}
	cout << "Federal Tax:             $" << setprecision(2) << fixed << fedTaxWitholding << endl;
	cout << "Retirement Contribution: $" << setprecision(2) << fixed << retWithholding << endl;
	cout << "Social Security:         $ " << setprecision(2) << fixed << SSWithholding << endl;

	float takeHomePay = totSalary - fedTax - retWithholding - SSWithholding;
	cout << "Take Home Pay:           $" << setprecision(2) << fixed << takeHomePay << endl;
}


