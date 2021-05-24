//*****************************************************
//Author: Shawn Poarch
//HW2 Exercise 5.14
// 02/07/2020
//*****************************************************

import java.util.Scanner; //imports scanner

public class Exponent // class

{
 
    public static void main(String args[]) 
    {
      Scanner scan = new Scanner(System.in);  // reads in keyboard input      
      
        double base = 0;    //sets up variables
        int exponent = 0;
        
        System.out.print("Please Enter Base:  "); //scans input for base with prompt
        base= scan.nextInt(); // base number input
        
        System.out.print("Please Enter Exponent:  "); // scans exponent with prompt
        exponent=scan.nextInt(); // exponent input
        
       System.out.print("Your Result is:  ");// prints result
       double result = myPow(base,exponent);
        
        System.out.println(result);
    }
 
    
    public static double myPow(double a, int b) 
    {
        double res = 1;  // for statement that processes the exponent
        for (int i = 0; i < b; i++) 
        {
            res *= a;
        }
        return res;
    }
}