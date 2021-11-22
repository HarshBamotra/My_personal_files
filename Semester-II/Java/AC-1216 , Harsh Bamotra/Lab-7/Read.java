 //Harsh Bamotra AC-1216
//Program to read lines from a file that start with //

import java.io.*;

public class Read 
    {
	public static void main(String[] args)
	    {
		String s;
		try(BufferedReader b=new BufferedReader(new FileReader("test.txt")))
			{
				while((s=b.readLine())!=null)
					{
						if((s.charAt(0)=='/') && (s.charAt(1)=='/'))
							{
								System.out.println(s.substring(2));
							}
					}
			}
		catch(Exception e)
			{
				System.out.println("File not found !!");
			}
	    }
    }
