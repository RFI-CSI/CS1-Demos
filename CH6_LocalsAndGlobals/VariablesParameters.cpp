
#include <iostream>
using namespace std;

//Function ProtoType(Declarations)
void myFunction1();
int myFunction2();
int myFunction3(int = 20, int=30);
void myFunction4(int &);
int Square(int);
float Square(float);
void myExitFunction();


//Global Variables
int X = 32;
int Y = 64;

int main()
{
	//myFunction1();

	//int q = 0;
	//q=myFunction2();
	//q=myFunction2();
	//cout << "Q: " << q << endl;

	//int r = myFunction3(50, 40);
	//cout << "R: " << r << endl;

	//int s = 10;
	//myFunction4(s);
	//cout << "S: " << s << endl;
	//use &s to see value in memory window

	//cout << Square(5) << endl;
	//cout << Square(5.0f) << endl;

	myExitFunction();
}
//--------------------------------------------------------------------
void myFunction1()
//illustrates the use of local and global variables with the same name
//--------------------------------------------------------------------
{
	int X = 2;
	int Y = 3;
	int Z;
	Z = X + Y;
	cout << Z << endl;

}
//--------------------------------------------------------------------
int myFunction2()
//illustrates the use of static variables
//--------------------------------------------------------------------
{
	int X = 10;
	X++;

	static int callCount = 0;  //this line is not executed at run time
	callCount++;

	return callCount;
}

//--------------------------------------------------------------------
int myFunction3(int x, int y)
//illustrates the use of default parameters
//--------------------------------------------------------------------
{
	return x * y;
}

//--------------------------------------------------------------------
void myFunction4(int &var1)
//illustrates the use of reference parameters
//use &var1 in memory window to see it in memory
//--------------------------------------------------------------------
{
	var1 += 50;
}

//--------------------------------------------------------------------
int Square(int x)
//an overloaded function
//--------------------------------------------------------------------
{
	cout << "Called int Square" << endl;
	return x * x;
}

//--------------------------------------------------------------------
float Square(float x)
//an overloaded function
//--------------------------------------------------------------------
{
	cout << "Called float Square" << endl;
	return x * x;
}

//--------------------------------------------------------------------
void myExitFunction()
//--------------------------------------------------------------------
{
	exit(99);  //this could indicate some error state
}