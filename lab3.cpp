//Shawn Poarch
//1964102
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Part1
	//A:  What is the numeric value of some alphabetical letter?
	
	char letter;	

	cout << " Please enter a letter in the alphabet:  "<< endl;
	cin >> letter;

	cout << " The numeric value of letter " <<letter<< " is:  "<<static_cast<int>(letter)<< endl;

	//B:Compute sales tax rate: 

	double salesPrice;
	double total;
	double salesTax;
	

	cout << " Please enter the unit price of the item you purchased:  " << endl;
	cin >> salesPrice;

	cout << "The total on your receipt:  " << endl;
	cin >> total;

	salesTax = (total - salesPrice) / salesPrice * 100;

	

	cout << "The total amount charged in taxes are:  "<<salesTax << endl;
	
	//Part 3:Write a segment of code to read the name(one word) of a person, as well as their year of birth.
	//	You must then display the century they were born in

	string name;
	int year;
	int century;

	cout << "Enter the name of a famous person:  " << endl;
	cin >> name;
	cout << "Enter their year of brith:  " << endl;
	cin >> year;
	century = (year / 100) + 1;
	cout << name<<" was born in the "<<century<<" century " << endl;


	

	const int Current_year= 2021;
	string firstName;
	int age;
	int	YOB;
	

	cout << "Please enter your first name : " << endl;
	cin>> firstName;

	cout << "Hi " <<firstName<<" , how old are you?: " << endl;
	cin >> age;

	YOB = Current_year - age;

	cout << "Your information is recorded as: \nName: "<<firstName<<"\nYOB:"<<YOB << endl;
	


	return 0;
}