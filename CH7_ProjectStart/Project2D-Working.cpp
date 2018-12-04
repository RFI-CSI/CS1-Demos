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
void DisplayData(string [][3]);
void GetDataFILE(string[], string[], string[]);
void GetDataFILE(string[][3]);
void SaveData(string[], string[], string[]);
void DeleteStudent(string[], string[], string[]);
void DisplayStudent(string, string, string);
void FindStudentSSN(string[], string[], string[]);
void BubbleSort(string [][3]);


//Helper functions
int nextRecord(string[]);
int nextRecord(string[][3]);
void Banner(string);
void swap2D(string [][3], int , int );


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

	//define 2D (length X 3) array
	string students[length][3]; 

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
		cout << "\tS. Sort data by last name" << endl;
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
			//This method loads student info into a 3-1D arrays
			GetDataFILE(lastNames, firstNames, SSNs);
			break;
		case '5':
			SaveData(lastNames, firstNames, SSNs);
			break;
		case '6':
			//This method loads student info into a single 2D Array
			GetDataFILE(students);
			break;
		case '7':
			FindStudentSSN(lastNames, firstNames, SSNs);
			break;
		case '8':
			DeleteStudent(lastNames, firstNames, SSNs);
			break;
		case '9':
			// DisplayData(lastNames, firstNames, SSNs);
			DisplayData(students);
			break;
		case 'S':
			BubbleSort(students);
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
	int count = 0;

	cout << "Enter file name: ";
	cin >> fileName;
	output.open("C:\\mydev\\" + fileName);
	if (output)
	{
		for (int i = 0; i < nextRecord(last); i++)
		{
			if (last[i] == "-----" || first[i] == "-----" || ssns[i] == "-----")
			{
				//do nothing
			}
			else
			{
				count++;
				output << last[i] << endl;
				output << first[i] << endl;
				output << ssns[i] << endl;
			}
		}

		output.close();
		Banner(std::to_string(count) + " Student Records Saved");
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
void GetDataFILE(string students[][3])
{
	string fileName = "";
	int count = 0;

	ifstream input;
	cout << "Enter file name: ";
	cin >> fileName;

	input.open("C:\\mydev\\" + fileName);
	if (input)
	{
		while (input >> students[count][lNameIDX])
		{
			input >> students[count][fNameIDX];
			input >> students[count][ssnIDX];
			count++;
		}
		input.close();

		Banner(std::to_string(nextRecord(students)) + " Student Records Loaded");
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
void DisplayData(string students[][3])
{
	Banner("*** All Students ***");
	for (int i = 0; i < nextRecord(students); i++)
	{
		//cout << "(" << setw(15) << x << ")" << endl;

		cout << "\t" << setw(15) << students[i][lNameIDX] << "  " << setw(15) << students[i][fNameIDX] << "  " << setw(10) << students[i][ssnIDX] << endl;
	}
	Banner(to_string(nextRecord(students)) + " Student Records");
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
int nextRecord(string students[][3])
{
	for (int i = 0; i < length; i++)
	{
		if (students[i][lNameIDX] == "")
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
	Banner(ln + "  " + fn + "  " + ssn);
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void FindStudentSSN(string last[], string first[], string ssn[])
{
	string searchSSN;
	cout << "Enter the students SSN: ";
	cin >> searchSSN;
	bool foundIt = false;

	for (int i = 0; i < nextRecord(last); i++)
	{
		if (ssn[i].find(searchSSN) != string::npos)
		{
			foundIt = true;
			DisplayStudent(last[i], first[i], ssn[i]);
		}
	}

	if (foundIt != true)
		cout << "Student not found" << endl;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void BubbleSort(string students[][3])
{
	for (int i = 0; i < nextRecord(students) - 1; i++)
	{
		for (int j = 0; j < nextRecord(students) - 1; j++)
		{
			if (students[j][lNameIDX] > students[j + 1][lNameIDX])
				swap2D(students, j, j + 1);
		}
	}

	Banner("Records Sorted by last name");

}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void swap2D(string arr[][3], int indxA, int indxB)
{
	//Step 1  -- Save first item to temp location
	string temp1 = arr[indxA][0];
	string temp2 = arr[indxA][1];
	string temp3 = arr[indxA][2];

	//Step 2  -- Move second item into first item
	arr[indxA][0] = arr[indxB][0];
	arr[indxA][1] = arr[indxB][1];
	arr[indxA][2] = arr[indxB][2];

	//Step 3  -- Move temp item into second item
	arr[indxB][0] = temp1;
	arr[indxB][1] = temp2;
	arr[indxB][2] = temp3;
}
