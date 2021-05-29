 //Harsh Bamotra AC-1216
//Program to create a threedim class in package P2

package P2;
import P1.TwoDim;

public class ThreeDim extends TwoDim
    {
        private float z;

        public ThreeDim()		//defining default constructor 
		{
			super();
			z=0;
		}
	
	public ThreeDim(float x , float y , float c)  	//defining parameterized constructor
		{
			super(x , y);
			z=c;
		}
	public String toString()
		{
			return String.format("(" + super.x + "," + super.y + "," + z + ")");
		}
    }