 //Harsh Bamotra AC-1216
//Program to read characters from console using BufferedReader

import java.io.*;

public class BufferedCharacter
    {
	public static void main(String[] args)
	    throws Exception
		{
			InputStreamReader r = new InputStreamReader(System.in);
			BufferedReader br = new BufferedReader(r);
			
			System.out.print("Enter a character ::");
			char c = (char)br.read();
			System.out.println("The character you entered ::" + c);
		}
    }
			