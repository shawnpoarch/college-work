#include<iostream>
#include<iomanip>

using namespace std;
int main()
{		//part 1
		//program that determins if a number ids evenly divisable by 3or 5 or 3 and 5
	int number;//declares variable

	cout << "Please enter a number." << endl;//statement asking for input
	cin >> number;
	//testing if statements
	if (number % 3 == 0)// divisable by 3
		cout << "Fizz" ;		
	if (number % 5 == 0)// divisable by 5
		cout << "Buzz" ;
	if (number % 3 && 5 == 0)//divisable by 3 and 5
		cout << "FizzBuzz" << endl;
		
	//Part 2
	/* programs that ignore charecters after first initial
	* and allows user to continue to draw in input modify input to set format*/

	char firstName;//variables
	string lastName;
	int birthYear;
	const int currentYear = 2021;
	int age;
	int eligibile;

	cout << "\nPlease enter your first name followed by your last name separated by space:" << endl;
	cin >> firstName;//inputs first name
	cin.ignore(20, ' ');//ignores charecters after first letter only holds char
	cin >> lastName;//inouts last name

	cout << " Please enter the year of your birth" << endl;
	cin >> birthYear;// calls inut for birth year from user

	age = currentYear - birthYear;// sets age to be used in if statements

	cout << "Name:  " << setw(16) << firstName << ". " << lastName << endl;// begins first sets of output statements
	cout << "Age:  " << setw(18) << age << endl;

	//if statements that determin eligiagbility to vote and prints statements dependent on what
	// the user has entered
	if (age >= 18)
		cout << "Eligible to vote: " << setw(7) << "Yes" << endl;
	else if (age < 18)
	{
		eligibile = birthYear + 18;
		cout<<"Eligible to vote : " << setw(7) << "No" << endl;
		cout << "Year to be eligible: " << setw(7) << eligibile << endl;
	}	
	return 0;
}//end of main