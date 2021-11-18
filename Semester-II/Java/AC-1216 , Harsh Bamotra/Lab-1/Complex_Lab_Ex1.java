 //Harsh Bamotra AC-1216
//Program to make a complex number class and define different methods

import java.util.Scanner;
class Complex
    {
	int x , y;
		
	Complex()
		{
			x=0;
			y=0;
		}

	Complex(int n1 , int n2)           //constructor to intialise members
		{
			x=n1;
			y=n2;
		}
	public void add(Complex n1)		//method to add to complex numbers
		{
			x=x+n1.x;
			y=y+n1.y;
		}
	public void mul(Complex a)		//method to multiply the complex number
		{
			x=(x*a.x)-(y*a.y);
			y=(x*a.y)+(y*a.x);
		}
	public String toString()			//overriding toString method to display the complex number
		{
			return String.format(x + " + i" + y);
		}
    }

class Complex_Lab_Ex1
    {
	public static void main(String[] args)
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the real part ::");
		int n1=input.nextInt();					//taking user's input
		System.out.print("Enter the imaginary part ::");
		int n2=input.nextInt();
		Complex obj=new Complex(n1 , n2);			//creating the class object
		System.out.print("The number you entered ::");
		System.out.println(obj);						//printing the number to the user
		String h="y";
		
		System.out.println("************ Menu ************");
		System.out.println("1. Addition");
		System.out.println("2. Multiplication");			//printing the menu 
		System.out.println("3. Display");
		System.out.println("******************************");
		System.out.print("Enter your choice (1,2 or 3)::");
		int ch=input.nextInt();
		if(ch==1)							//taking the second number and adding them
			{
				System.out.print("Enter the real part to add ::");
				int r=input.nextInt();
				System.out.print("Enter the imaginery part to add ::");
				int i=input.nextInt();
				Complex obj1=new Complex(r,i);
				obj.add(obj1);
				System.out.print("The number after addition ::");
				System.out.println(obj);
			}
		else if(ch==2)							//taking the second number and multipling them
			{
				System.out.print("Enter the real part ::");
				int r=input.nextInt();
				System.out.print("Enter the imaginery part ::");
				int i=input.nextInt();
				Complex obj1=new Complex(r,i);
				obj.mul(obj1);
				System.out.print("The number after multiplication ::");
				System.out.println(obj);
			}
		else if(ch==3)							//printing the complex number
			{
				System.out.print("Complex number ::");
				System.out.println(obj);
			}
		else 
			{							//handling exeption
				System.out.print("Wrong input !!");
			}
	    }
    }
						
	