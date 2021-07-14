 //Harsh Bamotra AC-1216
//Program to find prime numbers upto n

import java.util.Scanner;

class PrimeNumbers
    {
	public static void main(String[] args)
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the number of terms ::");
		int n=input.nextInt();
		boolean flag=true;
		System.out.print("Prime numbers upto " + n + " ::");
		for(int j=2 ; j<n ; j++)
			{
				for(int i=2 ; i<j ; i++)
		    			{
						if(j%i==0)
							{
								flag=false;
								break;
							}
					}
				if(flag==true)
					System.out.print(j + " ");
				flag=true;		
			}
	    }
    }
				