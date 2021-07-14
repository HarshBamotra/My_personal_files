 //Harsh Bamotra AC-1216
//Program to read characters from console using BufferedReader

import java.io.*;

public class BufferedString
    {
	public static void main(String[] args)
	   throws Exception
		{	
		    {
			InputStreamReader r = new InputStreamReader(System.in);
			BufferedReader br = new BufferedReader(r);
			System.out.print("Enter your name ::");
			String name = br.readLine();
			System.out.println(name + " is great !!");
		    }
		}
    }