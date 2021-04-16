 //Harsh Bamotra
//Program to read and print n elements from an array

import java.util.Scanner; 
class Array_HA_4a
    {
	public static void main(String args[])
	    {
		Scanner input=new Scanner(System.in);
		System.out.print("Enter the number of elements in the array ::");
		int n=input.nextInt();
		int arr[]=new int[n];
		for(int i=0 ; i<n ; i++)
			{
				System.out.print("Enter the array elements at index " + i + " ::");
				arr[i]=input.nextInt();
			}
		System.out.print("The array you entered ::");
		for(int i=0 ; i<n ; i++)
			{
				System.out.print(arr[i] + " ");
			}
		}
    }
		
		
		