 //Harsh Bamotra AC-1216
//Program to search an element in an array using binary search

import java.util.Scanner;

class LenearSearch
    {
	public static void main(String[] args)
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the size of the array ::");
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
		System.out.print("Enter the element you want to search ::");
		int s=input.nextInt();
		boolean flag=false;
		int f=0;
		for(int i=0 ; i<n ; i++)
			{
				if(arr[i]==s)
					{
						flag=true;
						f=i;
						break;
					}
			}
		if(flag==true)
			System.out.println("Element found at index " + f);
		else 
			System.out.println("Element not found !!");
		
	    }
    }