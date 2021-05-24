//Shawn Poarch
//04/28/21
//
#include <fstream>//header files
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;//namespace
//prototypes
void changeTheSign(int&);
void moveThePoint(int&, int, int&, int);
void to24H(int&, string);
void accelerate(int&, int);

int main()//main 
{
	ifstream infile;
	
	infile.open("operations.txt");
	if (!infile)//file test to see if the file name is good
	{
		cout << "Bad File" << endl;// if file fails
	}
	else cout << "Good File" << endl;// if file opens

	int   pointx, changex, pointy, changey, time, orriginal, faster ;
	char symbol ;
	string dummy, newtime;
	int num1=0,num2=0,num3=0, num4=0;

	while (infile >> symbol)
	{
		switch (symbol) 
		{
		case '!': //this function changes the sign of the parameter 
			infile >> num1;
			cout << num1;
			changeTheSign(num1);
			cout << " is now changed to " << num1<<endl;
			break;
		case '>'://The function adds the second argument to the first, and adds the fourth argument to the third one.
			infile >> pointx >> changex >> pointy >> changey;
			cout << "Point (" << pointx << "," << pointy << ")is now (";
			moveThePoint(pointx, changex, pointy, changey);
			cout << pointx << "," << pointy << ")" << endl;
			break;
		case '#'://changes time from 12 to 24 hr
			infile >> time >> newtime;
			cout << "the time in 24hr format is";
			to24H(time, newtime);
			cout << time << ":00" << endl;
			break;
		case '@' ://increments speed
			cin >>orriginal>>faster;	
			cout << "The speed raised from  " << orriginal << " to";
			accelerate(orriginal,faster);			
			cout << faster<< endl;
			break;
		default: cout << "invalid command." << endl;
			//getline(infile, dummy);
		}
	}
	return 0;
}//end main

//This function changes the sign of the parameter it receives as a reference variable, leaving the argument 
//passed in its place permanently modified.Negative to positiveand vise versa.Zeros stay zeros.
void changeTheSign(int& x)
{
	x = x * (-1);
}

//This function receives the parameters defined as follows in given order: 
void moveThePoint(int& a, int change, int& b, int change1)
{
	a = a + change;
	b = b + change1;
}

//
//Since the firstand the third argument are reference variables, the modifications will be permanent.
void to24H(int& hr, string delta)
{

	if (delta == "am")
	{
		hr = hr;
	}
	else if (delta == "pm")
		hr = hr + 12;
}

//This function checks the second argument which will be either "am" or "pm". And changes the value 
//in the first argument accordingly.If the second argument is "pm" and the first is 7, this means that the
//first argument needs to be added to 12 to get to 19. Again this change will be permanent as the first
//parameter is a reference variable.As you notice, there will be times that we do not need to change the
//time, for example if the time is 5 and the second parameter is "am".We do not need to change the time.
void accelerate(int & speed, int increase)
{
	speed += increase;
}
//The function adds the second argument to the first, and adds the fourth argument to the third one. 
//Since the firstand the third argument are reference variables, the modifications will be permanent.
