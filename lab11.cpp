///Shawn Poarch
//04/21/21

#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;//namespace

int average(int, int, int);
int maxScore(int, int, int);
int minScore(int, int, int);
bool isAllAs(int);
int isListed(string, string);

int main()//begin main method
{
	string fullName, newUser, file;

	int score1, score2, score3, sum, savg;
	bool aStudent = false;
	cout << "Please enter your full name: " << endl;
	getline(cin, fullName);
	cout << "Pease enter your 3 scores: " << endl;
	cin >> score1 >> score2 >> score3;
	cout << "Hi " << fullName << ",\nHere's a report on yout grades:" << endl;
	cout << "Your average score is:\t " << average(score1,score2,score3) << endl;
	cout << " Your max score is:\t " << maxScore( score1,score2,score3) << endl;
	cout << " Your min score is:\t " << minScore(score1,score2,score3) << endl;
	cout<< isAllAs(aStudent)<<endl;
	if (isListed(newUser, file) >= 1)
		cout << newUser << ": You are on the list, and your ticket number is :" << file << endl;
	else 
		cout << "Sorry" << newUser << ", We could not find you on the list" << endl;


	return 0;
}// end main method

int average(int a, int b, int c)
{
	int x=0, y=0, z=0, sum, avg;
	sum = x + y + z;
	avg = sum / 3;
	cout << average;
	return avg;
}

int maxScore(int a, int b, int c)
{
	int d = 0, e = 0, f = 0, max;
	if (d > e && d > f) {
		max = d;
	}
	else if (e > f) 
	{
		max = e;
	}
	else {
		max = f;
	}

	cout << max << endl;
	return max;

}

int minScore(int d, int e, int f)
{
	int g = 0, h = 0, i = 0, min;
	if (g < h && g < i) {
		min = d;
	}
	else if (h < i) {
		min = h;
	}
	else {
		min = i;
	}

	cout << min << endl;
	return min;
}
bool isAllAs(int)
{
	int num1 = 0, num2 = 0, num3 = 0, result = 0;
	bool aStudent = false;
	if (num1 >= 90 && num2 >= 90 && num3 >= 90)
	{
		aStudent = true;
		cout << "You havemade all A's." << endl;
	}
	else
		aStudent = false;
	cout << "You have not made all A's." << endl;
	return aStudent;
}
//part 2
int isListed(string userName, string fileName)
{
	string uName, name, dummy;
	ifstream infile(fileName);
	int ticketnum;
	bool found = false;
	cout << "Please enter your name:" << endl;
	cin >> uName;
	cout << "Please enter a file name(.txt):" << endl;
	cin >> fileName;
	while (infile >> name)
	{
		if (uName != name)
			found = false;
		ticketnum = -1;
		getline(infile, dummy);
		
				
		
		return ticketnum;
	}

	infile.close();
}
