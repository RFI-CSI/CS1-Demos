//Generate mock data
//https://mockaroo.com/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int length = 40;
const int fNameIDX = 0;
const int lNameIDX = 1;
const int ssnIDX = 2;

void GetStudents(string[], string[], string[]);			//get student information from kybd into arrays
bool SaveStudents(string [], string [], string []);		//save student information from arrays to file
void EmptyArrays(string[], string[], string[]);			//clear the arrays
bool LoadArrays(string[], string[], string[]);			//load student information into arrays from file
void DisplayArrays(string [], string [], string []);	//display all arrays on console
void FindStudent(string[], string[], string[]);			//find a student using a search of the last name
void DeleteStudent(string[], string[], string[]);		//delete a specified student
void Banner(string);									//data seperation banner
int findLastElement(string[]);

void test_out(string[][3]);

int main()
{
	string lastNames[length];
	string firstNames[length];
	string SSNs[length];

	//2D array
	//string students[length][3] = { { "ivers", "rodney", "123" }, { "smith", "john", "456" } };
	//test_out(students);

	LoadArrays(lastNames, firstNames, SSNs);
	int lastElement = findLastElement(lastNames);
	DisplayArrays(lastNames, firstNames, SSNs);
	FindStudent(lastNames, firstNames, SSNs);
	GetStudents(lastNames, firstNames, SSNs);
	DeleteStudent(lastNames, firstNames, SSNs);
	DisplayArrays(lastNames, firstNames, SSNs);

	SaveStudents(lastNames, firstNames, SSNs);
	EmptyArrays(lastNames, firstNames, SSNs);
}

int findLastElement(string last[])
{
	for (int i = 0; i < length; i++)
	{
		if (last[i] == "")
			return i-1;
	}
	return -1;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
//2D array test function
void test_out(string studs[][3])
{
	Banner("Student Information");
	for (int i = 0; i < length; i++)
	{
		cout << studs[i][fNameIDX] << ", " << studs[i][lNameIDX] << ": " <<studs[i][ssnIDX]<< endl;
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void Banner(string message)
{
	cout << endl << "--------------------------------------------------" << endl;
	cout << "----- " << message << " -----" << endl;
	cout << "--------------------------------------------------" << endl << endl;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void DisplayStudent(string last, string first, string ssn)
{
	Banner("Student Information");
	cout << last << ", " << first << "     SSN: " << ssn << endl;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void FindStudent(string last[], string first[], string ssn[])
{
	string searchName;

	cout << "Enter name to find(last name): ";
	cin >> searchName;
	for (int i = 0; i < length; i++)
	{
		if (last[i].find(searchName) != string::npos) //searches each last name string to see if it contains the search string
		{
			DisplayStudent(last[i], first[i], ssn[i]);
		}
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void DeleteStudent(string last[], string first[], string ssn[])
{
	string searchName;
	char answer;

	cout << "Enter name of student to delete(last name): ";
	cin >> searchName;
	for (int i = 0; i < length; i++)
	{
		if (last[i] == searchName)
		{
			DisplayStudent(last[i], first[i], ssn[i]);
			Banner("Delete this student?<Y or N): ");
			cin.ignore();
			cin.get(answer);
			if (answer == 'Y' || answer == 'y')
			{
			last[i] = "";
			first[i] = "";
			ssn[i] = "";
			Banner("Student Deleted!");
			return;
			}
			else
			{
				Banner("STUDENT NOT DELETED");
			}
		}
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void GetStudents(string last[], string first[], string ssns[])
{
	string lName = "";
	string fName = "";
	string SSN = "";
	int count = 0;
	Banner("Enter Student Information");
	while (lName != "Q")
	{
		cout << "Enter 'Q' for the LAST name to Quit" << endl;
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
		ssns[count] = SSN;
		count++;
	}
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
	bool LoadArrays(string last[], string first[], string ssns[])
	{
		int count = 0;
		string lName;
		string fName;
		string ssn;
		string fileName;
		ifstream input;
		cout << "Enter input file name: ";
		cin >> fileName;
		input.open("C:\\myDev\\" + fileName);
		//cout << errno;
		if (input)
		{
			while (input >>last[count])
			{
				input >> first[count];
				input >> ssns[count];
				count++;
			}
			input.close();
			cout << "DATA HAS BEEN LOADED" << endl;
			return true;
		}
		else
		{
			cout << "File not found!" << endl;
			return false;
		}
	}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
	bool SaveStudents(string last[], string first[], string ssns[])
	{
		string fileName;
		ofstream output;
		cout << "**********************" << endl;
		cout << "Enter output file name: ";
		cin >> fileName;
		output.open("C:\\mydev\\" + fileName);

		if(output)
		{
			for (int i = 0; i < length; i++ )
			{
				output << last[i] << endl;;
				output << first[i] << endl;
				output << ssns[i] << endl;
			}
			output.close();
			cout << "DATA HAS BEEN SAVED" << endl;
			return true;
		}
		else
		{
			cout << "Unable to create the file!" << endl;
			return false;
		}
	}
	//----------------------------------------------------------------------

	//----------------------------------------------------------------------
	void EmptyArrays(string last[], string first[], string ssns[])
	{
		for (int i = 0; i < length; i++)
		{
			last[i] = "";
			first[i] = "";
			ssns[i] = "";
		}
	}
	//----------------------------------------------------------------------

	//----------------------------------------------------------------------
	void DisplayArrays(string last[], string first[], string ssns[])
	{
		for (int i = 0; i < length; i++)
		{
			cout << "*************************************" << endl;
			cout << last[i] << endl;
			cout << first[i] << endl;
			cout << ssns[i] << endl;
		}
	}