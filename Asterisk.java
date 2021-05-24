//*******************************************************************
//* Author: Shawn Poarch
//* HW2 Exercise 4.16
//* 02/02/2021
//*******************************************************************


import java.util.Scanner; //imports scanner

//class name
public class Asterisk 
{ 
    public static void main(String[] args)
    { 

    Asterisk asterisk = new Asterisk(); 
    int star[]=new int[5];       //set up variables
    
    
    Scanner input = new Scanner (System.in); //reads in input
    
    
    for(int i=0;i<5;i++)  // for loop that prompts user to choose a number
    {
        System.out.print("Please, Enter a number between 1 - 30 "); 
        star[i]=input.nextInt();
    }
    
    
    input.close();  // terminates input 


    asterisk.asterisk(star);
    } 
    void asterisk(int star[])   //implements stars to corespond with the input
    { 
        for(int a = 0; a <  star.length; a++)
        {
            for(int b=1;b<=star[a];b++)
            {
                System.out.print("*"); 
            }
            System.out.println(); 
        } 
    } 

} 