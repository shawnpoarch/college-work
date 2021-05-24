//Shawn Poarch
//Lab 7
//(03/31/21)
#include <iostream>//libraries header files
#include <string>
#include <ctime>

using namespace std;//namespace
int main()// begin main
{//Part 1
	int answer,count;
	count = 0;
	cout << "Pick a starting number please."<<endl;
	cin >> answer;
	cout << answer;
	while (answer != 1)
	{
		if (answer % 2 == 1)// divide by two if even number
		{
			answer = (3 * answer) + 1;// multiply by three and add 1 if it is an odd number
			count++;
		}
		else// if number is still even divide by two
		{
			answer /= 2;
			count++;
		}
		cout << answer << " " << endl;//output the numbers in order till it reaches 1
		
	}
	
	cout << "Total count is " << count << endl;
 //Part 2
	int n;//instance variable
	cout << "Please enter a number"<<endl;
	cin >> n;//calls input from user

	while (n < 1 || n >20)// validates number is between 1 and 20
	{
		cout << "\nPlease enter a number in the range of 1-20"<<endl;
		cin >> n;// asks user for a number between 1 and 20;
	}
	for (int i= 0; i <= n; i++)//first loop that iterates as long as the number is less than or = to inpt
	{
		for (int j = 0; j < i; j++)//2nd loop that keeps the if statement going till it exceeds it limits
		{
			if (i % 2 != 0)//odd number that not equal to 0(conditional)
			{
				if (i < 10)//(conditional)less than 10 add1
				{
					cout << i << " ";
				}
				else// print 0
				{
					cout << 0 << " ";
				}
			}
			
		}
		if (i % 2 != 0)//once exits 2nd for loop it will end
			{
				cout << endl;
			}
	}

	return 0;
}//end main