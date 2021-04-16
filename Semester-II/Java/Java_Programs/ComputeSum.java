 //Harsh Bamotra
//Program to find the sum of numbers entered through command line 

class ComputeSum
    {
	public static void main(String[] args)
	    {
		int TotalSum=0;
		for(int i=0 ; i<args.length ; i++)
			{
				TotalSum+=Integer.parseInt(args[i]);
			}
		System.out.println("Sum of all the inputted numbers ::" + TotalSum);
	    }
    }