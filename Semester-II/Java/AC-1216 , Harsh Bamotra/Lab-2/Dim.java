 //Harsh Bamotra AC-1216
//Program to create a Dim class and importing TwoDim and ThreeDim for P1 and P2 

package P;
import P1.TwoDim;
import P2.ThreeDim;

public class Dim
    {
	public static void main(String[] args)
		{ 
			TwoDim obj1=new TwoDim();             	   //default constructor 
			TwoDim obj2=new TwoDim(2 , 3);	     	  //parameterized constructor
			ThreeDim obj3=new ThreeDim();       	 //default constructor
			ThreeDim obj4=new ThreeDim(2 , 3 , 4);	//parameterized constructor
			
			System.out.println("I am a object of class TwoDim with value ::" + obj1);
			System.out.println("I am a object of class TwoDim with value ::" + obj2);
			System.out.println("I am a object of class ThreeDim with value ::" + obj3);
			System.out.println("I am a object of class ThreeDim with value ::" + obj4);
		}
    }