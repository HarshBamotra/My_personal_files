 //Harsh Bamotra AC-1216
//Program to demonstrate exception handling 

import java.util.Scanner;

class UnderAge extends Exception
    {
		int age;
		public UnderAge(int a)
			{
				age=a;
			}
		public String getMessage()
			{
				return "UnderAge ::" + age;
			}
    }


public class exceptionDemo
    {
		public static void test(int age)
			{
				try 
					{
						if(age<18)
							{
								throw new UnderAge(age);
							}
						else
							System.out.println("Your are is " + age);
					} 

				catch (Exception e) 
					{
						System.out.println(e.getMessage());
					}
			}

			public static void main(String[] args)
				{
					Scanner input=new Scanner(System.in);
					System.out.print("Enter your age ::");
					int a=input.nextInt();
					test(a);
				}
    }

