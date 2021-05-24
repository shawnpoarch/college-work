//Shawn Poarch
//(03/29/2021)
//Subclass Cube that inherits directly from ThreeDimensionalShape
//which is a subclass of the superclass of Shape. It's purpose is toget volume and area of cube.
public class Cube extends ThreeDimensionalShape
{
    private double side;

    public Cube(double side) //initializes Cube
    {
        this.side=side;
    }  

    public double getArea()//gets and returns area of cube
    {
        return 6*(side*side);
    }   

    public double getVolume()//gets and returns volume of cube
    {
        return side*(side*side);
    }

    public void setSide(double side)//sets side
    {
        this.side = side;
    }

    public double getSide()//gets and returns side
    {
        return side;
    }

    public String toString()//tostring to main
    {
        return "The shape is a Cube with a side length of: "+side;
    }
}
