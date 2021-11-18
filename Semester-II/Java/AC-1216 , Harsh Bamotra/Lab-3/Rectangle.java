 //Harsh Bamotra AC-1216
//Program to define a rectangle class 

package P2;
import P1.Shape;

public class Rectangle extends Shape
    {
	public double l , b;

	public Rectangle()
		{
			l=0;
			b=0;
		}
	public Rectangle(double x , double y)
		{
			l=x;
			b=y;
		}
	public void Area()
		{
			super.area=l*b;
			System.out.println("Lenth of the rectangle ::" + l);
			System.out.println("Breath of the rectangle ::" + b);
			System.out.println("Area of the rectangle ::" + super.area);
		}	 
    }