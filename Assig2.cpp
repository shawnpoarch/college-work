///Shawn Poarch
///(04/7/21)
/// simple calculator that uses only addition and subtraction
/// to perform math calculations like "*,/,%,and ^.
#include <iostream>//libraries header files
using namespace std;//namespace
int main()//begin main block of code
{
	int numb1, numb2, sum{}, oper,sumNumb1,y{};//variable declaration and intialization
	sumNumb1 = sum;
	//initial call for user to input two numbers seperated by a single space
	cout << "Please enter two intergers seperated by a space" << endl;
	cin >> numb1 >> numb2;	
	//asks user to make a selection from a menu displayed
	cout << "Please choose an option:\n1.\tMultiply via addition \n2.\tDivide via subtraction \n3.\tModuls via subtraction \n4.\tBONUS OPTION:  Power via addition \n5.\tExit" << endl;
	cin >> oper;//recieves uers choice

	switch (oper)//takes users choice and stores it into a container that will be able to accessed
	{
	case 1: "*";
		break;
	case 2: "/";
		break;
	case 3: "%";
		break;
	case 4: "^";
		break;
	case 5: "Exit";
		break;
	
	default: "Error, wrong selection!";
			
	}
	//asks user to reenter their numbers
	cout << "Please re-enter two intergers seperated by a space" << endl;
	cin >> numb1 >> numb2;// recieves their input	
	//begins conditional statements deciding which option the user selected and performing
	// the loops nesasary,functions nesasry to answer the math question via either addition
	// or subtraction.
	if (oper == 1)//user selects opt 1
		{
		cout << "The result: " << numb1 << " * " << numb2 << "= ";//output prestatement that will be filled @ end of loop
			for (int j = 0; j < numb2; j++)//takes numb1 and adds it to itself looping till it reaches the # of times = to numb2
			{
				sum = sum + numb1;
			}
		cout<<sum << endl;//adds answe to output statement at the befining of the if statement
		}
	else if (oper == 2)//User select option 2
		{
		cout << "The result: " << numb1 << " / " << numb2 << "= ";//output prestatement that will be filled @ end of loop
			while (numb1 < 1 || numb2 < 1)//statement if any of the number is 0
			{
				cout << "Any number divided by 0 is 0" << endl;
			}
			while (numb1 >= numb2)//while the first number is larger than the 2nd subtract the 2nd from the first looping till it gets to equal
			{
				numb1 = numb1 - numb2;
				sum++;
			}
			cout << sum << endl;//adds answer to output
		}
	else if (oper == 3)//User select option 3
		{
		cout << "The result: " << numb1 << " % " << numb2 << "= ";//output prestatement that will be filled @ end of loop
				while (numb1 >= numb2)//loop that keeps iterating as long as numb1 is larger than or equal to numb2
					numb1-= numb2;		//keeps substracting numb2 and returns the remainder
					cout <<  numb1 << endl;//adds answer to output
		}
	else if (oper == 4)//user select option4
		{
			int answer = numb1;//local variable
			cout << "The result: " << numb1 << " ^ " << numb2 << "= ";//output prestatement that will be filled @ end of loop

			while (numb1 > 0)//Begins loop as long as number 1 is greater than 0
			{
				int answer = numb1;//local variables declared abd unitiated
				int increment = numb1;
				int i, j;
				int b = numb2;

				for (i = 1; i < b; i++)//for loop deternubs how many total iterations
				{
					for (j = 1; j < numb1; j++)//for loop determins how many times numb1 will add itself
					{
						answer += increment;
					}
					increment = answer;

				}
				numb1 = 0;//stops the loop so output only prints once.
				cout << answer << endl;//adds answer to output
			}
		}
	else if (oper == 5)//User selects option 5
		{
		cout << "You have now exited the program, have a nice day";//exit statement
		}		
		return 0;
}//end of main method


