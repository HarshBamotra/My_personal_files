 //Harsh Bamotra
//Program to sort an array using bubble sort

import java.util.Scanner;

class Array_HA_4e
    {
	public static void main(String args[])
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the number of elements ::");
		int n=input.nextInt();
		int arr[]=new int[n];
		for(int i=0 ; i<n ; i++)
			{
				System.out.print("Enter the element at index " + i + " ::");
				arr[i]=input.nextInt();
			}
		System.out.print("The array you entered ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(arr[i] + " ");
			}
		System.out.println();
		for(int i=0 ; i<n-1 ; i++)
			for(int j=0 ; j<n-i-1 ; j++)
				{
					if(arr[j]>arr[j+1])
						{
							int temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
				}
		System.out.print("The array after sorting ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(arr[i] + " ");
			}
	    }
    }

					