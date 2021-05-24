//Shawn Poarch
//Lab 5
//(03/3/21)
//Program that gives choices whether someone is a student, staff or student staff memeber
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name;
	//variables used
	int status;
	int age,level;
	const int qualAge = 16;
	cout << "what is your full name:  \n";
	getline(cin, name);
//begining statements prompting user for input
	cout << "Hi " << name << endl;
	cout << "We have some questions for you:  \n\n";
	cout << "Please choose your status:  \n";
	cout << "\t1.\tStudent\n\t2.\tStaff\n";
	cin >> status;
	//testing statements to qualify the person for the right team
	if (status == 1) //determins what student team they fall into
	{ 
		cout << "Please enter your age:  \n";
		cin >> age;
	
		if (age <= qualAge)		//16 or younger = red team	
		{
		cout << "You qualify for Team Red.\n";
		}
		else if (age > qualAge)  //older than 16 = yellow
		{
			cout << "You qualify for team Yellow.\n";
		}
	}
	else if (status == 2)  //determins which level of staff
	{
		cout << "Please enter your status:  \n";
		cin >> level;
		if (level == 1)  //student staff =  yellow
		{
			cout << " You qualify for team Yellow \n";
		}
		else if (level == 2)  //staff member = blue
		{
			cout << "You qualify for team Blue \n";
		}
	}//end main if statement



	return 0;
}//end of main method