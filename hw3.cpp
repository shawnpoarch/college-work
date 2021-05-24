///Shawn Poarch
///05/05/2021
///lab 13
/// Last homework
/// 
#include<iostream> //libraries
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
#include <fstream>
using namespace std;
//prototypes of functions used
void displayNamesTickets(string[], int[], int);
void findInfoOnName(string[], int[], int, string);
int computeTotalTickets(int[], int);
void applyTicketCap(int[], int);

int main()//main method
{
	ifstream infile;
	ofstream outfile;
	infile.open("names.txt");
	if (!infile)//file test to see if the file name is good
	{
		cout << "Bad File" << endl;// if file fails
	}
	else cout << "Good File" << endl;// if file opens

	const int size = 10;// variables used
	string name[size], person;
	int ticketNum[size];
	int high = 10, low = 0;

	unsigned seed = time(0); //initializes random generators
	srand(seed);

	for (int i = 0; i < size; i++) //loop that reads the file and reads each line and assigns a random
	{							//number to the index	
		infile >> name[i];
		ticketNum[i]=(rand() % (high-low))+low;//random number from 0-10			
	}
	
	//calls each of the functions
	applyTicketCap(ticketNum, size);
	displayNamesTickets(name, ticketNum,size);
	
	findInfoOnName(name, ticketNum, size, person);
	computeTotalTickets(ticketNum, size);
	infile.close();//closes the file
	return 0;
}//end of main
//funtion that displays the students name and ticket numbers
void displayNamesTickets(string studentName[], int ticket[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << studentName[i]<< "  " ;
		cout << ticket[i] << endl;
	}
}
//function that determins if a name is in the array and outputs either whats in the file or a default statement
void findInfoOnName(string stuname[], int ticketN[], int size, string name)
{

	cout << "Please enter a name:  " << endl;
	cin >> name;
		for (int i = 0; i < size; i++)
		{
			if (name == stuname[i])
			{
			cout << stuname[i] << "  ";
			cout << ticketN[i] << endl;
			}
			else
			{
				cout << name << " is not listed" << endl;
			}
		}

	}
//function that computes the total number of tickets
int computeTotalTickets(int tickets[], int size)
{
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + tickets[i];	
	}
	cout << " The total number of ticket ordered was:" << sum << endl;
	return sum;
}
//function that applies a cap to the total number of tickets that  student can have.
void applyTicketCap(int tickets[], int size)
{
	int max = 7;
	for (int i = 0; i < size; i++)
	{
		if (tickets[i] > max)
			tickets[i] = max;	
	}
}