package P2;
import P1.TwoDim;

public class ThreeDim extends TwoDim
    {
        private float z;

        public ThreeDim()
		{
			super();
			z=0;
		}
	
	public ThreeDim(float x , float y , float c)
		{
			super(x , y);
			z=c;
		}
	public String toString()
		{
			return String.format("(" + super.x + "," + super.y + "," + z + ")");
		}
    }