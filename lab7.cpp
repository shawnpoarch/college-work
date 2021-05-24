//Shawn Poarch
//Lab 7
//(03/24/21)

#include <iostream>//libraries header files
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;//namespace

int main()// begin main
{
	//Random number game that generates a number, program tests to see if it is
	//in bounds of users inputted numbers and tests it with a if statement to see
	//if the random falls within the chosen range. Then a while loop is instituted
	// to allow player the chance to guess the number giving clues higher or lower

	unsigned seed = time(0);// random generator
	srand(seed);
	//instance variables and initializations
	int number1, number2,guess, choice,numbAdd,NumSub,num;
	
	// intial call sequence for input: upper and lower bounds
	cout << "What is the lower bound" << endl;
	cin >> number1;
	cout << "What is the upper bound" << endl;
	cin >> number2;
	seed = rand() % ((number1 - number2) + 1)+number1;// generates random number to be tested

	if (number1 > seed )// if statement testing if the random number is within bounds
	{
		cout << "Please enter new lower bound" << endl;
		cin >> number1 ;		
	}
	else if (number2 < seed)
	{
		cout << "Please enter new upper bound" << endl;
		cin >> number2;
	}
		
	cout << "What do you think the number is: ?";
	cin >> guess;

	while (guess != seed)// begins loop sequence where player can guess number until correct
	{
		if (guess < seed)
		{
			cout << "That guess is too low.\n";
			cout << "What do you think the number is: ?";
			cin >> guess;
		}
		else if (guess > seed)
		{
			cout << "That guess is too high.\n ";
			cout << "What do you think the number is: ?";
				cin>> guess;
		}
	}
	cout << "That is correct!\n ";//winning statement

//Part 2: Menu Practice
	//In this program, we will write a very simple calculator using 
	//a do while loop to continue to allow user to use calculator 
	//making selections from a switch statementtill the use the exit code "3"

	num = 0; //variable initialization
	
	
	do //loop that allow a free pass but makes user make a choice before going further
	{
		cout << "What would you like to do? \n\t1.\t Add to the current value \n\t2.\t Subtract from the current value \n\t3.\t Exit\n";
		cin >> choice;
		
		switch (choice)//gives a choice between three options and an error default
		{
		case 1: cout << "What number would you like to add?  ";			
			cin >> numbAdd;
			num = num + numbAdd;
			break;
		case 2: cout << "What number would you like to Subtract?  ";
			cin >> NumSub;
			num = num - NumSub;
			break;
		case 3: cout << "Exit\n";
			break;
		default: cout << "Error, Please enter option 1,2 or 3";
		}

	} while (choice != 3);//test for the loop
	
	//I added this on just for fun so you can see what the total is after exiting the do while loop.
	cout << "\nThe total of the added and subtracted numbers are:" << num;

	return 0;




}//end of main