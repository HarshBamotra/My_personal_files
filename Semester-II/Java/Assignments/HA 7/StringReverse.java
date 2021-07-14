 //Harsh Bamotra AC-1216
//Program to reverse a string using recursion

import java.util.Scanner;

class Reverse
    {
	public String Rev(String s , int l)
		{
			if(l==1)
				return s.substring(0 , 1);
			else 
				return (s.substring(l-1 , l--) + Rev(s , l));
		}
    }
			
class StringReverse
    {
	public static void main(String[] args)
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter a string ::");
		String s=input.nextLine();
		int len=s.length();
		Reverse obj = new Reverse();
		System.out.print("The reversed string ::" + obj.Rev(s , len));
		
	    }
    }