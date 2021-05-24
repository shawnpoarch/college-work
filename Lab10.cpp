//Shawn Poarch
//(04/14/21)
//Program that matches a users input with a searcj criterion
// utilizing inFile 

#include <iostream>//libraries header files
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;//namespace
int main()
{
	//instance variables
	string studentName,professorName, dummy, major,gpa,status,uMajor,sMajor,sGPA,sStatus,uGPA,uStatus;
	int option;
	int count = 0;
	int students = 0;
	
	ifstream inFile;//calling in and out files
	ofstream outFile;
	bool found = false;// boolean variable as a tester
	// opens files
	inFile.open("studentInfo.txt");//REPLACE WITH FILE NAME.TXT
	outFile.open("outPut.txt");//REPLACE WITH FILE NAME.TXT
	//file tester
	if (!inFile)
	{
		cout << "Bad File" << endl;
	}
	else cout << "Good File" << endl;
	// initial greeting and call for input from user
	cout << "Thanks for using our site. \nPlease enter your name : " << endl;
	cin >> professorName;
	cout << "Greetings Dr. " << professorName << "\nPlease choose your projects criteria: \n1.\tMajor \n2.\tGPA \n3.\tGrade Status" << endl;
	cin >> option;
	// switch statement that gets user to user options
	switch (option)
	{
	case 1: //first option comparing user input to "majors" from a student file
		cout << "Please enter you major:  :";
		cin >> uMajor;
		found = false;
		while (inFile >> studentName)
		{
			inFile >> sMajor;
			if (sMajor == uMajor)// if the major matches print name, major, gpa and status
			{
				inFile >> sGPA >> sStatus;// draws gpa from file and status
				found = true;
				cout <<		studentName<<"\t" << sMajor << "\t" << sGPA << "\t" << sStatus << endl;// output to screen
				outFile << studentName << "\t" << sMajor << "\t" << sGPA << "\t" << sStatus << endl;//output to file
				students++;//counts the student
			}
			else
			{
				getline(inFile, dummy);//moves to the next line
			}			
		}
		if (students == 0)// if there are no matches
		{
			cout << "Unfortunately no student in our record meets this criteria" << endl;
		}
		else cout << "There are" << students << "matching that criteria" << endl;//tells how many students match the criteria
		break;
	case 2: //GPA OPTION
		cout << "Please enter you GPA:  :";
		cin >> uGPA;
		found = false;
		while (inFile >> studentName)
		{
			inFile >> sGPA;
			if (sGPA == uGPA)// if the GPA matches print name, major, gpa and status
			{
				inFile >> sStatus;
				found = true;
				cout << studentName<<"\t" << sMajor << "\t" << sGPA << "\t" << sStatus << endl;// output to screen
				outFile << studentName << "\t" << sMajor << "\t" << sGPA << "\t" << sStatus << endl;//output to file
				students++;
			}
			else
			{
				getline(inFile, dummy);//moves to the next line
			}
			
		}
		if (students == 0)// if there are no matches
		{
			cout << "Unfortunately no student in our record meets this criteria" << endl;
		}
		else cout << "There are" << students << "matching that criteria" << endl;//tells how many students match the criteria
		break;
				
	case 3: 
		cout << "Please enter you Status(GRAD or UNDERGRAD): ";
		cin >> uStatus;
		found = false;
		while (inFile >> studentName)
		{
			inFile >> sStatus;
			if (sStatus == uStatus)// if the Status matches print name, major, gpa and status
			{
				inFile >> sStatus;
				found = true;
				cout << studentName<<"\t" << sMajor << "\t" << sGPA << "\t" << sStatus << endl;// output to screen
				outFile << studentName<<"\t" << sMajor<<"\t" << sGPA<<"\t" << sStatus<<endl;//output to file
				students++;
			}
			else
			{
				getline(inFile, dummy);//moves to the next line
			}
			
		}
		if (students == 0)// if there are no matches
		{
			cout << "Unfortunately no student in our record meets this criteria" << endl;
		}
		else cout << "There are" << students << "matching that criteria" << endl;//tells how many students match the criteria
		break;
	default:"Wrong Selection";
	}
	
	
	inFile.close();
	
	return 0;
}