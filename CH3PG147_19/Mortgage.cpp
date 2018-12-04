// Chapter 3, Programming Challenge 19: Monthly Payments
#include <iostream>
#include <cmath>	// For the pow function
#include <iomanip>
using namespace std;

int main()
{
	// Constants
	const int MONTHS = 12;
	const double PERCENT = 0.01;

	double loanAmount;	// To hold the amount of the loan
	int numberOfPayments;	// To hold the number of payments
	double annualRate;	// To hold the annual interest rate

	// Get the loan amount.
	cout << "Enter the loan amount: ";
	cin >> loanAmount;

	// Get the annual interest rate.
	cout << "Enter the annual interest rate: ";
	cin >> annualRate;

	// Get the number of payments made.
	cout << "Enter the number of payments made: ";
	cin >> numberOfPayments;

	// Calculate the monthly interest rate
	double monthlyRate = annualRate / MONTHS * PERCENT;

	// Calculate the adjusted interest rate for the loan.
	double adjustedRate = pow(1 + monthlyRate, numberOfPayments);

	// Calculate the monthly payment amount.
	double monthlyPayment = (monthlyRate * adjustedRate) / (adjustedRate - 1) * loanAmount;

	// Calculate the total amount paid.
	double amountPaid = monthlyPayment * numberOfPayments;

	// Calculate the interest paid.
	double interestPaid = amountPaid - loanAmount;

	// Display the results.
	cout << fixed << showpoint << setprecision(2)
		<< "\nLoan Amount:          $ " << setw(8) << loanAmount
		<< "\nMonthly Interest Rate:  " << setw(8) << annualRate / MONTHS << "%"
		<< "\nNumber of Payments:     " << setw(8) << numberOfPayments
		<< "\nMonthly Payment:      $ " << setw(8) << monthlyPayment
		<< "\nAmount Paid Back:     $ " << setw(8) << amountPaid
		<< "\nInterest Paid:        $ " << setw(8) << interestPaid
		<< endl << endl;
	return 0;
}