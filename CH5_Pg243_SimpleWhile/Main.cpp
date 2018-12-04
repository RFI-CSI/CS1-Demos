#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

int main()
{
	//******************************************************
	////simple while loop

	//int count = 10;
	//while (count > 0)
	//{
	//	cout << "Hello World " << endl;
	//	//cout << "Count = : " << count << endl;
	//	count--;
	//}


	////******************************************************
	////menu using while loop

	//int number = 0;
	//cout << "Enter a number between 1 and 100: ";
	//cin >> number;
	//while (number < 1 || number > 100)
	//{
	//	cout << "ERROR: Enter a number between 1 and 100: ";
	//	cin >> number;
	//}

	//cout << "Thank you! " << endl;

	////******************************************************
	////menu using do-while loop

	//int choice = 0;
	//do
	//{
	//	cout << "1. Apple" << endl;
	//	cout << "2. Orange" << endl;
	//	cout << "3. Exit" << endl;
	//	cout << "Pick one: ";
	//	cin >> choice;
	//	if (choice == 1)
	//		cout << "You selected Apple" << endl;
	//	if (choice == 2)
	//		cout << "You selected Orange" << endl;
	//} while (choice >= 1 && choice <= 2); //be carefule of using wrong logical here ||

	//cout << "Thank You, goodbye!" << endl;

	////******************************************************
	//simple for loop
	//int x = 0;
	//int y = 0;
	//for (int i = 0; i < 1000000; i++)
	//{
	//	cout << i << endl;
	//
	//	cout << i << " : " << i*i << " : " << i*i*i << endl;
	//	x = i * i;
	//	y = i * i * i;

	//}

	//cout << "Done";

	////******************************************************
	////same functionality in while loop

	//int j = 0;
	//while (j < 1000)
	//{
	//	cout << j << " : " << j * j << " : " << j * j * j << endl;
	//	j++;
	//}

	//******************************************************
	//user controlled for loop
	//show squares from min to max values

	//int min = 0;
	//int max = 0;
	//cout << "Calculate squares from Min to Max range" << endl;
	//cout << "Enter MIN and MAX value: ";
	//cin >> min >> max;
	//for (int j = min; j <= max; j--)
	//{
	//	cout << "J = " << j << " : " << j * j << endl;
	//}

	//******************************************************
	//running total

	//long double total = 0;
	//for (int k = 1; k < 10000; k++)
	//{
	//	total = total + k;
	//}

	//cout << "Total = : " << total << endl;


	//******************************************************
	//fold paper 50 times problem

	cout << setprecision(70);

	long double total = .0010000000000;
	cout << "Fold: 0"  <<  " Miles: " << total / 63360 << endl;

	for (int k = 1; k <= 50; k++)
	{
		//total = total * 2;
		total *= 2;
		cout << "Fold: " << k << "   Miles: " << total / 63360 << endl;
	}

	cout << endl << "Inches = : " << total  << endl;

	double feet = total / 12;
	cout << "Feet=:     " << feet <<  endl;

	double miles = feet / 5280;
	cout << "Miles=:    " << miles <<  endl;

	cout << "Round Trips to the Moon: " << miles / (238900 * 2) << endl;
}
