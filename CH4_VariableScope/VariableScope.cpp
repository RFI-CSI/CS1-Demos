



#include <iostream>
using namespace std;

int main()
{

	int global = 0;

	if (global <= 0)
	{
		int local = 1;

	}

	if (local == 1)
	{
		int global = 3;
		int anotherLocal = 2;

	}
	
	cout << "Global is: " << global << endl;
}