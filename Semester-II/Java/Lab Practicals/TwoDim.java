package P1;

public class TwoDim
    {
	public float x , y;
	
	public TwoDim()
		{
			x=0;
			y=0;
		}

	public TwoDim(float a , float b)
		{
			x=a;
			y=b;
		}
	
	public String toString()
		{
			return String.format("(" + x + " , " + y + ")");
		}
    }
