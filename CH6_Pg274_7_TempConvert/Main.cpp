#include <iostream>
#include <string>
using namespace std;

void getUserInput(int &, float &);
float convertFtoC(float);
float convertCtoF(float);
void displayTemp(float, string);

	int userInput;
	float origTemp = 0;
	float newTemp = 0;

int main()
{
		//pass in address of two parameters so both can be
		//modified by the function
		getUserInput(userInput, origTemp);

		if (userInput == 2)
		{
			//F to C
			newTemp = convertFtoC(origTemp);
			displayTemp(newTemp, "C");
		}
		else if (userInput == 1)
		{
			newTemp = convertCtoF(origTemp);
			displayTemp(newTemp,"F");

		}

		for(int i = 0; i<=20; i++)
		{
			//float x = convertFtoC(i);
			//displayTemp(x);
			displayTemp(convertFtoC(i), "C");
		}
	}

void getUserInput(int &userInput, float &origTemp)
{
	cout << "Select: " << endl;
	cout << "1 ... C to F" << endl;
	cout << "2 ... F to C    : ";
	cin >> userInput;
	cout << "Enter temperature to be converted: ";
	cin >> origTemp;
}

float convertFtoC(float temp)
{
	//calculations will be incorrect without 5.0f/9.0f
	//which forces float division
	return (5.0f / 9.0f) * (temp - 32.0f);
}

float convertCtoF(float temp)
{
	return (temp * (9.0f / 5.0f)) + 32.0f;
}

void displayTemp(float temp, string label)
{
	cout << "***************" << endl;
	cout << "Temperature in " << label << ": " << temp << endl;

}


