 //Harsh Bamotra AC-1216
//Program to print the fibonacci series upto n 

import java.util.Scanner;
class Fibonnaci_HA_4b
    {
	static int fibo(int x)
			{
				if(x==0 || x==1)
					return x;
				else
					return fibo(x-1)+fibo(x-2);
			}
	public static void main(String[] args)
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the number of terms ::");
		int n=input.nextInt();
		System.out.print("Fibonnaci series upto " + n + " ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(fibo(i) + " ");
			}
		
	    }
    }