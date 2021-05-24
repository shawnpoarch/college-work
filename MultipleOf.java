//*****************
//Shawn Poarch
//(01/28/2021) Homework1
//EX 2.26 pg 65
//Program that determins if one  number is a multiple of another
//

import java.util.Scanner;//calls scanner from library
public class MultipleOf //name of class
{// begins class block
public static void main(String[] args) 
{// main block begins

Scanner input=new Scanner(System.in);//allows for user input
int num1=0;//variable initalization
int num2=0;

System.out.printf("Enter the first number to begin:");
num1=input.nextInt();
System.out.printf("Enter the second number to see if the first is a multiple of the first:");
num2=input.nextInt();

if(number(num1, num2))
{
System.out.printf(num1 + " is definately a multiple of " + num2);
}
else
{
System.out.println(num1 + " definately is not a multiple of " + num2);
}
}
public static boolean number(int number1, int number2)
{
if((number1%number2)==0)
return true;
else
return false;
}
}