//^^^^^^^^^^^^^^^^^^^^^^^^^^
//Shawn Poarch
//Complex (03/01/21)
//Constructor Program that performs arithmetic with
//complex number.
//^^^^^^^^^^^^^^^^^^^^^^^^^^
class Complex

{
    private double realNumb;
    private double imNumb; 
    
    Complex()// no-argument constructor  set to zero
    {
        this.realNumb = 0.0;
        this.imNumb = 0.0;
    }  
    
    Complex(double real, double imag)//sets up constructors for real and imaginary numbers
    {
        this.realNumb = real;
        this.imNumb = imag;
    }    
      
    public double getReal()  // Getter for real number
    {
        return this.realNumb;
    }
  
    public double getImaginary() //Getter for imaginary number
    {
        return this.imNumb;
    }  
   
    public Complex add(Complex object) // Sum of the real and imaginary numbers and projects complex object
    {        
        double r = this.realNumb + object.getReal();// real             
        double i = this.imNumb + object.getImaginary();// imaginary    
        return new Complex( r , i ); //  Complex object
    }   

    
    public Complex subtract(Complex object)// Difference between Real and imaginary
    {        
        double r = this.realNumb - object.getReal();// real             
        double i = this.imNumb - object.getImaginary();// imaginary            
        return new Complex( r , i );// Complex object
    }
    
    public Complex multiply(Complex object)// Multiplies Real and Imaginary Numbers
    {
      double r = this.realNumb * object.getReal();//Real
      double i = this.imNumb * object.getImaginary();//Imaginary   
      return new Complex( r , i );
   }  
     
    public String toString()

    {

        return "( " + String.valueOf( this.realNumb ) + " , " + String.valueOf( this.imNumb ) + " )\n";

    }
 }   