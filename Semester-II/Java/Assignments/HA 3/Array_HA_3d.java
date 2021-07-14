 //Harsh Bamotra
//Program to search an elements in an array 

import java.util.Scanner;

class Array_HA_4d
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
		System.out.print("The array you entered ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(arr[i] + " ");
			}
		System.out.println();
		System.out.print("Enter the search element ::");
		int search=input.nextInt();
		String message="";
		for(int i=0 ; i<n ; i++)
			{
				if(arr[i]==search)
					{
						message="Element found at index " + i;
						break;
					}
				else
					{
						message="Element not found !!";
					}
			}
		System.out.print(message);
	    }
    }