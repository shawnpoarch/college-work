//Shawn Poarch
//(03/29/2021)
//Circle is a subclass or TwoDimensionShape which is a subclass of Shape. 
// It's purpose is to define how radius of circle is calculated and added to toString

public class Circle extends TwoDimensionalShape
{
    private double radius;  

    public Circle(double radius) //constructor
    {
        this.radius = radius;
    }

    public double getArea()//gets and returns area of Circle
    {
        return Math.PI*(radius*radius);
    }    
   
    public double getRadius()//gets and returns radius 
    {
        return radius;
    }

    public void setRadius(double radius) //sets radius
    {
        this.radius = radius;
    }
    
    public String toString() //to string to main
    {
        return "The shape is a Circle with radius of: "+radius;
    }
}
