 //Harsh Bamotra AC-1216
//Program to calculate the sum of n natural numbers using recursion

import java.util.Scanner;

class SumRecur
    {
	public int Sum(int n)
		{
			if(n<1)
				return n;
			else
				return (n+Sum(n-1));
		}
    }

class RecursionSum
    {
	public static void main(String[] args)
	    {	
		Scanner input=new Scanner(System.in); 
		System.out.print("Enter a number ::");
		int n=input.nextInt();
		while(n<1)
			{
				System.out.println(n + " is not a natural number !!!");
				System.out.print("Please enter a valid natural number ::");
				n=input.nextInt();
				System.out.println();
			}
		SumRecur obj=new SumRecur();
		System.out.println("The sum of numbers upto " + n + " ::" + obj.Sum(n));
		
	    }
    }