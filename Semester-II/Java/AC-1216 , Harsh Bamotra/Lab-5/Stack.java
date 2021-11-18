 //Harsh Bamotra AC-1216
//Program to implement stack 

import java.util.Scanner;

class EStack
    {
	int top=-1;
	int arr[]= new int[5];

	public void push(int e)
		{
			try
				{
					if(top==4)
						{
							throw new Exception();
						}	
					arr[++top]=e;
					System.out.println("Element " + e + " pushed in the stack.");
				}
			catch(Exception ex)
				{
					System.out.println("Overflow : Unable to push , stack is full !!");
				}
		}
	
	public void pop()
		{
			try
				{
					if(top==-1)
						{
							throw new Exception();
						}
					System.out.println(arr[top--] + " is poped from the stack.");
				}
			catch(Exception ex)
				{
					System.out.println("Underflow : Unable to pop , stack is empty !!");
				}
		}

	public void peek()
		{
			try
				{
					if(top==-1)
						{
							throw new Exception();
						}
					System.out.println("Element at the top of the stack ::" + arr[top]);
				}
			catch(Exception ex)
				{
					System.out.println("Underflow : Nothing to display , stack is empty !!");
				}
		}

	public void display()
		{
			try
				{
					if(top==-1)
						{
							throw new Exception();
						}
					System.out.println(arr[top] + "<- top");
					for(int i=top-1 ; i>-1 ; i--)
						{
							System.out.println(arr[i]);
						}
				}
			catch(Exception ex)
				{
					System.out.println("Underflow : Nothing to display , stack is empty !!");
				}
		}
    }

public class Stack
    {
	public static void main(String[] args)
	    {
		Scanner input = new Scanner(System.in);
		EStack obj = new EStack();
		String c="y";
		while(c=="Y" || c=="y")
			{
				System.out.println("************** Menu **************");
				System.out.println("1. Push");
				System.out.println("2. Pop");
				System.out.println("3. Peek");
				System.out.println("4. Display");
				System.out.println("5. Exit");
				System.out.println("**********************************");
				System.out.print("Enter your choice ::");
				int ch = input.nextInt();
		
				if(ch==1)
					{
						System.out.print("Enter the element ::");
						int el = input.nextInt(); 
						obj.push(el);
					}
				else if(ch==2)
					{
						obj.pop();
					}
				else if(ch==3)
					{
						obj.peek();
					}
				else if(ch==4)
					{
						System.out.println("Stack ::");
						obj.display();
					}
				else
					{
						System.out.println("Exiting !!");
						break;
					}
				System.out.println();
			}
	    }
    }