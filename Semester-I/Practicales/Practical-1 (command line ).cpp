//program to calculate the sum of first n terms
#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(int argc , char *argv[])

{
    double y=0;
    cout << "Pragram to print the sum upto n terms if the series." << endl;
    for(int i=1 ; i<atoi(argv[1])+1 ; i++)         //taking input from the command line
	{	
		if(i%2==0)
			{
				y-=1/pow(i,i); 
			}
		else                                //calculating the sum upto n terms
			{
				y+=1/pow(i,i);
			}
	}
    
    cout << "The sum upto " << argv[1] << " terms::" << y;      //printing the final result
    return 0;
}
			
			
			
    