 //Harsh Bamotra
//Program to find the largest and smallest in an array

import java.util.Scanner;

class Array_HA_4c
    {
	public static void main(String args[])
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the number of elements of the array ::");
		int n=input.nextInt();
		int arr[]=new int[n];
		for(int i=0 ; i<n ; i++)
			{
				System.out.print("Enter the elements at index " + i + " ::");
				arr[i]=input.nextInt();
			}
		System.out.print("The array you entered ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(arr[i] + " ");
			}
		System.out.println();
		int large=arr[0] , small=arr[0];
		for(int i=0 ; i<n ; i++)
			{
				if(arr[i]>large)
					{
						large=arr[i];
					}
				if(arr[i]<small)
					{
						small=arr[i];
					}
			}
		System.out.println("The largest element of the array ::" + large);
		System.out.print("The smallest element of the array ::" + small);
	    }
    }
		
	