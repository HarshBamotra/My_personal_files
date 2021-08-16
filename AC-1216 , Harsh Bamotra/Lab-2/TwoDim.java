 //Harsh Bamotra AC-1216
//Program to create a twodim class in package P1

package P1;

public class TwoDim
    {
	public float x , y;
	
	public TwoDim()			//defining default constructor 
		{
			x=0;
			y=0;
		}

	public TwoDim(float a , float b)	 //defining parameterized constructor
		{
			x=a;
			y=b;
		}
	
	public String toString()
		{
			return String.format("(" + x + " , " + y + ")");
		}
    }
