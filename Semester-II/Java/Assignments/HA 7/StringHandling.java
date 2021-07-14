 //Harsh Bamotra AC-1216
//Program to demonstrate different string handling methods

import java.util.Scanner;

public class StringHandling
    {
	public static void main(String[] args)
	    {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter a string ::");
		String s = input.nextLine();
		
		char ce='Y';
		while(ce=='y' || ce=='Y')
			{
				System.out.println("***************** Menu *****************");
				System.out.println("1. Length  of string");
				System.out.println("2. Concatinate the string");
				System.out.println("3. Compare the string ");
				System.out.println("4. Get the index of a substring");
				System.out.println("5. Replace the string ");
				System.out.println("6. Create a substring ");
				System.out.println("7. To get the character by index");
				System.out.println("8. Exit  ");
				System.out.println("****************************************");

				System.out.print("Enter your choice ::");
				int ch=input.nextInt();
			
				if(ch==1)
					{
						System.out.println("The length of string ::" + s.length());
					}
				else if(ch==2)
					{
						System.out.print("Enter the string to concatinate ::");
						input.nextLine();
						String c=input.nextLine();
						
						System.out.println("The string after concatination ::" + s.concat(c));
					}
				else if(ch==3)
					{
						System.out.print("Enter the string to compare ::");
						input.nextLine();
						String c=input.nextLine();
						System.out.println("String difference ::" + s.compareTo(c));
					}
				else if(ch==4)
					{
						System.out.print("Enter the string ::");
						input.nextLine();
						String c=input.nextLine();
						System.out.println("String found at index ::" + s.indexOf(c));
					}
				else if(ch==5)
					{
						System.out.print("Enter the character you want to replace ::");
						char c1=input.next().charAt(0);
						System.out.print("Enter the character to replace ::");                 
						char c2=input.next().charAt(0);
						System.out.println("String difference ::" + s.replace(c1 , c2));
					}
				else if(ch==6)
					{
						System.out.print("Enter the index to create a substring ::");
						int c=input.nextInt();
						System.out.println("Substring created ::" + s.substring(c));
					}
				else if(ch==7)
					{
						System.out.print("Enter the index ::");
						int c=input.nextInt();
						System.out.println("Character at index " + c + " ::" + s.charAt(c));
					}
				else
					break;
				System.out.print("Do you want to continue (Y/N) ::");
				ce=input.next().charAt(0);
				System.out.println();
			}	
	    }
    }