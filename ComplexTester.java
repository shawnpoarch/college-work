//>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Shawn Poarch
//Complex Tester(03/01/21)
//Driver program that tests Complex
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>

import java.util.*;
public class ComplexTester
{ 
   public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in); //calls input from user the following statements are requesting
        //userto input numbers             

        System.out.print("Enter real part of the first set of numbers: ");
        double r1 = scan.nextDouble();       
        System.out.print("Enter imaginary part of the first set of numbers: ");
        double i1 = scan.nextDouble();
      

        // Creates objects and fills them with user input

        Complex object1 = new Complex( r1, i1 );
       

        System.out.print("Enter real part of the second set of numbers: ");
        double r2 = scan.nextDouble();     
        System.out.print("Enter imaginary part of the second set of numbers: ");
        double i2 = scan.nextDouble();       
       
        Complex object2 = new Complex( r2, i2 );       

        System.out.print("First Set of Numbers : " + object1);
        System.out.print("Second Set of Numbers : " + object2);   
            
        //arithmatic functions 
        Complex object3 = object1.add(object2);//adds
        Complex object4 = object1.subtract(object2);//subtracts
        Complex object5 = object1.multiply(object2);//multiplys       

        System.out.print("Addition of the complex numbers is: " + object3);  //output statements
        System.out.print("Subtraction of the complex numbers is: " + object4);        
        System.out.print("Multiplication of the complex numbers is: " + object5);


    }//end of main 

}