/*
Demonstrates the use of the sizeof method and the pow method from the math.h library
This equation calculates the number of available values in an unsigned int

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	auto amount = 100;	//not recommended
	
	//double x = pow(2, 3); //simple use of pow method


	//data sizes on page 44 and 55

	//int byteCount = sizeof(unsigned int);  //get size (# bytes) of an unsigned int (4)
	//int byteCount = sizeof(unsigned long long int);
	int byteCount = sizeof(unsigned short int);
	int bitCount = byteCount * 8;

	double range = pow(2, bitCount); //raise 2 to the power, 32 bits in a 4 byte int

	cout << "The byte count is: " << byteCount << endl;
	cout << "The bit count is: " << bitCount << endl;
	cout.precision(20);
	cout << "The range of values is from 0 to: " << range << endl;

}