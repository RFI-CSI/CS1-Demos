#include <iostream>
#include <string>
using namespace std;

int main()
{
	string myName;
	string names[3];
	int num1[10];
	int num2[10] = { 28, 7, 55, 74, 82, 23, 45, 99, 34, 44 };

	//Write data into array--------------------------------------------
	//cin >> names[0];
	//cin >> names[1];
	//cin >> myName;
	//names[2] = myName;

	//Read data from array--------------------------------------------
	//cout << names[0] << endl;
	//cout << names[1] << endl;
	//string newName;
	//newName = names[2];
	//cout << newName << endl;
	//Write data using loop--------------------------------------------
	for (int j = 0; j < 10; j++)
	{
		num1[j] = j * 10;
	}
	//Read(display) data using loop--------------------------------------------
	for (int i = 0; i < 10; i++)
	{
		cout << i << ": " << num2[i] << endl;
	}
	cout << endl;
	//Calculate Average of array--------------------------------------------
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		total = total + num2[i];
	}
	cout << "Total: " << total << endl;
	cout << "Average: " << total / 10.0f << endl;
	//Find max value in array--------------------------------------------
	int value = 0;
	for (int i = 0; i < 10; i++)
	{
		if (num2[i] > value)
		{
			value = num2[i];
		}
	}
	cout << "Large: " << value << endl;
	//Find min value in array--------------------------------------------
	value = 1000;
	for (int i = 0; i < 10; i++)
	{
		if (num2[i] < value)
		{
			value = num2[i];
		}
	}
	cout << "Small: " << value << endl;
}