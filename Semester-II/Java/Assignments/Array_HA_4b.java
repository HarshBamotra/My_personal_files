 //Harsh Bamotra
//Program to calculate the sum and average of an array

import java.util.Scanner;

class Array_HA_4b
    {
	public static void main(String args[])
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the number of elements ::");
		int n=input.nextInt();
		int arr[]=new int[n];
		for(int i=0 ; i<n ; i++)
			{
				System.out.print("Enter the elements at index " + i + " ::");
				arr[i]=input.nextInt();
			}
		int ArraySum=0;
		for(int i=0 ; i<n ; i++)
			{
				ArraySum+=arr[i];
			}
		System.out.print("The array you entered ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(arr[i] + " ");
			}
		System.out.println();
		double ArrayAverage=ArraySum/n;
		System.out.println("The sum of elements of the array ::" + ArraySum);
		System.out.print("The average of the array ::" + ArrayAverage);
	    }
    }
		
		
		