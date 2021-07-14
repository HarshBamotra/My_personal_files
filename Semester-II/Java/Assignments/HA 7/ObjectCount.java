 //Harsh Bamotra AC-1216
//Program to count the number of objects created of a class

class Example
    {
	static int count=0;

	{
		count+=1;
	}

	Example()
		{
			System.out.println("I am a class example object !!");
		}
    }

class ObjectCount
    {
	public static void main(String[] args)
	    {
		Example obj1=new Example();
		Example obj2=new Example();
		Example obj3=new Example();
		System.out.println();
		System.out.println("Total number of objects ::" + Example.count);
	    }
    }
	 