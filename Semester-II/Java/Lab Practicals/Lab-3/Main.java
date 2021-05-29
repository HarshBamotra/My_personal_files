 //Harsh Bamotra AC-1216
//Program to calculate the area of different shapes

import java.util.Scanner;
import P1.Shape;
import P2.Rectangle;
import P3.Circle;
	
class Main
    {
	public static void main(String[] args)
	    {
		Scanner input=new Scanner(System.in);
		String ch="y";
		while(ch.equals("y") || ch.equals("Y"))
			{
				System.out.println();
				System.out.println("**************** Menu ****************");
				System.out.println("1. Calculate the area of rectangle");
				System.out.println("2. Calculate the area of circle");
				System.out.println("**************************************");
				System.out.print("Enter your choice (1 or 2 )::");
				int choice=input.nextInt();
				if(choice==1)
					{
						System.out.println();
						System.out.print("Enter the lenth ::");
						double len=input.nextInt();
						System.out.print("Enter the breath ::");
						double bre=input.nextInt();
						Rectangle obj1=new Rectangle(len , bre);
						System.out.println();
						obj1.Area();	
					}
				else if(choice==2)
					{
						System.out.println();
						System.out.print("Enter the radius of the circle ::");
						double ra=input.nextInt();
						Circle obj2=new Circle(ra);
						System.out.println();
						obj2.Area();
					}		
				else
					{
						System.out.println("Please enter a valid input !!");
					}
				System.out.print("Do you want to continue (Y/N)::");
				ch=input.next();
			}					
	    }
    }