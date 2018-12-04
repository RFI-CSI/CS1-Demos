


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outputFile;
	//outputFile.open("C:\\myDev\\MyData.txt");
	//outputFile << "Hello World" << endl;
	//outputFile.close();


	//ifstream inputFile;
	//inputFile.open("C:\\myDev\\MyData.txt");
	//string name;
	//inputFile >> name; //only reads up until first whitespace
	//cout << name << endl;
	//inputFile.close();


	//int j = 0;
	//outputFile.open("C:\\myDev\\MyData.txt");
	//while (j < 1000)
	//{
	//	outputFile << j << " : " << j * j << " : " << j * j * j << endl;
	//	j++;
	//}
	//outputFile.close();


	//ifstream numbers;
	//numbers.open("C:\\myDev\\numbers.txt");
	//int num1;
	//int num2;
	//int num3;

	//numbers >> num1;
	//numbers >> num2;
	//numbers >> num3;

	//cout << num1 + num2 + num3 << endl;

	//numbers.close();


	ifstream randoms;
	float count = 0;
	float total = 0;
	int number = 0;
	float average = 0;

	randoms.open("C:\\myDev\\random.txt");
	while (randoms >> number)
	{
		total += number;
		count++;
		cout << "Number: " << number << "  Total: " << total << endl;
	}

	average = total / count;

	cout << endl << "Count: " << count << endl;
	cout << "Total: " << total << endl;
	cout << "Average: " << average << endl;

	randoms.close();

}