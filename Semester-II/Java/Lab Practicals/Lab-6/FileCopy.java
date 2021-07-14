 //Harsh Bamotra AC-1216
//Program to copy the content from one file to another

import java.io.*;
import java.util.Scanner;
	
public class FileCopy
    {
	public static void main(String[] args) throws IOException
	    {
		FileWriter fw = new FileWriter(args[0]);
		File f = new File(args[1]);
		Scanner input = new Scanner(f);
		while(input.hasNextLine())
			{
				String s = input.nextLine();
				fw.write(s);
				fw.write("\n");
			}
		System.out.println("Data Copied sucessfully !!");
		input.close();
		fw.close();
	    }
    }