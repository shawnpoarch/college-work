/////////////////////////////////////////////////
//Shawn Poarch
//01/28/2021
//Program that determins wether a number is 
// +, or -, or 0
//////////////////////////////////////////////////
import java.util.Scanner;//iibrary that calls scanner
public class PosNegZero
{
   public static void main (String[] args)
   {
   Scanner scan = new Scanner(System.in);
   
   int num1;
   int num2;
   int num3;
   int num4;
   int num5;
   int positive=0;
   int negative=0;
   int zero=0;
   
   System.out.printf("Enter your first number:  ");   
   num1=scan.nextInt(); 
   if (num1<0)
       negative = negative + 1;
    if (num1>0)
       positive = positive + 1;
    if (num1==0)
        zero = zero +1; 

   System.out.printf("Enter your second number:  ");
   num2=scan.nextInt(); 
    if (num2<0)
       negative = negative + 1;
    if (num2>0)
       positive = positive + 1;
    if (num2==0)
        zero = zero +1; 

   System.out.printf("Enter your third number:  ");
   num3=scan.nextInt(); 
    if (num3<0)
       negative = negative + 1;
    if (num3>0)
       positive = positive + 1;
    if (num3==0)
        zero = zero +1;

   System.out.printf("Enter your fourth number:  ");
   num4=scan.nextInt();   
    if (num4<0)
       negative = negative + 1;
    if (num4>0)
       positive = positive + 1;
    if (num4==0)
        zero = zero +1;

   System.out.printf("Enter your fifth number:  ");
   num5=scan.nextInt(); 
    if (num5<0)
       negative = negative + 1;
    if (num5>0)
       positive = positive + 1;
    if (num5==0)
        zero = zero +1;  
    System.out.printf("Number of negative #'s: " + negative + "\nThe # of 0's: " + zero + "\nThe number of positive #'s: " + positive);
    }
 }                   