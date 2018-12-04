/* COMMENT

Write a program that calls a function named ModVars. 
This function has a return type of void but is able to change
the value of three variables that are declared in main. 

Main looks like this:

	int main()
	{
		int x = 0;					//declare X in main
		string name = "";			//declare name in main
		float value = 0.0f;			//declare value in main

		ModVars(x, name, value);	//call ModVars

		cout << x << endl;			//Display value of both variables
		cout << name << endl;		//ModVars should have changed them
	}

END COMMENT */













#include <iostream>
#include <string>
using namespace std;

void ModVars(int &, string &, float &);

int main()
{
	int x = 0;
	string name = "";
	float value = 0.0f;

	ModVars(x, name, value);
	
	cout << x << endl;
	cout << name << endl;
	cout << value << endl;
}

void ModVars(int & addrA, string & addrB, float & addrC)
{
	//ModVars would normally not have access to x, name and value 
	//because they are local to Main.
	addrA += 50;
	addrB = "Smith";
	addrC = 10.0f;
}