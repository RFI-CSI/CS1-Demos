#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x = 123.456789;
	cout << "(" << setw(15) << x << ")" << endl;
	cout << "(" << setw(15) << 12.345 << ")" << endl;

	cout << setprecision(2) << 98765.4321 << endl;
	cout << setprecision(2) << fixed << 98765.4321 << endl;

	cout << setprecision(6) << 123.000 << endl;

	cout << "|" << setw(10) << "Smith" << "|" << endl;
	cout << "|" << left << setw(10) << "Smith" << "|" << endl;
}