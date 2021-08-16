 //Harsh Bamotra AC-1216
//Program to define a circle class 

package P3;
import P1.Shape;

public class Circle extends Shape
    {
	public double r;
	
	public Circle()
		{
			r=0;
		}
		
	public Circle(double x)
		{
			r=x;
		}
		
	public void Area()
		{
			super.area=(3.14*r*r);
			System.out.println("Radius of the circle ::" + r);
			System.out.println("Area of the circle ::" + super.area);
		}
    }