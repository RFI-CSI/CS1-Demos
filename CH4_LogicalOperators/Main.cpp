

#include <iostream>
using namespace std;

int main()
{
	//This program is broken. Make sure that it correctly detects
	//all the following conditions.
	//Both numbers are correct
	//Both numbers are correct in reverse order
	//Either number is correct
	//Either number is correct in either order
	//Both numbers are incorrect
	//Both numbers are incorrect in either order
	int x = 10;
	int y = 20;
	int guess1;
	int guess2;

	cout << "Enter two numbers: ";
	cin >> guess1 >> guess2;


	//Broken Version
	if (guess1 == x && guess2 == y)
		cout << "You guessed both numbers" << endl;

	if (guess1 != x && guess2 != y)
		cout << "You guessed neither number" << endl;

	if (guess1 == x || guess2 == y)
		cout << "You guessed one of the numbers" << endl;


	//Solution
	//if ((guess1 == x && guess2 == y ) || (guess1 == y && guess2 == x))
	//	cout << "You guessed both numbers" << endl;
	//
	//else if(guess1 == x || guess2 == y || guess1 == y || guess2 == x)
	//	cout << "You guessed one of the numbers" << endl;

	//else if ((guess1 != x && guess1 != y) && (guess2 != y && guess1 != x))
	//	cout << "You guessed neither number" << endl;
	
}
