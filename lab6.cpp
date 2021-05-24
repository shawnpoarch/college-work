//Shawn Poarch
//Lab 6
//(03/10/21)

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()// begin main
{
	//Part1
	//(instance variables)
	string month;
	int monthNumb, x;
	char op;
	float numb1, numb2;
	//(A)If else  if statements that get how many days are in a given month

	cout << "Please enter the name of the month \n" << endl;
	cin >> month;

	if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") {
		cout << "This month has 31 days \n";
	}
	else if (month == "April" || month == "June" || month == "September" || month == "June" || month == "November") {
		cout << "This month has 30 days \n";
	}
	else if (month == "February") {
		cout << "This month has 28 days \n";
	}
	else {
		cout << "Invalid Entry \n" << endl;
	}
	//(B) program that prompts user for input then checks it with a switch
	// to give the name of the month coresponding to the number entered
	cout << "Please enter the number of the month: \n" << endl;
	cin >> monthNumb;

	switch (monthNumb)
	{
	case 1: cout << "January \n";
		break;
	case 2: cout << "February \n";
		break;
	case 3: cout << "March \n";
		break;
	case 4: cout << "April \n";
		break;
	case 5: cout << "May \n";
		break;
	case 6: cout << "June \n";
		break;
	case 7: cout << "July \n";
		break;
	case 8: cout << "August \n";
		break;
	case 9: cout << "September \n";
		break;
	case 10: cout << "October \n";
		break;
	case 11: cout << "November \n";
		break;
	case 12: cout << "December \n";
		break;
	default: cout << "Invalid entry!!! Please enter month number between 1-12: \n";
	}
	//programs that combines both part a and part b to get the name, month number and days 
	//using both if statements and a switch statement
	//(C)
	cout << "Enter the name of the month \n" << endl;
	cin >> month;
	if (month == "January ")
	{
		x = 1;
	}
	else if (month == "February")
	{
		x = 2;
	}
	else if (month == "March")
	{
		x = 3;
	}
	else if (month == "April")
	{
		x = 4;
	}
	else if (month == "May")
	{
		x = 5;
	}
	else if (month == "June")
	{
		x = 6;
	}
	else if (month == "July")
	{
		x = 7;
	}
	else if (month == "August")
	{
		x = 8;
	}
	else if (month == "September")
	{
		x = 9;
	}
	else if (month == "October")
	{
		x = 10;
	}
	else if (month == "November")
	{
		x = 11;
	}
	else if(month == "December")
	{
		x = 12;
	}
	switch (x)
	{
	case 1:cout << "This month has 31 days in it. \n";
		break;
	case 3:cout << "This month has 31 days in it. \n";
		break;
	case 5:cout << "This month has 31 days in it. \n";
		break;
	case 7:cout << "This month has 31 days in it. \n";
		break;
	case 8:cout << "This month has 31 days in it. \n";
		break;
	case 10:cout << "This month has 31 days in it. \n";
		break;
	case 12: cout << "This month has 31 days in it. \n";
		break;
	case 4:cout << "This month has 30 days in it. \n";
		break;
	case 6:cout << "This month has 30 days in it. \n";
		break;
	case 9:cout << "This month has 30 days in it. \n";
		break;
	case 11: cout << "This month has 30 days in it. \n";
		break;
	case 2: cout << "This month has 28 days in it. \n";
		break;
	default: cout << "Invalid entry!!!";
	}
	//Part 2 calculator that uses +,-,*,/ and exponent^
	cout << "Enter operator either + or - or * or /: ";
	cin >> op;

	cout << "Enter two Numbers: ";
	cin >> numb1 >> numb2;

	switch (op)
	{
	case '+':
		cout << numb1 + numb2;
		break;

	case '-':
		cout << numb1 - numb2;
		break;

	case '*':
		cout << numb1 * numb2;
		break;

	case '/':
		cout << numb1 / numb2;
		break;

	case '^':
		cout << pow(numb1, numb2);
			break;

	default:
		// If the operator is other than +, -, *,^, or /, error message is shown
		cout << "Error! Operator is not correct";
		break;
	}

	return 0;
}//end main