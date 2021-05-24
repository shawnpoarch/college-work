//Shawn Poarch
//Commission Calculator
//(02/02/2021)
//*************************************
///
///Program that figures Salary + Comission of sales
///person.
///
import java.util.Scanner; //Imports scanner from library

public class Commission  //declares Commission class
{
   public static void main(String[] args) 
   {// begins class definitions and initialization
      double value;
      int product;
      double earn= 0.0;
      double sales=0.0;
      double totalPay=0.0;
      double salary =200.00;
      Scanner x = new Scanner(System.in);


      System.out.print("Enter 1, 2, 3, 4 or \"-1 to quit\": ");
      product = x.nextInt();//prompts user to input sales

      while(product != -1)//initializes while loop while using switch statement to execute choice
      //variables
         {
            switch(product)
               {
                  case 1: 
                       System.out.print("Enter how many sold: ");
                       int quantity= x.nextInt();
                       sales = quantity * 239.99;
                       break;
                  case 2:
                       System.out.print("Enter how many sold: ");
                       quantity= x.nextInt();
                       sales = quantity * 129.75;
                       break;
                  case 3:
                       System.out.print("Enter how many sold: ");
                       quantity= x.nextInt();
                       sales= quantity * 99.95;
                       break;
                  case 4:
                       System.out.print("Enter how many sold: ");
                       quantity= x.nextInt();
                       sales= quantity * 350.89;
                       break;
                       default: System.out.print("error");

               }// ends switch begins if statement calculating commission and adding salary
         if (sales>=1)
               {
                  earn= sales * 0.09;
                  totalPay = earn + salary;
                  System.out.print("With 9% commission your total pay is : $"+totalPay);

               }

          else //default statements
            System.out.println("Total pay: $"+totalPay);
            System.out.println("");
            System.out.print("Choose Item 1, 2, 3, 4 or \"-1 to quit\": ");
            product = x.nextInt();


         }
   }
}
