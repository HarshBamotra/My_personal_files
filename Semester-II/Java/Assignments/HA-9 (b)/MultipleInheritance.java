 //Harsh Bamotra AC-1216
//Program to demonstrate multiple inheritance

import java.util.Scanner;

interface imac
    {
	default void features()
		{
			System.out.println(">> Big screen ");
			System.out.println(">> Great proccesing power ");
		}
    }

interface iphone
    {
	default void features()
		{
			 System.out.println(">> Portable");
			 System.out.println(">> Touch screen ");
		}
    }

class ipad implements imac, iphone
    {
	public void features()
		{
			imac.super.features();
			iphone.super.features();
		}
    }

class MultipleInheritance
    {
    	public static void main(String[] args)
	    {
		ipad obj = new ipad();

		System.out.println("Features of ipad ::");
		obj.features();
	    }
    }
		