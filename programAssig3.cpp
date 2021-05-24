///Shawn Poarch
///Programing assignment III
/// 04/21/21
/// Program that has two parts.
/// Part 1 is a simple math program that
/// calls addition, subtraction,division,
/// and multiplication into the main to be
/// displayed along with a counter to see 
/// how many times a function was called.
/// Part 2 is simular only using the quadrant 
/// funtion being called into main.

//header files used
#include <fstream>
#include <string>
#include <iostream>
using namespace std;//namespace
//protocols to be called in main
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
void statReport(int, int, int, int);
string whichQuadrant(int ,int );

int main()//begin main
{
    int num1, num2, add = 0, Subtract = 0, Multiply = 0, Divide = 0;
    int x, y, quad1 = 0, quad2 = 0, quad3 = 0, quad4 = 0;
    char operand, point;
    // open file
    ifstream file;
    file.open("instructions.txt");
    cout << " \n\n\t\t\t\t\tPart I" << endl;
    if (!file)//file test to see if the file name is good
    {
        cout << "Bad File" << endl;// if file fails
    }else cout << "Good File" << endl;// if file opens

    while (file >> operand >> num1 >> num2)// reads elements from file 
    {     
        //checks to see if the operation is addition and then retrieves it's function and prints output and counts
        if (operand == '+')
        {
            add++;//counting operation
            cout << num1 << " " << operand << " " << num2 << " = " << addition(num1, num2) << endl;
        }
        //checks to see if the operation is subtraction and then retrieves it's function and prints output and counts
        else if (operand == '-')
        {
            Subtract++;
            cout << num1 << " " << operand << " " << num2 << " = " << subtraction(num1, num2) << endl;
        }
        //checks to see if the operation is multiplication and then retrieves it's function and prints output and counts
        else if (operand == '*')
        {
            Multiply++;
            cout << num1 << " " << operand << " " << num2 << " = " << multiplication(num1, num2) << endl;
        }
        //checks to see if the operation is division and then retrieves it's function, retrieves it's function and 
        //checks to see if the denominator is 0, then outputs and counts
        else
        {
            if (num2 == 0)//is denominator = to zero?
                cout << "Cannot divide by zero.\n";
            else
            {
                Divide++;
                cout << num1 << " " << operand << " " << num2 << " = " << division(num1, num2) << endl;
            }
        }        

        if (file.eof())//once the file reaches it end it breaks out 
            break;
    }
    statReport(add, Subtract, Multiply, Divide);//prints the number of time each finction was called.
    file.close();//closes the file
    //begin part 2
    cout << " \n\n\t\t\t\t\tPart II"<<endl;        

    file.open("pointsInfo.txt");// open file
    if (!file)//file test
    {
        cout << "Bad File" << endl;//if file doesnt open
    }else cout << "Good File" << endl;//file opens

    while (file >> point >> x >> y)// read from file
    {         
        string q = whichQuadrant(x, y);//finds what quadrant the points from the file falls into
        // increase counter for appropriate counter
        if (q == "QuadrantI")
            quad1++;//points counter for quad 1
        else if (q == "QuadrantII")
            quad2++;//points counter for quad 2
        else if (q == "QuadrantIII")
            quad3++;// points counter for quad 3
        else
            quad4++;//points counter for quad 4
        cout << "Point " << point << " is in " << q << endl;// output statement of what quadrant the point isin
        
        if (file.eof())// check if end of file is reached
            break;
    }//out put that shows how many points fell in which quadrant
    cout << "The number of points in QuadrantI is " << quad1 << endl;
    cout << "The number of points in QuadrantII is " << quad2 << endl;
    cout << "The number of points in QuadrantIII is " << quad3 << endl;
    cout << "The number of points in QuadrantIV is " << quad4 << endl;
    file.close();    
    return 0;
}//end of main 
//simple addition function to be called in main()
int addition(int a, int b)
{
    return a + b;
}
//simple subtraction function to be called in main()
int subtraction(int b, int c)
{
        return b - c;
}
//simple multiplication function to be called in main()
int multiplication(int d, int e)
{
    return d * e;
}
//simple division function to be called in main()
int division(int f, int g)
{
    return f / g;
}
// method to display statistics when called in main()

void statReport(int add, int sub, int mult, int div)
{
    cout << "The # of additions: " << add << endl;
    cout << "The # of subtractions: " << sub << endl;
    cout << "The # of multiplications: " << mult << endl;
    cout << "The # of division: " << div << endl;
}
//function that determins what quadrant a set of points from file fall in
//that will be called in main()
string whichQuadrant(int x, int y)
{
    if (x < 0 && y < 0)
        return "QuadrantIII";
    if (x > 0 && y > 0)
        return "QuadrantI";
    if (x < 0 && y > 0)
        return "QuadrantII";
    return "QuadrantIV";
}