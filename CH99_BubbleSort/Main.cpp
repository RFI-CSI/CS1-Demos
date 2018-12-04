#include <iostream>
#include <string>
using namespace std;
void swap1D(string [], int);
void swap2D(string [][3], int);

const int length = 5;

int main()
{
	int lNameCol = 0;
	int fNameCol = 1;
	int SSNCol = 2;

	string students[length][3] = 
	{
		{"ivers", "rodney", "123"},
		{"smith", "john", "456"},
		{"jones", "sue", "789"},
		{"johnson", "jim", "321"},
		{"sales", "scott", "654"}
	};

	string names[length] = { "zachary","ivers", "jones", "smith", "johnson" };

	//string chars[12] = { "z", "q", "b", "w", "a", "c", "x", "y", "d", "m", "r", "o" };
	//===========================================

	//Bubble sorts 1D string arrays
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (names[j] > names[j + 1])
				swap1D(names, j);
		}
	}

	//Bubble sorts 2D string arrays
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (students[j][lNameCol] > students[j + 1][lNameCol])
				swap2D(students, j);
		}
	}
}

//==================================================
//1D string array
void swap1D(string arr[], int indxA)
{
	string temp = arr[indxA];
	arr[indxA] = arr[indxA + 1];
	arr[indxA+1] = temp;
}
//==================================================
//2D string array
void swap2D(string arr[][3], int indxA)
{
	//Step 1
	string temp1 = arr[indxA][0];
	string temp2 = arr[indxA][1];
	string temp3 = arr[indxA][2];

	//Step 2
	arr[indxA][0] = arr[indxA+1][0];
	arr[indxA][1] = arr[indxA + 1][1];
	arr[indxA][2] = arr[indxA + 1][2];

	//Step 3
	arr[indxA + 1][0] = temp1;
	arr[indxA + 1][1] = temp2;
	arr[indxA + 1][2] = temp3;
}
