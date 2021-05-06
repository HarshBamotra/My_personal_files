package P;
import P1.TwoDim;
import P2.ThreeDim;

public class Dim
    {
	public static void main(String[] args)
		{
			TwoDim obj1=new TwoDim();
			TwoDim obj2=new TwoDim(2 , 3);
			ThreeDim obj3=new ThreeDim();
			ThreeDim obj4=new ThreeDim(2 , 3 , 4);
			
			System.out.println("I am a object of class TwoDim with value ::" + obj1);
			System.out.println("I am a object of class TwoDim with value ::" + obj2);
			System.out.println("I am a object of class ThreeDim with value ::" + obj3);
			System.out.println("I am a object of class ThreeDim with value ::" + obj4);
		}
    }