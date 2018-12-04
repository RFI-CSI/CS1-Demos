//Generate mock data
//https://mockaroo.com/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

//#include "Student.h"

using namespace std;

//Function Declarations
void GetDataKYBD(string[], string[], string[]);
void GetDataFILE(string[][3]);
void DisplayData(string[], string[], string[]);
void GetDataFILE(string[], string[], string[]);
void GetDataFILE(string[][3]);
void SaveData(string[], string[], string[]);
void DeleteStudent(string [], string [], string []);
void DisplayStudent(string, string, string);
void FindStudentSSN(string[], string[], string[]);


//Helper functions
int nextRecord(string[]);
void Banner(string);


//Constants
const int length = 1000;		//original length of data arrays
const int lNameIDX = 0;			//defines columns in 2D array
const int fNameIDX = 1;
const int ssnIDX = 2;

//----------------------------------------------------------------------

//----------------------------------------------------------------------
int main()
{
	//Array Declarations
	string lastNames[length];
	string firstNames[length];
	string SSNs[length];

	char selection = 0;
	while (selection != 'E')
	{
		cout << "Make a selection: " << endl;
		cout << "\t1. Add a new student from KYBD" << endl;
		cout << "\t2. LOAD data from FILE" << endl;
		cout << "\t3. APPEND data from KYBD" << endl;
		cout << "\t4. APPEND data from FILE" << endl;
		cout << "\t5. SAVE data to FILE" << endl;
		cout << "\t6. Load Data 2D" << endl;
		cout << "\t7. FIND student (by SSN)" << endl;
		cout << "\t8. DELETE student (by last name)" << endl;
		cout << "\t9. Display data to CONSOLE" << endl;
		cout << "\tE. EXIT" << endl;
		cout << "Selection:  ";
		cin.get(selection);			
		//cin will not work for getting single characters

		switch (selection)
		{
		case '1':
			GetDataKYBD(lastNames, firstNames, SSNs);
			break;
		case '2':
			GetDataFILE(lastNames, firstNames, SSNs);
			break;
		case '3':
			GetDataKYBD(lastNames, firstNames, SSNs);
			break;
		case '4':
			GetDataFILE(lastNames, firstNames, SSNs);
			break;
		case '5':
			SaveData(lastNames, firstNames, SSNs);
			break;
		case '6':
			break;
		case '7':
			FindStudentSSN(lastNames, firstNames, SSNs);
			break;
		case '8':
			DeleteStudent(lastNames, firstNames, SSNs);
			break;
		case '9':
			DisplayData(lastNames, firstNames, SSNs);
			break;
		case 'E':
			exit(0);
			break;
		default: 
			cout << "\t\tInvalid Selection" << endl;
		}
		cin.ignore();
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void GetDataKYBD(string last[], string first[], string ssn[])
{
	string lName = "";
	string fName = "";
	string SSN = "";
	int count = 0;

	if (nextRecord(last) == -1)
	{
		Banner("The Data Arrays are full. Please contact support");
	}
	else
	{
		count = nextRecord(last);
	}

	while (lName != "Q")
	{
		cout << endl;
		cout << "Please enter student information." << endl;
		cout << "Enter 'Q' for the last name to Quit" << endl;
		cout << "**********************" << endl;
		cout << "**********************" << endl;
		cout << "Enter the student's Last Name: ";
		cin >> lName;
		if (lName == "Q")
			break;
		cout << "Enter the student's First Name: ";
		cin >> fName;
		cout << "Enter the student's SSN: ";
		cin >> SSN;
		last[count] = lName;
		first[count] = fName;
		ssn[count] = SSN;
		count++;
		Banner(std::to_string(nextRecord(last)) + " Student Records Saved");
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void SaveData(string first[], string last[], string ssns[])
{
	string fileName = "";
	ofstream output;

	cout << "Enter file name: ";
	cin >> fileName;
	output.open("C:\\mydev\\" + fileName);
	if (output)
	{
		for (int i = 0; i < nextRecord(last); i++)
		{
			if (last[i] != "-----")
			{
				output << last[i] << endl;
				output << first[i] << endl;
				output << ssns[i] << endl;
			}
		}
		output.close();
		//Banner(std::to_string(count) + " Student Records Saved");
	}
	else
	{
		Banner("Can't open file");
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void GetDataFILE(string last[], string first[], string ssns[])
{
	string fileName = "";
	int count = nextRecord(last);

	ifstream input;
	cout << "Enter file name: ";
	cin >> fileName;

	input.open("C:\\mydev\\" + fileName);
	if (input)
	{
		while (input >> last[count])
		{
			input >> first[count];
			input >> ssns[count];
			count++;
		}
		input.close();

		Banner(std::to_string(nextRecord(last)) + " Student Records Loaded");
	}
	else
	{
		Banner("File not found!");
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void DisplayData(string last[], string first[], string ssn[])
{
	Banner("*** All Students ***");
	for (int i = 0; i < nextRecord(last); i++)
	{
		//cout << "(" << setw(15) << x << ")" << endl;

		cout << "\t" << setw(15) << last[i] << "  " << setw(15) << first[i] << "  " << setw(10) << ssn[i] << endl;
	}
	Banner(to_string(nextRecord(last)) + " Student Records");
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
int nextRecord(string last[])
{
	for (int i = 0; i < length; i++)
	{
		if (last[i] == "")
			return i;
	}
	return -1;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void Banner(string message)
{
	cout << endl << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "----- " << message << " -----" << endl;
	cout << "--------------------------------------------------" << endl << endl;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void DeleteStudent(string last[], string first[], string ssn[])
{
	string searchName;
	char answer;


	cout << "Enter the students last name: ";
	cin >> searchName;

	int count = nextRecord(last);

	for (int i = 0; i < nextRecord(last); i++)
	{
		if (last[i].find(searchName) != string::npos)
		{

			DisplayStudent(last[i], first[i], ssn[i]);
			cout << "Is this the student you want to delete: (Y or N)";
			cin.ignore();
			cin >> answer;
			if (answer == 'Y' || answer == 'y')
			{
				last[i] = "------";
				first[i] = "-----";
				ssn[i] = "-----";
				Banner("Student Deleted");
			}
			else
			{
				Banner("Student NOT deleted");
			}
		}
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void DisplayStudent(string ln, string fn, string ssn)
{
	Banner(ln + "  " +  fn + "  " + ssn);
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void FindStudentSSN(string last[], string first[], string ssn[])
{
	string searchSSN;
	cout << "Enter the students SSN: ";
	cin >> searchSSN;

	for (int i = 0; i < nextRecord(last); i++)
	{
		if (ssn[i].find(searchSSN) != string::npos)
			DisplayStudent(last[i], first[i], ssn[i]);
	}
}

