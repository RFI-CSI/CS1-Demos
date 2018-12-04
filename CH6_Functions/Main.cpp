#include <iostream>
#include <string>
using namespace std;

#include "Functions.h"

int main()
{
	displayName1();
	displayName2("John Smith");
	string name = "Sue Jones";
	displayName2(name);

	int x = addTwo(5, 6);
	cout << x;

	cout << addTwo(7, 8);

	int q = 10;
	int r = 20;
	cout << addTwo(q, r);  
		//q and r are not changed
		//this is a call by value
		//q and r are copied to x and y in addTwo
}

