#include <iostream>
#include <string>
using namespace std;

#include "Functions.h"


int main()
{
	int x, y;
	string myName;
	cin >> myName;
	cin >> x, y;
	int z;
	displayNameAge(myName, 45);
	displayNameAge("Rodney Ivers", 36);
	z = addTwo(5, 6);
	cout << addTwo(x, y);
}


